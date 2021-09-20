#include <stdio.h>

int main()
{
	int a = 2147483647;
	unsigned int b = 4294967294;
	long c = 2147483647;
	unsigned long d = 4294967294;
	float e = 0.123456;
	double f = 0.1234567;
	long double g = 0.1234567;
	char h = 127;
	unsigned char i = 255;
	short j = 32767;
	unsigned short k = 65535;

	printf("a (int) = %d \n", a);
	printf("b (unsigned int) = %d \n", b);
	printf("c (long) = %d \n", c);
	printf("d (unsigned long) = %d \n", d);
	printf("e (float) = %f \n", e);
	printf("f (double) = %lf \n", f);
	printf("g (long double) = %lf \n", g);
	printf("h (char) = %d \n", h); // %d (if h = number (-128, 127)) and %c (if h = symbol ('Z'))
	printf("i (unsigned char) = %d \n", i);
	printf("j (short) = %d \n", j);
	printf("k (unsigned short) = %d \n", k);
	return 0;
}
