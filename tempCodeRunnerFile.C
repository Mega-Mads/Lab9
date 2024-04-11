//Madison Manankil
//COP 3502
//LAB 9
//April 12, 2024
#include <stdio.h>
#include <stdlib.h>
//!NOTE FOR TA!: When running my code please use command prompt and do LAB9.exe<input.txt and the output will primnt
// RecordType
struct RecordType
{
    int id;
    char name;
    int order;
    struct RecordType *next;  // I added this because for chaining
};

// Hash table structure
struct HashTable