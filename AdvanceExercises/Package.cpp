#include "Package.h"

Package::Package(string recip_name,
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

string Package::getRecipName() {
	return m_recip_name;
}

string Package::getRecipAddress() {
	return m_recip_address;
}

string Package::getRecipCity() {
	return m_recip_city;
}

string Package::getRecipState() {
	return m_recip_state;
}

string Package::getRecipZip() {
	return m_recip_zip;
}

string Package::getSendName() {
	return m_send_name;
}

string Package::getSendAddress() {
	return m_send_address;
}

string Package::getSendCity() {
	return m_send_city;
}

string Package::getSendState() {
	return m_send_state;
}

string Package::getSendZip() {
	return m_send_zip;
}

double Package::getWeight() {
	return m_weight;
}

double Package::getCost() {
	return m_cost;
}

double Package::calculateCost() {
	double result = m_weight * m_cost;

	return result;
}