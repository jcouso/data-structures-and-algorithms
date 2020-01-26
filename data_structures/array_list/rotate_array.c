// this program reverse an array

#include <stdio.h>

void displayArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");
}

void rotateLeft(int arr[], int number, int n)
{
  for (int i = 0; i < number; i++)
  {
    int temp = arr[0], j;
    for (j = 0; j < n; j++)
    {
      arr[j] = arr[j + 1];
    }
    arr[j - 1] = temp;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);

  displayArray(arr, n);
  rotateLeft(arr, 2, n);
  displayArray(arr, n);

  return 0;
}