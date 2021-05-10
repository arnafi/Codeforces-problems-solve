#include<stdio.h>
#include<math.h>

int expression(){
    int a,b,c;
    int arry[5];
    scanf("%d%d%d",&a,&b,&c);
    arry[0]=a+(b*c);
    arry[1]=a*(b+c);
    arry[2]=a*b*c;
    arry[3]=(a+b)*c;
    arry[4]=a+b+c;

    for(int i=0; i<5;i++){
      for(int j=0;j<5-i-1;j++){
        if(arry[j]>arry[j+1]){
            int swap = arry[j];
            arry[j]=arry[j+1];
            arry[j+1] = swap;
        }
      }
    }
    printf("%d",arry[4]);


}

int main (){
    expression();
    return 0;
}
