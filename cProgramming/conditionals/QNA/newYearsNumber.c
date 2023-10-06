#include<stdio.h>

int main()
{

    long long int n,t;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        long long int mod = n % 2020;
        long long int div = n / 2020;

        if( mod <= div){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}