# Metoda_bisekcji_i_falszywej_linii

Program rozwiązujący dowolne równanie nieliniowe metodą bisekcji i metodą fałszywej linii.

W programie zdefiniowane są trzy funkcje:
* cos(x^3 – 2x),
* x^2  - 8x + 5,
* 5x^2 + x - 2.

Przy każdym skompilowaniu program wykonuje obliczenia dwoma sposobami:
* metodą bisekcji,
* metodą fałszywej linii.

Obliczenia korzystają z danych zdefiniowanych w programie:
* przedział [a , b], na którym wyznaczane jest miejsce zerowe funkcji,
* epsilon,

Jako wynik programu dla każdej z trzech funkcji wypisane zostają:

dla obliczeń metodą bisekcji:
* funkcja, dla której wykonywane są obliczenia,
* informacja o używanej metodzie,
* liczba iteracji,
* początek przedziału ( a ),
* koniec przedziału ( b ),
* wartość funkcji w punkcie a ( f(a) ), 
* wartość funkcji w punkcie b ( f(b) ),
* punkt x0 ( x0 ),
* wartość funkcji w punkcie x0 ( f(x0) ),
* wynik działania ( f(a)*f(x0) ).

dla obliczeń metodą fałszywej linii:
* funkcja, dla której wykonywane są obliczenia,
* informacja o używanej metodzie,
* liczba iteracji,
* początek przedziału ( a ),
* koniec przedziału ( b ),
* wartość funkcji w punkcie a ( f(a) ), 
* wartość funkcji w punkcie b ( f(b) ),
* punkt x1 ( x1 ),
* wartość funkcji w punkcie x1 ( f(x1) ),
* wynik działania ( f(a)*f(x1) ).
