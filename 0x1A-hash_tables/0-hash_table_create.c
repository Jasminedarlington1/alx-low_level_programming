#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: parameter
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_c;
	unsigned long int i;

	hash_table_c = malloc(sizeof(hash_table_t));

	if (hash_table_c == NULL)
		return (NULL);

	hash_table_c->size = size;
	hash_table_c->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table_c->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table_c->array[i] = NULL;
	}

	return (hash_table_c);
}
