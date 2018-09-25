#include <stdio.h>

int linear_search(int arr[], int n, int x){
  int i;
  for(i = 0; i < n; i++) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;

}

int main() {

  int x, n, result;

  int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};

  x = 60;
  n = (sizeof(arr)/sizeof(arr[0]));
  result = linear_search(arr, n, x);
  if (result > -1 ) {
      printf("Element x is present at index %d\n", result);
  } else {
      printf("Element x is not present in arr[].");
  }

  return 0;
}
