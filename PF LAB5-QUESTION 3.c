#include<stdio.h>
int main(){
	int a,b,c;
	int discriminant;
	printf("Input the value of a,b and c.\n");
	printf("a =");
	scanf("%d",&a);
	printf("b =");
	scanf("%d",&b);
	printf("c =");
	scanf("%d",&c);
	 discriminant=((b*b)-(4*a*c));
	printf("discriminant = %d",discriminant);
	if (discriminant>0){
		printf("\nTwo Real Numbers");
	}else if(discriminant==0){
		printf("\n One real Root");
	}else {
		printf("Imaginary roots");
	}
	
	
	
		
	
	
	return 0;
}
