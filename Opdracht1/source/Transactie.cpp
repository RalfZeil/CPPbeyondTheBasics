#include "Transactie.h"

Transactie::Transactie() : change(0), time("") 
{}

Transactie::Transactie(double _change, string _time) : change(_change), time(_time)
{}

double Transactie::GetChange() const
{
	return change;
}

string Transactie::GetTime() const
{
	return time;
}
