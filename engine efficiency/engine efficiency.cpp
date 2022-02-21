// engine efficiency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class engine {
public:
    double work, heat;
    engine(double a, double b) {
        work = a;
        heat = b;
    }
    virtual double efficiency() {

        cout << "result for efficiency";
        return 0;
    }
};
class internalcombustineengine : public engine {
public:
    internalcombustineengine(double a, double b):engine(a,b){}
    double efficiency() {
        cout << "\n result for internalcombustineengine efficiency ";
        return work / heat * 100;
    }
};
class externalcombustineengine :public engine {
public:
    externalcombustineengine(double a, double b):engine (a,b){}
    double efficiency() {
        cout << "\n result for externalcombustineengine efficiency ";
        return work / heat * 100;
    }
};
class petrolengine  :public engine {
public:
  petrolengine(double a, double b) :engine(a, b) {}
    double efficiency() {
        cout << "\n result for petrolengine efficiency ";
        return work / heat * 100;
    }
};
class diselengine :public engine {
public:
    diselengine(double a, double b) :engine(a, b) {}
    double efficiency() {
        cout << "\n result for deselengine efficiency";
        return work / heat * 100;
    }
};
class steamengine :public engine {
public:
    steamengine(double a, double b) :engine(a, b) {}
    double efficiency() {
        cout << "\n result for steamengine efficiency";
        return work / heat * 100;
    }
};

int main()
{
    int input;
    cout << "Press 1 for Internal combustine engine ";
    cout << "\n press 2 for External combustine Engine ";
    cout << "\n Press 3 for Petrol Engine";
    cout << "\n Press 4 for Diesel Engine";
    cout << "\n Press 5 for Stream Engine";
    cin >> input;
    engine* e;
    if (input == 1) {
        double a, b;
        cout << "Enter the work done by the Engine";
        cin >> a;
        cout << "Enter the heat produce by the Engine";
        cin >> b;
        internalcombustineengine i(a, b);
        e = &i;
        cout << e->efficiency();
    }
    else if (input == 2) {
        double a, b;
        cout << "Enter the work done by the Engine";
        cin >> a;
        cout << "Enter the heat produce by the Engine";
        cin >> b;
        externalcombustineengine ex(a,b);
        e = &ex;
        cout << e->efficiency();
    }
    else if (input == 3)
    {
        double a, b;
        cout << "Enter the work done by the Engine";
        cin >> a;
        cout << "Enter the heat produce by the Engine";
        cin >> b;
        petrolengine p(a, b);
        e = &p;
        cout << e->efficiency();
    }
    else if (input == 4)
    {
        double a, b;
        cout << "Enter the work done by the Engine";
        cin >> a;
        cout << "Enter the heat produce by the Engine";
        cin >> b;
        diselengine d(a, b);
        e = &d;
        cout << e->efficiency();
    }
    else if (input == 5)
    {
        double a, b;
        cout << "Enter the work done by the Engine";
        cin >> a;
        cout << "Enter the heat produce by the Engine";
        cin >> b;
        steamengine s(a, b);
        e = &s;
        cout << e->efficiency();
    }
    else
    {
        cout << "Wrong Input";
    }
    
}
