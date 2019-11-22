all: PyScript	

parse.tab.c parse.tab.h: parse.y
	bison -d parse.y

lex.yy.c: lex.l parse.tab.h
	flex lex.l

PyScript: lex.yy.c parse.tab.c parse.tab.h
	gcc -o PyScript parse.tab.c lex.yy.c

clean:
	rm parse calc.tab.c lex.yy.c calc.tab.h