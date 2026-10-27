/*
    Step 1:Understand the problem statement
    Step 2:Write the algorithm
    Step 3:Decide the programming language
    Step 4:Write the program
    Step 5:Test the Program
    
*/

////////////////////////////////////////////////////////////////
//
//Step 1: Understand the problem statement
//        taking two integer input from user   
//        And we have to check gretor og them
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//Step 2: Write the algorithm
//      
/*      START
            Taking input from user
            Create the variable as iValue1 and iValue2
            create a function for cheking a Gretor of them from iFirst and iSecound interger parametor 
            Display the result from iValue1 and iValue2
            
*/  
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//Step 3: Decide the programming language
//        We select C programming 
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//Step 4: Write the program
//        
//  
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name   : CheckEvenOdd
//  Input           : Interger Interger
//  Output          : Integer
//  Description     : Cheking Gretor of them
//  Date            : 27/10/2026
//  Auther          : ARJUN ASHOK WARED
//
//
//
////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is gretor",iFirst);
    }
    else if (iSecond > iFirst )
    {
        printf("%d is gretor ",iSecond);
    }
    else if ( iFirst = iSecond)
    {
        printf("Both equal");
    }
    else
    {
        printf("Invalid Input");
    }

}

////////////////////////////////////////////////////////////////
//  Entery point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a two number : ");
    scanf("%d %d",&iValue1, &iValue2);

    CheckEvenOdd(iValue1, iValue2);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////
//
//  Step 5:Test the Program
//  
//  Tested test Cases
//  ----------------------------------------
//  Input1          Input2          Output                 
//------------------------------------------
//  2               3               3 is gretor                          
//  3               2               3 is gretor                             
//  4               4               Both equal                             
//  q               a               Invalid input                            
//                              
//                            
//
//
////////////////////////////////////////////////////////////////