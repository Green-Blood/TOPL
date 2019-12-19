
#include <stdio.h>
#include <stdlib.h>
#include "includes/ast.h"
#include "parse.tab.h"
#include <iostream>

extern void init_scanner(FILE *);
extern void finish_scanner();

static FILE *
open_file(const char *filename) {
  FILE *file = fopen(filename, "r");
  if (!file) {
    fprintf(stderr, "Could not open file \"%s\"\n", filename);
    exit(EXIT_FAILURE);
  }
  return file;
}

int main(int argc, char * argv[]) {
  FILE *input_file = stdin;
  if (argc > 1) { /* user-supplied filename */
    input_file = open_file(argv[1]);
  }
  init_scanner(input_file);
  yydebug = 0;  /* Change to 1 if you want debugging */
  try {
    int parse_had_errors = yyparse();
    finish_scanner();
    fclose(input_file);
    if (parse_had_errors) {
      fprintf(stderr,"Notnormal termination\n");
    }
    else {
      PoolOfNodes::getInstance().drainThePool();
    }
    return (parse_had_errors ? EXIT_FAILURE : EXIT_SUCCESS);
  }
  catch (const std::string& msg) {
    std::cout << "The error is " << msg << std::endl;
  }

}
