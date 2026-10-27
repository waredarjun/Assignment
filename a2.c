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
//        taking age from user   
//        And we have to check user eligible for voting or not
//  
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//Step 2: Write the algorithm
//      
/*      START
            Taking Age from User
            Create the variable as iAge
            create a function for cheking a CheckVotingEligibility 
            Display the result 
            
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
//  Function Name   : CheckVotingEligibility
//  Input           : Interger 
//  Output          : String
//  Description     : Eligible for voting or not
//  Date            : 27/10/2026
//  Auther          : ARJUN ASHOK WARED
//
//
//
////////////////////////////////////////////////////////////////

void CheckVotingEligibility(iNo)
{
    if(iNo >= 18)
    {
        printf("Your Eligible for voting");
    }
    else if (iNo < 18)
    {
        printf("Your are not Eligible for voting");
    }
    
    else
    {
        printf("Invalid Age");
    }

}

////////////////////////////////////////////////////////////////
//  Entery point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iAge = 0;

    printf("Enter a your age : ");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////
//
//  Step 5:Test the Program
//  
//  Tested test Cases
//  ----------------------------------------
//  Input           Output                           
//------------------------------------------
//  18              Eligible                                  
//  17              Not Eligible                                   
//  aaa             Invalide input                                           
//                                            
//                              
//                            
//
//
////////////////////////////////////////////////////////////////