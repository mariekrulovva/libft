# Libft


The main task is to write your own library of functions for further use in projects in C.  
The Functions must be implemented in the same way as the original functions from the standard library.  
However, all functions must be protected from entering invalid data, memory leaks, false segmentation, and so on. 

____
### Table of contents
<!--ts-->
   * [Common Instructions](#common-instructions)
   * [Function Prototype](#function-prototype)
   * [Mandatory Part](#mandatory-part)
   * [Bonus Part](#bonus-part)
   * [Functions Used](#functions-used)
<!--te-->
____
### Common Instruction

* Your project must be written in C.
* Your project must be written in accordance with the Norm. If you have bonus files/functions, they are included in the norm check and you will receive a 0 if there is a norm error inside.
* Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors. If this happens, your project will be considered non functional and will receive a 0 during the evaluation.
* All heap allocated memory space must be properly freed when necessary. No leaks will be tolerated.
* If the subject requires it, you must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink.
* Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
* To turn in bonuses to your project, you must include a rule bonus to your Makefile, which will add all the various headers, librairies or functions that are forbidden on the main part of the project. Bonuses must be in a different file _bonus.{c/h} if the subject does not specify anything else. Mandatory and bonus part evaluation is done separately.
* If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.
* We encourage you to create test programs for your project even though this work **won’t have to be submitted and won’t be graded**. It will give you a chance to easily test your work and your peers’ work. You will find those tests especially useful during your defence. Indeed, during defence, you are free to use your tests and/or the tests of the peer you are evaluating.
* Submit your work to your assigned git repository. Only the work in the git repository will be graded. If Deepthought is assigned to grade your work, it will be done after your peer-evaluations. If an error happens in any section of your work during Deepthought’s grading, the evaluation will stop. 
____

### List functions  
| Part 1  | Part 2 | Bonus |
| ------------- | ------------- | ------------- |
| ft_memset  | ft_substr  | ft_lstnew  |
| ft_bzero  | ft_strjoin  | ft_lstadd_front  |
| ft_memcpy  | ft_strtrim  | ft_lstsize  |
| ft_memccpy  | ft_split  | ft_lstlast  |
| ft_memmove  | ft_itoa  | ft_lstadd_back  |
| ft_memchr  | ft_strmapi  | ft_lstdelone  |
| ft_memcmp  | ft_putchar_fd  | ft_lstclear |
| ft_strlen  | ft_putstr_fd  | ft_lstiter  |
| ft_strlcpy  |ft_putendl_fd  | ft_lstmap  |
| ft_strlcat  | ft_putnbr_fd  |  |
| ft_strchr  |   |   |
| ft_strrchr  |   |   |
| ft_strnstr  |   |   |
| ft_strncmp  |   |   |
| ft_atoi  |   |   |
| ft_isalpha  |   |   |
| ft_isdigit  |  |   |
| ft_isalnum  |   |   |
| ft_isascii  | |   |
| ft_isprint |   |   |
| ft_toupper  |   |   |
| ft_tolower  |  |   |
| ft_calloc  |   |   |
| ft_strdup  |  |   |
### The results of the tests "Libftest"
![](https://raw.githubusercontent.com/mariekrulovva/libft/master/img/1.png) 
![](https://raw.githubusercontent.com/mariekrulovva/libft/master/img/2.png) 
Link to the tests: [Click](https://github.com/jtoty/Libftest)

### The results of the tests "libft-unit-test"
![](https://raw.githubusercontent.com/mariekrulovva/libft/master/img/3.png)  
![](https://raw.githubusercontent.com/mariekrulovva/libft/master/img/4.png)    
Link to the tests: [Click](https://github.com/alelievr/libft-unit-test)

### Other
Basic commands for compilation:
```
make (make all) - compilation of 1 part and 2 part functions  
make bonus - compilation of 1 part, 2 part and bonus part functions  
make clean - clearing *.o files  
make fclean - clearing *. o files and libraries  
```
  
**Author:** *[Maria Krulova](https://github.com/mariekrulovva)*# :white_check_mark: Libft (project 2021) 
