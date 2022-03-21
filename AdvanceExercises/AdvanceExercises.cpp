// AdvanceExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
using namespace std;




int main()
{
	Package package1 = Package("1", "Address 1", "Riga", "Latvia", "LV-1010",
	"1", "Address 1", "Riga", "Latvia", "LV-1010", 1.5, 10.10);
	Package package2 = Package("1", "Address 1", "Riga", "Latvia", "LV-1010",
	"2", "Address 2", "Riga", "Latvia", "LV-1010", 3.5, 13.10);
	//Package package3 = Package("3", "Address 3", "Riga", "Latvia", "LV-1010",
	//"3", "Address 3", "Riga", "Latvia", "LV-1010", 5.5, 15.10);

	//double costPackage1 = package1.calculateCost();
	//double costPackage2 = package2.calculateCost();
	//double costPackage3 = package3.calculateCost();

	TwoDayPackage twoDayPackage1 = TwoDayPackage("Tim", "Address 1", "Riga", "Latvia", "LV-1010",
		"1", "Address 1", "Riga", "Latvia", "LV-1010", 1.5, 10.10, 20);

	//double costTwoDayPackage1 = twoDayPackage1.calculateCost();

	OvernightPackage overnightPackage1 = OvernightPackage("John", "Brivibas 24", "Riga", "Latvia", "LV-1010",
		"1", "Kuldigas street 16", "Riga", "Latvia", "LV-1010", 1.5, 10.10, 50);


	/*TwoDayPackage twoDayPackage1("Tim", "Address 1", "Riga", "Latvia", "LV-1010",
		"1", "Address 1", "Riga", "Latvia", "LV-1010", 1.5, 10.10, 20);

	OvernightPackage overnightPackage1("John", "Brivibas 24", "Riga", "Latvia", "LV-1010",
		"1", "Kuldigas street 16", "Riga", "Latvia", "LV-1010", 1.5, 10.10, 50);*/

	//double costOvernightPackage1 = overnightPackage1.calculateCost();

	//vector<Package*> packages{ &twoDayPackage1 , &overnightPackage1 };

	vector<Package*> packages;

	packages.push_back(&package1);
	packages.push_back(&package2);
	packages.push_back(&twoDayPackage1);

	

}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
