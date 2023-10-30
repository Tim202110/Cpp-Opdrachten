all:
	g++ -c lib/debug.cpp -o lib/debug.o -Iinclude
	g++ -c lib/greeter.cpp -o lib/greeter.o -Iinclude
	ar rcs libtool.a lib/debug.o lib/greeter.o

clean:
	rm lib/*.o *.a
