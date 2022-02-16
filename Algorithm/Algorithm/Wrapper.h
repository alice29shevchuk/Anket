#pragma once 
#include <iostream> 
#include<algorithm> 
#include<vector> 
#include"Anket.h" 
#include<fstream> 
using namespace std;
class Wrapper
{
    vector<Anket*>v;
public:
    explicit Wrapper() {}
    void add(Anket* anket)
    {
        v.push_back(anket);
    }
    void show()
    {
        for (auto i : v)
        {
            i->Show();
            cout << "\n";
        }
    }
    void amount()
    {
        cout << "AMOUNT = " << count_if(v.begin(), v.end(), [](Anket* an) {return an->getName().size() < 7; });
    }
    void year()
    {
        for (auto i : v)
        {
            if (i->getYear() > 2000)
            {
                i->Show();
                cout << "\n";
            }
        }
    }
    void write()
    {
        ofstream out;
        out.open("test.txt");
        if (!out.is_open())
        {
            cout << "ERROR!\n";
        }
        else
        {
            for (auto i : this->v)
            {
                out << i->getName() << "\t" << i->getSurname() << "\t" << i->getPatronimuc() << "\t" << i->getLogin() << "\t" << i->getPass() << "\t" << i->getDay() << "\t" << i->getMonth() << "\t" << i->getYear() << "\t" << i->getDayR() << "\t" << i->getMonthR() << "\t" << i->getYearR() << "\n";
            }
            cout << "WRITE\n";
        }
        out.close();
    }
    void read()
    {
        ifstream in;
        in.open("test.txt");
        if (!in.is_open())
        {
            cout << "ERROR!\n";
        }
        else
        {
            string name;
            string surname;
            string patronimuc;
            string login;
            string pass;
            int dayb;
            int monthb;
            int yearb;
            int dayr;
            int monthr;
            int yearr;
            while (!in.eof())
            {
                name = " ";
                surname = " ";
                patronimuc = " ";
                login = " ";
                pass = " ";
                dayb = 0;
                monthb = 0;
                yearb=0;
                dayr=0;
                monthr=0;
                yearr=0;
                in >> name>>surname>>patronimuc>>login>>pass>>dayb>>monthb>>yearb>>dayr>>monthr>>yearr;
                if (name == " ")
                {
                    break;
                }
                this->add(new Anket(name, surname, patronimuc, login, pass , dayb , monthb , yearb ,dayr , monthr,yearr));
            }
            cout << "CONSIDERED!\n";
        }
    }
};

