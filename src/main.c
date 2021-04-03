/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  Tuesday 30 March 2021 05:14:55  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:   (githinv.in@gmail.com),
 *   Organization:
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "debugFun.h"

void displayLcl (char* data);

// main function 
int
main(int argc, char* argv[])
{
    // print the program label
    printf("My first git repo\n");
    // print the binary name
    printf("\nProgram name: %s\n",argv[0]);

    // calling the debug functionw with argument
    debugPrint("from debug fun");
    displayLcl("hello");

    return(0); // return from the main
}

void 
displayLcl (char* data)
{
	printf("Debug_LC %s", data);
}
