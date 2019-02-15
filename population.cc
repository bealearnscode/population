// Write a program that produces a bar chart showing the population growth of
// Prairieville, a small town in the Midwest, at 20-year intervals during the
// past 100 years. The program should read in the population figures (rounded to
// the nearest 1,000 people) for 1900, 1920, 1940, 1960, 1980, and 2000 from a
// file. For each year it should display the data and a bar consisting of one
// asterisk for each 1,000 people. The data can be found in the people.txt file. 
// Beatrix House

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
   	ifstream dataIn;		// defines an input stream for a data file
	ofstream dataOut;		// defines an output stream for an output file
	

	dataIn.open("people.txt");  // This opens the file.
	dataOut.open("bill.out");

	// Fill in the appropriate code in the blank below
    cout << setprecision(2) << fixed << showpoint;  // formatted output


	// Fill in the input statement that brings in the 
	// quantity and price of the item.
	dataIn >> quantity >> itemPrice;
	cout << "The quantity is " << quantity << 
	        ", and the price is " << itemPrice << "." << endl;

	// Fill in the assignment statement that determines the totalbill.
	totalBill = quantity * itemPrice;
	
	dataOut << totalBill;

	// Fill in the output statement that prints the total bill,	
      // with a label, to an output.
    cout << "The total bill is: " << totalBill << "." << endl;
    
    dataIn.close();
    dataOut.close();
    
    system("pause");
	return 0;
}
