#pragma once
#include "Human.h"

class Predprem : public Human
{
private:
    int licen;
    string data;
    int razmer;
public:
    Predprem();
    Predprem(const Predprem& other);
    ~Predprem() override;
    void shapka() override;
    void setLicen(int L);
    void setData(string L);
    void setRazmer(int R);
    int getLicen();
    string getDataP();
    int getRazmer();
    friend istream& operator>>(istream& in, Predprem& obj);
    friend ostream& operator<<(ostream& out, const Predprem& obj);
};