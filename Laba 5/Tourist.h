#pragma once
#include "Human.h"

class Tourist : virtual public Human
{
private:
    long number;
    string data;
    string country;
public:
    Tourist();
    Tourist(const Tourist& other);
    ~Tourist() override;
    virtual void shapka() override;
    void setNumber(long N);
    void setDataT(string D);
    void setCountry(string C);
    long getNumber();
    string getData();
    string getCountry();
    friend istream& operator>>(istream& in, Tourist& obj);
    friend ostream& operator<<(ostream& out, const Tourist& obj);
};