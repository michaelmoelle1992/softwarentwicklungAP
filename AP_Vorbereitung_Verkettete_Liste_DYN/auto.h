#ifndef AUTO_H
#define AUTO_H

#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<cstdio>
#include<cmath>
#include<string>
#include<string.h>
#include<cstdlib>
#include<time.h>
#include<ctime>
#include<cstring>
#include"fahrzeug.h"
using namespace std;


//Klasse Auto - abgeleitet von Fahrzeug
class Auto : public Fahrzeug
{
private:

protected:
    string marke;
    string farbe;

public:
    Auto(string m, string f);
    ~Auto() {}

    //get/set-Methoden

    string getMarke() const;
    void setMarke(const string &value);
};


#endif // AUTO_H
