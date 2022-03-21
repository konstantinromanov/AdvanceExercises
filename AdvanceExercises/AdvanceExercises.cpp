// AdvanceExercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Package {

private:
	string m_recip_name;
	string m_recip_address;
	string m_recip_city;
	string m_recip_state;
	string m_recip_zip;

	string m_send_name;
	string m_send_address;
	string m_send_city;
	string m_send_state;
	string m_send_zip;

	double m_weight;
	double m_cost;

public:
	
	Package(string recip_name,
		string recip_address,
		string recip_city,
		string recip_state,
		string recip_zip,
		string send_name,
		string send_address,
		string send_city,
		string send_state,
		string send_zip,
		double weight,
		double cost
	) {
		m_recip_name = recip_name;
		m_recip_address = recip_address;
		m_recip_city = recip_city;
		m_recip_state = recip_state;
		m_recip_zip = recip_zip;

		m_send_name = send_name;
		m_send_address = send_address;
		m_send_city = send_city;
		m_send_state = send_state;
		m_send_zip = send_zip;

		m_weight = weight;
		m_cost = cost;
	}

	double getWeight() {
		return m_weight;
	}

	double getCost() {
		return m_cost;
	}

	virtual double calculateCost() {
		double result = m_weight * m_cost;

		return result;
	}

	/*virtual double calculateCost(double addFee) {
		double result = m_weight * (m_cost + addFee); // This is not a good idea, since we need to change base class for this, by implementing Method overload.

		return result;
	}*/
};

class OvernightPackage : Package
{

private:
	double m_addFee;

public:

	OvernightPackage(string recip_name,
		string recip_address,
		string recip_city,
		string recip_state,
		string recip_zip,
		string send_name,
		string send_address,
		string send_city,
		string send_state,
		string send_zip,
		double weight,
		double cost,

		double addFee) : Package(recip_name, recip_address, recip_city, recip_state, recip_zip,
			send_name,
			send_address,
			send_city,
			send_state,
			send_zip,
			weight,
			cost)
	{
		m_addFee = addFee;
	}

	double calculateCost() override {

		//return Package::calculateCost(m_addFee); // This is not a good idea, since we need to change base class for this, by implementing Method overload.

		 return Package::getWeight() * (Package::getCost() + m_addFee);
	}

};

class TwoDayPackage : Package
{

private:
	double m_flatFee;

public:

	TwoDayPackage(string recip_name,
		string recip_address,
		string recip_city,
		string recip_state,
		string recip_zip,
		string send_name,
		string send_address,
		string send_city,
		string send_state,
		string send_zip,
		double weight,
		double cost,

		double flatFee) : Package(recip_name, recip_address, recip_city, recip_state, recip_zip,
			send_name,
			send_address,
			send_city,
			send_state,
			send_zip,
			weight,
			cost)
	{
		m_flatFee = flatFee;
	}

	double calculateCost() override {
		return Package::calculateCost() + m_flatFee;
	}
};

int main()
{

	Package package1 = Package("1", "Address 1", "Riga", "Latvia", "LV-1010",
		"1", "Address 1", "Riga", "Latvia", "LV-1010", 1.5, 10.10);
	Package package2 = Package("1", "Address 1", "Riga", "Latvia", "LV-1010",
		"2", "Address 2", "Riga", "Latvia", "LV-1010", 3.5, 13.10);
	Package package3 = Package("3", "Address 3", "Riga", "Latvia", "LV-1010",
		"3", "Address 3", "Riga", "Latvia", "LV-1010", 5.5, 15.10);

	double costPackage1 = package1.calculateCost();
	double costPackage2 = package2.calculateCost();
	double costPackage3 = package3.calculateCost();


	TwoDayPackage twoDayPackage1 = TwoDayPackage("Tim", "Address 1", "Riga", "Latvia", "LV-1010",
		"1", "Address 1", "Riga", "Latvia", "LV-1010", 1.5, 10.10, 20);

	double costTwoDayPackage1 = twoDayPackage1.calculateCost();

	OvernightPackage overnightPackage1 = OvernightPackage("John", "Brivibas 24", "Riga", "Latvia", "LV-1010",
		"1", "Kuldigas street 16", "Riga", "Latvia", "LV-1010", 1.5, 10.10, 50);
		
	double costOvernightPackage1 = overnightPackage1.calculateCost();

	//std::cout << "Hello World!\n";
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
