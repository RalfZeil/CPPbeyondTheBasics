#pragma once
#include <iostream>
#include <list>
#include "Transactie.h"

class Bankrekening
{
private:
	double saldo;
	std::list<Transactie> transactieList;

public:
	Bankrekening();
	void operator+(const Transactie& t);
	void operator-(const Transactie& t);
	friend std::ostream& operator<<(std::ostream& os, const Bankrekening& s);
};

