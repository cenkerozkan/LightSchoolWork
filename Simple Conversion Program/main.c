#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* This program has been written to accomplish
	some specific tasks given below:
	
		1 - Given the amount of dollars you have, calculate
			how much Turkish Liras it makes
			
		2 - Given the amount of Turkish Liras you have, calculate
			how much Dollars or Euros it worth
		
		3 - Given a length in feet, convert it into milimeters.
			(1 foot = 12 inches, 1 inch = 2.54 cm)
			
		4 - Given a temperature in degrees Fahrenheit (F), convert
			it into degrees Centigrade (C) by using the formula:
			
				C = (F - 32) / (1.8)
				
		5 - For help, type 1
				
*/

int main()
{
	// Application info
	
	printf("This program has been written to accomplish\nsome specific tasks given below:\n(1) - Given the amount of dollars you have, calculate\nHow much Turkish Liras it makes.\n\n(2) - Given the amount of Turkish Liras you have, calculate\nHow much Dollars or Euros you can buy with it\n\n(3) - Given a length in feet, convert it into milimeters\n(1 foot = 12 inches, 1 inch = 2.54 milimeters)\n\n(4) - Given a temperature in degrees Fahrenheit (F), convert\nit into degrees Centigrade (C) by using the formula:\nC = (F - 32) / (1.8)\n\n(5) - For help\n(0) - Quit\n:   ");
	
	//  Variable to store user choice
	
	int iUserSel;
	
	// Main menu loop
	
	while (true)
	{
		// Assignment of the choice of user
		
		scanf("%d", &iUserSel);
		
		// First tab
		
		if (iUserSel == 1)
		{
			// Variable to store user data 
			
			double dVar;
			
			// Tab information
			
			printf("\nDollar to Turkish Liras Tab\n - Enter the amount of money\n - Type 1 and enter for help\n - Type 0 and enter for main menu\n:   ");
			
			// Tab menu
			
			while (true)
			{
				// User data assignment
				
				scanf("%lf", &dVar);
				
				// If user enters a value
				
				if (dVar != 1 && dVar != 0)
				{
					// Calculations
					
					double dDollarCurrency = 7.53;
					
					// Result variable to express calculations
					
					double dResult = dVar * dDollarCurrency;
					
					// Result feedback
					
					printf("\n%lf Dollars equal to %lf\n:   ", dVar, dResult);
				}
				
				// If user wants go to the main menu
				
				else if (dVar == 0)
				{
					// To break tab menu
					
					break;
				}
				
				// If user needs help
				
				else if (dVar == 1)
				{
					// Reminding user what this tab is about
					
					printf("\nDollar to Turkish Liras Tab\n - Enter the amount of money\n - Type 1 and enter for help\n - Type 0 and enter for main menu\n:   ");
				}
				
				// Error prevention
				
				else
				{
					// Error message
					
					printf("\nIt looks like you may have made a mistake");
				}
			}	
		}
		
		// Second tab
		
		else if (iUserSel == 2)
		{
			// Variable to store user data
			
			double dVar;
			
			// Tab information
			
			printf("\nGiven the amount of Turkish Liras you have, calculate\n\tHow much Dollars or Euros it worths\n\n - Enter a value for conversion\n - Type 1 and enter for help\n - Type 0 and enter to main menu\n:   ");
			
			// Tab menu
			
			while (true)
			{
				// User data assignment
				
				scanf("%lf", &dVar);
				
				// If user enters a value
				
				if (dVar != 0 && dVar != 1)
				{
					// Calculations
					
					// Dollar currency
					
					double dDollarCurrency = 7.53;
					
					// Euro currency
					
					double dEuroCurrency = 8.98;
					
					// Result variable to express calculations
					
					double dResultDollar = (dVar / dDollarCurrency);
					
					double dResultEuro = (dVar / dEuroCurrency);
					
					// Result feedback
					
					printf("\n%lf Turkish Liras worths:\n %lf Dollars\n %lf Euros\n:   ", dVar, dResultDollar, dResultEuro);
				}
				
				// If user wants to go to main menu
				
				else if (dVar == 0)
				{
					break;
				}
				
				// If user needs help
				
				else if (dVar == 1)
				{
					// Reminding what this tab is about
					
					printf("\nGiven the amount of Turksih Liras you have, calculate how much Dollars\nor how much Euros it worths.\n\n - Enter the amount of money\n - Type 1 and enter for help\n - Type 0 and enter to main menu\n:   ");
				}
				
				// Error prevention
				
				else
				{
					// Error message
					
					printf("\nIt looks like you may have made a mistake\n:   ");
				}
			}
		}
		
		// Third tab
		
		else if (iUserSel == 3)
		{
			// Variable to store user data
			
			double dVar;
			
			// Tab information
			
			printf("\nGiven a length in feet, convert it into milimeters.\n\t(1 foot = 12 inches, 1 inch = 2.54 cm)\n\n - Enter a value for conversion\n - Type 1 and enter for help\n - Type 0 and enter for main menu\n:   ");
			
			// Tab menu
			
			while (true)
			{
				// Variable assignment
				
				scanf("%lf", &dVar);
				
				// If user enters a value 
				
				if (dVar != 0 && dVar != 1)
				{
					// Calculations
				
					// feet to inches
					
					double dFeetToInches = 12;
					
					// inches to cm
					
					double dInchToCentimeter = 2.54;
					
					// centimeters to milimeters
					
					double dCmToMM = 100;
					
					// Result variable to express calculations
					
					double dResult = (((dVar * dFeetToInches)*dInchToCentimeter)*dCmToMM);
					
					// Result feedback
					
					printf("\n%lf feet is equal to %lf mm\n:   ", dVar, dResult);
				}
				
				// If wants to go to main menu
				
				else if (dVar == 0)
				{
					break;
				}
				
				// If user needs help
				
				else if (dVar == 1)
				{
					// Reminding user what this tab is about 
					
					printf("\nGiven a length in feet, convert it into milimeters.\n\t(1 foot = 12 inches, 1 inch = 2.54 cm)\n\n - Enter a value for conversion\n - Type 1 and enter for help\n - Type 0 and enter for main menu\n:   ");
				}
				
				// Error prevention
				
				else
				{
					
					// Error message
					
					printf("\nIt looks like you may have made a mistake\n:   ");	
				}
			}
		}
		
		// Fourth tab
		
		else if (iUserSel == 4)
		{
			// Variable to store user data
			
			double dVar;
			
			// Tab information
			
			printf("\nGiven a temperature in degrees Fahrenheit (F), convert it\n\tinto degrees Centigrade (C) by using the formula:\n\tC = (F - 32) / (1.8)\n\n - Enter a value for conversion\n - Type 1 for help\n - Type 0 and enter for main menu\n:   ");   	
			
			// Tab menu
			
			while (true)
			{
				// Variable assignment
				
				scanf("%lf", &dVar);
				
				//  If user enters a value
				
				if (dVar != 1 && dVar != 0)
				{
					// Calculations
					
					// Simple equation for calculation and result variable
					
					double dFahrToCenti = ((dVar - 32) / (1.8));
					
					// Result feedback
					
					printf("\n%lf Fahrenheit degrees equal to %lf Centigrade degrees\n:   ", dVar, dFahrToCenti);
				}
				
				// If user wants to go to main menu
				
				else if (dVar == 0)
				{
					break;
				}
				
				// If user needs help
				
				else if (dVar == 1)
				{
					// Reminding user what this tab is about 
					
					printf("\nGiven a temperature in degrees Fahrenheit (F), convert it\n\tinto degrees Centigrade (C) by using the formula:\n\tC = (F - 32) / (1.8)\n\n - Enter a value for conversion\n - Type 1 for help\n - Type 0 and enter for main menu\n:   "); 
				}
				
				// Error prevention
				
				else
				{
					// Error message
					
					printf("\nIt looks like you may have made a mistake\n:   ");
				}
			}
		}
		
		// Help tab
		
		else if (iUserSel == 5)
		{
			// Reminding user how app works
			
			printf("This program has been written to accomplish\nsome specific tasks given below:\n(1) - Given the amount of dollars you have, calculate\nHow much Turkish Liras it makes.\n\n(2) - Given the amount of Turkish Liras you have, calculate\nHow much Dollars or Euros you can buy with it\n\n(3) - Given a length in feet, convert it into milimeters\n(1 foot = 12 inches, 1 inch = 2.54 milimeters)\n\n(4) - Given a temperature in degrees Fahrenheit (F), convert\nit into degrees Centigrade (C) by using the formula:\nC = (F - 32) / (1.8)\n\n(5) - For help\n(0) - Quit\n:   ");
		}
		
		// To leave 
		
		else if (iUserSel == 0)
		{
			break;
		}
		
		// Error prevention
		
		else
		{
			// Error message
					
			printf("\nIt looks like you may have made a mistake\n:   ");	
		}
	}
	
	return 0;
	
}
