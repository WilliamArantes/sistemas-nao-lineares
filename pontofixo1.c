#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3

double f1(double x[N]){return cos(x[1]*x[2])/3.+(1./6.); }
double f2(double x[N]){return sqrt((x[0]*x[0]) + sin(x[2])+1.06)/9-0.1;}
double f3(double x[N]){return -(1./20.)*exp(-x[0]*x[1]) - (10*M_PI-3)/60;}


int main(int argc, char **argv)
{
	double x[N]={0}, xa[N]={1,-1,1};
	double eps, tol, norm, norma;
	double (*equacao[N])()=(f1,f2,f2);
	int i;
	do{   
			norma = 0;
			for(i=0;i<N;i++)
			{
				x[i] = xa[i];
				
				xa[i] = equacao[i](x);
				
				norma += sqrt( pow((x[i] - x[a]), 2)+  pow((x[i] - x[a]), 2) + pow((x[i] - x[a]), 2) );
		
	
			}
		}while(norma>erro);
		for(i=0;i<N;i++)
		{
			printf("Ponto: %lf ", x[i]);
		}
			
}
	
	
}



