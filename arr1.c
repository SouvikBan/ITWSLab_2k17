#include<stdio.h>

int main(void){

int temp, start =0, arr[] = {2,5,6,7,87,90,76,34,6};
int end = sizeof(arr)/sizeof(arr[0]) -1 ;
int l = end;

while(start < end){
temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
start++;
end --;
}

for(int i=0; i<=l; i++){
printf("%d \n", arr[i]);
//printf("%lu \n", &arr[i]);
}

return 0;
}
