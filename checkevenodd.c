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
//        User is going to enter any integers  
//        And we have to check even or odd or zero
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//Step 2: Write the algorithm
//      
/*      START
            Accept a Number
            Create the variable as iValue
            create a function for cheking a number even or odd 
            Display the result from iValue
            
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
//  Input           : Interger
//  Output          : Interger
//  Description     : Cheking Even or Odd
//  Date            : 27/10/2026
//  Auther          : ARJUN ASHOK WARED
//
//
//
////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Number is even");
    }
    else if (iValue %2 != 0 )
    {
        printf("Odd Number");
    }
    else
    {
        printf("Invalid input");
    }

}

////////////////////////////////////////////////////////////////
//  Entery point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////
//
//  Step 5:Test the Program
//  
//  Tested test Cases
//  ----------------------------------------
//  Input          Output                 
//------------------------------------------
//  2               Even             
//  3               Odd              
//  0               zero              
//                              
//                              
//                            
//
//
////////////////////////////////////////////////////////////////