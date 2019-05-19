CXX=g++
CXXFLAGS=-g -W -Wall

#CXX=i686-w64-mingw32-g++
#CXXFLAGS=-s -static -O2 -W -Wall

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
	${CXX} ${CXXFLAGS} $^ -o $@

TestOCL: ${OBJS} Test.o
	@echo "Linking TestOCL..."
	${CXX} ${CXXFLAGS} ${OBJS} Test.o -o TestOCL

Absyn.o: Absyn.cpp Absyn.h
	${CXX} ${CXXFLAGS} -c Absyn.cpp

Lexer.cpp: OCL.l
	${FLEX} -oLexer.cpp OCL.l

Parser.cpp: OCL.y
	${BISON} OCL.y -o Parser.cpp

Lexer.o: Lexer.cpp Parser.h
	${CXX} ${CXXFLAGS} -c Lexer.cpp 

Parser.o: Parser.cpp Absyn.h
	${CXX} ${CXXFLAGS} -c Parser.cpp

Printer.o: Printer.cpp Printer.h Absyn.h
	${CXX} ${CXXFLAGS} -c Printer.cpp

Skeleton.o: Skeleton.cpp Skeleton.h Absyn.h json.hpp
	${CXX} ${CXXFLAGS} -Wno-unused-parameter -c Skeleton.cpp

Test.o: Test.cpp Parser.h Printer.h Absyn.h
	${CXX} ${CXXFLAGS} -c Test.cpp
