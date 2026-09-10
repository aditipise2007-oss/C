#include <stdio.h>
int isprime(int x);
void printprime(int start, int end);

int main() {
    int start, end;
    printf("Enter start and end number :");
    scanf("%d%d", &start , &end);

     printprime(start,end);
    return 0;
}
int isprime(int x){
    int i;
    if(x<2)
    return 0;
    
    for(i=1;i<=x;i++)
    {
        if(x%2==0){
             return 0;
        }
    }
    return  1;
}
void printprime(int start,int end){
    int i;
 for(i=start;i<=end;i++)
 {
    if(isprime(i))
 {
    printf("%d\n ",i);
 }
}
}



