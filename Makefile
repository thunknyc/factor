fac: main.c
	$(CC) -O2 -o fac main.c
clean:
	rm -f fac *.o
