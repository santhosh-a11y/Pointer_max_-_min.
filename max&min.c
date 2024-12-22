#include <stdio.h>
#include <stdlib.h>

int main()
{
    //finding minimum and maximum values in an array using pointers:
    int a[10], no_of_elements;
    printf("enter the number of elements to be entered: ");
    scanf("%d", &no_of_elements);
    int i;
    for(i=0; i<no_of_elements; i++){
        scanf("%d", &a[i]);
    }
    //finding the least value;
    int minimum;
    minimum=*(a+0);//*a = value of first element in the array.
    for(i=1; i<no_of_elements; i++){
        if(minimum>*(a+i)){
            minimum=*(a+i);
        }
    }
    printf("the minimum value from the array is: %d\n", minimum);


    //finding the largest value;
    int maximum;
    maximum=*(a+0);
    for(i=1; i<no_of_elements; i++){
        if(maximum<*(a+i)){
            maximum=*(a+i);
        }
    }
    printf("the maximum value from the array is: %d", maximum);



}