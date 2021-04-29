#include<stdio.h>
#include<math.h>

int watermelon(){
    int a,b;;

    scanf("%d",&a);
    b=a-2;
    if(b%2==0 && b!=0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main(){
    watermelon();
    return 0;
}
