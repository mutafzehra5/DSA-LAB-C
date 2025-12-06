#include<stdio.h>

void bubbleSort(int arr[], int size);

int main (){
  int size = 10;
  int arr[size];
  printf("Enter array entries: ");
  for(int i = 0; i < size; i++){
      scanf("%d", &arr[i]);
  }

  printf("Entered array is: );
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }

  printf("Sorted array is: );
  bubbleSort(arr, size);
  return 0;
}

void bubbleSort(int arr[], int size){
  for (int i = 0; i < size; i++){
    for(int j = 0; j < size; j++){
      if (arr[j] > arr[j+1]){
        arr[j] = arr[j+1];
      }
    }
  }

  printf("Sorted array is: );
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
}
