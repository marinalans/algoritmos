#include <bits/stdc++.h>

using namespace std;

int A[] = {1,2,3,4,5,6,7,8,9,10};

int binary_search(int x, int l, int r)
{
  /* Encontra o elemento do meio. */
  int m = (l+r)/2;

  /* Caso encontrar o elemento, retorne-o. */
  if(A[m] == x) return m;

  /* Caso o elemento seja maior que o elemento do meio, faça */
  if(x > A[m]) return binary_search(x, m+1, r);

  /* Caso o elemento seja menor que o elemento do meio, faça */
  if(x < A[m]) return binary_search(x, l, m);

  /* Caso não encontre. */
  return -1;
}

int main()
{
  int x = binary_search(8, 0, 10);

  printf("%d\n", x);

  return 0;
}
