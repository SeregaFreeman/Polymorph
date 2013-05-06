#ifndef POLY_H
#define POLY_H
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Railway
{
public:
    Railway(const string &name);
    //default copy constructor
    //default assign operator
    virtual ~Railway(){}
    virtual double getTime()const=0;
    virtual double getStations()const=0;
    string getName();
private:
    string m_name;
};

class Diesel: public Railway
{
public:
    Diesel(int length, const string &name);
    //default copy constructor
    //default assign operator
    //default destructor
    double getTime()const;
    double getStations()const;
private:
    int m_length;
};

class Electrichka: public Railway
{
public:
    Electrichka(int length, const string &name);
    //default copy constructor
    //default assign operator
    //default destructor
    double getTime()const;
    double getStations()const;
private:
    int m_length;
};

class Poezd: public Railway
{
public:
    Poezd(int length, char seat_type, const string &name);
    //default copy constructor
    //default assign operator
    //default destructor
    double getTime()const;
    double getStations()const;
private:
    int m_length;
    char m_seat_type;

};

void input(Railway **array,int count);
void output(Railway **array,int count);
//double price(const Railway &Railway);

#endif
