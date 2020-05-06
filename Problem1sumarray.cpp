#include <iostream>
using namespace std;
//Problem 1 suma de los elementos en un array
int sumarray(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
//Suma de los elementos de un array recursivo
int sumarray_r(int arr[], int tam)
{
    if(tam == 1){
        return arr[0];
    }
    else {
        return arr[tam-1] + sumarray_r(arr, --tam);
    }
}
int main()
{
  int arr[] = {1,2,3,4};
  cout<<sumarray(arr,4)<<endl;
  cout<<sumarray_r(arr,4)<<endl;

}
