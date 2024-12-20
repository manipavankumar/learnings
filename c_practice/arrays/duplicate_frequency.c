#include<stdio.h>

int main(){
    int a[] ={1,2,2,3,4,4,2};
    int len = sizeof(a)/sizeof(a[0]);
    int fre[len];
    for(int i =0;i<len;i++)
        fre[i]=-1;
    
    for(int i=0;i<len;i++){
        int count=1;
        if(fre[i] == -1){
        for(int j=i+1;j<len;j++){
            if(a[i] == a[j]){
                count++;
                fre[j] =0;
            }
            
        }
        fre[i]=count;
    }
    }
    // Print the frequencies
    printf("Element : Frequency\n");
    for (int i = 0; i < len; i++) {
        if (fre[i] != 0) { // Print only for unique elements
            printf("%d : %d\n", a[i], fre[i]);
        }
    }
}