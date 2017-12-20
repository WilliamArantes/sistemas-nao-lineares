#include<stdio.h>
#include<math.h>
#define erro pow(10,-4)
FILE *arquivo;

double f(double x)
	{
	return 8-4.5*(x-sin(x));
	}

main(){
		
	double x1,x2,x3;
	int i;
	
	arquivo = fopen("secante.txt", "w");

	x1 = 2.0;
	x2 = 3.0;

	if(f(x1)*f(x2) >= 0){
				printf("Valores de a e b são inválidos!\n");
				}
	
	
	i = 1;
	do{
		x3 = x2-((f(x2)*(x1-x2))/(f(x1)-f(x2)));
		
		printf("\nx1=%lf\tx2=%lf\tx3=%lf\tf(%lf)=%lf\ti=%d\n", x1, x2, x3, x3, f(x3), i);

		fprintf(arquivo, "%lf\t\t%lf\n", x3, f(x3));
		
			x1=x2;
			x2=x3;
			i++;

	}while(fabs(f(x3)) > erro || i > 90);

	if(i>90){ printf("Convergencia não obtida!\n");}
	
	else{

	printf("\nSolucao = f(%lf) = %lf.\n", x3, f(x3) );
	}

	fclose(arquivo);

}
