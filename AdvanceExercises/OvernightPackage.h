#pragma once
#include "Package.h"


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
		return Package::getWeight() * (Package::getCost() + m_addFee);
	}

};

