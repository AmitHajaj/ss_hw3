all:
	gcc -c isort.c
	gcc isort.c -o isort
	gcc -c txtfind.c
	gcc txtfind.c -o txtfind

isort:
	gcc isort.c -o isort
	
txt_find:
	gcc txtfind.c -o txtfind
	
clean:
	rm *.o isort txtfind
