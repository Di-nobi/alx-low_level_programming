#include "hash.h"

/**
 * hash_table - creates a hash table
 * @size: size of the array of the hashsh table
 * Return: Pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (!size)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (ht == 0)
		return (NULL);
	ht->size = size;
	ht->array = calloc((size_t)ht->size, sizeof(hash_node_t *));
	if (!ht->array)
		return (NULL);

	return (ht);
}
