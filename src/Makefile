

c_cpp.out: c_file.o cpp_file.o
	gcc c_file.o cpp_file.o -lstdc++ -o c_cpp.out
c_file.o: c_file.c
	gcc -Wall -c c_file.c
cpp_file.o: cpp_file.cpp
	g++ -Wall -c cpp_file.cpp
clean:
	rm -f *.o
	rm -f *.out