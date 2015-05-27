/*
 * =====================================================================================
 *
 *       Filename:  stack.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/02/15 09:06:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Alvaro Mathe (AM), mathe_4_9@hotmail.com
 *        Company:  DAM
 *
 * =====================================================================================
 */

#include <stdlib.h>
#ifndef __STACK_H_
#define __STACK_H_

typedef struct TStack{
    int *data;
    int summit;
    int max;
}Stack;

#ifdef __cplusplus
extern "C" {
#endif

bool comparar(int element, Stack *my_stack)
bool push(int element, Stack *my_stack)
int pop (Stack *my_stack)
int lenthg (Stack *my_stack)
Stack *create_stack(sizeof max_elements)
void destroy_stack(Stack *my_stack)

#ifdef __cplusplus
}
#endif

#endif
