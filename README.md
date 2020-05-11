# Parametry projektu

Nazwa: pm-lab-3  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na trzecie spotkanie laboratoryjne z przedmiotu _Programowanie mikrokontrolerów_.  
Wersja: v1.0  
Data: 11.05.2020 r.

# Informacje o studencie

Imię i nazwisko studenta: Igor Żak 
Numer albumu: 72462  
Grupa studencka: WEL18EQ2S1

# Odpowiedzi do pytań z instrukcji
3.2.2Co się dzieje w momencie jednego kliknięcia przycisku, oraz w momencie trzymania przycisku (np. przez 3 sekundy)?. Dlaczego wynik jest nieco inny od spodziewanego?
-W momencie naciśnięcia przycisku tylko raz otrzymana przez nas informacja mówi o tym, że przycisk został nacisnięty trzy razy, natomiast w przypadku nacisniecia przez daną chwile czasu to bedziemy mieli i nastepnych liczbach naciśniętego przycisku, aż do momentu zaprzestania przysiskania przycisku. Wynik różni się od spodziewanego ponieważ nie wykonujemy przerwy. Gdy dołożymy przerwe to przy ciągłym trzymaniu przycisku liczba odczytanych informacji zmniejszy się.


3.2.2b W jaki sposób można rozbudować funkcjonalność programu w przypadku gdy liczba naciśnięć przycisku przekroczy określoną ilość? 
-funkcjonalność takiego programu można rozbudować za pomocą dopisania do kodu nowego parametru liczącego ilośc resetów pierwszej zmiennej.
W takim przypadku gdy zmienna przekroczy okreslona ilość, to nowy parametr bedzię zwiększany o jeden a zmienna zerowana.

3.2.3 jaki sposób można zwiększyć liczbę obsługiwanych poleceń oraz liczbę obsługiwanych parametrów? Należy dodać polecenie po wywołaniu którego nastąpi informacja czy dioda LED jest włączona.
-zmodyfikować kod dodając polecenie Serial.println("Dioda wlaczona");