all: namespace1 namespace2 namespace3

namespace1: namespace1.cpp
	g++ -o $@ $<

namespace2: namespace2.cpp
	# $< represents only the FIRST file on the right above
	g++ -o $@ $<

namespace3: namespace3.cpp sum.cpp
	# Note the use of "$^" to represent ALL files on the right above
	g++ -o $@ $^

clean:
	rm -f namespace?