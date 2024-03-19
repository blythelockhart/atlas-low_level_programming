#include "hash_tables.h"
/**
 * key_index - Computes the index of a key in the hash table's array.
 * @key: The key string.
 * @size: Size of the array of the hash table.
 * Return: The index at which the key/value pair should be stored in the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
