from os import popen
import sys


class Automata:
    def __init__(self, language = set(['0', '1'])):
        self.states = set()
        self.startstate = None
        self.finalstates = []
        self.transitions = dict()
        self.language = language

    @staticmethod
    def eps():
        return "ε"

    def setStartState(self, state):
        self.startstate = state
        self.states.add(state)

    def addFinalStates(self, state):
        if isinstance(state, int):
            state = [state]
        for s in state:
            if s not in self.finalstates:
                self.finalstates.append(s)

    def addTransition(self, fromstate, tostate, inp):
        if isinstance(inp, str):
            inp = set([inp])
        self.states.add(fromstate)
        self.states.add(tostate)
        if fromstate in self.transitions:
            if tostate in self.transitions[fromstate]:
                self.transitions[fromstate][tostate] = self.transitions[fromstate][tostate].union(inp)
            else:
                self.transitions[fromstate][tostate] = inp
        else:
            self.transitions[fromstate] = {tostate : inp}

    def addTransition_dict(self, transitions):
        for fromstate, tostates in transitions.items():
            for state in tostates:
                self.addTransition(fromstate, state, tostates[state])

    def getTransitions(self, state, key):
        if isinstance(state, int):
            state = [state]
        trstates = set()
        for st in state:
            if st in self.transitions:
                for tns in self.transitions[st]:
                    if key in self.transitions[st][tns]:
                        trstates.add(tns)
        return trstates

    def getEClose(self, findstate):
        allstates = set()
        states = set([findstate])
        while len(states)!= 0:
            state = states.pop()
            allstates.add(state)
            if state in self.transitions:
                for tns in self.transitions[state]:
                    if Automata.eps() in self.transitions[state][tns] and tns not in allstates:
                        states.add(tns)
        return allstates

    def display(self):
        print("states:", self.states)
        print("start state: ", self.startstate)
        print("final states:", self.finalstates)
        print("transitions:")
        for fromstate, tostates in self.transitions.items():
            for state in tostates:
                for char in tostates[state]:
                    print ("  ",fromstate, "->", state, "on '"+char+"'",)
            print

    # def getPrintText(self):
    #     text = "language: {" + ", ".join(self.language) + "}\n"
    #     text += "states: {" + ", ".join(map(str,self.states)) + "}\n"
    #     text += "start state: " + str(self.startstate) + "\n"
    #     text += "final states: {" + ", ".join(map(str,self.finalstates)) + "}\n"
    #     text += "transitions:\n"
    #     linecount = 5
    #     for fromstate, tostates in self.transitions.items():
    #         for state in tostates:
    #             for char in tostates[state]:
    #                 text += "    " + str(fromstate) + " -> " + str(state) + " on '" + char + "'\n"
    #                 linecount +=1
    #     return [text, linecount]

    def newBuildFromNumber(self, startnum):
        translations = {}
        for i in list(self.states):
            translations[i] = startnum
            startnum += 1
        rebuild = Automata(self.language)
        rebuild.setStartState(translations[self.startstate])
        rebuild.addFinalStates(translations[self.finalstates[0]])
        for fromstate, tostates in self.transitions.items():
            for state in tostates:
                rebuild.addTransition(translations[fromstate], translations[state], tostates[state])
        return [rebuild, startnum]

    # def newBuildFromEquivalentStates(self, equivalent, pos):
    #     rebuild = Automata(self.language)
    #     for fromstate, tostates in self.transitions.items():
    #         for state in tostates:
    #             rebuild.addTransition(pos[fromstate], pos[state], tostates[state])
    #     rebuild.setStartState(pos[self.startstate])
    #     for s in self.finalstates:
    #         rebuild.addFinalStates(pos[s])
    #     return rebuild

    # def getDotFile(self):
    #     dotFile = "digraph DFA {\nrankdir=LR\n"
    #     if len(self.states) != 0:
    #         dotFile += "root=s1\nstart [shape=point]\nstart->s%d\n" % self.startstate
    #         for state in self.states:
    #             if state in self.finalstates:
    #                 dotFile += "s%d [shape=doublecircle]\n" % state
    #             else:
    #                 dotFile += "s%d [shape=circle]\n" % state
    #         for fromstate, tostates in self.transitions.items():
    #             for state in tostates:
    #                 for char in tostates[state]:
    #                     dotFile += 's%d->s%d [label="%s"]\n' % (fromstate, state, char)
    #     dotFile += "}"
    #     return dotFile


class BuildAutomata:
    """class for building e-nfa basic structures"""

    @staticmethod
    def basicSkeleton(inp):
        state1 = 1
        state2 = 2
        basic = Automata()
        basic.setStartState(state1)
        basic.addFinalStates(state2)
        basic.addTransition(1, 2, inp)
        return basic

    @staticmethod
    def pipeSkeleton(a, b):
        [a, m1] = a.newBuildFromNumber(2)
        [b, m2] = b.newBuildFromNumber(m1)
        state1 = 1
        state2 = m2
        pipe = Automata()
        pipe.setStartState(state1)
        pipe.addFinalStates(state2)
        pipe.addTransition(pipe.startstate, a.startstate, Automata.eps())
        pipe.addTransition(pipe.startstate, b.startstate, Automata.eps())
        pipe.addTransition(a.finalstates[0], pipe.finalstates[0], Automata.eps())
        pipe.addTransition(b.finalstates[0], pipe.finalstates[0], Automata.eps())
        pipe.addTransition_dict(a.transitions)
        pipe.addTransition_dict(b.transitions)
        return pipe

    @staticmethod
    def dotSkeleton(a, b):
        [a, m1] = a.newBuildFromNumber(1)
        [b, m2] = b.newBuildFromNumber(m1)
        state1 = 1
        state2 = m2-1
        dot = Automata()
        dot.setStartState(state1)
        dot.addFinalStates(state2)
        dot.addTransition(a.finalstates[0], b.startstate, Automata.eps())
        dot.addTransition_dict(a.transitions)
        dot.addTransition_dict(b.transitions)
        return dot

    @staticmethod
    def starSkeleton(a):
        [a, m1] = a.newBuildFromNumber(2)
        state1 = 1
        state2 = m1
        star = Automata()
        star.setStartState(state1)
        star.addFinalStates(state2)
        star.addTransition(star.startstate, a.startstate, Automata.eps())
        star.addTransition(star.startstate, star.finalstates[0], Automata.eps())
        star.addTransition(a.finalstates[0], star.finalstates[0], Automata.eps())
        star.addTransition(a.finalstates[0], a.startstate, Automata.eps())
        star.addTransition_dict(a.transitions)
        return star

    def plusSkeleton(a):
        [a, m1] = a.newBuildFromNumber(2)
        state1 = 1
        state2 = m1
        plus = Automata()
        plus.setStartState(state1)
        plus.addFinalStates(state2)
        plus.addTransition(plus.startstate, a.startstate, Automata.eps())

        plus.addTransition(a.finalstates[0], plus.finalstates[0], Automata.eps())
        plus.addTransition(a.finalstates[0], a.startstate, Automata.eps())
        plus.addTransition_dict(a.transitions)
        return plus
    def questionSkeleton(a):
        [a, m1] = a.newBuildFromNumber(2)
        state1 = 1
        state2 = m1
        question = Automata()
        question.setStartState(state1)
        question.addFinalStates(state2)
        question.addTransition(question.startstate, a.startstate, Automata.eps())
        question.addTransition(question.startstate, question.finalstates[0], Automata.eps())
        question.addTransition(a.finalstates[0], question.finalstates[0], Automata.eps())
        question.addTransition_dict(a.transitions)
        return question



class NFAfromRegex:
    def __init__(self, regex):
        self.star = '*'
        self.plus = '╨'
        self.questionmark = '?'
        self.pipe = '|'
        self.dot = '.'
        self.openingBracket = '('
        self.closingBracket = ')'
        self.openingSquareBraces = '['
        self.closingSquareBraces = ']'
        self.operators = [self.pipe, self.dot]
        self.regex = regex
        self.alphabet = [chr(i) for i in range(65,91)]
        self.alphabet.extend([chr(i) for i in range(97,123)])
        self.alphabet.extend([chr(i) for i in range(43,58)])
        self.alphabet.extend([chr(i) for i in range(200,254)])
        self.alphabet.extend(["ε", "@", "♥"])
        self.buildNFA()

    def getNFA(self):
        return self.nfa

    def displayNFA(self):
        self.nfa.display()

    def buildNFA(self):
        language = set()
        self.stack = []
        self.automata = []
        previous = "::e::"
        i = 0
        while i < len(self.regex):
            char = self.regex[i]

            print('Pointing ', i, ' at ',char)
            if char in self.alphabet:
                language.add(char)
                if previous != self.dot and (previous in self.alphabet or previous in [self.closingBracket, self.star, self.plus, self.questionmark]):
                    self.addOperatorToStack(self.dot)
                self.automata.append(BuildAutomata.basicSkeleton(char))
            elif char == self.openingSquareBraces:
                csb = self.regex.index(self.closingSquareBraces, i)
                osb = self.regex.index(self.openingSquareBraces, i)
                char = self.regex[i: csb + 1]
                i += csb - osb
                language.add(char)
                if previous != self.dot and (previous in self.alphabet or previous in [self.closingBracket, self.star, self.plus, self.questionmark]):
                    self.addOperatorToStack(self.dot)
                self.automata.append(BuildAutomata.basicSkeleton(char))
                char = "♥"
            elif char == self.closingSquareBraces:
                if previous in self.operators:
                    raise BaseException("Error processing '%s' after '%s'" % (char, previous))
                while 1:
                    if len(self.stack) == 0:
                        raise BaseException("Error processing '%s'. Empty stack" % char)
                    o = self.stack.pop()
                    if o == self.openingSquareBraces:
                        break
                    elif o in self.operators:
                        self.processOperator(o)

            elif char == self.openingBracket:
                if previous != self.dot and (previous in self.alphabet or previous in [self.closingBracket, self.star, self.plus, self.questionmark]):
                    self.addOperatorToStack(self.dot)
                self.stack.append(char)

            elif char == self.closingBracket:
                if previous in self.operators:
                    raise BaseException("Error processing '%s' after '%s'" % (char, previous))
                while 1:
                    if len(self.stack) == 0:
                        raise BaseException("Error processing '%s'. Empty stack" % char)
                    o = self.stack.pop()
                    if o == self.openingBracket:
                        break
                    elif o in self.operators:
                        self.processOperator(o)
            elif char == self.star:
                if previous in self.operators or previous == self.openingBracket or previous == self.star:
                    raise BaseException("Error processing '%s' after '%s'" % (char, previous))
                self.processOperator(char)
            elif char == self.plus:
                if previous in self.operators or previous == self.openingBracket or previous == self.plus:
                    raise BaseException("Error processing '%s' after '%s'" % (char, previous))
                self.processOperator(char)
            elif char == self.questionmark:
                if previous in self.operators or previous == self.openingBracket or previous == self.questionmark:
                    raise BaseException("Error processing '%s' after '%s'" % (char, previous))
                self.processOperator(char)
            elif char in self.operators:
                if previous in self.operators or previous == self.openingBracket:
                    raise BaseException("Error processing '%s' after '%s'" % (char, previous))
                else:
                    self.addOperatorToStack(char)
            else:
                raise BaseException("Symbol '%s' is not allowed" % char)
            previous = char
            i += 1
        while len(self.stack) != 0:
            op = self.stack.pop()
            self.processOperator(op)
        if len(self.automata) > 1:
            print (self.automata)
            raise BaseException("Regex could not be parsed successfully")
        self.nfa = self.automata.pop()
        self.nfa.language = language

    def addOperatorToStack(self, char):
        while(1):
            if len(self.stack) == 0:
                break
            top = self.stack[len(self.stack)-1]
            if top == self.openingBracket:
                break
            if top == char or top == self.dot:
                op = self.stack.pop()
                self.processOperator(op)
            else:
                break
        self.stack.append(char)

    def processOperator(self, operator):
        if len(self.automata) == 0:
            raise BaseException("Error processing operator '%s'. Stack is empty" % operator)
        if operator == self.star:
            a = self.automata.pop()
            self.automata.append(BuildAutomata.starSkeleton(a))
        elif operator == self.plus:
            a = self.automata.pop()
            self.automata.append(BuildAutomata.plusSkeleton(a))
        elif operator == self.questionmark:
            a = self.automata.pop()
            self.automata.append(BuildAutomata.questionSkeleton(a))
        elif operator in self.operators:
            if len(self.automata) < 2:
                raise BaseException("Error processing operator '%s'. Inadequate operands" % operator)
            a = self.automata.pop()
            b = self.automata.pop()
            if operator == self.pipe:
                self.automata.append(BuildAutomata.pipeSkeleton(b, a))
            elif operator == self.dot:
                self.automata.append(BuildAutomata.dotSkeleton(b, a))


def main():
    print("Use ╨ alt+208, to use superscipt plus")
    regularexpr = "(01*1)*1"
    if len(sys.argv)>1:
        regularexpr = sys.argv[1]
    print("Regular Expression: ", regularexpr)
    NFAObj = NFAfromRegex(regularexpr)
    nfa = NFAObj.getNFA()

    print("\nNFA: ")
    NFAObj.displayNFA()


if __name__ == '__main__':

    try:
        main()
    except BaseException as e:
        print ("\nFailure:", e)
