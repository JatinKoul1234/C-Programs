#include <stdio.h>
#include <conio.h>
  
int main(){
    int inputArray[100], elementCount, counter, num;
      
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);
     
    /* Read array elements */
    for(counter = 0; counter < elementCount; counter++){
    	
        scanf("%d", &inputArray[counter]);
    }
     
    printf("Enter a number to serach in Array\n");
    scanf("%d", &num);
     
    /* search num in inputArray from index 0 to elementCount-1 */
    for(counter = 0; counter < elementCount; counter++){
        if(inputArray[counter] == num){
            printf("Number %d found at index %d\n", num, counter);
            break;
        }
    }
     
    if(counter == elementCount){
     printf("Number %d Not Present in Input Array\n", num);
}
    return 0;
}
