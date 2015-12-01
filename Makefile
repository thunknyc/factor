factor: main.c
	$(CC) -O2 -o factor main.c
clean:
	rm -f factor *.o
