#include <stdlib.h>

typedef struct hash_table_s
{
    unsigned long int size;
    void **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;

    if (size < 1) return NULL; /* invalid size */

    /* Attempt to allocate memory for the table structure */
    if ((new_table = malloc(sizeof(hash_table_t))) == NULL) {
        return NULL;
    }

    /* Attempt to allocate memory for the table itself */
    if ((new_table->array = malloc(sizeof(void *) * size)) == NULL) {
        return NULL;
    }

    /* Initialize the elements of the array */
    for(unsigned long int i=0; i<size; i++) new_table->array[i] = NULL;

    /* Set the table's size */
    new_table->size = size;

    return new_table;
}
