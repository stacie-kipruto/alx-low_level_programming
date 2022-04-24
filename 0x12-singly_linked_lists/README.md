# Singly linked lists

# Description:
- The project uses this data structure:
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

## Files and Contents
- File 0-print_list.c: Print list - a function that prints all the elements of a list_t list. If str is NULL, print [0] (nil)

- File 1-list_len.c: a function that returns the number of elements in a linked list_t list.

- File 2-add_node.c: a function that adds a new node at the beginning of a list_t list.

- File 3-add_node_end.c: a function that adds a new node at the end of a list_t list. Return: the address of the new element, or NULL if it failed. str needs to be duplicated

- File 4-free_list.c: a function that frees a list_t list.

- File 100-first.c: a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
