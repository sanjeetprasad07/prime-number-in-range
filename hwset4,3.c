//wap to take range from user and print all the prime no. in the range
#include<stdio.h>
#include<math.h>
int main(){
    int start,end,i;
    printf("enter the starting number:");
    scanf("%d",&start);
    printf("enter the ending number:");
    scanf("%d",&end);
    for(i=start;i<=end;i++){
        int div=0;
        int root=sqrt(i);
        for(int j=2;j<=root;j++){
            if(i%j==0){
                div=1;
                break;
            }
        }
        if(div==0){
            printf("numbers which are prime:%d\n",i);
        }else{
            printf("numbers which are not prime:%d\n",i);
        }
    }
}