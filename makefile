default:
	gcc -Wall -o prog main.c input.c arrays.c strings.c
debug:
	gcc -Wall -o prog -g main.c input.c arrays.c strings.c
clean:
	rm -f prog
