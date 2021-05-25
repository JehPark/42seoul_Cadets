# 42seoul_Cadets

This is my whole journeys of 42 school in Seoul, South Korea.

## libft
### The goal of this project is to deeply understand the basic functions of standard library of c language.

4/25/2021

- Task libft is to make the library of 42 functions. We need to recap the functions in the picines.

4/26/2021
- I invited my two colleagues to review my codes and share the idea each other by github (bukim0329, leekh716)

4/28/2021
- libft was tested by the test war machine from https://github.com/ska42?tab=repositories, I am really appreciate to him.
My test results is not that great but now I can fix my code and I need to install clang to use the tool.
New collaborator was added stripy1026, SW-H. New Tester was added https://github.com/jtoty/Libftest

4/29/2021
- I got the newest version of libft.en.pdf. Therefore, I could do proper work for this problem.
Today I passed whole test from libft test. I decided to use another test tools to improve my codes.

4/30/2021
- I finished two other testerss on libft. I couldn't figure out how to solve two error of ft_split.c about memory leak.
I consider that it occurs by OS differences or valgrind error or tester error. (I don't have an error on gcc fsanitizer)
ft_printf is on progress.

5/4/2021
- I realized that we cannnot use the wildcard in the Makefile. Therefore, I started to modify it. I modified it and I choose hard coding style for naming all *.c files and also plus the s options in ar rc because I realize that it is the plus option for exsiting library.

5/6/2021
- First try was failed. It was not even compiled. I don't know why it fails.

5/7/2021
- It was my fault because there is a comment on the problem pdf that we should put all source files in the same folder with depth 1.

### libft results (5/7/2021)
![alt text](./Results/LibftResults?raw=true)

## ft_printf
### The goal of this project is to reproduce printf function. I learned how to deal with exception and structure of project.
5/1/2021
- Basic settings are finished. My design is simple. ft_printf function will takes all args and it starts pass it to convert functions and it will again pass it to switch functions, this will allocate the args to proper util functions, and actual printing will be executed in util functions. I consider this projects all about scalability of functions. Therefore, I am trying to write functions with KISS and DRY.

5/2/2021
- The ft_printf mandatory part was finished and debugging and testing for mandatory part is started.

5/3/2021
- Today is my first day in 42seoul as a Cadet but I couldn't visit the cluster. I got my first test result from tester and display it on the repo.

5/4/2021
- My first test results were horrorfic. I started to fix it step by step. Basic funtions are fixed. Next one is to solve the width of characters.

5/5/2021
- I started to solve null test case. All %s cases are cleared. %p is a next step.

5/7/2021
- I need to deal with only zero.

5/8/2021
- \* is left to deal with.

5/9/2021
- There are a lot of issues on differences between mac os and window wsl environment. I post my promblems on the slack of 42seoul, I got reply from one of experienced cadets but there is no definite answer. Therefore, I need to pend this subjects until 5/12/2021. Actually, I finished almost all cases.

5/14/2021
I finished them all but I didn't have a chance to submit it.

5/23/2021
Minor changes

## get_next_line
### The main goal of this project is to understand static variable and buffer.
5/9/2021
- I started gnl.

5/10/2021
- Basic structure was completed and I read whole 42 seoul slacks about gnl and I decides to use linked list to save fd structures.

5/12/2021
- I aced this project.  

![alt text](./Results/GNLResults.png?raw=true)

## push_swap
### The main goal of this project is to understand basic behavior of stacks

5/17/2021  
- Basic behavior finished. I decided to use quicksort but there are a lot of things to think. Wish me good luck

5/21/2021  
- I need to fix a lot of bugs and verify my program.  

5/25/2021  
- I finished basic requirement of subject.  
