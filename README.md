# Symulacja sieci
Projekt u Szanownego Kłeczka - złotego człowieka.

# Ja to tak rozumiem:

-> Program uruchamiamy, odpadala się main i pyta o nazwę pliku z strukturą sieci.

-> Funkcja <b>loadFactoryStructure()</b> tworzy Fabrykę (Faktory, Wokerów, Rampy, Storehousy.

-> Pojawia się menu:
1. Rozpocznij symulacje o zadanej liczbnie tur.
2. Ustaw częstość tworzenia raportów stanu symulacji (domyślnie tylko na koniec)
3. Dodaj robotnika, rampę, lub magazyn.
4. Usuń robotnika, rampę, lub magazyn.
5. Generuj raport o strukturze sieci.
6. Wczytaj plik ze strukturą sieci.
7. Koniec programu.

# Co się dzieje w poszczególnych opcjach w menu:

<b>Ad 1.</b>
O tym napisałem w kolejnym rozdziale - patrz na dole.

<b>Ad 2.</b>
Ustawia wartość globalnej zmiennej TimeOffset.

<b>Ad 3.</b>
Pyta użytkownika co robić. Uruchamia orpowiednio:
Funkcję <b>addWorker</b> z klasy Worker, pyta o preferencje i utawia wszystkie parametry nowopowstałego obiektu klasy Worker.
Funkcję <b>addRamp</b> z klasy Worker, pyta o preferencje i utawia wszystkie parametry nowopowstałego obiektu klasy Ramp.
Funkcję <b>addStorehouse</b> z klasy Worker, pyta o preferencje i ustawia wszystkie parametry nowopowstałego obiektu klasy Storehouse.

<b>Ad 4.</b>
Pyta użytkownika co robić. Uruchamia orpowiednio:
Funkcję <b>removeWorker</b> z klasy Worker, która uruchamia destruktor danego obiektu klasy Worker
Funkcję <b>removeRamp</b> z klasy Worker, która uruchamia destruktor danego obiektu klasy Ramp
Funkcję <b>removeStorehouse</b> z klasy Worker, która uruchamia destruktor danego obiektu klasy Storehouse

<b>Ad 5.</b>
Uruchamia się funkcja <b>generateStructureReport</b> i raport o strukturze seci zapisuje się do pliku.

<b>Ad 6.</b>
Uruchamia się funkcja <b>generateStructureReport</b> i raport o strukturze sieci zapisuje się do pliku, destrukory każdego obiektu się uruchamiają, następnie Funkcja <b>loadFactoryStructure()</b> tworzy Fabrykę.


<b>Ad 7.</b>
Niszczy obiekty destruktorami, zapisuje strukture do pliku (<b>saveFactoryStructure()</b>), kończy działanie programu.

# Sama symulacja czyli Ad 1.



