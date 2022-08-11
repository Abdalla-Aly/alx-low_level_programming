#ifndef LISTS_H
#define LISTS_H

/**
 * struct lsit_s - singly linked list
 * @str: string (malloc'd string).
 * @len: length of the string.
 * @next: points to the next node.
 *
 * Description: singly linked list struct node.
 */
typedef struct lsit_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);