- This program will assign a random number to the variable ```n``` each time it is executed. Complete the source code in order to print whether the numbeer stored in the variable ```n``` is positive or negative
	- You can find the source code [here](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c)
	- The variable ```n``` will store a different value every time you will run this program
	- You don't have to understand what ```rand```, ```srand```, ```RAND_MAX``` do, Please do not touch this code
	- The output of the programm should be:
		- The number, followed by
			- If the number is greater than 0: ```is positive```
			- If the number is 0: ```is zero```
			- If the number is less than 0: ```is negative```
		- followed by a new line
```
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$
```
