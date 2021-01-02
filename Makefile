all:
	gcc isort.c -o isort
	gcc txt_find.c -o txt_find

isort:
	gcc isort.c -o isort
	
txt_find:
	gcc txt_find.c -o txt_find
	
clean:
	rm *.o isort txt_find
