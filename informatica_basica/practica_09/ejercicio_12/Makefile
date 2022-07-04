CXX = g++						             
CXXFLAGS = -std=c++14 -g -Wall	
LDFLAGS =						             


all: Armstrong

Armstrong: armstrong.o armstrong_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)


.PHONY: all clean

#
	$(CXX) $(CXXFLAGS) -c $<


clean :
	rm -f *.o Armstrong doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;