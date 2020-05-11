# Parametry projektu

Nazwa: pm-lab-3  
Autor: Karol Szeliga
Opis: Projekt bazowy repozytorium na trzecie spotkanie laboratoryjne z przedmiotu _Programowanie mikrokontrolerów_.  
Wersja: v1.0  
Data: 11.05.2020 r.

# Informacje o studencie

Imię i nazwisko studenta: Karol Szeliga 
Numer albumu: 72028  
Grupa studencka: WELE18EQ2S1

# Odpowiedzi do pytań z instrukcji
Zadanie 3.2.2a
Co się dzieje w momencie jednego kliknięcia przycisku, oraz w momencie trzymania przycisku (np. przez 3 sekundy)?. Dlaczego wynik jest nieco inny od spodziewanego?

Odp: W momencie naciśnięcia przycisku tylko raz w konsoli szeregowej otrzymujemy nformacje,że przycisk został naciśnięty trzy razy, nastomiast gdy będziemy trzymać przycisk daną chwilę to będziemy mieli informację o następnych liczbach naciśniętego przycisku, aż do momentu w którym przestaniemy naciskać. Wyniki róznią się ponieważ nie wykonujemy przerwy , gdy dołożymy przerwę to przy ciągłbym trzymaniu przycisku liczba odczytanych informacji zmnijeszy sie .

Zadanie 3.2.2b
 W jaki sposób można rozbudować funkcjonalność programu w przypadku gdy liczba naciśnięć przycisku przekroczy określoną ilość? 
 Można wproawdzić nowy parametr liczący ilość resetów pierwszej zmiennej.Zmienna ta będzie przekraczała okreśłoną ilość, nowy parametr będzie zwiększan a zmienna zerowana.

Zadanie 3.2.3
W jaki sposób można zwiększyć liczbę obsługiwanych poleceń oraz liczbę obsługiwanych parametrów? Należy dodać polecenie po wywołaniu którego nastąpi informacja czy dioda LED jest włączona
Odp; Modyfikując kod dodając polecienie  Serial.println("Dioda wlaczona")