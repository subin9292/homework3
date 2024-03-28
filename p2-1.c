#include <stdio.h> 

#define MAX_SIZE 100

//함수선언
float sum1(float list[], int);
float sum2(float* list, int);
float sum3(int n, float *list);

//전역변수 선언
float input[MAX_SIZE], answer;  
int i;

void main(void) {

	for (i = 0; i < MAX_SIZE; i++)  //0~99까지 배열 값 초기화
		input[i] = i;




	/* for checking call by reference */
	printf("-----------------------------\n");
	printf(" sum1(input, MAX_SIZE) \n");
	printf("-----------------------------\n");
	printf("input \t= %p\n", input);  // input 배열 시작주소 출력

	answer = sum1(input, MAX_SIZE);  // 함수에 배열 주소과 정수 전달, answer에 tempsum값 들어감
	printf("The sum is: %f\n\n", answer);  // answer 출력

	printf("-----------------------------\n");
	printf(" sum2(input, MAX_SIZE) \n"); 
	printf("-----------------------------\n");
	printf("input \t= %p\n", input);  // 배열 input 시작주소 출력

	answer = sum2(input, MAX_SIZE); // 함수에 전달
	printf("The sum is: %f\n\n", answer);

	printf("-----------------------------\n");
	printf(" sum3(MAX_SIZE, input) \n");
	printf("-----------------------------\n");
	printf("input \t= %p\n", input); // 배열 시작주소 출력

	answer = sum3(MAX_SIZE, input); 
	printf("The sum is: %f\n\n", answer);

}

// 
float sum1(float list[], int n) {
	printf("list \t= %p\n", list);  // list 시작주소
	printf("&list \t= %p\n\n", &list);  // list 시작주소

	int i;
	float tempsum = 0;

	for (i = 0; i < n; i++)
		tempsum += *(list + i);  // list 배열에 차례대로 접근해서 tempsum에 더함

	return tempsum;
}

float sum2(float* list, int n) {  // 포인터로 변수 시작주소 가리킴
	printf("list \t= %p\n", list);
	printf("&list \t= %p\n\n", &list);

	int i;
	float tempsum = 0;
	for (i = 0; i < n; i++)
		tempsum += *(list + 1);  //배열에 차례대로 접근하여 더함
	return tempsum;
}

/* stack variable reuse test */
float sum3(int n, float* list) {
	printf("list \t= %p\n", list);
	printf("&list \t= %p\n\n", &list);

	int i;
	float tempsum = 0;
	for (i = 0; i < n; i++)
		tempsum += *(list + i);
	return tempsum;
}