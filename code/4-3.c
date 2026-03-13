#include <stdio.h>

int main()
{
    int a,count;
    scanf("%d",&a);
    for(int i = 2; i<a;i++){
        if(a%i == 0){
            count++;
        }
    }
    
    if(count == 1){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}

