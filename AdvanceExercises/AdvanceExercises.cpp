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

	double calculateCost() {
		double result = m_weight * m_cost;

		return result;
	}
};



int main()
{

	Package package1 = Package("1", "Address 1", "Riga", "Latvia", "LV-1010",
		"1", "Address 1", "Riga", "Latvia", "LV-1010", 1.5, 10.10);

	double cost1 = package1.calculateCost();


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
