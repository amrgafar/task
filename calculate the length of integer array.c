#include<stdio.h>
int main(){
    int len  =0;
    int arr[] = {1,2,3,4,5,6};  
    printf("C Program to calculate length of array : \n");
	
   
    printf("Size of Array is :%d \n",sizeof(arr));
	
    printf("Size of one int value is :%d \n",sizeof(int));
	
    //Here calculating length of array
    len  = sizeof(arr)/sizeof(int);
	
    printf("Length of Array is:%d",len);
	
    return 0;
	
}