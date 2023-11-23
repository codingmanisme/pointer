#include<stdio.h>
void demo_1(void)
{
	int a = 10;
	int* p = &a;
	// pointer arthmetic (+1是+一個整數 4bytes
	printf("Address of p is %d \n", p);
	printf("size of integer is %d\n", sizeof(int));
	printf("Adress of p+1 is %d \n", p + 1);
	printf("value of *p is %d\n", *p); //已知 a =10
	printf("value of *p+1 is %d\n", *(p + 1)); // 但使用*(p+1) != 11 要注意
}
int main(void)
{
	demo_1;
	return 0; 
}