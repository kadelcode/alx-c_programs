- Write a C program that prints exactly ```and that piece of art is useful" - Dora Korpar, 2015-10-19```, followed by a new line, to the standard error.
	- You are not allowed to use any functions listed in the NAME section of the (3) ```printf``` or man (3) ```puts```
	- Your program should return 1
	- Your program should compile without any warnings when using the ```-Wall gcc``` option
```
julien@ubuntu:~/c/0x00$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c
julien@ubuntu:~/c/0x00$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ echo $?
1
julien@ubuntu:~/c/0x00$ ./quote 2> q
julien@ubuntu:~/c/0x00$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19
julien@ubuntu:~/c/0x00$ grep printf < 101-quote.c
julien@ubuntu:~/c/0x00$ grep put < 101-quote.c
julien@ubuntu:~/c/0x00$
```
