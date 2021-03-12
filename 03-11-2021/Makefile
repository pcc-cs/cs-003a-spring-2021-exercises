all: class1 class2

class1: class1.cpp
	g++ -o $@ $<

class2: class2.cpp
	g++ -o $@ $<

# ? is a "wildcard" representing any single character
# class? can be class1, class2, etc.
clean:
	rm -f class?