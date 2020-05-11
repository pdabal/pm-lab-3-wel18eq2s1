# Parametry projektu

Nazwa: pm-lab-3  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na trzecie spotkanie laboratoryjne z przedmiotu _Programowanie mikrokontrolerów_.  
Wersja: v1.0  
Data: 11.05.2020 r.

# Informacje o studencie

Imię i nazwisko studenta: Jakub Poręba  
Numer albumu: 72013  
Grupa studencka: WELE18Q2S1

# Odpowiedzi do pytań z instrukcji
...
Zadanie 3.2.2a: W momencie jednego kliknięcia przycisku liczba naciśnięć przycisku wzrasta o 3, a podczas trzymania przycisku liczba naciśnięć przycisku wzrasta, dopóki przycisk pozostaje naciśnięty. Założeniem programu jest to, aby zliczać pojedyncze kliknięcia przycisku, natomiast wynik jest nieco inny od spodziewanego ponieważ program zlicza naciśnięcia przycisku cały czas podczas stanu wysokiego przycisku, który występuje podczas wciśnięcia. 

Zadanie 3.2.2b: Aby rozszerzyć funkcjonalność programu w przypadku gdy liczba naciśnięć przekroczy określoną liczbę można dodać instrukcję warunkową if która zeruje liczbę naciśnięć po przekroczeniu limitu.

Zadanie 3.2.3: Aby zwiększyć liczbę obsługiwanych poleceń oraz liczbę obsługiwanych parametrów należy dodac więcej warunków w instrukcji warunkowej if (bytesNo). Polecenie po wywołaniu którego nastąpi informacja czy dioda LED jest włączona: else if (!strcmp(paramStr, "check")) {
      if (digitalRead(LED_BUILTIN) == HIGH)
      Serial.println("Dioda wlaczona!");

