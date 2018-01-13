# Symulacja sieci
Projekt u Szanownego Kłeczka - złotego człowieka.

# Ja to tak rozumiem:

-> Program uruchamiamy, odpadala się main i pyta o nazwę pliku z strukturą sieci.

-> Funkcja <b>loadFactoryStructure()</b> tworzy Fabrykę (Faktory, Wokerów, Rampy, Storehousy.

-> Pojawia się menu:
1. Rozpocznij symulacje o zadanej liczbnie tur.
2. Ustaw częstość tworzenia raportów stanu symulacji (domyślnie tylko na koniec)
3. Ustaw tury w których ma się stworzyć dodatkowy raport stanu symulcaji (domyślnie brak)
4. Dodaj robotnika, rampę, lub magazyn.
5. Usuń robotnika, rampę, lub magazyn.
6. Generuj raport o strukturze sieci.
7. Wczytaj plik ze strukturą sieci.
8. Koniec programu.

# Co się dzieje w poszczególnych opcjach w menu:

<b>Ad 1.</b>
O tym napisałem w kolejnym rozdziale - patrz na dole.

<b>Ad 2.</b>
Ustawia wartość zmiennej interval w <b>IntervalReportNotifer</b>.

<b>Ad 3.</b>
Ustawia wartość zmiennej turns w <b>SpecificTurnsReportNotifer</b>.

<b>Ad 4.</b>
Pyta użytkownika co robić. Uruchamia orpowiednio:
Funkcję <b>addWorker</b> z klasy Worker, pyta o preferencje i utawia wszystkie parametry nowopowstałego obiektu klasy Worker.
Funkcję <b>addRamp</b> z klasy Worker, pyta o preferencje i utawia wszystkie parametry nowopowstałego obiektu klasy Ramp.
Funkcję <b>addStorehouse</b> z klasy Worker, pyta o preferencje i ustawia wszystkie parametry nowopowstałego obiektu klasy Storehouse.

<b>Ad 5.</b>
Pyta użytkownika co robić. Uruchamia orpowiednio:
Funkcję <b>removeWorker</b> z klasy Worker, która uruchamia destruktor danego obiektu klasy Worker
Funkcję <b>removeRamp</b> z klasy Worker, która uruchamia destruktor danego obiektu klasy Ramp
Funkcję <b>removeStorehouse</b> z klasy Worker, która uruchamia destruktor danego obiektu klasy Storehouse

<b>Ad 6.</b>
Uruchamia się funkcja <b>generateStructureReport</b> i raport o strukturze seci zapisuje się do pliku.

<b>Ad 7.</b>
Uruchamia się funkcja <b>generateStructureReport</b> i raport o strukturze sieci zapisuje się do pliku, destrukory każdego obiektu się uruchamiają, następnie Funkcja <b>loadFactoryStructure()</b> tworzy Fabrykę.


<b>Ad 8.</b>
Niszczy obiekty destruktorami, zapisuje strukture do pliku (<b>saveFactoryStructure()</b>), kończy działanie programu.

# Sama symulacja czyli Ad 1.

Uruchamia się funkcja <b>simulate</b> - dostaje jako parametry Fabrykę oraz czas symulacji (Zmienna <b>Time</b> = TimeOffset ustawiony przez urzytkownika. Następnie:

<b>Faza I - pojawianie się półproduktów na rampie</b>

Za każdym gdy zmienna globalna <b>Time</b> (która określa nr tury) jest podzielna przez <b>deliveryInterval</b>, w <b>sendingBuffer</b>ze pojawia się obiekt klasy Package (o ID = nr porządkowy Package'ów). 

<b>Faza II - Przekazywanie półproduktów do odbiorców.</b>

Program sprawdza wszystkie obiekty Ramp i Worker. Jeśli w <b>sendingBuffer</b> znajduje się jakiś obiekt Package, uruchamia się funkcja <b>sendPackage()</b>, która wybiera odbiorce paczki (zgodnie z preferencjami i prawdopodobieństwiem). Następnie uruchamia się funkcja <b>recivePackage()</b> obiektu wybranego jako odbiorca. Umieszcza on produkt odpowiednio w kolejce (Worker) lub w <b>packageDepot</b> (Magazyn).

<b>Faza III - Praca</b>

Workerzy wykonają pracę:
1. Jeśli <b>currentlyProcessedPackage</b> jest puste, ładujemy paczkę z <b>gueue</b>, ustawiamy <b>packageProcessingStartTime()</b> jako aktualną wartość Time.
2. Jeśli jest tam produkt, sprawdzamy czy <b>packageProcessingStartTime()</b>+<b>processingDuration</b>=<b>Time</b>. Jeśli tak, przenosimy paczkę do <b>sendingBuffer</b>. Jeśli nie, nie robimy nic (dalej pracujemy).

Sprawwdzamy czy pownniśmy wykonać report (<b>shouldGenerateReport</b>), wykonujemy jeśli trzeba. Zwiększamy Time o jeden. Patrzymy czy już koniec czy nie. Powtarzamy od nowa wszyskie fazy jeśli nie koniec.

