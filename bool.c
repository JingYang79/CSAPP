#include <stdio.h>

void inplace_swap(int *x, int *y){																							//练习2.10
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int a[], int cnt){																						//练习2.11
	int first, last;
	for(first = 0, last = cnt-1; first < last; first++, last--)
		inplace_swap(&a[first], &a[last]);
}


int fun1(unsigned word) {																												//练习2.23
	return (int) ((word << 24) >> 24);
}

int fun2(unsigned word) {
	return ((int) word << 24) >> 24;
}

int main(){
	int a = 'a';
 	int b = 'b';
	int *x = &a;
	int *y = &b;

	inplace_swap(x, y);
	printf("%d %d\n" , *x, *y);

	int length = 0;
	int arr[] = {1,2,3,4};
	int i;
	length = sizeof(arr) / sizeof(int);
	reverse_array(arr, length);
	for(i = 0; i < length; i++)
		printf("%d ", arr[i] );

	int X = 0x87654321;																														//练习2.12
	int A = 0xff&X;
	int B = 0xffffff00^X;
	int C = 0xff|X;
	printf("A = %x\n", A);
	printf("B = %x\n", B);
  printf("C = %x\n", C);

	int XX = 0x66;																																//练习2.14
	int YY = 0x39;
	printf("%x\n", XX&YY);
	printf("%x\n", XX|YY);
	printf("%x\n", ~XX|~YY);
	printf("%x\n", XX& !YY);
	printf("%x\n", XX&&YY);
	printf("%x\n", XX||YY);
	printf("%x\n", !XX||!YY);
	printf("%x\n", XX&& ~YY);

	int w[4] = {0x00000076, 0x87654321, 0x000000C9, 0xEDCBA987};
	for (i = 0; i < 4; i++) {
		printf("%x\n",fun1(w[i]));
		printf("%x\n",fun2(w[i]));
	}

	return 0;
}
