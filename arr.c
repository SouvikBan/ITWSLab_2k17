#include<stdio.h>

int main(void){

int arr[] = {2,5,6,7,87,90,76,34,6};

printf("%lu \n", arr);

for(int i=0; i<9; i++){
printf("%d \t", arr[i]);
printf("%lu \n", &arr[i]);
}

return 0;
}
