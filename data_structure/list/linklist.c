/*
 * =====================================================================================
 *
 *       Filename:  linklist.c
 *
 *    Description:  linklist
 *
 *        Version:  1.0
 *        Created:  03/01/2012 03:29:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  zhangliancheng (zlc), zlc@bupt.edu.cn
 *        Company:  IPOC of BUPT   http://www.zhangliancheng.com
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct list_node {
	void *node_data;
	struct list_node *prev;
	struct list_node *next;
};

void init_list(struct list_node **head)
{
	*head = malloc(sizeof(struct list_node));
	(*head)->node_data = malloc(sizeof(int));
	*((int *)(*head)->node_data) = 0;
	(*head)->prev = NULL;
	(*head)->next = NULL;
	return ;
}

int list_append(struct list_node *node, struct list_node *head)
{
	struct list_node *p;
	p = head;

	if (p == NULL)
		return -1;

	while (p->next != NULL)
		p = p->next;
	p->next = node;
	node->next = NULL;
	node->prev = p;

	return 0;
}

void list_print(struct list_node *head)
{
	struct list_node *p;
	struct list_node *q;

	if (head == NULL)
		return ;

	p = head->next;
	while (p != NULL)
	{
		printf("%d ", *((int *)p->node_data));
		q = p;
		p = p->next;
	}
	printf("\n");

	while (q->prev != NULL)
	{
		printf("%d ", *((int *)q->node_data));
		q = q->prev;
	}
	printf("\n");
}

list_reverse(struct list_node *head)
{
}

int main(void)
{
	int i;
	struct list_node *head;
	struct list_node *node;

	init_list(&head);

	for (i = 1; i < 10; ++i)
	{
		node = malloc(sizeof(struct list_node));
		node->node_data = malloc(sizeof(int));
		*((int *)(node->node_data)) = i;
		list_append(node, head);
	}

	list_print(head);

	return 0;
}
