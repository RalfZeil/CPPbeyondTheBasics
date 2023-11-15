#include <iostream>
#include "Bankrekening.h"
#include "Transactie.h"

int main()
{
    Bankrekening b = Bankrekening();
    Transactie t1 = Transactie(100.0, "10");
    Transactie t2 = Transactie(200.0, "11");
    Transactie t3 = Transactie(50.0, "12");

    b + t1;
    b - t2;
    b + t3;

    std::cout << b;

    return 0;
}
