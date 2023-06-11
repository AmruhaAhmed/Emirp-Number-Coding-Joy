#include<stdio.h>
int prime(int n)//function to check whether n is prime or not
{
    int ctr=0;//count of factors
    int i;//loop counter
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        ctr++;
    }
    if(ctr==2)//if factors are 2 i.e 'n' is a prime number
    return 1;
    else
    return 0;
}
int reverse(int n)//function to find the reverse of 'n'
{
    int rem,rev;//rem stores remainder, rev stores the reverse of 'n'
    while(n!=0)
    {//calculating reverse
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
void main()
{
    int n;//number to be checked
    printf("\n Enter a number:");
    scanf("%d",&n);
    int rev=reverse(n);//stores the reverse of 'n'
    int prime1=prime(n);//stores the returned value from prime() when 'n' is passed
    int prime2=prime(rev);//stores the returned value from prime() when 'rev' is passed
    if(prime1==1&&prime2==1)//if both rev and 'n' are prime
    printf("\n %d is an Emirp Number",n);
    else
    printf("\n %d is not an Emirp Number",n);
}
