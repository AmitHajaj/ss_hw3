#include <stdio.h>
#define SIZE 50 


void main(){
    int array[SIZE], i;
    int *arr = array[0];
    
    printf("please enter 50 elemnt's to sort.");
    //Take's the user's input.
    for (i=0; i<SIZE; i++){
        scanf("%d", (arr+i));
    }

    //Print's the user's input to the screen.
    for(i=0; i<SIZE; i++){
       printf(",%d", *(arr+i)); 
    }

    //sort the array with insertion sort.
    insertion_sort(*arr, SIZE);

    //print the sorted array to the screen.
    for(i=0; i<SIZE; i++){
        //if it is the last element, print without ','.
        if(i==SIZE-1){
            printf("%d", *(arr+i));
        }
        //otherwise, print with ','.
        printf("%d,", *(arr+i));
    }
}

int shift_element(int* arr, int i){
    //Like the name of it, this function shift the nest i element's of a given array in place arr, 1 place to the right.
    //Logically i go from the end to  my stating point *arr.
    for(int j = *(arr+i+1); j > *arr; j--){
        *(j) = *(j-1);
    }
}

//Simple  function to apply insertion sort on a given array.
void insertion_sort(int* arr, int len){
    int i, j, temp;
    for(i=0; i<len-1; i++){
        for(j=0; j<len-1; j++){
            //switch between two neighbor's if arr[i]>arr[i+1].
            if(*(arr + j) > *(arr + j+1)){
                temp = *(arr+j);
                *(arr+j) = *(arr+(j+1));
                *(arr+(j+1)) = temp;
            }
        }
    }
}