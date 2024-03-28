#include <stdio.h>
#include <stdlib.h>

void main() {
	int list[5]; //5칸짜리 배열 생성
	int* plist[5]; // 배열 포인터 5개 생성
 
	list[0] = 10; //배열 list 첫번째값 10으로 초기화
	list[1] = 11; // 배열 list 두번째값 11로 초기화

	plist[0] = (int*)malloc(sizeof(int)); // 동적할당



	printf("list[0] \t= %d\n", list[0]); // list[0]에 담긴 값(10) 출력
	printf("list \t\t= %p\n", list); // 배열 list 시작주소 출력
	printf("&list[0] \t= %p\n", &list[0]); // list 시작 주소 출력
	printf("list + 0 \t= %p\n", list + 0); // 배열 시작주소 출력
	printf("list + 1 \t= %p\n", list + 1); // 배열 두번째 요소 주소 출력
	printf("list + 2 \t= %p\n", list + 2); //세번째 주소
	printf("list + 3 \t= %p\n", list + 3); // 네번째 주소
	printf("list + 4 \t= %p\n", list + 4); // 다섯번째 주소
	printf("&list[4] \t= %p\n", &list[4]); // 다섯번째 주소

	free(plist[0]); // 동적할당해제
}