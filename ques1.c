#include<stdio.h>
int main(){
    int car[12]={10,20,15,30,25,12,18,40,22,16,28,14};
    int sum=0;
    float average;
    for(int i =0; i<=11;i++){
        sum = sum +car[i];
    }
    average = sum/12;
    int overloaded=0;
    for(int i =0 ;i<=11; i++){
      if(car[i]>average)
      overloaded++;
    }
    int highest =car[0];
    int lowest=car[0];
    for(int i=1;i<=11;i++){
        if(car[i]>highest){
            highest=car[i];
        }
        if(car[i]<lowest){
            lowest = car[i];
        }
    }
    int difference=highest -lowest;
    printf(" average%f\n",average);
    printf("overladed%d\n",overloaded);
    printf("highest%d\n", highest);
    printf("lowest%d\n",lowest);
    printf("difference%d\n",difference);

    return 0;

}