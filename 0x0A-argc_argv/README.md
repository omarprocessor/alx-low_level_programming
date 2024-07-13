[200~$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
$ ./mynameis
./mynameis
$ mv mynameis mynewnameis
$ ./mynewnameis
./mynewnameis

### File:
GitHub repository: alx-low_level_programming
Directory: 0x0A-argc_argv
File: 0-whatsmyname.c

---

## 1. Silence is argument carried out by other means

### Description:
Write a program that prints the number of arguments passed into it.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-args.c -o nargs
$ ./nargs 
0
$ ./nargs hello
1
$ ./nargs "hello, world"
1
$ ./nargs hello, world
2

### File:
GitHub repository: alx-low_level_programming
Directory: 0x0A-argc_argv
File: 1-args.c

---

## 2. The best argument against democracy is a five-minute conversation with the average voter

### Description:
Write a program that prints all arguments it receives, each on a new line.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args
$ ./args 
./args
$ ./args "You can do anything, but not everything."
You
can
do
anything,
but
not
everything.

### File:
GitHub repository: alx-low_level_programming
Directory: 0x0A-argc_argv
File: 2-args.c

---

## 3. Neither irony nor sarcasm is argument

### Description:
Write a program that multiplies two numbers.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
$ ./mul 2 3
6
$ ./mul 2 -3
-6
$ ./mul 2 0
0
$ ./mul 245 3245342
795108790
$ ./mul
Error

### File:
GitHub repository: alx-low_level_programming
Directory: 0x0A-argc_argv
File: 3-mul.c

---

## 4. To infinity and beyond

### Description:
Write a program that adds positive numbers.

### Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
$ ./add 1 1
2
$ ./add 1 10 100 1000
1111
$ ./add 1 2 3 e 4 5
Error
$ ./add
0

### File:
GitHub repository: alx-low_level_programming
Directory: 0x0A-argc_argv
File: 4-add.c

---

This repository is part of the ALX Low Level Programming curriculum.

