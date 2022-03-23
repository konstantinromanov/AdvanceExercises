#pragma once
#include "Package.h"

class TwoDayPackage : public Package
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

		double flatFee);

	double getFlatFee();

	double calculateCost() override;
};
