#include<stdio.h>
int main(){ 
int stock[5]={50,5,80,10,40};
int minimum[5]={30,25,70,20,40};
 int largestreorder=0;
  int totalreorders=0;
for(int i=0;i<=4;i++){
    if(stock[i]<minimum[i]){
        int reorder =minimum[i]-stock[i];
    
    printf("reorders%d\n",reorder);
    
totalreorders=totalreorders-reorder;
 
 if(reorder>largestreorder){
    largestreorder=reorder;
 }
 }
}
printf("largest reorder=%d\n",largestreorder);
printf("total reorder=%d",totalreorders);

    
    return 0;
}