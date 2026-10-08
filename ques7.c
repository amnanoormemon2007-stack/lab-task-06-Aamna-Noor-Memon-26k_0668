#include<stdio.h>
int main(){
    int n ;
    printf("enter a number:");
    scanf("%d" ,&n);
    int ld;
    int reverse=0;
    int original =n;
    while(n!=0){
        ld =n%10;
        reverse= reverse*10+ld;
        n=n/10;
        

    }
    if(original==reverse){
      printf("the number is palindrome");
     }
     else {
       printf("its not a palindrome");
     }
   
    return 0;
}