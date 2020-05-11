# Parametry projektu

Nazwa: pm-lab-3  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na trzecie spotkanie laboratoryjne z przedmiotu _Programowanie mikrokontrolerów_.  
Wersja: v1.0  
Data: 11.05.2020 r.

# Informacje o studencie

Imię i nazwisko studenta: Patrycja Sosnowska 
Numer albumu: 72023 
Grupa studencka: WELE18Q2S1 

# Odpowiedzi do pytań z instrukcji
...
1. Co się dzieje w momencie jednego kliknięcia przycisku oraz w momencie trzymania przycisku(np. przez 3 sekundy)? Dlaczego wynik jest nieco inny od spodziewanego? 
Odp. W momencie jednego kliknięcia przycisku konsola szeregowa infromuje, że przycisk został naciśniety trzy razy. Jeśli przytrzymamy go przez 3 sekundy to pojawi się informacja o następnych liczbach naciśnietego przycisku, aż do momentu w którym przestaniemy naciskać na przycisk. Wynik różni się, ponieważ nie wykonujemy przerwy. 
2. W jaki sposób można rozbudować funkcjonalność programu w przypadku gdy liczba naciśnięć przycisku przekroczy określoną ilość? 
Rozbudować funkcjonalność programu w przypadku gdy przekroczymy określoną ilość naciśnieć możemy za pomocą wprowadzenia nowego parametru - liczączego ilość restów pierwszej zmiennej. Za każdym razem gdy podana zmienna będzie przekraczała określoną ilość to nowy parametr będzie zwiększany o jeden a zmienna zerowana.
3.  W jaki sposób można zwiększyć liczbę obsługiwanych poleceń oraz liczbę obsługiwanych parametrów? 
Aby zwiększyć tą liczbę należy dodać nowych funkcji sprawdzających i dopisanie nowych parametrów do kodu (Serial.println("Dioda wlaczona");).