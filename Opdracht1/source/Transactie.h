#pragma once
#include <string>

using namespace std;

class Transactie
{
private:
	double change;
	string time;

public: 
	Transactie();
	Transactie(double _change, string _time);
	double GetChange() const;
	string GetTime() const;
};

