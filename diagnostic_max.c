#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int n;
	int result;
	int get_max();
	scanf("%d", &n);

	result = get_max(n);

	printf("%d\n", result);

	return 0;
}

int get_max(int n){
	int max[2] = {0,0};

	for (int i = 0; i < n; ++i)
	{
		int num;
		scanf("%d", &num)
		if (num > max[1])
		{
			if (num > max[0])
			{
				max[0] = num
			}
			
		}
	}



}