# Universidad de La Laguna
# Escuela Superior de Ingeniería y Tecnología
# Grado en Ingeniería Informática
# Informática Básica
#
# @autor Rafael Gomez Guillen alu0101462578
# @fecha 13/12/2021
# @brief Makefile del programa leer_fichero
# 

CXX = g++						          
CXXFLAGS = -std=c++14 -g -Wall	 
LDFLAGS =						           

all: leer_fichero

leer_fichero: leer_fichero.o leer_fichero_main.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)


.PHONY: all clean
	$(CXX) $(CXXFLAGS) -c $<

clean :
	rm -rf *.o leer_fichero ../doc
	rm -rf *~ basura b i
	rm -rf a.out
	find . -name '*~' -exec rm {} \;
	find . -name basura -exec rm {} \;