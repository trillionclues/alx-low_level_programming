#ifndef _HASH_TABLES_
#define _HASH_TABLES_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct hash_node_s - Node to hash tables
 * @key: the key, string
 * @value: value corresponding to a key
 * @next: pointer to the next node on list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;


/**
 * struct hash_table_s - hash table data structure
 * @size: size of the array
 * @array: array of @size
 * Each cell in the array is a pointer to the first node of linked list
 * because our hashtable needs to use a chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);


/**
 * struct shash_node_s - node of sorted hash table
 * @key: Key, string
 * @value: value corresponding to a key
 * @next: pointer to the next node of the list
 * @sprev: pointer to the previous element of the sorted linked list
 * @snext: pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;


/**
 * struct shash_table_s - sorted hash table data structure
 * @size: size of the array
 * @array: array of @size
 * each cell in the array is a pointer to the first node of linked list
 * because our hashtable needs to use a chaining collision handling
 * @shead: pointer to the first element of the sorted linked list
 * @stail: pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;


shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* _HASH_TABLES_ */
