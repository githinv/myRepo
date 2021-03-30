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

void loclPrif (char* message);

int
main(int argc, char* argv[])
{
    printf("My first git repo\n");
    printf("\nProgram name: %s\n",argv[0]);

    debugPrint("from debug fun");
    localPrint("from local debug");

    return(0);
}

void localPrint (char* message){
    printf("Debug_L > %s\n", message);
}

