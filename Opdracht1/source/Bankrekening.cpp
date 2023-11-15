#include "Bankrekening.h"

Bankrekening::Bankrekening()
{
    transactieList = std::list<Transactie>();
    saldo = 0;
}

void Bankrekening::operator+(const Transactie& t)
{
    saldo += t.GetChange();
    transactieList.push_back(t);
}

void Bankrekening::operator-(const Transactie& t)
{
    saldo -= t.GetChange();
    transactieList.push_back(t);
}

std::ostream& operator<<(std::ostream& os, const Bankrekening& b)
{
    os << "Saldo: " << b.saldo << "\nTransactions:";

    for (const Transactie t : b.transactieList) 
    {
        os << "\nChange: " << t.GetChange() << " Time: " << t.GetTime();
    }

    return os;
}
