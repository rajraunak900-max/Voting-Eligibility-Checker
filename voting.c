//write a code to decide whether a person is applicable for voting or not.
#include <stdio.h>

int main(){
    int age;
    printf("enter your age \n");
    scanf("%d",&age);
    if(age>=18.0){
        printf("congratulations your is age %d you are eligible for voting ",age);
    }
    else{
        printf("\nsorry your current age is %d so you are not eligible",age);
    }
    return 0;
}