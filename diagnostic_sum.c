#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	int result;
	int sum_repeated();
	scanf("%d", &n);

	result = sum_repeated(n);

	printf("%d\n", result);

	return 0;
}

int sum_repeated(int n){
	
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		int num; 
		scanf("%d", &num);
		sum = sum+num;
	}

	return sum;
}