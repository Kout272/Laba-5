#include "Tourist.h"

istream& operator>>(istream& in, Tourist& obj)
{
    in >> static_cast<Human&>(obj);
    cout << "¬ведите номер паспорта: ";
    obj.number = GetInt(1000,999999,in);
    cout << "¬ведите дату пересечени€ границы: ";
    obj.data = GetDate(in);
    cout << "¬ведите страну: ";
    obj.country = GetName(in);
    return in;
}

ostream& operator<<(ostream& out, const Tourist& obj)
{
    out << static_cast<const Human&>(obj);
    cout << setiosflags(ios::left)
        << setw(20) << obj.number
        << setw(20) << obj.data
        << setw(20) << obj.country
        <<endl;
    return out;
}

void Tourist::shapka()
{
    cout << std::setiosflags(ios::left)
        << setw(20) << "NAME"
        << setw(20) << "SURNAME"
        << setw(20) << "AGE"
        << setw(20) << "PASPORT"
        << setw(20) << "DATE"
        << setw(20) << "COUNTRY"
        << endl;
}

Tourist::~Tourist() {}

long Tourist::getNumber()
{
    return number;
}
string Tourist::getData()
{
    return data;
}
string Tourist::getCountry()
{
    return country;
}

Tourist::Tourist() : number(0), data(""), country("") {}

Tourist::Tourist(const Tourist& other) : Human(other)
{
    this->number = other.number;
    this->data = other.data;
    this->country = other.country;
}

void Tourist::setNumber(long N)
{
    number = N;
}

void Tourist::setDataT(string D)
{
    data = D;
}

void Tourist::setCountry(string C)
{
    country = C;
}
