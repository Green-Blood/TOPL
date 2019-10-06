
import sys
import io


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
        # states
        print(self.states)
        # startstate
        print(self.startstate)
        # final states
        print(self.finalstates)
        # transitions
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
        self.openingCurlyBraces = '{'
        self.closingCurlyBraces = '}'
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

            elif char == self.openingCurlyBraces:
                if previous != self.dot and (previous in self.alphabet or previous in [self.closingBracket, self.star, self.plus, self.questionmark]):
                    self.addOperatorToStack(self.dot)
                self.stack.append(char)
            elif char == self.closingCurlyBraces:
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

class DFAfromNFA:
    """class for building dfa from e-nfa and minimise it"""

    def __init__(self, nfa):
        self.buildDFA(nfa)
        self.minimise()

    def getDFA(self):
        return self.dfa

    def getMinimisedDFA(self):
        return self.minDFA

    def displayDFA(self):
        self.dfa.display()

    def displayMinimisedDFA(self):
        self.minDFA.display()

    def buildDFA(self, nfa):
        allstates = dict()
        eclose = dict()
        count = 1
        state1 = nfa.getEClose(nfa.startstate)
        eclose[nfa.startstate] = state1
        dfa = Automata(nfa.language)
        dfa.setstartstate(count)
        states = [[state1, count]]
        allstates[count] = state1
        count +=  1
        while len(states) != 0:
            [state, fromindex] = states.pop()
            for char in dfa.language:
                trstates = nfa.gettransitions(state, char)
                for s in list(trstates)[:]:
                    if s not in eclose:
                        eclose[s] = nfa.getEClose(s)
                    trstates = trstates.union(eclose[s])
                if len(trstates) != 0:
                    if trstates not in allstates.values():
                        states.append([trstates, count])
                        allstates[count] = trstates
                        toindex = count
                        count +=  1
                    else:
                        toindex = [k for k, v in allstates.iteritems() if v  ==  trstates][0]
                    dfa.addtransition(fromindex, toindex, char)
        for value, state in allstates.iteritems():
            if nfa.finalstates[0] in state:
                dfa.addfinalstates(value)
        self.dfa = dfa

    def acceptsString(self, string):
        currentstate = self.dfa.startstate
        for ch in string:
            if ch==":e:":
                continue
            st = list(self.dfa.gettransitions(currentstate, ch))
            if len(st) == 0:
                return False
            currentstate = st[0]
        if currentstate in self.dfa.finalstates:
            return True
        return False

    def minimise(self):
        states = list(self.dfa.states)
        n = len(states)
        unchecked = dict()
        count = 1
        distinguished = []
        equivalent = dict(zip(range(len(states)), [{s} for s in states]))
        pos = dict(zip(states,range(len(states))))
        for i in range(n-1):
            for j in range(i+1, n):
                if not ([states[i], states[j]] in distinguished or [states[j], states[i]] in distinguished):
                    eq = 1
                    toappend = []
                    for char in self.dfa.language:
                        s1 = self.dfa.gettransitions(states[i], char)
                        s2 = self.dfa.gettransitions(states[j], char)
                        if len(s1) != len(s2):
                            eq = 0
                            break
                        if len(s1) > 1:
                            raise BaseException("Multiple transitions detected in DFA")
                        elif len(s1) == 0:
                            continue
                        s1 = s1.pop()
                        s2 = s2.pop()
                        if s1 != s2:
                            if [s1, s2] in distinguished or [s2, s1] in distinguished:
                                eq = 0
                                break
                            else:
                                toappend.append([s1, s2, char])
                                eq = -1
                    if eq == 0:
                        distinguished.append([states[i], states[j]])
                    elif eq == -1:
                        s = [states[i], states[j]]
                        s.extend(toappend)
                        unchecked[count] = s
                        count += 1
                    else:
                        p1 = pos[states[i]]
                        p2 = pos[states[j]]
                        if p1 != p2:
                            st = equivalent.pop(p2)
                            for s in st:
                                pos[s] = p1
                            equivalent[p1] = equivalent[p1].union(st)
        newFound = True
        while newFound and len(unchecked) > 0:
            newFound = False
            toremove = set()
            for p, pair in unchecked.items():
                for tr in pair[2:]:
                    if [tr[0], tr[1]] in distinguished or [tr[1], tr[0]] in distinguished:
                        unchecked.pop(p)
                        distinguished.append([pair[0], pair[1]])
                        newFound = True
                        break
        for pair in unchecked.values():
            p1 = pos[pair[0]]
            p2 = pos[pair[1]]
            if p1 != p2:
                st = equivalent.pop(p2)
                for s in st:
                    pos[s] = p1
                equivalent[p1] = equivalent[p1].union(st)
        if len(equivalent) == len(states):
            self.minDFA = self.dfa
        else:
            self.minDFA = self.dfa.newBuildFromEquivalentStates(equivalent, pos)

def main():

    file = io.open("17Output.txt", 'w', encoding="utf-8")
    sys.stdout = file
    # alt+208 to use superscript plu
    regularexpr = "(01*1)*1"
    if len(sys.argv) > 1:
        regularexpr = sys.argv[1]
    NFAObj = NFAfromRegex(regularexpr)
    nfa = NFAObj.getNFA()
    NFAObj.displayNFA()
    file.close()

  inp = "(01*1)*1"
    if len(sys.argv)>1:
        inp = sys.argv[1]
    print "Regular Expression: ", inp
    nfaObj = NFAfromRegex(inp)
    nfa = nfaObj.getNFA()
    dfaObj = DFAfromNFA(nfa)
    dfa = dfaObj.getDFA()
    minDFA = dfaObj.getMinimisedDFA()
    print "\nNFA: "
    nfaObj.displayNFA()
    print "\nDFA: "
    dfaObj.displayDFA()
    print "\nMinimised DFA: "
    dfaObj.displayMinimisedDFA()
    if isInstalled("dot"):
        drawGraph(dfa, "dfa")
        drawGraph(nfa, "nfa")
        drawGraph(minDFA, "mdfa")
        print "\nGraphs have been created in the code directory"
        print minDFA.getDotFile()


if __name__ == '__main__':

    try:
        main()
    except BaseException as e:
        print ("\nFailure:", e)
