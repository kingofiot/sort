main:main.o sort.o
	gcc -o main  main.o sort.o
main.o:main.c ./common/sort.h
	gcc -c main.c
sort.o:./common/sort.c ./common/sort.h
	gcc -c ./common/sort.c
.PHONY:clean
clean:
	rm -rf ./*.o
	rm -rf ./common/*.o
	rm -rf main
