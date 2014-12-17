/*
 * =====================================================================================
 *
 *       Filename:  list_of_words.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/12/14 10:04:42
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

    int j = 0;
    const char *list[] = {
	"bread",
	"toast",
	"bacon"
    };

    for(int i = 0; i < sizeof(list); i++){
	printf("%s\n", list[j]);
	j++;
    }

    return EXIT_SUCCESS;

}
