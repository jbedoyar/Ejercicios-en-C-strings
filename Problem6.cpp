#include <iostream>
using namespace std;
void copia(char s[], char t []) {
    int  i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}
int main()
{
    char cadena[] ={'j','o','s','e','\0'};
    char cadena2[] ={'a','n','y','a','\0'};
    copia(cadena,cadena2);
    cout<<cadena;

    return 0;
}
