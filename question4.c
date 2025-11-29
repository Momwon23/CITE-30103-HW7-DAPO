#include <stdio.h>

// a void function that exchanges 2ints by reference .

void swap(int *x, int *y) ;
        int main () {
int x, y ;
printf("Enter 2 numbers to be swapped:");
scanf("%d %d",&x,&y);

//& holds where the address of (value)
//* holds the value at , used when we want to change value at(index)
printf("Before Swap: x= %d , y= %d\n", x, y); // prints the x and y entered as the user enterd it.
 swap(&x,&y); //performs the action needed.
printf("After Swap: x= %d, y= %d\n",x ,y);
return 0;
        }
void swap (int *x, int *y)
{
int temp = *x;
// after making temp hold the VALUE AT x
 *x = *y; // we change what x was point to ->  the value AT y.
  *y = temp ; // making y = the old value at x that was saved into temp before temp changed.
}

