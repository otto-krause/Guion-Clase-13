#include <stdio.h>
#include <stdlib.h>

	int main() {

	int i,n,n1,me,ma,dif;

	printf("Ingrese un numero ");
	scanf("%d",&n);

	printf("Ingrese otro numero ");
	scanf("%d",&n1);

	n1m(n,n1);



	}

	int n1m(int n,int n1,int v[]){

	int j,dif,z,acu;

	if (n>n1){

	dif=n-n1;

	acu=n1;

	for(j=0;j<dif;j++){

	acu=acu+1;

	v[j]=acu;

	}

	printf("Los numeros entre %d y %d son : ",n1,n);

	}else{

	dif=n1-n;
	acu=n;

	for(j=0;j<dif;j++){

	acu=acu+1;
	v[j]=acu;

	}

	printf("Los numeros entre %d y %d son ",n,n1);

	}



	for(z=0;z<(dif-1);z++){
	printf(",%d ",v[z]);
	}


	}
