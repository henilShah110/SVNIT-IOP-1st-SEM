#include <stdio.h>
using namespace std;

int main()
{
	int n , factorial=1;
    scanf("%d" , &n);
    for(int i = 1 ; i <= n ; i++)
    {
        factorial*=i;
    }
    printf("the factorial is %d" , factorial);
}