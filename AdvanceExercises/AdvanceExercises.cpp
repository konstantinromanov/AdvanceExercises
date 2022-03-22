// AdvanceExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
#include <iomanip> 
#include <map>
#include <numeric>
#include <utility>
using namespace std;

void printTestTable(vector<Package*> packages);
void printLine(int lenght);

int main()
{
	Package package1 = Package("Robert", "Jelgavas 10", "Riga", "Latvia", "LV-1010",
		"Julia", "Avotu", "Riga", "Latvia", "LV-1020", 1.5, 10.10);
	Package package2 = Package("Howard", "Rigas 25", "Liepaja", "Latvia", "LV-3410",
		"John", "Kr. Valdemara", "Riga", "Latvia", "LV-1013", 1.15, 15.10);

	TwoDayPackage twoDayPackage1 = TwoDayPackage("Tim", "Kr. Barona", "Riga", "Latvia", "LV-1005",
		"Jerry", "Malu 15", "Daugavpils", "Latvia", "LV-5410", 0.5, 5.10, 20);

	double costTwoDayPackage1 = twoDayPackage1.calculateCost();

	OvernightPackage overnightPackage1 = OvernightPackage("Rasa", "Brivibas 24", "Riga", "Latvia", "LV-1010",
		"Laima", "Kuldigas street 16", "Riga", "Latvia", "LV-1010", 1.5, 10.10, 50);

	double costOvernightPackage1 = overnightPackage1.calculateCost();

	vector<Package*> packages;

	packages.push_back(&package1);
	packages.push_back(&package2);
	packages.push_back(&twoDayPackage1);
	packages.push_back(&overnightPackage1);

	printTestTable(packages);	
}

void printTestTable(vector<Package*> packages) {

	map<string, int> colWidth{
		pair<string, int>("name", 20),
		pair<string, int>("address", 20),
		pair<string, int>("city", 15),
		pair<string, int>("state", 15),
		pair<string, int>("zip", 15),
		pair<string, int>("weight", 10),
		pair<string, int>("cost", 10)
	};

	int sendRecipWidth = accumulate(begin(colWidth), end(colWidth), 0,
		[](const size_t previous, const auto& element)
		{ return previous + element.second; }) - colWidth.at("weight") - colWidth.at("cost");

	int lineWidth = sendRecipWidth * 2 + colWidth.at("weight") + colWidth.at("cost");

	printLine(lineWidth);
	
	cout		
		<< setw(sendRecipWidth / 2) << "Recipient" << setw(sendRecipWidth / 2) << "|"		
		<< setw(sendRecipWidth / 2) << "Sender" << setw(sendRecipWidth / 2) << "|" << endl;
		
	printLine(lineWidth);

	cout
		<< left << setw(colWidth.at("name")) << "Name"
		<< setw(colWidth.at("address")) << "Address"
		<< setw(colWidth.at("city")) << "City"
		<< setw(colWidth.at("state")) << "State"
		<< setw(colWidth.at("zip")) << "ZIP"

		<< setw(colWidth.at("name")) << "Name"
		<< setw(colWidth.at("address")) << "Address"
		<< setw(colWidth.at("city")) << "City"
		<< setw(colWidth.at("state")) << "State"
		<< setw(colWidth.at("zip")) << "ZIP"

		<< right << setw(colWidth.at("weight")) << "Weight"
		<< right << setw(colWidth.at("cost")) << "Cost" << endl;
		
	printLine(lineWidth);

	double totalCosts{};

	for (size_t i = 0; i < packages.size(); i++)
	{
		double currentCost = packages[i]->calculateCost();

		cout
			<< left << setw(colWidth.at("name")) << packages[i]->getRecipName()
			<< setw(colWidth.at("address")) << packages[i]->getRecipAddress()
			<< setw(colWidth.at("city")) << packages[i]->getRecipCity()
			<< setw(colWidth.at("state")) << packages[i]->getRecipState()
			<< setw(colWidth.at("zip")) << packages[i]->getRecipZip()

			<< setw(colWidth.at("name")) << packages[i]->getSendName()
			<< setw(colWidth.at("address")) << packages[i]->getSendAddress()
			<< setw(colWidth.at("city")) << packages[i]->getSendCity()
			<< setw(colWidth.at("state")) << packages[i]->getSendState()
			<< setw(colWidth.at("zip")) << packages[i]->getSendZip()

			<< right << setw(colWidth.at("weight")) << packages[i]->getWeight()
			<< right << setw(colWidth.at("cost")) << packages[i]->getCost() << endl;

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
