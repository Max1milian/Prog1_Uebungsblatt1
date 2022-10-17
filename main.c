#include <stdio.h>
#include <stdlib.h>

void Aufgabe_1() {
  // Warum? :(
  printf("   (\"`-\'\'-/\").___..--''\"`-._\n");
  printf("    `6_ 6 ) `-. ( ).`-.__.`)\n");
  printf("   (_Y_.)' ._ ) `._ `. ``-..-'\n");
  printf(" _..`--'_..-_/ /--'_.' ,'\n");
  printf("(il),-'' (li),' ((!.-'");
}
int Aufgabe_2(int n) {
  // Quersumme: Zahl ihrer Ziffern
  int qs = 0;
  while (n > 0) {
    qs += n % 10; // durch das Modulo erhalten wir immer die letze Ziffer
    n = n / 10;   // durch die division durch 10 fällt die letze Stelle weg
  }
  printf("das Ergebinis ist: %i", qs);
  return qs;
}

void Aufgabe_3() {
  int stunden = 12;
  int minuten = 20;
  int sekunden = 43;
  printf("Aktuelle Uhrzeit:\t %i:%i:%i\n", stunden, minuten, sekunden);
  printf("mit gleicher laenge:\n");
  printf("Aktuelle Uhrzeit:\t %2i:%2i:%2i\n", stunden, minuten, sekunden);
}

void Aufgabe_4() {
  /*int x = 24060;
  int stunden = 0;
  int minuten = 0;
  int sekunden = 0;

  stunden = x / 3600;
//	printf("Bodisco steht um %i:%i:%i auf", stunden, minuten, sekunden);
  printf("%i\n", x);
*/
}

void Aufgabe_5() {}

void Aufgabe_6(int n) {
  int r, sum, temp = 0;
  temp = n;
  while (n > 0) {
    r = n % 10;
    sum = (sum * 10) + r;
    n = n / 10;
  }
}

void Aufgabe_7(unsigned int breite, unsigned int hoehe, char c) {
  for (unsigned int i = 0; i < breite; ++i) {
    printf("%c", c);
  }
  printf("\n");
  for (unsigned int i = 0; i < hoehe; ++i) {
    printf("%c", c);
    printf("%*c \n", breite - 1,
           c); // -1 weil die linke seite sonst zu weit außen steht
  }
  for (unsigned int i = 0; i < breite; ++i) {
    printf("%c", c);
  }
}

void Aufgabe_8(unsigned int b, char c) {
  if (b % 2 == 0) {
    for (unsigned int i = 0; i < b; ++i) {
      printf("%c", c);
    }
    printf("\n");
  }

  else {
  }
}

int main() {
  int aufgabe = 0, n = 0;
  printf("bitte geben sie die Nummer der gewünschten aufgaben an ");
  scanf("%i", &aufgabe);

  switch (aufgabe) {
  case 1:
    Aufgabe_1();
    break;
  case 2:
    printf("bitte geben sie eine Zahl an");
    scanf("%i", &n);
    Aufgabe_2(n);
    break;
  case 3:
    Aufgabe_3();
    break;
  case 4:
    Aufgabe_4();
    break;
  case 5:
    Aufgabe_5();
    break;
  case 6:
    Aufgabe_6(1337);
    break;
  case 7:
    Aufgabe_7(7, 9, 'X');
    break;
  default:
    Aufgabe_1();
    break;
  }
  return 0;
}
