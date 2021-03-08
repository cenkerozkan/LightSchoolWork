#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* This program has been written to perform
the specific tasks mentioned below:

	1 - Take a quantity given in TL and find the VAT (KDV)
		for this amount if VAT rate is 8%

	2 - Given the cost of an item in TL, display the amount of
		VAT you have to pay for it, and the cost of the item with
		VAT, if percentage of the VAT for that item is 12%

	3 - Given the marks a student got from Midterm 1, Midterm 2
		and final exam of a course, calculate the average grade
		of that student

	4 - Solve the previous problem again, but this time calculate
		the wighted average grade of that student, so that, Midterm 1
		forms 25%, Midterm 2 forms %30, and the final exam forms %45 of
		his grade.
*/

int main()
{
	// To control main menu loop and switching between tabs
	
	int iUserSel;
	
	// Main menu loop
	
	while (true)
	{
		// To hold user inputs
		
		double dVar;
		
		// First tab
		if (iUserSel == 1)
		{
			// Tab information
			
			printf("Take a quantity given in TL and find the VAT (KDV)\nfor this amount if VAT rate is 8%\n:    ");
			
			// Variable assignment
			
			scanf("%lf", &dVar);
			
			// Calculations \\
			
			// Variable to be used for program output
			
			double dResult = (dVar * 8) / 100;
			
			// Output
			
			printf("\nThe tax to be charged according to the price value you entered:  %lf", dResult);
			
			// Tab opening and closing operations
			
			while (true)
			{
				// The user is asked if he / she is done with the current tab
				
				printf("\nAre you done with this tab ?\n\t(1) - Yes\n\t(2) - No\n:    "); // 1 For yes, 2 For no
				
				// Variable assigment
				
				scanf("%d", &iUserSel);
				
				// In case one of the required values is entered
				
				if (iUserSel == 1)
				{
					// Break the loop and set the value 0 to prevent opening tabs without on purpose
					
					iUserSel = 0;
					
					break;
				}
				
				else if (iUserSel == 2)
				{
					// Break the loop and set the value
					
					iUserSel = 1;
					
					break;
				}
				
				// In case user makes a mistake
				
				else
				{
					printf("\nIt seems like you may have made a mistake");
				}
			}
		}
		
		// Second tab
		
		else if (iUserSel == 2)
		{
			// Since this tab contains two different conditions, it would be more efficient to keep the values under this tab \\
			
			// To hold price of the item
			
			double dPrice;
			
			// To hold TAX of the item
			
			double dTax;
			
			// Tab information with price entry request
			
			printf("\nGiven the cost of an item in TL, display the amount of\nVAT you have to pay for it, and the cost of the item with\nVAT, if percentage of the VAT for that item is %12\nEnter the price of the item\n:    ");
			
			// Variable assignment
			
			scanf("%lf", &dPrice);
			
			// VAT entry request
			
			printf("\nEnter the VAT value:    ");
			
			// Variable assignment
			
			scanf("%lf", &dTax);
			
			// Calculations \\
			
			// If the tax value is bigger than %12 of the original price \\
			
			if (dTax >= ((dPrice * 12) / 100))
			{
				// Output
				
				printf("\nPrice: %lf\nTax: %lf", dPrice, dTax);
			}
			
			// If the tax value is not bigger than %12 of the original price \\
			
			else
			{
				printf("\nTax is not bigger than %12 of the original price");
			}
			
			// Tab opening and closing operations
			
			while (true)
			{
				// The user is asked if he / she is done with the current tab
				
				printf("\nAre you done with this tab ?\n\t(1) - Yes\n\t(2) - No\n:    "); // 1 For yes, 2 For no
				
				// Variable assigment
				
				scanf("%d", &iUserSel);
				
				// In case one of the required values is entered
				
				if (iUserSel == 1)
				{
					// Break the loop and set the value 0 to prevent opening tabs without on purpose
					
					iUserSel = 0;
					
					break;
				}
				
				else if (iUserSel == 2)
				{
					// Break the loop and set the value
					
					iUserSel = 2;
					
					break;
				}
				
				// In case user makes a mistake
				
				else
				{
					printf("\nIt seems like you may have made a mistake");
				}
			}
		}
		
		// Third tab
		
		else if (iUserSel == 3)
		{
			// Since the user has to enter more than one value, it will be more efficient to define the values of this tab under this tab.
			
			// Value to hold Midterm 1 grade
			
			double dMidterm1;
			
			// Value to hold Midterm 2 grade
			
			double dMidterm2;
			
			// Value to hold final grade
			
			double dFinal;
			
			// Tab info with midterm 1 entry request
			
			printf("\nGiven the marks a student got from Midterm 1, Midterm 2\nand final exam of a course, calculate the average grade\nof that student\nEnter the Midterm 1 Grade\n:    ");
			
			// Variable assignment
			
			scanf("%lf", &dMidterm1);
			
			// Midterm 2 entry request
			
			printf("\nEnter the Midterm 2 grade\n:     ");
			
			// Variable assignment
			
			scanf("%lf", &dMidterm2);
			
			// Final entry request
			
			printf("\nEnter the Final grade\n:     ");
			
			// Variable assignment
			
			scanf("%lf", &dFinal);
			
			// Calculations \\
			
			double dResult = (dMidterm1 + dMidterm2 + dFinal) / 3;
			
			// Output
			
			printf("\nYour average grade according to your grades: %lf", dResult);
			
			// Tab opening and closing operations
			
			while (true)
			{
				// The user is asked if he / she is done with the current tab
				
				printf("\nAre you done with this tab ?\n\t(1) - Yes\n\t(2) - No\n:    "); // 1 For yes, 2 For no
				
				// Variable assigment
				
				scanf("%d", &iUserSel);
				
				// In case one of the required values is entered
				
				if (iUserSel == 1)
				{
					// Break the loop and set the value 0 to prevent opening tabs without on purpose
					
					iUserSel = 0;
					
					break;
				}
				
				else if (iUserSel == 2)
				{
					// Break the loop and set the value
					
					iUserSel = 3;
					
					break;
				}
				
				// In case user makes a mistake
				
				else
				{
					printf("\nIt seems like you may have made a mistake");
				}
			}
		}
		
		// Fourth tab
		
		else if (iUserSel == 4)
		{
			// Since the user has to enter more than one value, it will be more efficient to define the values of this tab under this tab.
			
			// Value to hold Midterm 1 grade
			
			double dMidterm1;
			
			// Value to hold Midterm 2 grade
			
			double dMidterm2;
			
			// Value to hold final grade
			
			double dFinal;
			
			// Tab info with midterm 1 entry request
			
			printf("\nSolve the previous problem again, but this time calculate\nthe weighted average grade of that student, so that, Midterm 1 forms 25%\nMidterm 2 forms 30%,\nAnd the Final forms 45% of his grade\nEnter the Midterm 1 grade\n:     ");
			
			// Variable assignment
			
			scanf("%lf", &dMidterm1);
			
			// Midterm 2 entry request
			
			printf("\nEnter the Midterm 2 grade\n:     ");
			
			// Variable assignment
			
			scanf("%lf", &dMidterm2);
			
			// Final entry request
			
			printf("\nEnter the Final grade\n:     ");
			
			// Variable assignment
			
			scanf("%lf", &dFinal);
			
			// Calculations \\
			
			double dResult = (dMidterm1 / 4) + (dMidterm2 * 0.3) + (dFinal * 0.45);
			
			// Output
			
			printf("\nYour average grade according to your grades: %lf", dResult);
			
			// Tab opening and closing operations
			
			while (true)
			{
				// The user is asked if he / she is done with the current tab
				
				printf("\nAre you done with this tab ?\n\t(1) - Yes\n\t(2) - No\n:    "); // 1 For yes, 2 For no
				
				// Variable assigment
				
				scanf("%d", &iUserSel);
				
				// In case one of the required values is entered
				
				if (iUserSel == 1)
				{
					// Break the loop and set the value 0 to prevent opening tabs without on purpose
					
					iUserSel = 0;
					
					break;
				}
				
				else if (iUserSel == 2)
				{
					// Break the loop and set the value
					
					iUserSel = 4;
					
					break;
				}
				
				// In case user makes a mistake
				
				else
				{
					printf("\nIt seems like you may have made a mistake");
				}
			}
		}
		
		// In case user wants to quit
		
		else if (iUserSel == 5)
		{
			break;
		}
		
		// Default program output
		
		else if (iUserSel == 0)
		{
			// Application information
		
			printf("\nThis program has been written to perform\nthe specific tasks mentioned below:\n\n\t(1) - VAT (KDV) Calculator\n\t(2) - VAT %12 Calculator\n\t(3) - Average grade calculator\n\t(4) - Weighted average grade calculator\n\t(5) - Quit\n:   ");
		
			// Variable assignment
		
			scanf("%d", &iUserSel);
		}
		
		// In case user makes a mistake
		
		else
		{
			printf("\nIt seems like you may have made a mistake.");
			
			// To prevent infinite loop
			
			iUserSel = 0;
		}
	}
}
