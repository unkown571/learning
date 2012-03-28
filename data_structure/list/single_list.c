/*
 * =====================================================================================
 *
 *       Filename:  single_list.c
 *
 *    Description:  single list
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

struct list_node 
{
	int node_data;
	struct list_node *next;
};

int init_list(struct list_node **head)
{
	*head = malloc(sizeof(struct list_node));
	if (*head == NULL)
	{
		return -1;
	}
	(*head)->node_data = 0;
	(*head)->next = NULL;

	return 0;
}

int list_append(struct list_node *node, struct list_node *head)
{
	struct list_node *p;
	p = head;

	if (p == NULL)
	{
		return -1;
	}

	while (p->next != NULL)
		p = p->next;
	p->next = node;
	node->next = NULL;
	head->node_data++;

	return 0;
}

int list_print(const struct list_node *head)
{
	struct list_node *p;

	if (head == NULL)
	{
		return -1;
	}

	p = head->next;
	while (p != NULL)
	{
		printf("%d ", p->node_data);
		p = p->next;
	}
	printf("\n");

	return 0;
}

int list_destroy(struct list_node *head)
{
	struct list_node *p;
	struct list_node *q;

	p = head;
	while (p != NULL)
	{
		q = p->next;
		free(p);
		p = q;
	}

	return 0;
}

int list_reverse(struct list_node *head)
{
	/* No head node, invalid */
	if (head == NULL)
	{
		return -1;
	}

	/* No data node or only a single data node */
	if (head->next == NULL || head->next->next == NULL)
	{
		return 0;
	}

	struct list_node *p;
	struct list_node *q;

	p = q = head->next->next;
	head->next->next = NULL;

	while (q != NULL)
	{
		q = q->next;
		p->next = head->next;
		head->next = p;
		p = q;
	}

	return 0;

}

struct list_node *list_last(const struct list_node *head, size_t n)
{
	if (n < 1 || head == NULL || head->next == NULL)
	{
		return NULL;
	}

	struct list_node *p;
	const struct list_node *q;

	p = head->next;
	q = head->next;
	while (q != NULL && n--)
	{
		q = q->next;
	}

	while (q != NULL)
	{
		q = q->next;
		p = p->next;
	}

	return p;
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
		node->node_data = i; 
		node->next = NULL;
		list_append(node, head);
	}

	list_print(head);
	printf("head->node_data = %d\n", head->node_data);

	list_reverse(head);
	list_print(head);
	printf("the last 3th node data:%d\n", list_last(head, 3)->node_data);

	list_destroy(head);

	return 0;
}
