#include <stdio.h>
float sqrt(float x){
	float result=0;
	int flag=0;
	while(flag!=1){
		if(result*result>=x){
			flag = 1;
			return result;
		}
		result=result+0.000001;
	}
}
int main (){
	printf("Cozulecek denklemdeki x^2 nin katsayisini giriniz : ");
	float a;
	scanf("%f",&a);
	printf("\nCozulecek denklemdeki x in katsayisini giriniz : ");
	float b;
	scanf("%f",&b);
	printf("\nCozulecek denklemdeki sabit katsayiyi giriniz : ");
	float c;
	scanf("%f",&c);
	
	float delta;
	delta=b*b-4*a*c;
	float root1=(-b+sqrt(delta))/(2*a);
	float root2=(-b-sqrt(delta))/(2*a);
	
	printf("\nDenklemin cozumleri : %f %f", root1,root2);
}
