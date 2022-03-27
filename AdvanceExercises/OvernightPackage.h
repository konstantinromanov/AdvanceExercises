#pragma once
#include "Package.h"

class OvernightPackage : public Package
{

private:
	double m_addFee;

public:

	OvernightPackage(string,
		string,
		string,
		string,
		string,
		string,
		string,
		string,
		string,
		string,
		double,
		double,

		double);

	double getAddFee();
	double calculateCost() override;
};


