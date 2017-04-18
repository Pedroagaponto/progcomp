#include <stdio.h>


const int MAX = 2147483647;

unsigned int pow_mod(long long base, long long power, long long m);

int main()
{
	int N;
	unsigned int sum=1;

	scanf("%u", &N);


	sum = pow_mod(3, N, MAX);	
	printf("%u\n", sum);
}

unsigned int pow_mod(long long base, long long power, long long m)
{
	long long result = 1;

	base %= m;
	while (power > 0) {
		if (power & 1) result = (result * base) % m;
		base = (base * base) % m;
		power >>= 1;
	}
	return result;
}
