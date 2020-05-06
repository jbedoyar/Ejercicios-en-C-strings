#include <iostream>
using namespace std;

int longitud(char arr[])
{
    int sum = 0;
    int i = 0;
    while(arr[i] != '\0')
    {
        i++;
        sum++;
    }
    return sum;
}
int main()
{
    char arr[] = {'j','o','s','e','\0'};
    cout<<longitud(arr)<<endl;
    cout<<longitud_r(arr)<<endl;
}



