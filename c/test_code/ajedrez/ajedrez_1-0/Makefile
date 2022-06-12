
cc := g++
TARGET := main

HDR := header.h

SRC := $(wildcard *.cpp)
DEP := $(patsubst %.cpp, %.o, $(SRC))

all: $(TARGET) clean

$(TARGET): $(DEP)
	$(cc) -o $@ $^

%.o: %.cpp $(HDR)
	$(cc) -c $< 

.PHONY: info clean

info:
	$(info  SRC: $(SRC))
	$(info  DEP: $(DEP))

clean:
	$(RM) *.o

