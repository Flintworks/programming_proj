

calculator: main.o pushpop.o getop.o getch.o
	gcc main.o pushpop.o getop.o getch.o -o calculator

main.o: main.c calc.h
	gcc -c main.c

pushpop.o: pushpop.c calc.h
	gcc -c pushpop.c

getop.o: getop.c calc.h
	gcc -c getop.c

getch.o: getch.c calc.h
	gcc -c getch.c


	 
      



