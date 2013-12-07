CXX = g++
CXXFLAGS = -std=c++11
LDFLAGS = 
CXXSOURCES = $(wildcard *.cpp)
TARGETS = $(CXXSOURCES:.cpp=)

all: $(TARGETS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -fpic -c -o $@ $<

%: %.cpp #extern.o
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)
	

extern:
	