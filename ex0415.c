#include<stdio.h>
int main()
{
	int arr[] = {10, 20, 30, 40};
	int* pI = arr;

	printf("%p\n", arr);
	printf("%p\n", pI);
	printf("%p\n", arr);
	

	//pC = name;

	//printf("%p\n", name);
	//printf("% p\n", pC);
	//printf("%s\n", pC+1);
	//printf("%c\n", *(pC+1));
	/*while (*pC != '\0')
	{
		printf("%c\n", *pC);
		pC++;
	}
	*/
	//for (; *pC != '\0'; pC++)
		//printf("%c\n", *pC);
		




	return 0;
}