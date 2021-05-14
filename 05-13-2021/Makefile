all: inheritance1 inheritance2

inheritance1: inheritance1.cpp
	g++ -o $@ $<

inheritance2: inheritance2.o animals/animal.o animals/cow.o utils/util.o
	g++ -o $@ $^

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f inheritance? *.o */*.o