all: template1 lambda1 lambda2

template1: template1.cpp
	g++ -o $@ $<

lambda1: lambda1.cpp
	g++ -o $@ $<

lambda2: lambda2.cpp
	g++ -o $@ $<

clean:
	rm -f template? lambda?