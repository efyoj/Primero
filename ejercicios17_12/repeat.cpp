/*
 * =====================================================================================
 *
 *       Filename:  01.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/12/14 09:14:42
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alvaro Mathe (AM), mathe_4_9@hotmail.com
 *        Company:  DAM
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    for(int i = 0; i < 10; i++)
	printf("%s \n", argv[1]);
    
    return EXIT_SUCCESS;

}
