#include <stdio.h>
#include <stdlib.h>

int main()
{

    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;

    // Get the number of elements for the array
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);

    // MALLOC
    ptr = (int*)malloc(n * sizeof(int));
    // CALLOC
    // ptr = (int*)calloc(n, sizeof(int));

    /*REALLOC
    // Get the new size for the array
    n = 10;
    ptr = (int*)realloc(ptr, n * sizeof(int));
      
        if (ptr == NULL) {
        printf("Reallocation Failed\n");
        exit(0);
    
    }
    */
   
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {

        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }

        free(ptr);
        printf("emory successfully freed.\n");
    }

    return 0;
}