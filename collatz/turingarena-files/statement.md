# La Congettura di Collatz (Collatz)
Consideriamo il seguente algoritmo, che prende in ingresso un intero positivo N: Se N vale 1, l’algoritmo
termina. Se N è pari, dividi N per 2, altrimenti (se N è dispari) moltiplicalo per 3 e aggiungi 1.
Per esempio, applicato al valore N = 6, l’algoritmo produce la seguente sequenza (di lunghezza 9,
contando anche il valore iniziale N = 6 e il valore finale 1):
6, 3, 10, 5, 16, 8, 4, 2, 1.

# Obiettivo:
Scrivere una funzione del tipo:

int collatz(int n){
	// your code
	return ...;
}

che avendo in input un numero n qualsiasi restituisca il numero di iterazioni necessarie a riportare n ad 1.

