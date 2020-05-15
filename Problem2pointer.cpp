#include <iostream>
using namespace std;
// Problema 2 inversa de un array
void swapy(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void reversa(int *arr, int n)
{
    int *a = arr;
    int *b = &arr[n-1];
    for(int i = 0; i < n ; i++,n--)
    {
    // [1 2 3 4]        [4 2 3 1]       [4 3 2 1]

        swapy(a,b);
    }

}
void print(int arr[],int n)
{
    for(int i = 0; i < n ; i++)
    {
    // [1 2 3 4]        [4 2 3 1]       [4 3 2 1]
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversa_r(int arr[], int n)
{
    int *b = &arr[n-1];
    if(*b < n)
        return;
    swapy(arr,b);
    arr++;

}
int main()
{
    int arr[]={1,2,3,4,7};
    //reversa(arr,5);
    reversa_r(arr,5);
    print(arr,5);
}
