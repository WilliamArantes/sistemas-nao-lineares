#include<stdio.h>
#include<math.h>

double funcao (double x) //ponto fixo
{	
	
	return(cos(x));
}

double funcao2 (double x) //metodo newton
{	
	
	return(x - (cos(x)-x)/(-sin(x)-1));
}

void pontofixo (double x)
{	double y,tolerancia=1e-6, z;
	int cont=0;

	printf("Ponto Fixo\n");
	do{
	
	z=x;
	cont++;
	y=funcao(x); 
	x=y;
	
	printf(" %d \t %16.14lf \n", cont, y);
	
	}
	while(fabs(z-x)>tolerancia);
}

void newton (double x)
{	double y,tolerancia=1e-6, z;
	int cont2=0;
	
	printf("Método de Newton\n");
	do{
	
	z=x;
	cont2++;
	y=funcao2(x); 
	x=y;
	
	printf(" %d \t %16.14lf \n", cont2, y);
	
	}
	while(fabs(z-x)>tolerancia);
}
main()
{	double w=1;

	//ponto fixo
	pontofixo(w);
	
	//newton
	newton(w);
		
	
}
