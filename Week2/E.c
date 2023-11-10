#include <stdio.h>
int main(){
	int kg,cm;
	float BMI;
	scanf("%d %d",&cm,&kg);
	BMI= (float)kg/(cm*cm);
	if (BMI>= 0.003)
	printf("Beo phi");
	else if (BMI>= 0.0025 && BMI<0.003)
	printf("Thua can");
	else if (BMI>=0.00185 && BMI<0.0025)
	printf("Trung binh");
	else if (BMI< 0.00185)
	printf ("Thieu can");;
return 0;}
