#pragma once
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
	);

	string getRecipName();
	string getRecipAddress();
	string getRecipCity();
	string getRecipState();
	string getRecipZip();
	string getSendName();
	string getSendAddress();
	string getSendCity();
	string getSendState();
	string getSendZip();


	double getWeight();
	double getCost();

	virtual double calculateCost();
};


