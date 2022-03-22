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

	string getRecipName() {
		return m_recip_name;
	}

	string getRecipAddress() {
		return m_recip_address;
	}

	string getRecipCity() {
		return m_recip_city;
	}

	string getRecipState() {
		return m_recip_state;
	}

	string getRecipZip() {
		return m_recip_zip;
	}

	string getSendName() {
		return m_send_name;
	}

	string getSendAddress() {
		return m_send_address;
	}

	string getSendCity() {
		return m_send_city;
	}

	string getSendState() {
		return m_send_state;
	}

	string getSendZip() {
		return m_send_zip;
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
};


