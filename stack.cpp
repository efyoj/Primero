/*
 * =====================================================================================
 *
 *       Filename:  stack.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  24/02/15 10:48:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alvaro Mathe (AM), mathe_4_9@hotmail.com
 *        Company:  DAM
 *
 * =====================================================================================
 */

#include <stadlib.h>
#include "hanoi.h"

bool comparar(int element, Stack *my_stack){
    if(element < my_stack->data[my_stack->summit-1])
	return true;
    else
	return false;
}

bool push(int element, Stack *my_stack){
    if(my_stack->summit < my_stack->max)
	my_stack->data[my_stack->summit++] = element;
    return true;
}



int pop (Stack *my_stack){
    if(my_stack->summit <=0)
	return 0;
    return my_stack->data[my_stack->summit-1];
}

int lenthg (Stack *my_stack){
    return my_stack->summit;
}

Stack *create_stack(sizeof max_elements){
    Stack *my_stack = (Stack*) malloc(sizeof(Stack));
    my_stack->summit = 0;
    my_stack->max = max_elements;
    my_stack->data = (int *)malloc(max_elements * sizeof(int));
    return my_stack;
}

void destroy_stack(Stack *my_stack){
    free(my_stack->data);
    free(my_stack);
}

