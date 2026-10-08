#include<stdio.h>
int main (){
    int marks[15]={90,95,97,70,80,100,85,92,60,75,88,96,45,78,83};
    int sum= 0;
    int count100=0;
    int highest;
    int lowest;
    for(int i=0;i<=14;i++){
        if(marks[i]+5>100){
            marks[i]=100;
        }
        else{
            marks[i]=marks[i]+5;
        }
        sum=sum+marks[i];
        if(marks[i]==100){
            count100++;
        }
    }
    int highest=marks[0];
    int lowest=marks[0];
    for(int i=1 ; i<=14;i++){
        if(marks[i]>highest){
            highest=marks[0];

        }if(marks[i]<lowest){
            lowest= marks[i];
        }
    }
    float average= sum/15;
    int range=highest-lowest;
    printf("new average\n",average);
    printf("students with 100",count100);
    printf("highest%d",highest);
    printf("lowest%d",lowest);
    printf("range%d",range);
    return 0;
}