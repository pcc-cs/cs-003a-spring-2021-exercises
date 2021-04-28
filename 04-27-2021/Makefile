all: stack1

stack1: stack1.o stack.o node.o
	g++ -o $@ $^

# Note that the dependencies include the header files
# But compilation uses only the first file (stack1.cpp)
stack1.o: stack1.cpp stack.h node.h

stack.o: stack.cpp stack.h node.h
	g++ -c --std=c++14 $<

node.o: node.cpp node.h
	g++ -c $<

clean:
	rm -f stack? *.o