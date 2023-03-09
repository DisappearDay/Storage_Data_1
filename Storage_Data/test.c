#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void tset(void) {
//	printf("hehe");
//}
//
//int main() {
//	test(100);
//	return 0;
//}


//int main() {
//	int a = 20;
//	int b = -10;
//	return 0;
//}


int main() {

	//int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//char arr2[] = { 11,12,13,14,15,16,17,18,19,20 };
	//int i = 0;
	//int sz = sizeof(arr1) / sizeof(arr1[0]);
	//for (i = 0; i <= sz; i++) {
	//	arr1[i] = arr2[i];
	//}

   int arr[10] = {0};
	int* pa = arr;
	char* pc =arr ;
	int i = 0;
	for (i = 0; i < 10;i++) {
		*(pa+i) = 1;
	}

	printf("%p\n",pa);

	return 0;
}