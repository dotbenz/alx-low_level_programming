#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
dlistint_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}

head = NULL;
}
