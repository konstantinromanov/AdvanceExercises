#pragma once
#include "Package.h"

class TwoDayPackage : public Package
{

private:
	double m_flatFee;

public:

	TwoDayPackage(string,
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

	double getFlatFee();

	double calculateCost() override;
};
