#include<stdio.h>
int main(){
    int n1,n2,i;
    
    printf("Enter the n1 and n2\n");
    scanf("%d%d",&n1,&n2);
    if(n1<n2){
        
        for(i=n1;i<=n2;i++){
            if(i%5==0){
            printf("%d\n",i);
            }
        }
        i=n1;
        while(i!=n2){
            if(i%5==0)
            printf("%d\n",i);
            i=i+1;
        }
        i=n1;
        do{ 
            
            if(i%5==0);
            printf("%d",i);
            i=i+1;
            
            
        }
        while(i!=n2);
        
        
    }
    else
    printf("n1 is greater\n");
    exit(1);
    
    //printf("Hello welcome to the first session!");
    return 0;
}

