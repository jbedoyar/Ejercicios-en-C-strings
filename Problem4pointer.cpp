#include <iostream>
using namespace std;

int longitud(char *arr)
{
    int i = 0;
    while(*arr != '\0')
    {
        arr++;
        i++;
    }
    return i;
}
int main()
{
    char arr[] = {'j','o','s','e','\0'};
    cout<<longitud(arr)<<endl;
}



