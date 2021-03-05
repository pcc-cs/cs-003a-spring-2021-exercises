all: struct1

# struct1 is a "target" and struct1.cpp is a "dependency
# Recipe below shows how to build
struct1: struct1.cpp
	g++ -o $@ $<

clean:
	rm -f struct1