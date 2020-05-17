#ifndef KLASSEN_H
#define KLASSEN_H

#include<stdlib.h>
#include<cstdio>
#include<cmath>
#include<string>

using namespace std;

//Angestellentenverwaltungsprogramm für Zeitarbeitsunternehmen
//Begründung für dynamische Verwaltung: häufiger Personalaustausch

class Personenelement
{
private:
    string vorname;
    string nachname;
    string geburtstag;

protected:

public:
    Personenelement();
    ~Personenelement();
};

#endif // KLASSEN_H
