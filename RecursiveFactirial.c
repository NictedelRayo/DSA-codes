#include <stdio.h>

int Facton(int n);

int main()
{
    printf("%d",Facton(20));
    return 0;
}

int Facton(int n){
    
    if(n==0 || n==1){
        
        return 1;
        
    }
        
    return n*Facton(n-1);
    
    
}
