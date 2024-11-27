#include "Human.h"

int Human::getAge()
{
    return age;
}
string Human::getName()
{
    return name;
}
string Human::getSurname()
{
    return surname;
}

void Human::shapka()
{
    cout << "NAME";
}


Human::Human(const Human& other)
{
    this->name = other.name;
    this->surname = other.surname;
    this->age = other.age;
}

Human::~Human() {}

Human::Human()
{
    age = 0;
    name = "";
    surname = "";
}

Human::Human(int age, string name, string surname)
{
    this->age = age;
    this->name = name;
    this->surname = surname;
}

istream& operator>>(istream& in, Human& obj)
{
    cout << "¬ведите им€: ";
    obj.name = GetName(in);
    cout << "¬ведите фамилию: ";
    obj.surname = GetName(in);
    cout << "¬ведите возраст: ";
    obj.age = GetInt(1,120,in);
    return in;
}

ostream& operator<<(ostream& out, const Human& obj)
{

    cout << setiosflags(ios::left)
        << setw(20) << obj.name
        << setw(20) << obj.surname
        << setw(20) << obj.age;
    return out;
}

void Human::setAge(int A)
{
    age = A;
}
void Human::setName(string N)
{
    name = N;
}
void Human::setSurname(string S)
{
    surname = S;
}