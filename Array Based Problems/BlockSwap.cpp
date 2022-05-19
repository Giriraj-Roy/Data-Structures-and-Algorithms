#include <bits/stdc++.h>
using namespace std;

int* leftRotate(int arr[], int d, int n){
    if(d==0 || d==n)        return arr;
    if(d>n)                 d %= n;

    int a[n], int_d =d, j=0;
    while(d<=n){
        for (int i = n-d; i < int_d ; i++)
        {
            a[j] = arr[i];
            j++;
        }
        d += int_d;
        if(d>n)     d=n;
    }
    return a;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int *a;
    a = leftRotate(arr, 2, 7);
    for(int i = 0; i<7 ; i++){
        cout << a[i] << " \n";
    }

    return 0;
}