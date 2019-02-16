// Write a program that produces a bar chart showing the population growth of
// Prairieville, a small town in the Midwest, at 20-year intervals during the
// past 100 years. The program should read in the population figures (rounded to
// the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, and 2000 from a
// file. For each year it should display the data and a bar consisting of one
// asterisk for each 1,000 people. The data can be found in the people.txt file. 
// Beatrix House

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// represents the year. the number will grow by 20
   	// every time a new population is read
   	int year = 1900;
	
	// represents the number of people living in Praireieville.
	// Will be read from people.txt
   	int population;
   	
   	// represents the number of asterisks that will be displayed
   	int asterisks;
   	
   	// defines the input stream
   	ifstream dataIn;		
   	
   	// opens people.txt
	dataIn.open("people.txt");
	
	
	// print header
	cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
	cout << "(each * represents 1000 people)" << endl;
	
	// as long as there is a next line to read,
	// set that data as the population
	while (dataIn >> population)
	{
		// divide the population by 1000
		// to get the number of asterisks
		// that should be displayed
		asterisks = population / 1000;
		
		// display the year
		cout << year << ": ";
		
		// as long as the iterator is less than the number of asterisks
		// this will break then there are no more lines to read
		for (int i = 0; i < asterisks; i++) {
			
			// print that number of asterisks
			cout << "*";
		}
		
		// break out of the for loop to create a new line because
		// if you don't each asterisk will print on a single line
		cout << endl;

		// add twenty years
		year += 20;
	};
	
    // Closes people.txt
    dataIn.close();
    
    
    system("pause");
	return 0;
}
