#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
	// We check if argc has user input or not. 
	// argc = 1 if we run our program without any arguments int the terminal -> ./build/exitStatus.exe
	// argv[0] = "./build/exitStatus.exe"
	
	// In our program argc = 2 because we add one argument in CLI when we run the code -> ./build/exitStatus.exe Name 
	// argv[0] = "./build/exitStatus.exe"
	// argv[1] = "Name"

	// We can't use argv[2] or check array elements with higher index then argc-1 because 
	// we step out of the argv array boundary. In that area of memory can be any value placed by other programs
	// so it is dangerous to modify or eaven read those elements.

	if (argc != 2)	
	{
		printf("Missing argument!\n");
		// The return value of the program will be one, which indicates that there was a problem during running our code
		return 1;
	}
	else
	{
		printf("Hello, %s!\n", argv[1]);
		// The return value of zero indicates, that our progrma run with success (without problems)
		return 0;
	}
}