// Assignment name  : sort_list
// Expected files   : sort_list.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write the following functions:

// t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

// This function must sort the list given as a parameter, using the function 
// pointer cmp to select the order to apply, and returns a pointer to the 
// first element of the sorted list.

// Duplications must remain.

// Inputs will always be consistent.

// You must use the type t_list described in the file list.h 
// that is provided to you. You must include that file 
// (#include "list.h"), but you must not turn it in. We will use our own 
// to compile your assignment.

// Functions passed as cmp will always return a value different from 
// 0 if a and b are in the right order, 0 otherwise.

// For example, the following function used as cmp will sort the list 
// in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}

#include "list.h"

t_list	*sort_list(t_list* lst)
{
	t_list *tmp;
	int swap;

	tmp = lst;
	while (lst->next != 0)
	{
		if (ascending(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

#include "list.h"
#include <stdlib.h>
#include <stdio.h>


void print_list(t_list *list)
{
	while(list != NULL)
	{
		printf("%d", list->data);
		list = list->next;
	}
}

int main()
{
	t_list *head = NULL;
	t_list *second = NULL;
	t_list *third = NULL;
	head = malloc(sizeof(t_list));
	second = malloc(sizeof(t_list));
	third = malloc(sizeof(t_list));

	head->data = 45;
	head->next = second;

	second->data = 10;
	second->next = third;

	third->data = 30;
	third->next = NULL;

	//head = sort_list(head);
	print_list(head);
	//printf("%d", head->data);
}


