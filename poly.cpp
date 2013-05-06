#include <iostream>
#include <string>
#include <cmath>
#include "poly.h"

using namespace std;

/*double price(const Railway &Railway)
{

}*/

void input(Railway **array, int count)
{
    for(int i = 0; i < count; ++i)
    {
        int selection;
        do
        {
            cout<<"Выберите тип поезда:\n";
            cout<<"1) Дизельный поезд\n2) Электричка\n3) Скорый поезд\n ";
            cin>>selection;
            double leng;
            string name;
            char seat_type;

            switch(selection)
            {
            case 1:
                cout<<"Вы выбрали дизельный поезд:\n";
                cout<<"Введите название:\n";
                cin>>name;
                cout<<"Введите расстояние:\n";
                cin>>leng;
                array[i] = new Diesel(leng, name);
                break;
            case 2:
                cout<<"Вы выбрали электричку:\n";
                cout<<"Введите название:\n";
                cin>>name;
                cout<<"Введите расстояние:\n";
                cin>>leng;
                array[i] = new Electrichka(leng, name);
                break;
            case 3:
                cout<<"Вы выбрали поезд:\n";
                cout<<"Введите название:\n";
                cin>>name;
                cout<<"Введите расстояние:\n";
                cin>>leng;
                cout<<"Введите тип вагона:\n";
                cin>>seat_type;
                array[i] = new Poezd(leng, seat_type, name);
                break;
            default:
                cerr<<"incorrect selection\n";
            }
        }
        while(selection < 1 || selection > 3);
    }
}

void output(Railway **array,int count)
{
    for(int i = 0; i < count; ++i)
    {
        cout<<endl<<"Номер "<<i+1<<" это "<<array[i]->getName()<<".\n";
        cout<<"На пути следования будет "<<array[i]->getStations()<<" станций.\n";
        cout<<"Продолжительность поездки    "<<array[i]->getTime()<<" часов.\n";
        //cout<<"The Time-Stations ratio is "<<calcRatio(*array[i])<<".\n";
        cout<<endl<<endl;
    }
}

//========================================================================

Railway::Railway(const string &name):
    m_name(name)
{}

string Railway::getName()
{
    return m_name;
}

Diesel::Diesel(int length, const string &name):
    Railway(string("Diesel ")+name),
    m_length(length)
{}


//=====================================================

double Diesel::getTime()const
{
    double speed=60;
    double res;
    res=m_length/speed;
    return res;
}

double Diesel::getStations()const
{
    return m_length/10;
}

Electrichka::Electrichka(int length, const string &name):
    Railway(string("Electrichka ")+name),
    m_length(length)
{}


double Electrichka::getTime()const
{
    double speed=100;
    double res;
    res=m_length/speed;
    return res;
}

double Electrichka::getStations()const
{
    return m_length/25;
}

Poezd::Poezd(int length, char seat_type, const string &name):
    Railway(string("Poezd ")+name),
    m_length(length),
    m_seat_type(seat_type)
{}

double Poezd::getTime()const
{
    double speed=140;
    double res;
    res=m_length/speed;
    return res;
}

double Poezd::getStations()const
{
    return m_length/100;
}




