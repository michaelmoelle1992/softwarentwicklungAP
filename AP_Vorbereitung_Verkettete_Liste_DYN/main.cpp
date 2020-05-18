#include "parkhaus.h"
#include "parkplatz.h"
#include "auto.h"


int main()
{
    //Wenn was nicht funktioniert, setz es in die main.cpp!!!
    srand(time(nullptr)); //Seed für Zufallszahlen darf nur einmal im Programm gesetzt werden

    Auto Doris("Opel","Quietschrot");
    Auto Alex("Mercedes","Schwarz");
    Auto Mustafa("BMW-3er","Silber");
    Auto Schroeder("Daihatsu","Gelb");


    Parkhaus MoelleTower;

    int i;
    Parkplatz *plaetze[120]; //Ein Array aus Pointern (Danke Digga)

    //Erstelle das Parkhaus
    for(i=0;i<119;i++)
    {
        plaetze[i] = new Parkplatz();
        MoelleTower + plaetze[i] ;

        //MoelleTower + new Parkplatz()
    }

    //Einfuhr ins Parkhaus
    Alex.einfahren(&MoelleTower);
    Doris.einfahren(&MoelleTower);
    Mustafa.einfahren(&MoelleTower);
    Schroeder.einfahren(&MoelleTower);

    //Ausfuhr aus dem Parkhaus
   Schroeder.ausfahren(&MoelleTower);
    Doris.ausfahren(&MoelleTower);
    Mustafa.ausfahren(&MoelleTower);
    Alex.ausfahren(&MoelleTower);





    return 0;
}
