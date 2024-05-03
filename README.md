# K11dot4improved
## Description
This program has it's genesis in a demo program from chapter 11 of the book,
Kochan, Stephen, "Programming in C 4th ed." It is invoked from the command
line with two argugments: 1.) a number in hex representing the word to be,
"rotated" (rotated left or right a specified number of bits, and if there is
overflow, it wraps around to the other side), and 2.) the number in decimal 
of bits to be rotated left or right.
## Notes:
12/11/2023
    Set up project on local host and github.com.
    Create branch inputtest and get argv[1] and argv[2] into program
variables.

03/14/2024
On branch Inputtest. Trying to get the command line parameters(the character 
array expression of a binary number expressed in hex, and the number of 
positions to rotate it, char array of hex numbers) into program variables so
that I don't destroy the command line arguments. I will use numbers to limit
how far through the command line arrays that I go(some rudimentary security).

Found several bugs: a typo in the makefile, updated program constants that 
turned out to be wrong. Found problems(a success), added functionality
(a success), got the program(this far) to work(another success). Got to 
practice usinng GDB(a success), used it to find the bugs(a success).

Next: get back on track in developing the program.

03/18/2024
What are the lengths of argv[1] and argv[2]?
I have decided to refocus this program and make it a shift program. Shift an
eight bit number, arg1, left or right by a an int or smaller left or right 
depending on the sign. 

Make the design and implementation stuped simple, as much as possible.

04/17/2024
Memset to initialize program strings to '\0'. strncpy to copy command line
arg strings to program strings. What next? As I remember, I wanted to scale
back the design. Make it a shift program like in the book, then morph it into
what ever else I want. Shift is a C operator. Is there anything more to do 
with input validation? Is arg1 a valid hex character? Is arg2 correct? Do I 
need to turn the char strings into ints? A thing to do: study the capability
of the C language in the area of characters and character strings -- I think
that it is quite amazing.

Strip leading 0x or 0X. Does the remaining string contain valid hex chars?

Make arg2 larger, to contain a possible minus sign. - indicates shift right.

04/30/2024
Can validate first number. 

05/02/2024
found bugs; reorganized program logic. Saw analog betwen procedural expression
of a program and model, controller elements from MVC.

























