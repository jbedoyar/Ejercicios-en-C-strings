#include <iostream>
using namespace std;
// Problema 2 inversa de un array
void reversa(int arr[], int n)
{
    for(int i = n - 1; i >=0 ; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reversa_r(int arr[], int n)
{
    if (n > 0)
    {
        cout<< arr[n-1]<<" ";
        reversa_r(arr,n-1);
    }
}
int main()
{
    int arr[]={1,2,3,4};
    reversa(arr,4);
    reversa_r(arr,4);
}
