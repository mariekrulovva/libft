# Libft


The main task is to write your own library of functions for further use in projects in C.  
The Functions must be implemented in the same way as the original functions from the standard library.  
However, all functions must be protected from entering invalid data, memory leaks, false segmentation, and so on. 

____
### Table of contents
<!--ts-->
   * [Common Instructions](#common-instructions)
   * [Mandatory Part](#mandatory-part)
   * [List functions](#list-functions)
   * [Part 1 - Libc functions](#part-1)
   * [Part 2 - Additional functions](#part-2-additional-functions)
   * [Bonus Part](#bonus-part)
   * [Other](#other)
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
### Mandatory Part

Program name | libft.a
----- | -------|
Turn in files | Makefile, libft.h, ft_*.c
Makefile | NAME, all clean, fclean, re
External functs. | Detailed below
Libft autorized | n/a
Description | Write your own library: a collection of functions that will be a useful tool for your cursus.

#### Technical considerations

* Declaring global variables is forbidden.
* If you need helper functions to split a more complex function, define them as static functions. This way, their scope will be limited to the appropriate file.
* Place all your files at the root of your repository.
* Turning in unused files is forbidden.
* Every .c files must compile with the flags -Wall -Wextra -Werror.
* You must use the command ar to create your library. Using the libtool command is forbidden.
* Your libft.a has to be created at the root of your repository.

____
### List functions  

| Part 1  | Part 2 | Bonus |
| ------------- | ------------- | ------------- |
| isalpha  | ft_substr | ft_lstnew  |
| isdigit  | ft_strjoin | ft_lstadd_front  |
| isalnum  | ft_strtrim | ft_lstsize  |
| isascii  | ft_split | ft_lstlast  |
| isprint  | ft_itoa | ft_lstadd_back  |
| strlen  | ft_strmapi | ft_lstdelone  |
| memset  | ft_striteri | ft_lstclear |
| bzero  | ft_putchar_fd | ft_lstiter  |
| memcpy  | ft_putstr_fd | ft_lstmap  |
| memmove  | ft_putendl_fd |   |
| strlcpy  | ft_putnbr_fd |   |
| strlcat  |   |   |
| toupper  |   |   |
| tolower  |   |   |
| strchr  |   |   |
| strrchr  |   |   |
| strncmp  |   |   |
| memchr  |   |   |
| memcmp  |   |   |
| strnstr |   |   |
| atoi  |   |   |
| calloc  |   |   |
| strdup  |   |   |
____
### Part 1 - Libc functions
To begin, you must redo a set of functions from the libc. Your functions will have the same prototypes and implement the same behaviors as the originals. They must comply with the way they are defined in their man. The only difference will be their names. They will begin with the ’ft_’ prefix. For instance, strlen becomes ft_strlen.

💡 Some of the functions’ prototypes you have to redo use the ’restrict’ qualifier. This keyword is part of the c99 standard. It is
therefore forbidden to include it in your own prototypes and to compile your code with the -std=c99 flag.
____
### Part 2 - Additional functions

In this second part, you must develop a set of functions that are either not in the libc, or that are part of it but in a different form.

💡 Some of the following functions can be useful for writing the functions of Part 1.

Function name | ft_substr
----- | -----
Turn in files | -
Parameters | fs: The string from which to create the substring. start: The start index of the substring in the string ’s’. len: The maximum length of the substring.
Return value | The substring. NULL if the allocation fails.
External functs. | malloc
Description  | Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.

Prototype:
```
char *ft_substr(char const *s, unsigned int start, size_t len); 
```

Function name | ft_strjoin
----- | -----
Turn in files | -
Parameters | s1: The prefix string. s2: The suffix string.
Return value | The new string. NULL if the allocation fails.
External functs. | malloc
Description  | Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

Prototype:
```
char *ft_strjoin(char const *s1, char const *s2);
```

Function name | ft_strtrim
----- | -----
Turn in files | -
Parameters | s1: The string to be trimmed. set: The reference set of characters to trim.
Return value | The trimmed string. NULL if the allocation fails.
External functs. | malloc
Description  | Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

Prototype:
```
char *ft_strtrim(char const *s1, char const *set);
```

Function name | ft_split
----- | -----
Turn in files | -
Parameters | s: The string to be split. c: The delimiter character.
Return value | The array of new strings resulting from the split. NULL if the allocation fails.
External functs. | malloc, free
Description  | Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.

Prototype:
```
char **ft_split(char const *s, char c);
```

Function name | ft_itoa
----- | -----
Turn in files | -
Parameters | n: the integer to convert.
Return value | The string representing the integer. NULL if the allocation fails.
External functs. | malloc
Description  | Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

Prototype:
```
char *ft_itoa(int n);
```

Function name | ft_strmapi
----- | -----
Turn in files | -
Parameters | s: The string on which to iterate. f: The function to apply to each character.
Return value | The string created from the successive applications of ’f’. Returns NULL if the allocation fails.
External functs. | malloc
Description  | Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.

Prototype:
```
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

Function name | ft_striteri
----- | -----
Turn in files | -
Parameters | s: The string on which to iterate. f: The function to apply to each character.
Return value | None
External functs. | None
Description  | Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.

Prototype:
```
void ft_striteri(char *s, void (*f)(unsigned int, char*));
```

Function name | ft_putchar_fd
----- | -----
Turn in files | -
Parameters | c: The character to output. fd: The file descriptor on which to write.
Return value | None
External functs. | write
Description  | Outputs the character ’c’ to the given file descriptor.

Prototype:
```
void ft_putchar_fd(char c, int fd);
```

Function name | ft_putstr_fd
----- | -----
Turn in files | -
Parameters | s: The string to output. fd: The file descriptor on which to write.
Return value | None
External functs. | write
Description  | Outputs the string ’s’ to the given file descriptor.

Prototype:
```
void ft_putstr_fd(char *s, int fd);
```

Function name | ft_putendl_fd
----- | -----
Turn in files | -
Parameters | s: The string to output. fd: The file descriptor on which to write.
Return value | None
External functs. | write
Description  | Outputs the string ’s’ to the given file descriptor followed by a newline.

Prototype:
```
void ft_putendl_fd(char *s, int fd);
```

Function name | ft_putnbr_fd
----- | -----
Turn in files | -
Parameters | n: The integer to output. fd: The file descriptor on which to write.
Return value | None
External functs. | write
Description  | Outputs the integer ’n’ to the given file descriptor.

Prototype:
```
void ft_putnbr_fd(int n, int fd);
```

____
### Bonus Part

If you completed the mandatory part, do not hesitate to go further by doing this extra one. It will bring bonus points if passed successfully. 
Functions to manipulate memory and strings is very useful. But you will soon discover that manipulating lists is even more useful.
You have to use the following structure to represent a node of your list. Add its declaration to your libft.h file:

```
typedef struct s_list
{
   void *content;
   struct s_list *next;
}  t_list;
```
The members of the t_list struct are:
* content: The data contained in the node.
void * allows to store any kind of data.
* next: The address of the next node, or NULL if the next node is the last one.
In your Makefile, add a make bonus rule to add the bonus functions to your libft.a.

Implement the following functions in order to easily use your lists.

Function name | ft_lstnew
----- | -----
Turn in files | -
Parameters | content: The content to create the node with.
Return value | The new node
External functs. | malloc
Description  | Allocates (with malloc(3)) and returns a new node. The member variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

Prototype:
```
t_list *ft_lstnew(void *content);
```

Function name | ft_lstadd_front
----- | -----
Turn in files | -
Parameters | lst: The address of a pointer to the first link of a list. new: The address of a pointer to the node to be added to the list.
Return value | None
External functs. | None
Description  | Adds the node ’new’ at the beginning of the list.

Prototype:
```
void ft_lstadd_front(t_list **lst, t_list *new);
```

Function name | ft_lstsize
----- | -----
Turn in files | -
Parameters | lst: The beginning of the list.
Return value | The length of the list
External functs. | None
Description  | Counts the number of nodes in a list.

Prototype:
```
int ft_lstsize(t_list *lst);
```

Function name | ft_lstlast
----- | -----
Turn in files | -
Parameters | lst: The beginning of the list.
Return value | Last node of the list
External functs. | None
Description  | Returns the last node of the list.

Prototype:
```
t_list *ft_lstlast(t_list *lst);
```

Function name | ft_lstadd_back
----- | -----
Turn in files | -
Parameters | lst: The address of a pointer to the first link of a list. new: The address of a pointer to the node to be
added to the list.
Return value | None
External functs. | None
Description  | Adds the node ’new’ at the end of the list.

Prototype:
```
void ft_lstadd_back(t_list **lst, t_list *new);
```

Function name | ft_lstdelone
----- | -----
Turn in files | -
Parameters | lst: The node to free. del: The address of the function used to delete the content.
Return value | None
External functs. | free
Description  | Takes as a parameter a node and frees the memory of the node’s content using the function ’del’ given as a parameter and free the node. The memory of ’next’ must not be freed.

Prototype:
```
void ft_lstdelone(t_list *lst, void (*del)(void *));
```

Function name | ft_lstclear
----- | -----
Turn in files | -
Parameters | lst: The address of a pointer to a node. del: The address of the function used to delete the content of the node.
Return value | None
External functs. | free
Description  | Deletes and frees the given node and every successor of that node, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.

Prototype:
```
void ft_lstclear(t_list **lst, void (*del)(void *));
```

Function name | ft_lstiter
----- | -----
Turn in files | -
Parameters | lst: The address of a pointer to a node. f: The address of the function used to iterate on the list.
Return value | None
External functs. | None
Description  | Iterates the list ’lst’ and applies the function ’f’ on the content of each node.

Prototype:
```
void ft_lstiter(t_list *lst, void (*f)(void *));
```

Function name | ft_lstmap
----- | -----
Turn in files | -
Parameters | lst: The address of a pointer to a node. f: The address of the function used to iterate on the list. del: The address of the function used to delete the content of a node if needed.
Return value | The new list. NULL if the allocation fails.
External functs. | malloc, free
Description  | Iterates the list ’lst’ and applies the function ’f’ on the content of each node. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed.

Prototype:
```
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
____
### Other
Basic commands for compilation:
```
make (make all) - compilation of 1 part and 2 part functions  
make bonus - compilation of 1 part, 2 part and bonus part functions  
make clean - clearing *.o files  
make fclean - clearing *. o files and libraries  
```
