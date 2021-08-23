// ques - https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/

#include <bits/stdc++.h>
using namespace std;
 

int matrixMultiplication(int arr[], int i, int j)
{
    if (i >= j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
 
    for (k = i; k < j; k++)
    {
        count = matrixMultiplication(arr, i, k)
                + matrixMultiplication(arr, k + 1, j)
                + arr[i - 1] * arr[k] * arr[j];
 
        if (count < min)
            min = count;
    }
 
  
    return min;
}
 

int main()
{
    int a[] = {40, 20, 30, 10, 30};
    int n = sizeof(a) / sizeof(a[0]);
 
    cout << matrixMultiplication(a, 1, n - 1);
}
