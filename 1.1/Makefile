install: all
	export LD_LIBRARY_PATH=.
all: exe lib
	
exe: hello.h main.c lib
	gcc -o hello -fPIC main.c libHello.so

lib: hello.h hello.cpp
	gcc -o libHello.so -shared -fPIC hello.cpp

clean: 
	find . -type f -a  -executable ! -name "*.sh" -o -name "*.so" | xargs rm
