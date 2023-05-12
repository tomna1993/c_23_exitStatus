# c_23_exitStatus

## DESCRIPTION

Error codes and exit statuses are all around programming. We as programmers can indicate if there is a problem with running our program or give feedback how our program has run.

If a program after running returns **0** it means the running of the program completed without any issue. In most cases we don't have to include a return value of zero at the end of our program, but it is hardly suggested to do.

```c
return 0;
```

To check return value of our program we can use the bash command below in terminal:

```bash
echo $?
```

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
