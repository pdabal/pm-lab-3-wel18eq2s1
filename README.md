# Parametry projektu

Nazwa: pm-lab-3  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na trzecie spotkanie laboratoryjne z przedmiotu _Programowanie mikrokontrolerów_.  
Wersja: v1.0  
Data: 11.05.2020 r.

# Informacje o studencie

Imię i nazwisko studenta: Daniel Słomka  
Numer albumu: 72724  
Grupa studencka: WELE18Q2S1

# Odpowiedzi do pytań z instrukcji
Zadanie 3.2.2a
 Co się dzieje w momencie jednego kliknięcia przycisku, oraz w momencie trzymania przycisku (np. przez 3 sekundy)?. Dlaczego wynik jest nieco inny od spodziewanego?
 W momencie naciśnięcia przycisku tylko raz otrzymana informacja mówi o tym, że przycisk został naciśnięty 3 razy , natomiast jeśli będziemy naciskać przycisk przez daną chwilę to będziemy mieli informacje o następnych liczbach naciśniętego przycisku , aż do momentu w którym przestaniemy naciskać przycisk.Wynik różni się od spodziewanego bo nie ma przerwy.
Zadanie 3.2.2b
 W jaki sposób można rozbudować funkcjonalność programu w przypadku gdy liczba naciśnięć przycisku przekroczy określoną ilość? 
 Funkcjonalność można rozbudować przy pomocy nowego parametru (liczącego ilość resetów pierwszej zmiennej).Za każdym razem gdy podana zmienna będzie przekraczała określoną ilość , to nowy parametr będzie zwiększany o jeden a zmienna zerowana.

 Zadanie 3.2.3
  W jaki sposób można zwiększyć liczbę obsługiwanych poleceń oraz liczbę obsługiwanych parametrów? Należy dodać polecenie po wywołaniu którego nastąpi informacja czy dioda LED jest włączona.
Liczbę obsługiwanych poleceń i liczbę obsługiwanych parametrów można zwiększyć poprzez dodanie nowych funkcji sprawdzających i dopisanie nowych parametrów do kodu.





