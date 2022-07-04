# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @autor Rafael Gomez Guillen alu0101462578
# @fecha 13/12/2021
# @brief Makefile del programa cripto
# 

CXX = g++						          
CXXFLAGS = -std=c++14 -g -Wall	 
LDFLAGS =						           

all: cripto

cripto: cripto.o cripto_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)


.PHONY: all clean
	$(CXX) $(CXXFLAGS) -c $<

clean :
	rm -rf *.o cripto ../doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;