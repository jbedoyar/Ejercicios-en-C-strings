#include <iostream>
using namespace std;
void copia(char *s, char *t) {
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}
int main()
{
    char cadena[] ={'j','o','s','e','\0'};
    char cadena2[] ={'a','n','y','a','\0'};
    copia(cadena,cadena2);
    cout<<cadena;

    return 0;
}

