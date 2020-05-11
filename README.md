# Parametry projektu

Nazwa: pm-lab-3  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na trzecie spotkanie laboratoryjne z przedmiotu _Programowanie mikrokontrolerów_.  
Wersja: v1.0  
Data: 11.05.2020 r.

# Informacje o studencie

Imię i nazwisko studenta: Rafał Bieliński  
Numer albumu: 69049  
Grupa studencka: WEL18EQ2S1

# Odpowiedzi do pytań z instrukcji

Zadanie 3-2-2 a)
Co się dzieje w momencie jednego kliknięcia przycisku, oraz w momencie trzymania przycisku (np. przez 3 sekundy)?. Dlaczego wynik jest nieco inny od spodziewanego?

W momencie naciśnięcia przycisku tylko raz otrzymujemy informację, że przycisk został naciśnięty trzy razy. Jeśli przycisk będzie naciśnięty przez okres czasu wtedy otrzymamy informację o liczbie naciśnięć do momentu puszczenia przycisku. Wyniki nie są takie same ponieważ pomiędzy wykonujemy przerwy.

Zadanie 3-2-2 b)
W jaki sposób można rozbudować funkcjonalność programu w przypadku gdy liczba naciśnięć przycisku przekroczy określoną ilość?

Można dopisać nowe funkcje lub zwiększyć parametry.

Zadanie-3-2-3
W jaki sposób można zwiększyć liczbę obsługiwanych poleceń oraz liczbę obsługiwanych parametrów? Należy dodać polecenie po wywołaniu którego nastąpi informacja czy dioda LED jest włączona.

Poprzez zmodyfikowanie kodu podając dodając polecenie włączonej diody Serial.println("Dioda wlaczona")