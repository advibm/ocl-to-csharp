#include "Parser.h"
#include <stdio.h>
#include <string.h>
// #include "Printer.h"
#include "Absyn.h"
#include "Skeleton.h"
#include <fstream>

void usage() {
  printf("usage: Call with one of the following argument combinations:\n");
  printf("\t--help\t\tDisplay this help message.\n");
  printf("\t(no arguments)	Parse stdin verbosely.\n");
  printf("\t(files)\t\tParse content of files verbosely.\n");
  printf("\t-s (files)\tSilent mode. Parse content of files silently.\n");
}

int main(int argc, char **argv) {
  FILE *input;
  int quiet = 0;
  char *filename = NULL;

  OCLfile *parse_tree = nullptr;
  if (argc > 1) {
    if (strcmp(argv[1], "-s") == 0) {
      quiet = 1;
      if (argc > 2) {
        filename = argv[2];
      } else {
        input = stdin;
      }
    } else if (strcmp(argv[1], "-d") == 0) {
      std::string ocl = "package Rule ";
      ocl += argv[2];
      ocl += "\nendpackage";
      parse_tree = pOCLfile(ocl.c_str());
    } else {
      filename = argv[1];
    }
  }

  if (filename) {
    input = fopen(filename, "r");
    if (!input) {
      usage();
      exit(1);
    }
  } else
    input = stdin;
  /* The default entry point is used. For other options see Parser.h */
  if (parse_tree == nullptr)
    parse_tree = pOCLfile(input);
  if (parse_tree) {
    if (!quiet) {
      Skeleton *s = new Skeleton();
      s->process(parse_tree);
    }
    return 0;
  }
  return 1;
}
