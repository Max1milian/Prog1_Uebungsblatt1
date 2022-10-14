#include <stdio.h>

void Aufgabe_1(){
	//Warum? :(
	printf("   (\"`-\'\'-/\").___..--''\"`-._\n");
	printf("    `6_ 6 ) `-. ( ).`-.__.`)\n");
	printf("   (_Y_.)' ._ ) `._ `. ``-..-'\n");
	printf(" _..`--'_..-_/ /--'_.' ,'\n");
	printf("(il),-'' (li),' ((!.-'");
}
int Aufgabe_2(int n){
	//Quersumme: Zahl ihrer Ziffern
	int qs = 0;
	while (n > 0) {
		qs += n % 10; //durch das Modulo erhalten wir immer die letze Ziffer
		n = n / 10; //durch die division durch 10 fällt die letze Stelle weg 
	}
	printf("das Ergebinis ist: %i", qs);
	return qs;
}

void Aufgabe_3(){
	int stunden = 12;
	int minuten = 20;
	int sekunden = 43;
	printf("Aktuelle Uhrzeit:\t %i:%i:%i\n",stunden, minuten, sekunden);
	printf("mit gleicher laenge:\n");
	printf("Aktuelle Uhrzeit:\t %2i:%2i:%2i\n",stunden, minuten, sekunden);
}

void Aufgabe_4(){

}

void Aufgabe_5(){

}

void Aufgabe_6(){

}

void Aufgabe_7(unsigned int breite, unsigned int hoehe, char c){
	for (unsigned int i = 0;  i < breite; ++i) {
		printf("%c",c);	
	}
	printf("\n");
	for (unsigned int i = 0; i < hoehe; ++i) {
		printf("%c", c);
		printf("%*c \n", breite - 1, c); // -1 weil die linke seite sonst zu weit außen steht
	}
	for (unsigned int i = 0; i < breite; ++i) {
		printf("%c",c);
	}
}

void Aufgabe_8(unsigned int b, char c){
	if (b % 2 == 0) {
		for (unsigned int i = 0; i < b; ++i) {
			printf("%c",c);	
		}	
		printf("\n");
	}

	else{


	}

}

int main(){
	Aufgabe_7(9, 6, 'X');
	return 0;
}
