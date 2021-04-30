#include<stdio.h>
#include<math.h>

iq(){
    int n,e=0,o=0,k;

    scanf("%d",&n);
    int arry[100];

     for(int i=1;i<=n;i++){
        scanf("%d",&arry[i]);
        if(arry[i]%2==0){
            e++;
        }
        else {
            o++;
        }

     }
     if(e>o){
        for(int i=1;i<=n;i++){
            if(arry[i]%2!=0){
               k=i;
            }

        }
        }
        else {
        for(int i=1;i<=n;i++){
            if(arry[i]%2==0){
               k=i;
            }
     }
}
printf("%d\n",k);
}

int main(){
    iq();
    return 0;
}
