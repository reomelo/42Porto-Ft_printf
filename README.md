![Screenshot from 2023-11-01 16-49-27](https://github.com/reomelo/42Porto-ft_printf/assets/73884501/5410d066-9534-459b-bcd3-406d5001fc37)

### Description of the project:
This project consists of implementing a custom version of the C printf function.

#### Available flags:
`%c` - Prints a single character   
`%s` - Prints a string   
`%p` - Prints a pointer address   
`%d` or `%i` - Prints a signed integer   
`%u` - Prints an unsigned integer   
`%x` or `%X` - Prints an unsigned integer in hexadecimal format

### Installing and running the project:
1- Clone this repository and enter it:  

	git clone https://github.com/reomelo/42Porto-ft_printf.git && cd 42Porto-ft_printf

2- Run `make` and compile your program with `libftprintf.a`:

	make && cc -Wall -Wextra -Werror main.c libftprintf.a

### Makefile Available Targets:  
`make` or `make all` - compiles the project      
`make clean` - wipes all object files   
`make fclean` - deletes libftprintf.a and all object files   
`make re` - fclean  + all

___
######  At [42School](https://en.wikipedia.org/wiki/42_(school)), almost every project must be written in accordance to the [Norm](https://github.com/42School/norminette). As a result, parts of the code are not as clean, efficient or straight forward as they could be.
