// AdvanceExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
#include <iomanip> 
using namespace std;

void printTestTable(vector<Package*> packages);
void printLine(int lenght);

int main()
{
	Package package1 = Package("Robert", "Jelgavas 10", "Riga", "Latvia", "LV-1010",
		"Julia", "Avotu", "Riga", "Latvia", "LV-1020", 1.5, 10.10);
	Package package2 = Package("1", "Address 1", "Riga", "Latvia", "LV-1010",
		"2", "Address 2", "Riga", "Latvia", "LV-1010", 3.5, 13.10);

	TwoDayPackage twoDayPackage1 = TwoDayPackage("Tim", "Address 1", "Riga", "Latvia", "LV-1010",
		"1", "Address 1", "Riga", "Latvia", "LV-1010", 1.5, 10.10, 20);

	double costTwoDayPackage1 = twoDayPackage1.calculateCost();

	OvernightPackage overnightPackage1 = OvernightPackage("John", "Brivibas 24", "Riga", "Latvia", "LV-1010",
		"1", "Kuldigas street 16", "Riga", "Latvia", "LV-1010", 1.5, 10.10, 50);

	double costOvernightPackage1 = overnightPackage1.calculateCost();

	vector<Package*> packages;

	packages.push_back(&package1);
	packages.push_back(&package2);
	packages.push_back(&twoDayPackage1);

	printTestTable(packages);	
}

void printTestTable(vector<Package*> packages) {

	int lineWidth = 220;
	printLine(lineWidth);

	cout
		<< left << setw(20) << "Recipient Name"
		<< setw(20) << "Recipient Address"
		<< setw(20) << "Recipient City"
		<< setw(20) << "Recipient State"
		<< setw(20) << "Recipient ZIP"

		<< setw(20) << "Sender Name"
		<< setw(20) << "Sender Address"
		<< setw(20) << "Sender City"
		<< setw(15) << "Sender State"
		<< setw(10) << "Sender ZIP"

		<< setw(20) << "Weight"
		<< setw(15) << "Cost" << endl;
		
	printLine(lineWidth);

	double totalCosts{};

	for (size_t i = 0; i < packages.size(); i++)
	{
		double currentCost = packages[i]->calculateCost();

		cout
			<< left << setw(20) << packages[i]->getRecipName()
			<< setw(20) << packages[i]->getRecipAddress()
			<< setw(20) << packages[i]->getRecipCity()
			<< setw(20) << packages[i]->getRecipState()
			<< setw(20) << packages[i]->getRecipZip()

			<< setw(20) << packages[i]->getSendName()
			<< setw(20) << packages[i]->getSendAddress()
			<< setw(20) << packages[i]->getSendCity()
			<< setw(15) << packages[i]->getSendState()
			<< setw(10) << packages[i]->getSendZip()

			<< setw(20) << packages[i]->getWeight()
			<< setw(15) << packages[i]->getCost() << endl;

		totalCosts += currentCost;
	}

	printLine(lineWidth);
	cout << "Total costs: " << totalCosts << endl;
	printLine(lineWidth);
}

void printLine(int lenght) {
	cout << string(lenght, '-') << endl;
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
