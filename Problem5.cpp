#include <iostream>
using namespace std;
void concatenar(char a[], char b[])
{
    int i = 0,j= 0;
    while (a[i] != '\0')
        i++;
    while ((a[i++] = b[j++]) != '\0');
}
int main()
{
    char str1[] ={'j','o','s','e','\0'};
    char str2[] ={'a','n','y','a','\0'};
    concatenar(str1,str2);
    cout<<str1<<endl;
    return 0;
}
