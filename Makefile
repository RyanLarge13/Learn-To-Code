# Variable Definitions
CXX = g++
CXXFLAGS = -std=c++11

# Target Rules
all: myprogram

myprogram: main.cpp
   $(CXX) $(CXXFLAGS) -o myprogram main.cpp

clean:
   rm -f myprogram
