#include<stdio.h>
#define mostrabool(x) ({printf("%s\n",(x)? "Verdadeiro":"Falso");})
typedef enum{false=0, true=1}bool;
int main()
{
    bool V=true;
    bool F=false;
    mostrabool(V);
    mostrabool(F);
    mostrabool(2>3);
    mostrabool(2==3);
    mostrabool(2!=3);
    mostrabool(2<=3);
    mostrabool(2>=3);
    mostrabool(2<3);
    return 0;


}
