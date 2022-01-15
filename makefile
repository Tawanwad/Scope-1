compile: main.c 
	 gcc main.c -o tity

run: tity
	 ./tity

clean: tity
	 rm tity