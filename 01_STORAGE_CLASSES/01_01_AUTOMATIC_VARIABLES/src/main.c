/**********************************************************************************
*                                                                                 *
*                          AUTOMATIC VARIABLES                                    *
*                                                                                 *
***********************************************************************************/
#include <stdio.h>
#include <stdint.h>

// the lifetime of a variable: is the time period during wich variable exist in 
// computer memory -> some exist briefly, some are repeatedly created and destroyed,
// and others exist for the entire execution of a program.

// a variable's visivility or linkage: determines for a multiple=source-files whether
// the identifier is know only in the current source file or in any source file with 
// proper declarations

// C provides 4 storage classes, the four can be splited into two storage durations:
// -automatic storage duration
// -static storage duration

// the keyword auto is used to declare variables of automatic storage duration:
// - created when the block in which they are defined is entered
// - exist while the block is active
// - destroyed when the block is exit

// local variables have automatic storage duration by default


int main()
{
	int x; // local variable
	printf("aloia\n");

	return 0;
}

int func_name()
{
	auto int y; // local variable

	return y;
}
