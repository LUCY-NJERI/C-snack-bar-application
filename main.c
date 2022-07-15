
Welcome to zetech c snack bar

created by DIT-01-0256/2022


GNU GCC compiler
MIT license
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int item;
    printf("\t Today's menu\n");
    printf("1. hotdog - ksh 90\n");
    printf("2. hamburger - ksh 300\n");
    printf("3. frenchfries - ksh 150\n");
    printf("4. milkshake - ksh 150\n");
    printf("5. coffee - ksh 70\n");
    printf("6. beef smokie - ksh 40\n");
    printf("enter item number:");
    scanf("%d",&item);
    if(item> 2&&item <=5){
        printf("item added to cart\n");
    }
    else{
        printf("invalid item\n");
        menu()
    }
    return item;
}


