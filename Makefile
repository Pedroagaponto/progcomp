CPP		= g++
RM		= rm -f
CPPFLAGS	= -Wall -O2 -std=c++11
LDFLAGS		= -lm
SOURCES		= $(wildcard *.cpp)
TARGETS		= $(SOURCES:%.cpp=%)

all:	${TARGETS}

.PHONY: debug
debug: DIRECTIVES += -ggdb
debug: all

.PHONY: clean
clean:
	${RM} ${TARGETS}

% : %.cpp 
	${CPP} ${CPPFLAGS} -o $@ ${@:%=%.cpp} ${LDFLAGS}


