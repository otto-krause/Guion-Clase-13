#include <stdlib.h>
#include <stdio.h>

int main(){
int j=0;
int i;
int n1=0;
int n2=0;
int max= 0;
int min=0;
printf ("\nIngrese un numero ");
scanf ("%d",&n1);
printf ("\nIngrese otro numero ");
scanf ("%d",&n2);

if(n1>n2)
{
    max=n1; min=n2;
}
else
{
    max=n2; min=n1;
}
for (i=min+1 ; i<=max-1; i++)
{

    printf ("%i,",i);
}
system ("pause");
return 0;

}
