#include <stdio.h>
 
void print_one(int* ptr, int rows);

int main() {
	int one[] = { 0,1,2,3,4 }; // 배열 초기화

	printf("[----- [강수빈]  [2023078011] -----]\n\n");

	printf("one		= %p\n", one); // 배열 one의 시작 주소 출력
	printf("&one	= %p\n", &one); // 배열의 시작 주소 출력
	printf("&one[0] = %p\n", &one[0]); // 배열의 시작주소 출력
	printf("\n");

	printf("------------------------------\n");
	printf("   print_one(&one[0],5) \n");
	printf("------------------------------\n");
	print_one(&one[0], 5); // 함수 호출(배열 주소 전달)

	printf("------------------------------\n");
	printf("   print_one(one, 5) \n");
	printf("------------------------------\n");
	print_one(one, 5); //함수 호출(배열 주소 전달)

	return 0;
}

// 포인터로 배열 시작주소 가리킴
void print_one(int* ptr, int rows) {
	int i;
	printf("Address \t Contents\n");
	for (i = 0; i < rows; i++)
		printf("%p \t  %5d\n", ptr + i, *(ptr + i)); //배열에 포인터로 하나씩 접근하며 값과 주소를 출력
	printf("\n");
}