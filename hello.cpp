/* This is a trial of multi line comment
All of this text should not read as code
Documenting code is important for big teams /*

#include <iostream>

/* Denotes the start of a preprocessor command telling it to include the contents of iostream /*

int main()

/* Defines the entry point of the program
The int means it will return a value because main follows /*

{
// Defines a block of code

	std::cout << "Programing in C++ is pretty cool!";

/* Namespace and variable. Means to take the std version of cout. 
<< is an operator which tells the program to pass the contents "x" to the output stream which is std::cout. The semi-colon ends the program /*

}
// Closes the main block of code

/* Troubleshooting notes
- Name the file "file.cpp"
- Grant the proper file permissions in the directory
- Do not forget semi-colons
- C++ is case sensative
- dir lists files in current directory
- cl.exe compiles the file.cpp which outputs file.exe and file.obj
- file.exe runs the new executable /*
