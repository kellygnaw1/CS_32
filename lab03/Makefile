CXX=clang++
# CXX=g++

# We have -Wno-unused-parameter so that the compiler
# doesn't complain too much about our stubs.

CXXFLAGS = -std=c++11 -Wall -Wextra -Wno-unused-parameter -Wno-unused-private-field 
#step 1 & 2
# %.o: %.cpp
# 	${CXX} ${CXXFLAGS} -c -o $@ $^

#end of step 1 and 2

# clang++  -o whatever.o whatever.cpp
# Change to this before final submission:

#CXXFLAGS = -std=c++11 -Wall -Wextra -Werror

BINARIES=testStudent testRoster1 testRoster2 testRoster3

all: ${BINARIES}
	# do nothing
#step 3 
testStudent: testStudent.o Student.o tddFuncs.o
	${CXX} $^ -o $@

testRoster1: testRoster1.o Roster.o Student.o tddFuncs.o
	${CXX} $^ -o $@

testRoster2: testRoster2.o Roster.o Student.o tddFuncs.o
	${CXX} $^ -o $@

testRoster3: testRoster3.o Roster.o Student.o tddFuncs.o
	${CXX} $^ -o $@
#end of step 3
tests: ${BINARIES}
	./testStudent
	./testRoster1
	./testRoster2
	./testRoster3

clean:
	/bin/rm -f ${BINARIES} *.o

	