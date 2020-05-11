# Parametry projektu

Nazwa: pm-lab-3  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na trzecie spotkanie laboratoryjne z przedmiotu _Programowanie mikrokontrolerów_.  
Wersja: v1.0  
Data: 11.05.2020 r.

# Informacje o studencie

Imię i nazwisko studenta: Wojciech Szymański     
Numer albumu: 72030
Grupa studencka: WELE18Q2S1

# Odpowiedzi do pytań z instrukcji
Zad 3.2.2a
Naciskając przycisk raz, działanie programu wskazuje na to, ze przycisk został naciśnięty trzy razy. Przytrzymując przycisk przez okres czasu, otrzymamy informacje o następnych liczbach naciśniętego przycisku, do momentu przerwania naciskania. Róznica między otrzymanym wynikiem, a tym spdziewanym wynika z tego, ze nie wykonujemy przerwy przy ciągłym trzymaniu przycisku.

Zad 3.2.2b
Rozbudowanie funkcjonalności programu mozna uzyskać poprzez zastosowanie parametru liczącego ilość resetów pierwszej zmiennej. W momencie przekroczenia tej ilości następuje zwiększenie nowego parametru o jeden i zerowanie zmiennej.

Zad 3.2.3
Dodając nowe funkcje sprawdzające oraz utworzenie parametrów  (Serial.println("wlacz diode")) 