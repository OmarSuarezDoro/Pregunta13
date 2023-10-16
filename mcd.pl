% Caso base: El MCD de un número y 0 es el propio número.
mcd(X, 0, X) :- !.

% Aplicación del algoritmo de Euclides para calcular el MCD.
mcd(X, Y, Result) :-
    Y =\= 0,
    Z is X mod Y,
    mcd(Y, Z, Result).
