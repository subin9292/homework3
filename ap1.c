#include <stdio.h>
#include <stdlib.h>

void main() {
	int list[5];   //5칸짜리 배열 생성
	int* plist[5] = { NULL, };  //배열 포인터 5개 생성

	plist[0] = (int*)malloc(sizeof(int));  // 배열 포인터 동적할당

	list[0] = 1; //배열 첫번째 값 1로 초기화
	list[1] = 100; //배열 두번째 값 100으로 초기화
	 
	*plist[0] = 200; // 첫 배열 포인터가 가리키는 곳에 200 저장

	printf("[----- [강수빈]  [2023078011] -----]\n\n");

	printf("list[0]         = %d\n", list[0]); //list[0]값 출력
	printf("&list[0]        = %p\n", &list[0]); //list[0]의 주소 출력
	printf("list            = %p\n", list); // list 배열 시작주소 출력
	printf("&list           = %p\n", &list); // list 배열 시작주소 출력

	printf("-------------------------------------\n\n");
	printf("list[1]         = %d\n", list[1]); // list[1]값 출력
	printf("&list[1]        = %p\n", list[1]);  // list[1] 주소 출력
	printf("*(list+1)       = %d\n", *(list + 1)); // list[1]의 값 출력 (list+1 주소의 값 출력)
	printf("list+1          = %p\n", list + 1); // list배열의 시작주소 바로 다음 주소 출력

	printf("-------------------------------------\n\n");
	printf("*plist[0]       = %d\n", *plist[0]);  // *plist[0]이 가리키는 곳에 저장된 값(200) 출력  
	printf("&plist[0]       = %p\n", &plist[0]); // plist[0]의 주소 출력
	printf("&plist          = %p\n", &plist); // plist의 시작 주소 출력
	printf("plist           = %p\n", plist); // plist의 시작 주소 출력
	printf("plist[0]        = %p\n", plist[0]); // plist가 가리키는 곳의 주소
	printf("plist[1]        = %p\n", plist[1]); //NULL
	printf("plist[2]        = %p\n", plist[2]); //NULL
	printf("plist[3]        = %p\n", plist[3]);//NULL
	printf("plist[4]        = %p\n", plist[4]);//NULL

	free(plist[0]);
}