#pragma once
#include "Package.h"

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
