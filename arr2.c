#include<stdio.h>

int main(void){

int n =9, arr[] = {2,5,6,7,9,8,1,4};
int end = sizeof(arr)/sizeof(arr[0]) ;
int total = n*(n+1)/2;

for(int i=0; i<end; i++){
total = total - arr[i];
}

printf("%d \n", total);

return 0;
}
