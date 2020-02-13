#include <stdio.h>
#include <stdlib.h>

int main(){


	float a,b,c;
		int opt;
		
		
		printf("1.-Suma\n2.-Resta\n3.-Multiplicacion\n4.-Division");
		printf("\nSeleccione una opcion:");
		scanf("%f", &opt);
		printf("Ingrese el primer operando:");
		scanf("%f", &a);
		printf("Ingrese el segundo operando:");
		scanf("%f", &b);
		if (opt==1){
			c=a+b;
		}
		else if (opt==2){
			c=a-b;
			
		}
		
		else if (opt==3){
			c=a*b;
		}
		else if (opt==4){
			while (b==0){
				printf("Error, b debe ser diferente de 0 \n");
				printf("Introduce el segundo operando:");
				scanf("%f", &b);
			}
			c=a/b;
		
		}
		else {
			printf("Opcion invalida");
			c=0;
		
		
		}
		
		printf("El resultado es %f", c);

}
			
			
			
