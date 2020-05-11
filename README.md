# Parametry projektu

Nazwa: pm-lab-3  
Autor: Paweł Dąbal (pawel.dabal@wat.edu.pl)  
Opis: Projekt bazowy repozytorium na trzecie spotkanie laboratoryjne z przedmiotu _Programowanie mikrokontrolerów_.  
Wersja: v1.0  
Data: 11.05.2020 r.

# Informacje o studencie

Imię i nazwisko studenta: Kacper Janowski 
Numer albumu: 71980  
Grupa studencka: WEL18EQ2S1


Uwaga: Początkowo z niewiedzy skróciłem nazwy comitów do 50 znaków. Przepraszam
# Odpowiedzi do pytań z instrukcji

Co się dzieje w momencie jednego kliknięcia przycisku, oraz w momencie trzymania przycisku (np. przez 3 sekundy)?. Dlaczego wynik jest nieco inny od spodziewanego?

W momencie nacisnięcia przycisku odrazu zlicza 3 nacisnięcia przycisku. Jeżeli przytrzymamy przycisk to zlicza cały czas nacisnięcia przycisku (także dłużej niż czas trwania wcisniętego przycisku). Układ działa gdy na wejściu D2 jest stan wysoki, przy klkinięciu przez pewien czas jest ten stan na tym wejściu a mikrokontroler widzi że w tym czasie trwania może zostać wcisnięty przycisk kilkokrotnie. Jeżeli trzymamy przycisk to stan wysoki trwa przez jeszcze dłuższy a mikrokontroler rozumie to że w tym czasie mogliśmy kliknąć az np. 23 razy na przycisk.



W jaki sposób można rozbudować funkcjonalność programu w przypadku gdy liczba naciśnięć przycisku przekroczy określoną ilość?

Można wpisać warunek w void loop() dotyczący liczby nacisnięć np. jeżeli liczba nacisnięć jest równa 10 to wyzerój zliczanie 
if (liczba_nacisniec == 10){
    Serial.println("Zerowanie licznia");
    liczba_nacisniec = 0;
}
 


W jaki sposób można zwiększyć liczbę obsługiwanych poleceń oraz liczbę obsługiwanych parametrów?

Można zwiększyć liczbę obsługowanych poleceń oraz parametrów poprzez dodawanie nowych warunków sprawdzających i dopisywanie nowych parametrów np:
else if (!strcmp(paramStr, "sprawdzenieLED")) {
      if (digitalRead(LED_BUILTIN) == HIGH)
      Serial.println("wlaczony LED");