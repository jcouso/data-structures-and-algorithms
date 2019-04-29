// You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in list. One of the integers is missing in the list. Write an efficient code to find the missing integer.

#include <stdio.h>

int findMissingNumber();

int main() {
  int result;
  int input[] = {1, 2, 4, 6, 3, 7, 8};
  int size = sizeof(input)/4;

  result = findMissingNumber(input, size);
  
  printf("The missing number is: %d\n", result);
  }

int findMissingNumber(int input[], int size) {
  int total = (size + 1) * ( size + 2 ) / 2;
  for (int i = 0; i < size; i++) {
    total -= input[i];
  }

  return total;
}
