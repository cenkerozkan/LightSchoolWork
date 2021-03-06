#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* 
		1 - Given a temperature in degrees Centigrade (C), convert it into
			degrees Fahrenheit (F)

		2 - Given a temperature in degrees Kelvin (K), convert it into degrees
			Rankine (R)

					( K = 273 + C, R = 512 + F)

		3 - Calculate the area and the perimeter of a circler, given its
			diameter.

				(pi = 3.1416)

				Area of a circle = pi * r^2
				Perimeter of a circle = 2 * pi * radius

		4 - Calculate the volume and the surface are of a cylinder, using the
			following formulas. (Note: You should decide which values must be 
			given as input to solve this problem)


				Volume = pi * radius^2 * height
				Surface Area = (2 * pi * radius^2) + (2 * pi * radius * height)	
*/


int main()
{
	// Constant value required to convert degrees celsius to degrees fahrenheit
	
	const double dCelsiusToFahrenheit = 33.8;
	
	// The constant value required to convert degrees Kelvin to degrees Rankine
	
	const double dKelvinToRankine = 1.8;
	
	// Constant value of pi number
	
	const double dPiNumber = 3.1416;
	
	// The value of the user's choices will be hold
	
	int iUserSel;
	
	// Main menu loop
	
	while (true)
	{	
		// Application information
	
		printf("\nThis program is written to accomplish some specific conversion tasks which are:\n (1) - Centigrade degree to Fahrenheit\n (2) - Kelvin degree to Rankine\n (3) - Calculation the area and the perimeter of a circle\n (4) - Calculation the volume and the surface of a cylinder\n (0) - Quit\n:   ");
		
		// The process of assigning the value chosen by the user
		
		scanf("%d", &iUserSel);
		
		// First tab
		
		if (iUserSel == 1)
		{
			// The values that the ser will enter will be kept here.
		
			double dVar;
			
			// Tab menu
			
			while (true)
			{
				// Tab information
			
				printf("\nCentigrades to Fahrenheit\n - Type a value\n - Type 0 and to leave the tab\n:   ");
				
				// Variable assignment
			
				scanf("%lf", &dVar);
				
				// If user enters a value
				
				if (dVar != 0)
				{
					// Calculations 
					
					// Result variable 
					
					double dResult = dVar * dCelsiusToFahrenheit;
					
					// Output
					
					printf("\n%lf Fahrenheit equivalent of the centigrade value you entered: %lf", dVar, dResult);
				}
				
				// If user wants to go to main menu
				
				else if (dVar == 0)
				{
					break;
				}
				
				// In case user makes a mistake
				
				else
				{
					printf("\nIt looks like you entered an incorrect login");
				}
			}
		}
		
		// Second tab
		
		else if (iUserSel == 2)
		{
			
			// The values that the ser will enter will be kept here.
		
			double dVar;
			
			// Tab menu
			
			while (true)
			{
				// Tab information
				
				printf("\nKelvin to Rankine\n - Type a value\n - Type 0 and to leave the tab\n:   ");
				
				// Variable assignment
				
				scanf("%lf", &dVar);
				
				// If the user enters a value
				
				if (dVar != 0)
				{
					// Conversion stage
					
					// The required value for keeping and outputting the result
					
					double dResult = (dVar * dKelvinToRankine);
					
					// Output
					
					printf("\nThe Rankine equivalent of the value you entered in (%lf) Kelvin:  %lf", dVar, dResult);
				}
				
				// In case the user wants to close the tab
				
				else if (dVar == 0)
				{
					break;
				}
				
				// In case the user makes a mistake
				
				else
				{
					printf("\nIt looks like you entered an incorrect number");
				}
			}
		}
		
		// Third tab
		
		else if (iUserSel == 3)
		{	
			// The values that the ser will enter will be kept here.
		
			double dVar;
		
			// tab menu
			
			while (true)
			{
				// Tab information
				
				printf("\nArea and Perimeter of a Circle\n - Enter the value of the radius\n - Type 0 and to leave the tab\n:   ");
				
				// In case the user enters a value
				
				if (dVar != 0)
				{
					// Variable assignment
					
					scanf("%lf", &dVar);
					
					/* Calculation Stage */
					
					// The value to keep the area of the circle
					
					double dResultArea = (dPiNumber * dVar * dVar);
					
					// The value to keep the perimeter of the circle
					
					double dResultPerimeter = (2 * dPiNumber * dVar);
					
					// Output
					
					printf("\nThe area of the circle whose radius you have entered is: %lf\nThe perimeter of the circle whose radius you have entered is: %lf", dResultArea, dResultPerimeter);
				}
				
				// In case the user wants to quit
				
				else if (dVar == 0)
				{
					break;
				}
				
				// In case user makes a mistake
				
				else
				{
					printf("\nIt looks like you entered an incorrect number");
				}
			}
		}
		
		// Fourth tab
		
		else if (iUserSel == 4)
		{
			// This tab must have its own values, because multiple and different values must be entered in order to be able to calculate. \\
			
			// Cylinder height
			
			double dHeight;
			
			// Cylinder radius
			
			double dCylinderRadius;
			
			// Tab menu
			
			while (true)
			{
				// Tab information
				
				printf("\nSurface area and volume of a cylinder");
				
				// Input message for the radius
				
				printf("\n0 to close the tab\nEnter the radius of the cylinder:   "); scanf("%lf", dCylinderRadius);
				
				// I use the radius value as a control flag to check if the user wants to exit the program.
				
				if (dCylinderRadius != 0)
				{
					// Input message for the height
					
					printf("\nEnter the height of the cylinder:   "); scanf("%lf", &dHeight);
					
					/* Calculation stage */
					
					// The variable I created to keep the volume value
					
					double dResultVolume = (dPiNumber * dCylinderRadius * dCylinderRadius * dHeight);
					
					// The variable I created to hold the surface area value
					
					double dResultSurfaceArea = (2 * dPiNumber * dCylinderRadius * dCylinderRadius) + (2 * dPiNumber * dCylinderRadius * dHeight);
					
					// Output
					
					printf("\nThe volume of the cylinder, depending on the variables you have entered:  %lf\nThe surface area of the cylinder, depending on the variables you have entered: %lf", dResultVolume, dResultSurfaceArea);
				}
				
				// In case user wants to quit
				
				else if (dCylinderRadius == 0)
				{
					break;
				}
				
				// In case user makes a mistake
				
				else
				{
					printf("\nIt looks like you entered an incorrect number");
				}
			}
		}
		
		// In case the user wants to quit
		
		else if (iUserSel == 0)
		{
			break;
		}
		
		// In case the user makes a mistake
		
		else
		{
			printf("\nIt seems like you may have made a mistake\n:   ");
		}
	}
	
	return 0;
	
}





















