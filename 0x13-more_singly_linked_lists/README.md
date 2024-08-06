Tasks
Print List

Prototype: size_t print_listint(const listint_t *h);
Description: Prints all elements of a listint_t list. Returns the number of nodes.
File: 0-print_listint.c
List Length

Prototype: size_t listint_len(const listint_t *h);
Description: Returns the number of elements in a listint_t list.
File: 1-listint_len.c
Add Node

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Description: Adds a new node at the beginning of a listint_t list. Returns the address of the new element, or NULL if it failed.
File: 2-add_nodeint.c
Add Node at the End

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Description: Adds a new node at the end of a listint_t list. Returns the address of the new element, or NULL if it failed.
File: 3-add_nodeint_end.c
Free List

Prototype: void free_listint(listint_t *head);
Description: Frees a listint_t list.
File: 4-free_listint.c
Free List (Set to NULL)

Prototype: void free_listint2(listint_t **head);
Description: Frees a listint_t list and sets the head to NULL.
File: 5-free_listint2.c
Pop

Prototype: int pop_listint(listint_t **head);
Description: Deletes the head node of a listint_t linked list and returns the head node’s data (n). Returns 0 if the linked list is empty.
File: 6-pop_listint.c
Get Node at Index

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
Description: Returns the nth node of a listint_t linked list, where index starts at 0. Returns NULL if the node does not exist.
File: 7-get_nodeint.c
Sum List

Prototype: int sum_listint(listint_t *head);
Description: Returns the sum of all the data (n) in a listint_t linked list. Returns 0 if the list is empty.
File: 8-sum_listint.c
Insert Node at Index

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
Description: Inserts a new node at a given position (idx). Returns the address of the new node, or NULL if it failed.
File: 9-insert_nodeint_at_index.c
Repo Structure
GitHub Repository: alx-low_level_programming
Directory: 0x13-more_singly_linked_lists
Files:
lists.h - Header file with function prototypes
0-print_listint.c - Implementation for printing all list elements
1-listint_len.c - Implementation for returning the number of list elements
2-add_nodeint.c - Implementation for adding a node at the beginning
3-add_nodeint_end.c - Implementation for adding a node at the end
4-free_listint.c - Implementation for freeing the list
5-free_listint2.c - Implementation for freeing the list and setting head to NULL
6-pop_listint.c - Implementation for deleting the head node
7-get_nodeint.c - Implementation for getting a node at a specific index
8-sum_listint.c - Implementation for summing all node data
9-insert_nodeint_at_index.c - Implementation for inserting a node at a specific index
