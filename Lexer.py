import sys
import io
from tabulate import tabulate
import pandas as panda
# Function to read from file, using encoding UTF-8, to read all strange symbols, that we have
def readFromFile(filename):
    file = io.open(filename, "r",  encoding="utf-8")
    if file.mode == "r":
        contents = file.read()
        return contents


# Lexer
def LexerForJava(string):
    token = []
    lexstorage = []
    symbolTable = []
    numbers = ['1', "2", "3", "4", "5", "6", "7", "8", "9", "0"]
    specilsymbols = ["!", "%", "^", "&", "*", "(", ")", "-", "+", "=", "{", "}", "|", "~", "[", "]", "/", ";", "'", ":", '"', "<", ">", "?", ",", ".", "/", "#", "@", "`"]
    identifiers = [chr(i) for i in range(65, 91)]
    identifiers.extend([chr(i) for i in range(97, 123)])
    identifiers.extend([chr(i) for i in range(43, 58)])
    other_symbols = ['\\', '/*', '*/']  # multi-char keywords
    keywords = ["abstract",	"continue",	"goto",	"package",	"switch",
                "assert",	"default",	"if",	"private",	"this",
                "boolean",	"do",	"implements",	"protected",	"throw",
                "break",	"double",	"import",	"public",	"throws",
                "byte",	"else",	"instanceof",	"return",	"transient",
                "case",	"extends",	"int",	"short",	"try",
                "catch",	"final",	"interface",	"static",	"void",
                "char",	"finally",	"long",	"strictfp",	"volatile",
                "class",	"float",	"native",	"super",	"while",
                "const",	"for",	"new",	"synchronized"]
    separators = [";", ",", ".", "(", ")",  "{",  "}",  "[", "]"]
    operators = ["="	">"	"<"	"!"	"~"	"?"	":"	 	
                 "=="	"<="	">="	"!="	"&&"	"||"	"++"	"--"
                 "+"	"-"	"*"	"/"	"&"	"|"	"^"	"%"	"<<"	">>"	">>>"
                 "+="	"-="	"*="	"/="	"&="	"|="	"^="	"%="	"<<="	">>="	">>="]
    types = ["int" "double" "boolean" "char" "String" "null" "short" "long" "float"]
    escapes = ["\n", "\t", "\v", "\b" "\r" "\f" "\a" "\\" "\'" '\"']
    KEYWORDS = specilsymbols + other_symbols + keywords + numbers + separators + operators + types + escapes
    # Reads data
    white_space = ' '
    lexeme = ''
    for i, char in enumerate(string):
        if char == '*':
            if string[i - 1] == '/':
                lexeme += '/*'
            elif string[i + 1] == '/':
                lexeme += '*/'
            else:
                lexeme += '*'
        elif char == '/':
            if string[i + 1] != '*' and string[i - 1] != '*':
                lexeme += '/'
            else:
                continue
        else:
            if char != white_space:
                lexeme += char  # adding a char each time
        if i + 1 < len(string):  # prevents error
            if string[i + 1] == white_space or string[i + 1] in KEYWORDS or lexeme in KEYWORDS:  # if next char == ' '
                if lexeme != '':
                    # if lexeme not in symbolTable:
                    #     continue
                    if lexeme in numbers:
                        token.append("Number")
                    elif lexeme in keywords:
                        token.append("Keyword")
                    elif lexeme in identifiers:
                        token.append("Identifier")
                    elif lexeme in specilsymbols:
                        token.append("Special Character")
                    elif lexeme in separators:
                        token.append("Separator")
                    elif lexeme in operators:
                        token.append("Operator")
                    elif lexeme in types:
                        token.append("Type")
                    elif lexeme in escapes:
                        token.append("Escape")
                    else:
                        token.append("Undefined token")
                    lexstorage.append(lexeme)
                    lexeme = ''

    lexstorage.append(lexeme)

    showTable(lexstorage,token)
    # print(tabulate([[token] ,[lexstorage]], headers=['Token', 'Lexeme']))
    # df = panda.DataFrame(lexstorage)
    # df = df.set_index('Lexeme')
    # df



def showTable(lexstorage,token):
    print('{:<8}'.format("Token:"), '{:<8}'.format("Lexeme:"))
    for lexelement, tokenelement in zip(lexstorage, token):
        print('{:<8}'.format(tokenelement), '{:<8}'.format(lexelement))


def main():

    # Uncomment this part in the end, to take input of the file, which is needed
    # filename = input("Enter the name of the file\n")
    filename = "17Output.txt"
    contents = readFromFile(filename)
    LexerForJava(contents)



if __name__ == '__main__':

    try:
        main()
    except BaseException as e:
        print("\nFailure:", e)