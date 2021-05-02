# 42seoul_Cadets

This is my whole journeys of 42 school in Seoul, South Korea.

4/25/2021
Task libft is to make the library of 42 functions. We need to recap the functions in the picines.

4/26/2021
I invited my two colleagues to review my codes and share the idea each other by github (bukim0329, leekh716)

4/28/2021
libft was tested by the test war machine from https://github.com/ska42?tab=repositories, I am really appreciate to him.
My test results is not that great but now I can fix my code and I need to install clang to use the tool.
New collaborator was added stripy1026, SW-H. New Tester was added https://github.com/jtoty/Libftest

4/29/2021
I got the newest version of libft.en.pdf. Therefore, I could do proper work for this problem.
Today I passed whole test from libft test. I decided to use another test tools to improve my codes.

4/30/2021
I finished two other testerss on libft. I couldn't figure out how to solve two error of ft_split.c about memory leak.
I consider that it occurs by OS differences or valgrind error or tester error. (I don't have an error on gcc fsanitizer)
ft_printf is on progress.

5/1/2021
Basic settings are finished. My design is simple. ft_printf function will takes all args and it starts pass it to convert functions and it will again pass it to switch functions, this will allocate the args to proper util functions, and actual printing will be executed in util functions. I consider this projects all about scalability of functions. Therefore, I am trying to write functions with KISS and DRY.

5/2/2021
The ft_printf mandatory part was finished and debugging and testing for mandatory part is started.
