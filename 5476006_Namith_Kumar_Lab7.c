#include <stdio.h>

void bubble_sort(int array[], int n);

int main(void) {
  int array[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

  bubble_sort(array, 9);
  return 0;
}

void bubble_sort(int array[], int n){
  int counter = 0;
  int temp = 0;
  for(int i = 0; i < n; i++){
    int pass_swaps = 0;
    for(int j = 0; j < n - i - 1; j++){
      if(array[j] > array[j + 1]){
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
        pass_swaps++;
      }
    }
    printf("Pass %d swaps: %d\n", i+1, pass_swaps);
    counter += pass_swaps;
  }
  printf("After Bubble Sort Function\n");
  for(int i = 0; i < n; i++){
    printf("array[%d] = %d\n",i,array[i]);
  }
}
