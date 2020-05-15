#include <iostream>
using namespace std;
void concatenar(char *a, char *b)
{
    while (*a != '\0') {
        a++;
    }
    while((*a++ = *b++) != '\0');
}
int main()
{
    char str1[] ={'j','o','s','e','\0'};
    char str2[] ={'a','n','y','a','\0'};
    concatenar(str1,str2);
    cout<<str1<<endl;
    return 0;
}

