#include "Business.h"

Business::Business() : title("") {}

Business::Business(const Business& other) : Tourist(other), Predprem(other)
{
    title = other.title;
}

string Business::getTitle()
{
    return title;
}

void Business::setTitle(string T)
{
    title = T;
}

istream& operator>>(istream& in, Business& obj)
{
    in >> static_cast<Predprem&>(obj);
    cout << "¬ведите номер паспорта: ";
    int N = GetInt(1000, 999999, in);;
    obj.setNumber(N);
    cout << "¬ведите дату пересечени€ границы: ";
    string D = GetDate(in);
    obj.setDataT(D);
    cout << "¬ведите страну: ";
    string C = GetName(in);
    obj.setCountry(C);
    cout << "¬ведите название бизнеса: ";
    obj.title = GetTitle(in);
    return in;
}

void Business::shapka()
{

    cout << std::setiosflags(ios::left)
        << setw(20) << "NAME"
        << setw(20) << "SURNAME"
        << setw(20) << "AGE"
        << setw(20) << "LICEN"
        << setw(20) << "DATE OF NALOG"
        << setw(20) << "SUM OF NALOG"
        << setw(20) << "PASPORT"
        << setw(20) << "DATE OF CROSSING"
        << setw(20) << "COUNTRY"
        << setw(20) << "TITLE"
        << endl;
}

Business::~Business(){}

ostream& operator<<(ostream& out, Business& obj)
{
    out << left;
    out << static_cast<const Predprem&>(obj)
        << setw(20) << obj.getNumber() 
        << setw(20) << obj.getData() 
        << setw(20) << obj.getCountry() 
        << setw(20) << obj.title ;
    out << endl;
    return out;
}