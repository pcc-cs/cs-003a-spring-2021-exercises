all: check

check: check.cpp list.cpp complex.cpp
	# $^ refers to ALL the files on the right side above
	g++ -o $@ $^

clean:
	rm -f check