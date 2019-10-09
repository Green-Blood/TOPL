import io

# Function to read from file, using encoding UTF-8, to read all strange symbols, that we have


def readFromFile(filename):
    file = io.open(filename, "r",  encoding="utf-8")
    if file.mode == "r":
        contents = file.read()
        contents = contents.replace("\n", " ")
        return contents


# Lexers
# Java
def LexerForJava(string):
    token = []
    lexstorage = []
    symbolTable = []
    stcounter = []
    numbers = ['1', "2", "3", "4", "5", "6", "7", "8", "9", "0"]
    specialsymbols = ["!", "%", "^", "&", "*", "(", ")", "-", "+", "=", "{", "}", "|", "~", "[", "]", "/", ";", "'", ":", '"', "<", ">", "?", ",", ".", "/", "#", "@", "`"]
    identifiers = [chr(i) for i in range(65, 91)]
    identifiers.extend([chr(i) for i in range(97, 123)])
    other_symbols = [r'\\', '/*', '*/']  # multi-char keywords
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
    types = ["int","double","boolean","char","String","null","short","long","float"]
    escapes = [r"\n", r"\t", r"\v", r"\b",r"\r",r"\f",r"\a",r"\\",r"\'",r'\"' "//","/"]
    plus_op = r'\+'
    KEYWORDS = specialsymbols + other_symbols + keywords + numbers + separators + operators + types + escapes
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
                    if lexeme in numbers:
                        token.append("Number")
                    elif lexeme in keywords:
                        token.append("Keyword")
                    elif lexeme in identifiers:
                        token.append("Identifier")
                    elif lexeme in specialsymbols:
                        token.append("Special Character")
                    elif lexeme in separators:
                        token.append("Separator")
                    elif lexeme in operators:
                        token.append("Operator")
                    elif lexeme in types:
                        token.append("Type")
                    elif lexeme in escapes:
                        token.append("Escape")
                    elif lexeme == plus_op:
                        token.append("Plus_Op")
                    else:
                        token.append("Identifier")
                    lexeme.replace('\n', '<newline>')
                    lexstorage.append(lexeme)
                    stcounter.append(SymbolTable(lexeme, symbolTable))
                    lexeme = ''
    #Adding last items
    lexstorage.append(lexeme)
    stcounter.append(SymbolTable(lexeme, symbolTable))
    showTable(lexstorage, token, stcounter)


# C
def LexerForC(string):
    token = []
    lexstorage = []
    symbolTable = []
    stcounter = []
    numbers = ['1', "2", "3", "4", "5", "6", "7", "8", "9", "0"]
    specialsymbols = ["!", "%", "^", "&", "*", "(", ")", "-", "+", "=", "{", "}", "|", "~", "[", "]", "/", ";", "'", ":", '"', "<", ">", "?", ",", ".", "/", "#", "@", "`", "$", "#"]
    identifiers = [chr(i) for i in range(65, 91)]
    identifiers.extend([chr(i) for i in range(97, 123)])
    other_symbols = [r'\\', '/*', '*/']  # multi-char keywords
    keywords = ["auto"	"double"	"int"	"struct"
                "break"	"else"	"long"	"switch"
                "case"	"enum"	"register"	"typedef"
                "char"	"extern"	"return"	"union"
                "const"	"short"	"float"	"unsigned"
                "continue"	"for"	"signed"	"void"
                "default"	"goto"	"sizeof"	"volatile"
                "do"	"if"	"static"	"while"]
    separators = [";", ",", ".", "(", ")",  "{",  "}",  "[", "]"]
    operators = ["="	">"	"<"	"!"	"~"	"?"	":"	 	
                 "=="	"<="	">="	"!="	"&&"	"||"	"++"	"--"
                 "+"	"-"	"*"	"/"	"&"	"|"	"^"	"%"	"<<"	">>"	">>>"
                 "+="	"-="	"*="	"/="	"&="	"|="	"^="	"%="	"<<="	">>="	">>="]
    types = ["int","signed int","unsigned int","short int","unsigned short int","signed short int","long int",
             "signed long int","unsigned long int","double", "char", "null","float","unsigned char"]
    escapes = [r"\n", r"\t", r"\v", r"\b",r"\r",r"\f",r"\a",r"\\",r"\'",r'\"' "//","/"]
    plus_op = r'\+'
    KEYWORDS = specialsymbols + other_symbols + keywords + numbers + separators + operators + types + escapes
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
                    if lexeme in numbers:
                        token.append("Number")
                    elif lexeme in keywords:
                        token.append("Keyword")
                    elif lexeme in identifiers:
                        token.append("Identifier")
                    elif lexeme in specialsymbols:
                        token.append("Special Character")
                    elif lexeme in separators:
                        token.append("Separator")
                    elif lexeme in operators:
                        token.append("Operator")
                    elif lexeme in types:
                        token.append("Type")
                    elif lexeme in escapes:
                        token.append("Escape")
                    elif lexeme == plus_op:
                        token.append("Plus_Op")
                    else:
                        token.append("Identifier")
                    lexeme.replace('\n', '<newline>')
                    lexstorage.append(lexeme)
                    stcounter.append(SymbolTable(lexeme, symbolTable))
                    lexeme = ''
    #Adding last items
    lexstorage.append(lexeme)
    stcounter.append(SymbolTable(lexeme, symbolTable))
    showTable(lexstorage, token, stcounter)


# C++
def LexerForCplus(string):
    token = []
    lexstorage = []
    symbolTable = []
    stcounter = []
    numbers = ['1', "2", "3", "4", "5", "6", "7", "8", "9", "0"]
    specialsymbols = ["!", "%", "^", "&", "*", "(", ")", "-", "+", "=", "{", "}", "|", "~", "[", "]", "/", ";", "'", ":", '"', "<", ">", "?", ",", ".", "/", "#", "@", "`", "$", "#"]
    identifiers = [chr(i) for i in range(65, 91)]
    identifiers.extend([chr(i) for i in range(97, 123)])
    other_symbols = [r'\\', '/*', '*/']  # multi-char keywords
    keywords = ["auto",	"double","int","struct",
                "break","else","long","switch",
                "case","enum","register","typedef",
                "char","extern","return","union",
                "const","short","float","unsigned",
                "continue","for","signed","void",
                "default","goto","sizeof","volatile",
                "do","if","static","while",
                "asm",         "bool",       "catch",  "class",
                "const_cast",  "delete",     "dynamic_cast",  "explicit",
                "export",      "false",      "friend",        "inline",
                "mutable",     "namespace",  "new",           "operator",
                "private",     "protected",  "public",        "reinterpret_cast"
                "static_cast", "template",   "this",          "throw",
                "true",        "try",        "typeid",        "typename",
                "using",       "virtual",    "wchar_t"
                ]
    separators = [";", ",", ".", "(", ")",  "{",  "}",  "[", "]"]
    operators = ["="	">"	"<"	"!"	"~"	"?"	":"	 	
                 "=="	"<="	">="	"!="	"&&"	"||"	"++"	"--"
                 "+"	"-"	"*"	"/"	"&"	"|"	"^"	"%"	"<<"	">>"	">>>"
                 "+="	"-="	"*="	"/="	"&="	"|="	"^="	"%="	"<<="	">>="	">>="]
    types = ["int","signed int","unsigned int","short int","unsigned short int","signed short int","long int",
             "signed long int","unsigned long int","double", "char", "null","float","unsigned char"]
    escapes = [r"\n", r"\t", r"\v", r"\b",r"\r",r"\f",r"\a",r"\\",r"\'",r'\"', "//","/"]
    plus_op = [r'\+']
    KEYWORDS = specialsymbols + other_symbols + keywords + numbers + separators + operators + types + escapes
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
                    if lexeme in numbers:
                        token.append("Number")
                    elif lexeme in keywords:
                        token.append("Keyword")
                    elif lexeme in identifiers:
                        token.append("Identifier")
                    elif lexeme in specialsymbols:
                        token.append("Special Character")
                    elif lexeme in separators:
                        token.append("Separator")
                    elif lexeme in operators:
                        token.append("Operator")
                    elif lexeme in types:
                        token.append("Type")
                    elif lexeme in escapes:
                        token.append("Escape")
                    elif lexeme == plus_op:
                        token.append("Plus_Op")
                    else:
                        token.append("Identifier")
                    lexeme.replace('\n', '<newline>')
                    lexstorage.append(lexeme)
                    stcounter.append(SymbolTable(lexeme, symbolTable))
                    lexeme = ''
    #Adding last items
    lexstorage.append(lexeme)
    stcounter.append(SymbolTable(lexeme, symbolTable))
    showTable(lexstorage, token, stcounter)


# Python
def LexerForPython(string):
    token = []
    lexstorage = []
    symbolTable = []
    stcounter = []
    numbers = ['1', "2", "3", "4", "5", "6", "7", "8", "9", "0"]
    identifiers = [chr(i) for i in range(65, 91)]
    identifiers.extend([chr(i) for i in range(97, 123)])
    other_symbols = [r'\\', '/*', '*/']  # multi-char keywords
    keywords = ["False", "class", "finally", "is", "return",
                "None", "continue", "for", "lambda", "try",
                "True", "def", "from", "nonlocal", "while",
                "and", "del", "global", "not", "with",
                "as", "elif", "if", "or", "yield",
                "assert", "else", "import", "pass",
                "break", "except", "in", "raise"
                ]

    separators = [";", ",", ".", "(", ")",  "{",  "}",  "[", "]", ":", "@",
                  "=", "+=", "-=", "*=", "/=", "//=", "%=", "**=",
                  "&=", "|=", "^=", "<<=", ">>=",
                  ]
    operators = ["+", "-", "*", "/", "//", "%", "**",
                 "==", "!=", "<", ">", "<=", ">=",
                 "and", "not", "or",
                 "&", "|", "~", "^", "<<", ">>"]
    types = ["int", "float",  "imaginary", "bool", "str", "bytes", "NoneType"]
    escapes = [r"\n", r"\t", r"\v", r"\b", r"\r", r"\f", r"\a", r"\\", r"\'", r'\"', "//", "/"]
    plus_op = [r'\+']
    special_symbols = ["!", "%", "^", "&", "*", "(", ")", "-", "+", "=", "{", "}", "|", "~", "[", "]", "/", ";", "'", ":",
                     '"', "<", ">", "?", ",", ".", "/", "#", "@", "`", "$", "#"]

    KEYWORDS = special_symbols + other_symbols + keywords + numbers + separators + operators + types + escapes
    # Reads data
    white_space = ' '
    coments = "#"
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
            if char != (white_space):
                lexeme += char  # adding a char each time
        if i + 1 < len(string):  # prevents error
            if string[i + 1] == white_space or string[i + 1] in KEYWORDS or lexeme in KEYWORDS:  # if next char == ' '
                if lexeme != '':
                    if lexeme in numbers:
                        token.append("Number")
                    elif lexeme in keywords:
                        token.append("Keyword")
                    elif lexeme in identifiers:
                        token.append("Identifier")
                    elif lexeme in separators:
                        token.append("Separator")
                    elif lexeme in operators:
                        token.append("Operator")
                    elif lexeme in types:
                        token.append("Type")
                    elif lexeme in escapes:
                        token.append("Escape")
                    elif lexeme == plus_op:
                        token.append("Plus_Op")
                    elif lexeme in special_symbols:
                        token.append("Special Character")
                    else:
                        token.append("Identifier")
                    lexeme.replace('\n', '<newline>')
                    lexstorage.append(lexeme)
                    stcounter.append(SymbolTable(lexeme, symbolTable))
                    lexeme = ''
    # Adding last items
    lexstorage.append(lexeme)
    stcounter.append(SymbolTable(lexeme, symbolTable))
    showTable(lexstorage, token, stcounter)


# SQL
def LexerForSQL(string):
    token = []
    lexstorage = []
    symbolTable = []
    stcounter = []
    numbers = ['1', "2", "3", "4", "5", "6", "7", "8", "9", "0"]
    specialsymbols = ["!", "%", "^", "&", "*", "(", ")", "-", "+", "=", "{", "}", "|", "~", "[", "]", "/", ";", "'", ":", '"', "<", ">", "?", ",", ".", "/", "#", "@", "`", "$", "#"]
    identifiers = [chr(i) for i in range(65, 91)]
    identifiers.extend([chr(i) for i in range(97, 123)])
    other_symbols = [r'\\', '/*', '*/']  # multi-char keywords
    keywords = ["ABS()", "ACOS()",  "ADDDATE()", "ADDTIME()", "AES_DECRYPT()", "AES_ENCRYPT()"	
                "ANY_VALUE()",	"ASCII()", 'ASIN()', "ASYMMETRIC_DECRYPT()", "ASYMMETRIC_DERIVE()", "ASYMMETRIC_ENCRYPT()", "ASYMMETRIC_SIGN()",
                "ASYMMETRIC_VERIFY()",	"ATAN()", "ATAN2()", "ATAN()", "AVG()", "BENCHMARK()"

                ]

    separators = [";", ",", ".", "(", ")",  "{",  "}",  "[", "]",":","@"
                  "=","+=","-=","*=","/=","//=","%=","**="
                  "&=","|=","^=","<<=",">>="
                  ]
    operators = ["+","-","*","/","//","%","**"
                 "==","!=","<",">","<=",">=",
                 "and","not","or",
                 "&","|", "~","^","<<", ">>", "case", "div", "<=>", "is", "is not null", "like", "not in", "not like", "xor"]
    numeric_types = ["bit", "tinyint", "bool", "boolean", "smallint", "mediumint", "int", "integer",
                     "bigint", "decimal", "float", "dec", "double", "double precision"]
    datetime_types = ["date", "datetime", "timestamp", "time", "year"]
    string_types = ["binary", "varbinary", "tinyblob", "tinytext", "blob", "text", "mediumblob", "mediumtext",
                    "longblob", "longtext", "enum", "set", ""]
    st_syntax = ["alter", "create", "drop", "call", "delete", "do", "handler", "import", "insert", "load", "replace",
                 "select", "subquery", "update", "with",
                 "start transaction", "savepoint", "rollback to savepoint", "lock instance", "unlock instance", "set",
                 "prepare", "execute", "deallocate", "begin", "end", "declare", "clone", "show", "from",
                 "add", "alter column", "alter table", "all", "any", "as", "asc", "between", "check", "create database",
                 "create index", "create view", "replace view", "database", "default", "desc", "distinct", "drop",
                 "drop column", "drop constraint", "drop database", "drop default", "drop index", "drop table",
                 "drop view", "exec", "foreign key", "full outer join", "group by", "having", "in", "index",
                 "inner join", "not null", "order by", "outer join", "primary key", "procedure", "right join",
                 "insert into", "insert into select", "is null", "is not null", "join", "left join", "like", "limit",
                 "rownum", "select distinct", "select into", "select top", "union", "union all", "unique", "values",
                 "update", "where"
                 ]
    escapes = [r"\n", r"\t", r"\v", r"\b",r"\r",r"\f",r"\a",r"\\",r"\'",r'\"' "//","/"]
    plus_op = [r'\+']
    KEYWORDS = specialsymbols + other_symbols + keywords + numbers + separators + operators + numeric_types + escapes + \
               datetime_types + string_types + st_syntax
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

        lexeme.replace('\n', 'kaka')
        if i + 1 < len(string):  # prevents error
            if string[i + 1] == white_space or string[i + 1] in KEYWORDS or lexeme in KEYWORDS:  # if next char == ' '
                if lexeme != '':
                    if lexeme in numbers:
                        token.append("Number")
                    elif lexeme in keywords:
                        token.append("Keyword")
                    elif lexeme in st_syntax:
                        token.append("Spec SQL Syntax")
                    elif lexeme in string_types:
                        token.append("String type")
                    elif lexeme in datetime_types:
                        token.append("DateTime type")
                    elif lexeme in identifiers:
                        token.append("Identifier")
                    elif lexeme in specialsymbols:
                        token.append("Special Character")
                    elif lexeme in separators:
                        token.append("Separator")
                    elif lexeme in operators:
                        token.append("Operator")
                    elif lexeme in numeric_types:
                        token.append("Num_Type")
                    elif lexeme in escapes:
                        token.append("Escape")
                    elif lexeme == plus_op:
                        token.append("Plus_Op")
                    else:
                        token.append("Identifier")
                    lexstorage.append(lexeme)
                    stcounter.append(SymbolTable(lexeme, symbolTable))
                    lexeme = ''
    # Adding last items
    lexstorage.append(lexeme)
    stcounter.append(SymbolTable(lexeme, symbolTable))
    # print(lexstorage)
    showTable(lexstorage, token, stcounter)


# Symbol Table function
def SymbolTable(lexeme, symbol_table):
    if lexeme not in symbol_table:
        symbol_table.append(lexeme)
    return symbol_table.index(lexeme)


# Function to show results of Lexer
def showTable(lexstorage,token, stcounter):
    print('{:^25}'.format("Token:"), '{:^25}'.format("Lexeme:"), '{:^25}'.format("Symbol Table:"))
    for lex_element, token_element, st_count_element in zip(lexstorage, token, stcounter) :
        print("\r")
        print('{:^25}'.format(token_element), '{:^25}'.format(lex_element.strip()), '{:^25}'.format(st_count_element))
    *_, lex_last = lexstorage
    *_, token_last = token
    *_, stcounter_last = stcounter
    print("\r")
    print('{:^25}'.format(token_last), '{:^25}'.format(lex_last), '{:^25}'.format(stcounter_last))

def main():

    # Uncomment this part in the end, to take input of the file, which is needed
    # filename = input("Enter the name of the file\n")
    filename = "17Output.sql"

    contents = readFromFile(filename)
    if filename.endswith(".java"):
        print("This is Lexer for Java:")
        LexerForJava(contents)
    elif filename.endswith(".c"):
        print("This is Lexer for C:")
        LexerForC(contents)
    elif filename.endswith(".cpp"):
        print("This is Lexer for C++:")
        LexerForCplus(contents)
    elif filename.endswith(".sql"):
        print("This is Lexer for SQL:")
        LexerForSQL(contents)
    else:
        print("This is Lexer for Python:")
        LexerForPython(contents)


if __name__ == '__main__':

    try:
        main()
    except BaseException as e:
        print("\nFailure:", e)