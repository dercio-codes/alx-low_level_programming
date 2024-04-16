unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /* Use the djb2 hash function to get a hash value for the key */
    unsigned long int hash = hash_djb2(key);

    /* Modulo by the size to ensure the index is within array bounds */
    return hash % size;
}
