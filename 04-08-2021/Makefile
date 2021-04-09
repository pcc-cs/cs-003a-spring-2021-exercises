all: list1

list1: list1.o list.o node.o
	g++ -o $@ $^

.cpp.o:
	g++ -c --std=c++11 $<

clean:
	rm -f list1 *.o