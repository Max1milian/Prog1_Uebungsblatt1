#include <stdio.h>
#include <stdlib.h>

void Aufgabe_1()
{
    printf("   (\"`-\'\'-/\").___..--''\"`-._\n");
    printf("    `6_ 6 ) `-. ( ).`-.__.`)\n");
    printf("   (_Y_.)' ._ ) `._ `. ``-..-'\n");
    printf(" _..`--'_..-_/ /--'_.' ,'\n");
    printf("(il),-'' (li),' ((!.-'");
}
int Aufgabe_2(int n)
{
    // Quersumme: Zahl ihrer Ziffern
    int qs = 0;
    while (n > 0)
    {
        qs += n % 10; // durch das Modulo erhalten wir immer die letze Ziffer
        n = n / 10;   // durch die division durch 10 fällt die letze Stelle weg
    }
    printf("das Ergebinis ist: %i", qs);
    return qs;
}

void Aufgabe_3()
{
    int stunden = 12;
    int minuten = 20;
    int sekunden = 43;
    printf("Aktuelle Uhrzeit:\t %i:%i:%i\n", stunden, minuten, sekunden);
    printf("mit gleicher laenge:\n");
    printf("Aktuelle Uhrzeit:\t %2i:%2i:%2i\n", stunden, minuten, sekunden);
}

void Aufgabe_4()
{
    int x = 24060;
    int stunden = 0;
    int minuten = 0;
    int sekunden = 0;

    stunden = x / 3600;
    minuten = x / 60 - stunden * 60;
    sekunden = x - stunden * 3600 - minuten * 60;

    printf("Bodisco steht um %i:%i:%i auf", stunden, minuten, sekunden);
    printf("Bodisco steht um %i:%i:%i auf", x / 3600, x / 60 - x / 3600 * 60,
           x - (x / 3600) * 3600 - (x / 60 - x / 3600 * 60) * 60);
}

void Aufgabe_5()
{
    for (int i = 0; i < 10000; ++i)
    {
        printf("%04i\n", i);
    }
}

void Aufgabe_6(int n)
{
    int r, sum = 0, temp = 0;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
	printf("r: %i\n",r);
        sum = (sum * 10) + r;
	printf("sum: %i\n",sum);
        n = n / 10;
	printf("n: %i\n", n);
    }

        if (temp == sum)
        {
            printf("Zahlenpalindrom\n");
        }
        else
        {
            printf("kein Zahlenpalindrom\n");
        }
    
}

void Aufgabe_7(unsigned int width, unsigned int height, char c)
{
	//Kopf
    for (unsigned int i = 0; i < width; ++i)
    {
        printf("%c", c);
    }
    printf("\n");
    	//Torso
    for (unsigned int i = 0; i < height; ++i)
    {
        printf("%c", c);
        printf("%*c \n", width - 1,
               c); // -1 weil die linke seite sonst zu weit außen steht
    }
    	//Boden
    for (unsigned int i = 0; i < width; ++i)
    {
        printf("%c", c);
    }
}

void Aufgabe_8(unsigned int b, char c)
{
	int const width = b;
	int const height = b;
	
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			if (y == 0 || y == height-1) {
				// Erste oder letze Zeile, daher c mit voller Breite drucken
				printf("%c",c);
			} else  {
				// Zeilen dazwischen
				if (x == y || x == height-y-1) {
					printf("%c",c);
				} else {
					// Bei Gerade oben gefuellt, bei ungerade unten gefuellt
					if (width%2==0) { 
						// Bei gerader Breite oben ausfuellen
						if (x > y/*<-- linke treppe*/ && x < height-y-1/*<-- rechte treppe*/) {
							// Nur innerhalb der Sanduhr
							printf("%c",c);
						} else {
							// Ausserhalb der Sanduhr
							printf(" ");
						}
					} else {
						// Bei ungerader Breite unten ausfuellen
						if (x < y && x > height-y-1) {
							// Nur innerhalb der Sanduhr
							printf("%c",c);
						} else {
							// Ausserhalb der Sanduhr
							printf(" ");
						}
					}
				}
			}
		}
		printf("\n");
	}
}

int main()
{
	Aufgabe_5();
    return 0;
}
