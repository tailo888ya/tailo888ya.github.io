//誤差出るときあるから検算すること
#include<stdio.h>
#include<math.h>

int main(void){

	double fir_num,las_num,result;
	char enzanshi,dummy;

	printf("最初の数値を入力\n");
	scanf("%lf",&fir_num);
	scanf("%c",&dummy);
	printf("演算子を入力\n");
	scanf("%c",&enzanshi);
	printf("最後の数値を入力\n");
	scanf("%lf",&las_num);
	printf("計算結果を下に表示\n");

	if(enzanshi == '+'){
		result = fir_num + las_num;
	}
	if(enzanshi == '-'){
		result = fir_num - las_num;
	}
	if(enzanshi == '*'){
		result = fir_num * las_num;
	}
	if(enzanshi == '/'){
		result = fir_num / las_num;
	}
	if(enzanshi == '%'){
		result = fmod(fir_num,las_num);
	}

	printf("%lf\n",result);

	return 0;
}
