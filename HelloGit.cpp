#include <stdio.h>
#include <stdlib.h>
#include <exception>

class UnknownError : public exception
{
	char const *what() throw()
	{
		return "Eck, what is the error baby?";
	}
}


class DivisionByZero : public exception
{
	char const *what() throw()
	{
		return "Try to divide a number by zero\n";
	}
}



int main(int argc, char *argv[])
{
	try
	{
		throw(UnknowError());
	}
	catch (UnknownError &e)
	{
		fprintf(stderr, "It's an error: %s\n", e.what());
	}

	printf("Hello, this is my first Git using\n");
}
