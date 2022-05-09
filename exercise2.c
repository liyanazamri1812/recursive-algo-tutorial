//documentation section 
/* Exercise 2 */

//pre-processor section 
#include<stdio.h>

//global variable section 
int Fibonacci (int N);
int i;
int N = 10;

//main function section 
int main(){
    //write here your program
    
        printf("The Series are: ");
    for (i = 1; i <= N; i++)
    {
        printf("%d ", Fibonacci (i));
    }
    
    return 0;
}


    return 0;
}


//user-defined section 
int Fibonacci (int N)
{
    if (N<= 0)
    {
        return 0;
    }

    else if( N==1 )
    {
        return 1;
    }
   
    else
    {
        return Fibonacci (N-1)+Fibonacci (N-2);
    }
        
}
    
