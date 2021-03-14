#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>


/* This program is written to perform specific tasks given below;

	1 - Given a distance in meters and the speed of a car in km/h
		calculate how many seconds it will take for that car to travel
		that distance
		
	2 - A car traveling down a road approaches an intersection and slows
		down from a high speed to a lower speed in a certain time.
		Calculate the car's constant rate of acceleration, using the following
		formula
		
			acceleration = (vFinal - vInitial) / Time
			
	3 - The cost of the consumer of a new car is the sum of the wholesale
		cost of the car, the dealer's markup for 12 percent and a sales tax of 6 percent,
		calculate the consumer's cost given the wholesale cost of the car he buys.
		
	4 - A real estate agency pays its sales staff a salary of 400 Dollars per month
		plus a commission of 50 Dollars for each piece of real estate they sell plus 1 percent
		of the value of the sale. Compute and display a salesperson's salary given the number and
		the total value of sales he made in that month
		
	5 - Given a three digit integer, display each integer as individual numbers like
		
			357 ---> 3 5 7
	
	6 - Given a time duration in minutes, display this time duration in days, hours and minutes
*/



int main()
{
	// To control main menu loop and to control transitions between tabs.

	int iUserSel = 0;

	// Main menu loop

	while (true)
	{
		// To keep user data

		double dVar;

		// First tab

		if (iUserSel == 1)
		{
			// Since more than one value must be kept for this problem, it will be more efficient
			// to define the variables under this tab.

			// Variable to keep velocity value

			double dVelocity;

			// Variable to keep distance value

			double dDistance;

			// Tab information with input request

			printf("\nGiven a distance in meters and the speed of a car in km/h\ncalculate how many seconds it will take for that car to travel\nthat distance\nEnter the velocity of the car\n:   ");

			// Variable assignment 

			scanf("%lf", &dVelocity);

			// Input request

			printf("\nPlease enter the value of distance\n:   ");

			// Variable assignment

			scanf("%lf", &dDistance);

			// Calculations \\

			// To print output to the user

			double dResult = (dDistance) / (dVelocity * 0.27777778);

			// Output

			printf("\nIt will take %lf seconds to take that road", dResult);

			// To ask user if he/seh is done on this tab

			while (true)
			{
				printf("\nAre you done with this tab?\nEnter 1 For No\nEnter 0 For yes\n:   ");

				// Variable assignment 

				scanf("%d", &iUserSel);

				// To check if user made a mistake or not

				if (iUserSel == 1)
				{
					iUserSel = 1;

					break;
				}

				else if (iUserSel == 0)
				{
					break;
				}

				// Error prevention

				else
				{
					printf("\nIt seems like you may have made a mistake");
				}
			}
		}

		// Second tab

		else if (iUserSel == 2)
		{
			// Since more than one value must be kept for this problem, it will be more efficient
			// to define the variables to be used in this tab in here
			
			// Variable to keep initial velocity value
			
			double dVelocityInitial;
			
			// Variable to keep final velocity value
			
			double dVelocityFinal;
			
			// Variable to keep time value
			
			double dTimeSpent;
			
			// Tab information with input request
			
			printf("\nA car traveling down a road, approaches an intersection and slows down\nfrom a high speed to a lower speed.\nTo calculate it's acceleration\nEnter the Initial Velocity\n:   ");
			
			// Variable assignment
			
			scanf("%lf", &dVelocityInitial);
			
			// Input request
			
			printf("\nEnter the final velocity\n:    ");
			
			// Variable assignment
			
			scanf("%lf", &dVelocityFinal);
			
			// Input request
			
			printf("\nEnter the time spent\n:   ");
			
			// Variable assignment 
			
			scanf("%lf", &dTimeSpent);
			
			// Calculations \\
			
			double dResult = (dVelocityFinal - dVelocityInitial) / dTimeSpent;
			
			// Output
			
			printf("\nAccording to values you entered, the acceleration is: %lf meters / secondsquare", dResult);
			
			// To ask user if he / she is done on this tab
			
			while (true)
			{
				printf("\nAre you done with this tab?\nEnter 1 For No\nEnter 0 For yes\n:   ");

				// Variable assignment 

				scanf("%d", &iUserSel);

				// To check if user made a mistake or not

				if (iUserSel == 1)
				{
					iUserSel = 2;

					break;
				}

				else if (iUserSel == 0)
				{
					break;
				}

				// Error prevention

				else
				{
					printf("\nIt seems like you may have made a mistake");
				}
			}
		}

		// Third tab

		else if (iUserSel == 3)
		{
			// Since more than one value must be kept for this problem, it will be more efficient
			// to define the variables to be used in this tab in here.
			
			// Variable to keep the value of tax
			
			double dTax;
			
			// Variable to keep the value of markup
			
			double dMarkup;
			
			// Variable to keep the value of commission
			
			double dCommission;
			
			// Tab information with input request
			
			printf("\nThe cost to the consumer of a new car is the sum of the wholesale cost of the car\nThe dealer's markup for 12 percent and a sales tax of 6 percent.\nCalculate the consumer's cost given the wholesale\ncost of the car he buys.\nEnter the markup\n:   ");
			
			// Variable assignment
			
			scanf("%lf", &dMarkup);
			
			// Input request
			
			printf("\nEnter the tax\n:   ");
			
			// Variable assignment 
			
			scanf("%lf", &dTax);
			
			// Input request
			
			printf("\nEnter the 1 percent commission\n:   ");
			
			// Variable assignment 
			
			scanf("%lf", &dCommission);
			
			// Calculations \\
			
			double dResult = (dMarkup + dTax + dCommission) * (100/19);
			
			// Output
			
			printf("\nThe total cost of the wholesale is equal to: %lf", dResult);
			
			// To ask user if he / she is done on this tab
			
			while (true)
			{
				printf("\nAre you done with this tab?\nEnter 1 For No\nEnter 0 For yes\n:   ");

				// Variable assignment 

				scanf("%d", &iUserSel);

				// To check if user made a mistake or not

				if (iUserSel == 1)
				{
					iUserSel = 3;

					break;
				}

				else if (iUserSel == 0)
				{
					break;
				}

				// Error prevention

				else
				{
					printf("\nIt seems like you may have made a mistake");
				}
			}
		}

		// Fourth tab

		else if (iUserSel == 4)
		{
			// Since more than one value must be kept for this problem, it will be more efficient to define the variables to be used in this tab
			
			// Tab information
			
			printf("\nA real estate agency pays its sales staff a salary of 400 Dollars per month\nplus a commission of 50 dollars for each piece of real estate\nthey sell plus 1 percent of the value of the sale. Compute and display\na salesperson's salary given the number and the total value of sales\nhe made in that month.\n");
			
			// Standard salary
			
			double dSalary = 400;
			
			// To keep the value of the sale made
			
			double dSalesPrice;
			
			// If more than one sale is made, to keep 50 Dollars and 1 percent commission calculated from the value of these sales
			
			double dSwap = 0;
			
			// To control the while loop which is for checking if there is more than one sale or not
			
			int iControlFlag = 0;
			
			// To find out if there is more than one sale 
			
			printf("\nHave you made one sale or more than one ?\n1 - More than one\n0 - Not more than one\n:   ");
			
			// Variable assignment 
			
			scanf("%d", &iControlFlag);
			
			// In case of multiple sales
			
			if (iControlFlag == 1)
			{
				// To recieve sales
				
				while (iControlFlag != 0)
				{
					// Input request
					
					printf("\nEnter the money from the sale\n:   ");
					
					// Variable assignment
					
					scanf("%lf", &dSalesPrice);
					
					// Assigning 1 percent commission to the swap variable at 311th line
					
					dSwap = dSwap + (dSalesPrice * 1/100);
					
					// Counter variable to be used to add commission as much as the number of sales
					
					int iCounter;
					
					iCounter ++;
					
					// To ask user if he/she is done
					
					while (true)
					{
					
						printf("\nAre you done ?\nEnter 1 for No\nEnter 0 for Yes\n:   ");
						
						// Variable assignment 
						
						scanf("%d", &iControlFlag);
						
						// If user is done
						
						if (iControlFlag == 0 || iControlFlag == 1)
						{
							if (iControlFlag == 0)
							{
								// First result variable for the case of multiple sales made
								
								double dResult1 = ((iCounter * 50) + dSwap + dSalary);
								
								// Output
								
								printf("\nTotal amount of money earned is: %lf", dResult1);
							}
							
							break;
						}
						
						// Error prevention
						
						else
						{
							// Informing user about that there is a mistake
							
							printf("\nIt seems like you may have made a mistake.");
						}
					}
				}
				
				// To prevent passing to the second condition
				
				iControlFlag = 1;
			}
			
			// In case of one sale
			
			else if (iControlFlag == 0)
			{
				// Input request
				
				printf("\nEnter the money earned from the sale\n:   ");
				
				// Variable assignment 
				
				scanf("%lf", &dSalesPrice);
				
				// Calculations \\
				
				// Second result variable 
				
				double dResult2 = dSalary + (dSalesPrice * 1/100) + 50;
				
				// Output 
				
				printf("\nTotal amount of money earned is: %lf", dResult2);
			}
			
			// To ask user if he / she is done on this tab
			
			while (true)
			{
				printf("\nAre you done with this tab?\nEnter 1 For No\nEnter 0 For yes\n:   ");

				// Variable assignment 

				scanf("%d", &iUserSel);

				// To check if user made a mistake or not

				if (iUserSel == 1)
				{
					iUserSel = 4;

					break;
				}

				else if (iUserSel == 0)
				{
					break;
				}

				// Error prevention

				else
				{
					printf("\nIt seems like you may have made a mistake");
				}
			}
		}

		// Fifth tab

		else if (iUserSel == 5)
		{
			// Variable to keep integer
			
			int iNumber;
			
			// Tab information
			
			printf("\nGiven a three digit integer, display each of its digits as individual\nnumbers like 357 ---> 3, 5, 7\nEnter a three digit number\n:   ");
			
			// Variable assignment
			
			scanf("%d", &iNumber);
			
			// In case the entered number is not three digits
			
			if (iNumber < 100 || iNumber > 999)
			{
				// Informing user about the mistake 
				
				printf("\n\nIt seems like you may have made a mistake\n\n");
				
				// To restart the tab
				
				iUserSel = 5;
			}
			
			// In case of no error
			
			else
			{
				// Output
				
				printf("\n\nDigits are: %d, %d, %d", (iNumber / 100), (iNumber % 100 / 10), (iNumber % 10));
				
				// To ask user if he/she is done
				
				while (true)
				{
					printf("\nAre you done with this tab?\nEnter 1 For No\nEnter 0 For yes\n:   ");

					// Variable assignment 

					scanf("%d", &iUserSel);

					// To check if user made a mistake or not

					if (iUserSel == 1)
					{
						iUserSel = 5;

						break;
					}

					else if (iUserSel == 0)
					{
						break;
					}

					// Error prevention

					else
					{
						printf("\nIt seems like you may have made a mistake");
					}
				}
			}
		}

		// Sixth tab

		else if (iUserSel == 6)
		{
			// We will assign its own integer valueo to this tab because there are errors in the calculations when we use double data type
			
			int iVar;
			
			// Tab information
			
			printf("\nGiven a time duration in minutes, display this time duration in days, hours and minutes.\nEnter the time duration\n:   ");
			
			// Variable assignment
			
			scanf("%d", &iVar);
			
			// Calculations \\
			
			// For days
			
			int iDays = iVar / 1440;
			
			// For the correct calculation
			
			iVar = iVar - iDays * 1440;
			
			// For Hours
			
			int iHours = iVar / 60;
			
			// For the correct calculation
			
			iVar = iVar - iHours * 60;
			
			// For Minutes
			
			int iMinutes = iVar;
			
			printf("\n%d Days, %d Hours, %d Minutes", iDays, iHours, iMinutes);
			
				// To ask user if he/she is done
				
				while (true)
				{
					printf("\nAre you done with this tab?\nEnter 1 For No\nEnter 0 For yes\n:   ");

					// Variable assignment 

					scanf("%d", &iUserSel);

					// To check if user made a mistake or not

					if (iUserSel == 1)
					{
						iUserSel = 5;

						break;
					}

					else if (iUserSel == 0)
					{
						break;
					}

					// Error prevention

					else
					{
						printf("\nIt seems like you may have made a mistake");
					}
				}
		}

		// Default output

		else if (iUserSel == 0)
		{
			// Application information with Input request
			
			printf("\nThis application is written to perform specific tasks given below;\n1 - Given a distance in meters and the speed of a car in km/h\ncalculate how many seconds it will take for that car to travle\nthat distance.\n\n2 - A car traveling down a road approaches an intersection and slows\ndown from a high speed to a lower speed in a c ertain time. Calculate the car's constant rate of acceleration.\n\n3 - The cost to the consumer of a new car is the sum of the wholesale\cost of the car, the dealer's markup for 12 percent and a sales tax for 6 percent, calculate the consumer's cost\ngiven the wholesale cost of the car he buys.\n\n4 - A real estate agency pays its sales staff a salary of 400 Dollars\nper month plus a commission of 50 Dollars for each piece of real estate\nthey sell plus 1 percent of the value of the sale. Compute and idsplay\na salesperson's salary given the number and the total value of sales\nhe made in that month.\n\n5 - Given a three digit integer, display each of its digits as individual numbers.\n\n6 - Given a time duration in minutes, display this time duration in days, hours and minutes.\n\n7 - Exit\n\nWhat would you like to do ?\n:   ");
			
			// Variable assignment
			
			scanf("%d", &iUserSel);
		}
			
		// If user wants to quit
		
		else if (iUserSel == 7)
		{
			break;
		}
		
		// Error prevention

		else
		{
			printf("\nIt seems like you may have made a mistake\n\n");

			iUserSel = 0;
		}
	}
	
	return 0;
	
}
