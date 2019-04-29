CC=g++
CCFLAGS=-g -W -Wall

FLEX=flex
FLEX_OPTS=-POCL

BISON=bison
BISON_OPTS=-t -pOCL

OBJS=Absyn.o Lexer.o Parser.o Printer.o

.PHONY: clean distclean

all: conv

clean:
	rm -f *.o TestOCL OCL.aux OCL.log OCL.pdf OCL.dvi OCL.ps OCL

distclean: clean
	rm -f Absyn.cpp Absyn.h Test.cpp Parser.cpp Parser.h Lexer.cpp Skeleton.cpp Skeleton.h Printer.cpp Printer.h Makefile OCL.l OCL.y OCL.tex 

conv: ${OBJS} Skeleton.o main.o
	${CC} ${CCFLAGS} $^ -o $@

TestOCL: ${OBJS} Test.o
	@echo "Linking TestOCL..."
	${CC} ${CCFLAGS} ${OBJS} Test.o -o TestOCL

Absyn.o: Absyn.cpp Absyn.h
	${CC} ${CCFLAGS} -c Absyn.cpp

Lexer.cpp: OCL.l
	${FLEX} -oLexer.cpp OCL.l

Parser.cpp: OCL.y
	${BISON} OCL.y -o Parser.cpp

Lexer.o: Lexer.cpp Parser.h
	${CC} ${CCFLAGS} -c Lexer.cpp 

Parser.o: Parser.cpp Absyn.h
	${CC} ${CCFLAGS} -c Parser.cpp

Printer.o: Printer.cpp Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Printer.cpp

Skeleton.o: Skeleton.cpp Skeleton.h Absyn.h json.hpp
	${CC} ${CCFLAGS} -Wno-unused-parameter -c Skeleton.cpp

Test.o: Test.cpp Parser.h Printer.h Absyn.h
	${CC} ${CCFLAGS} -c Test.cpp
