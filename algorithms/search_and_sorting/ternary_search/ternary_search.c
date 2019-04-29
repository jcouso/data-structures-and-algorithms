#include <stdio.h>

int ternarySearch();

int main() {
  printf("Implementation of ternary search\n");
  int result, l, r, key;
  
  int arry[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  key = 5;
  l = 0;
  r = sizeof(arry)/4;

  result = ternarySearch(l, r, key, arry);

  printf("The number can be found in index %d\n", result);
}

int ternarySearch(int l, int r, int key, int arry[]) {
  if (r >= l) {
    int mid1 = l + (r-l)/3;
    int mid2 = r - (r-l)/3;
    
    if (arry[mid1] == key) {
      return mid1;
    } 
 
    if (arry[mid2] == key) {
      return mid2;
    } 

    if (key < arry[mid1]) {
      return ternarySearch(l, mid1 - 1, key, arry);
    }
    else if(key > arry[mid2]) {
      return ternarySearch(mid2 + 1, r, key, arry );
    }
    
    else {
      return ternarySearch(mid1 + 1, mid2 - 1, key, arry );
    }
  }
  
  return -1;
}

