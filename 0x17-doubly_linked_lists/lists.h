#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - Doubly linked list node
 * @n: Integer data
 * @prev: Pointer to the previous node
 * @next: Pointer to the next node
 */
typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - Prints all elements of a doubly linked list
 * @h: Pointer to the head of the list
 * Return: Number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: Pointer to the head of the list
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Data to insert in the new node
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: Data to insert in the new node
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - Returns the node at a given index
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 * Return: Pointer to the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * sum_dlistint - Returns the sum of all data in a doubly linked list
 * @head: Pointer to the head of the list
 * Return: Sum of all data in the list
 */
int sum_dlistint(dlistint_t *head);

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: Double pointer to the head of the list
 * @idx: Index to insert the new node
 * @n: Data to insert in the new node
 * Return: Address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete
 * Return: 1 on success, or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
