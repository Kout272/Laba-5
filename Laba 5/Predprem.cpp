#include "Predprem.h"

istream& operator>>(istream& in, Predprem& obj)
{
    in >> static_cast<Human&>(obj);
    cout << "¬ведите номер лицензии: ";
    obj.licen = GetInt(1000,999999,in);
    cout << "¬ведите дату платежа: ";
    obj.data = GetDate(in);
    cout << "¬ведите сумму налогового платежа: ";
    obj.razmer = GetInt(1,99999,in);
    return in;
}

void Predprem::shapka()
{
    cout << std::setiosflags(ios::left)
        << setw(20) << "NAME"
        << setw(20) << "SURNAME"
        << setw(20) << "AGE"
        << setw(20) << "LICEN"
        << setw(20) << "DATE"
        << setw(20) << "SUM OF NALOG"
        << endl;
}


ostream& operator<<(ostream& out, const Predprem& obj)
{
    out << left;
    out << static_cast<const Human&>(obj)
        << setw(20) << obj.licen
        << setw(20) << obj.data
        << setw(20) << obj.razmer;
    return out;
}

Predprem::~Predprem() {}

Predprem::Predprem() : licen(0)
{
    data = "";
    razmer = 0;
}

void Predprem::setLicen(int L)
{
    licen = L;
}

void Predprem::setData(string D)
{
    data = D;
}

void Predprem::setRazmer(int R)
{
    razmer = R;
}

int Predprem::getLicen()
{
    return licen;
}

string Predprem::getDataP()
{
    return data;
}

int Predprem::getRazmer()
{
    return razmer;
}

Predprem::Predprem(const Predprem& other) : Human(other)
{
    this->data = other.data;
    this->razmer = other.razmer;
    this->licen = other.licen;

}
