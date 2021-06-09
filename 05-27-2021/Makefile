all: template1 template2 template3

template1: template1.cpp
	g++ -o $@ $<

template2: template2.cpp
	g++ -o $@ $<

template3: template3.o swap.o
	g++ -o $@ $^

clean:
	rm -f template? *.o