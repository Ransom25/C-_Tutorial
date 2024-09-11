#include <iostream>
/*
VOID POINTERS
* This is a special type of pointer available in C++ which represents the absence of type. 
* Void pointers are pointers that point to a value that has no type (and thus also an undetermined length and undetermined dereferencing properties). 
* This means that void pointers have great flexibility as they can point to any data type.
* These pointers cannot be directly dereferenced.
* They have to be first transformed into some other pointer type that points to a concrete data type before being dereferenced. 
* --> See void increase function
* NB: oid pointers cannot be dereferenced. 
*     It can however be done using typecasting the void pointer. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size.
*/

void increase(void* data, int ptrsize)
{
    if (ptrsize == sizeof(char)) {
        char* ptrchar;

        // Typecast data to a char pointer
        ptrchar = (char*)data;

        // Increase the char stored at *ptrchar by 1
        (*ptrchar)++;
        std::cout << "*data points to a char"
             << "\n";
    }
    else if (ptrsize == sizeof(int)) {
        int* ptrint;

        // Typecast data to a int pointer
        ptrint = (int*)data;

        // Increase the int stored at *ptrchar by 1
        (*ptrint)++;
        std::cout << "*data points to an int"
             << "\n";
    }
}

int main() {

    /*
    DANGLING POINTER:
    * When a memory pointed by a pointer is deallocated the pointer becomes a dangling pointer.
    * When the local variable is not static and the function returns a pointer to that local variable. The pointer pointing to the local variable becomes dangling pointer.
    */
    int* ptr = (int*)malloc(sizeof(int));
    // After below free call, ptr becomes a dangling pointer
    free(ptr);
    printf("Memory freed\n");
    // removing Dangling Pointer
    ptr = NULL;

    /*
    WILD POINTER:
    * A pointer that has not been initialized to anything (not even NULL) is known as a wild pointer. 
    * The pointer may be initialized to a non-NULL garbage value that may not be a valid address. 
    */
    int* wild_p; /* wild pointer */
    int x = 10;

    std::cout << *wild_p << std::endl; // gives segmentation fault


    return 0;
}

