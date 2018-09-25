#include <stdio.h>
#include <math.h>


int jump_search(int arr[], int n, int x) {
  int i, j, m;
  m = sqrt(n);

  for (i = 0; i*m < n; i++) {
    if (arr[i*m] == x)
      return i;
    if (arr[i*m] > x)
      for (j=(m*i-(m-1)); j < m*i; j++){
        if (arr[j] == x)
          return j;
      }
    if((i+1)*m > (n-1)) {
      for (j=(m*(i+1)-(m-1)); j < n; j++){
        if (arr[j] == x)
          return j;
      }
    }
  }
  return -1;
}

int main ()
{
  int x, n, result;

  int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
  x = 0;
  n = sizeof(arr)/sizeof(arr[0]);

  result = jump_search(arr, n, x);

  printf("%d\n", result );
  return 0;

}
