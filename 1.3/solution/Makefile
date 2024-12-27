exe:	solution.c
	gcc solution.c -fPIC -ldl '-Wl,-rpath=.' -o solution
lib: mylib.c
	gcc -o libShared.so -shared -fPIC mylib.c

clean: 
	find . -type f -a  -executable ! -name "*.sh" -o -name "*.so" | xargs rm

test:	./libShared.so ./solution
	./solution libShared.so my_fun 8 
	./solution libShared.so my_fun 16 
	./solution libShared.so my_fun 32 
	./solution libShared.so my_fun 64 
	
