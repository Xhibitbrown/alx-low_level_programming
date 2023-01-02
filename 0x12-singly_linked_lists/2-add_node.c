#include "lists.h"

/**
 * add_node - add a new node to the neginning of a list_t
 * @head: head of node
 * @str: element string to add to list_t
 * Return: address of new element, NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	int len;


	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; )
		len++;

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
