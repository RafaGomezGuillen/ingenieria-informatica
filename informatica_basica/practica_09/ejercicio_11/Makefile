CXX = g++						             
CXXFLAGS = -std=c++14 -g -Wall	
LDFLAGS =						             


all: Mersenne

Mersenne: mersenne.o mersenne_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)


.PHONY: all clean

#
	$(CXX) $(CXXFLAGS) -c $<


clean :
	rm -f *.o Mersenne doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;