//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 
// 
// Versuch 1.1: Datentypen und Typumwandlung
//
// Datei:  Variablen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int iErste = 0;
    int iZweite = 0;
    
    cout << "Bitte geben Sie die erste ganze Zahl ein: ";
    cin >> iErste;

    cout << "Bitte geben Sie die zweite ganze Zahl ein: ";
    cin >> iZweite;

    //Aufgabe 1
    int iSumme = iErste + iZweite;
    int iQuotient = iErste / iZweite;

    cout << "Die Summe von " << iErste << " und " << iZweite << " ist: " << iSumme << endl;
    cout << "Der ganzzahlige Quotient von " << iErste << " / " << iZweite << " ist: " << iQuotient << endl;
    
    //Aufgabe 2
    double dSumme = iErste + iZweite;
    double dQuotient = iErste / iZweite;


    cout << "Die Summe (als double) von " << iErste << " und " << iZweite << " ist: " << dSumme << endl;
    cout << "Der Quotient (als double) von " << iErste << " / " << iZweite << " ist: " << dQuotient << endl;

    //Aufgabe 3
    double dSummeCast = static_cast<double>(iErste) + static_cast<double>(iZweite); //converting numbers into desired variables
    double dQuotientCast = static_cast<double>(iErste) / static_cast<double>(iZweite);


    cout << "Die Summe (mit Typecasting) von " << iErste << " und " << iZweite << " ist: " << dSummeCast << endl;
    cout << "Der Quotient (mit Typecasting) von " << iErste << " / " << iZweite << " ist: " << dQuotientCast << endl;

    string sVorname;
	string sNachname;


	cout << "Bitte geben Sie Ihren Vornamen ein: ";
	cin >> sVorname;

	cout << "Bitte geben Sie Ihren Nachnamen ein: ";
	cin >> sNachname;

	string sVornameName = sVorname + " " + sNachname;
	string sNameVorname = sNachname + ", " +sVorname;

	cout << "Vorname Nachname: " << sVornameName << endl;
	cout << "Nachname, Vorname: " << sNameVorname << endl;

	{
	    int iFeld[2] = {1, 2};
	    cout << "iFeld[0]: " << iFeld[0] << endl;
	    cout << "iFeld[1]: " << iFeld[1] << endl;
	}

	{
	    int spielfeld[2][3] = { {1, 2, 3},
	    						{4, 5, 6} };

	    cout << "Spielfeld:\n";
	    for (int i = 0; i < 2; ++i)
	    {
	        for (int j = 0; j < 3; ++j)
	        {
	            cout << spielfeld[i][j] << " ";
	        }
	        cout << endl;
	    }
	}

	{
	    const int iZweite = 1;
	    std::cout << "Innerhalb des Blocks: iZweite = " << iZweite << std::endl;
	}
	// std::cout << "Außerhalb des Blocks: iZweite = " << iZweite << std::endl; // ❌ Derleme hatası: scope dışında!

	{
	string vorname;
	cout << "Bitte geben Sie Ihren Vorname ein: ";
	cin >> vorname;

	int iName1 = static_cast<int>(vorname[0]);
	int iName2 = static_cast<int>(vorname[1]);

	cout << "ASCII-Wert des 1.Buchstabens: " << iName1 <<endl;
	cout << "ASCII-Wert des 2.Buchstabens: " << iName2 <<endl;
	}

	{
		char ersterBuchstabe, zweiterBuchstabe;

		cout << "Geben Sie den ersten Buchstaben Ihres Vornamens ein: ";
		cin >> ersterBuchstabe;

		cout << "Geben Sie den zweiten Buchstaben Ihres Vornamens ein: ";
		cin >> zweiterBuchstabe;

		int pos1, pos2;

		if (ersterBuchstabe >= 'A' && ersterBuchstabe <= 'Z')
			pos1 = ersterBuchstabe - 'A' + 1;
		else if (ersterBuchstabe >= 'a' && ersterBuchstabe <= 'z')
			pos1 = ersterBuchstabe - 'a' + 1;

		if(zweiterBuchstabe >= 'A' && zweiterBuchstabe <= 'Z')
			pos2 = zweiterBuchstabe - 'A' + 1;
		else if(zweiterBuchstabe >= 'a' && zweiterBuchstabe <= 'z')
			pos2 = zweiterBuchstabe -'a' + 1;

		cout << "Position des ersten Buchstabens im Alphabet: " << pos1 << endl;
		cout << "Position des zweiten Buchstabens im Alphabet: " << pos2 << endl;


	}

    return 0;
    
}
