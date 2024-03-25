//Create a function that randomly fills an array using rand() integers and then return
//the index of the highest element, use malloc

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findIndexOfMax(int size) {
    
    int* arr = (int*)malloc(size * sizeof(int));

    // Seed for random numbers
    srand(time(NULL));

    // Fill the array with random integers
    for (int i = 0; i < size; ++i) 
    {
        arr[i] = rand() % 100; // You can adjust the range as needed
    }

    // Find the index of the highest element
    int maxIndex = 0;
    for (int i = 1; i < size; ++i) 
    {
        if (arr[i] > arr[maxIndex]) 
        {
            maxIndex = i;
        }
    }

    // Print the array for reference
    printf("Generated array: ");
    for (int i = 0; i < size; ++i) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);

    // Return the index of the highest element
    return maxIndex;
}

int main() {
    // Set the size of the array
    int size = 10; // You can change this to your desired size

    // Call the function and get the result
    int maxIndex = findIndexOfMax(size);

    // Print the result
    printf("Index of the highest element: %d\n", maxIndex);

    return 0;
}
