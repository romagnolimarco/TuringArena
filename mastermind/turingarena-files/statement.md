# MASTERMIND

Questa è la versione virtuale del popolare gioco da tavolo mastermind.
Il programma `evaluator` svolge il ruolo del codificatore, mentre il programma dello studente svolgerà il ruolo del decrittatore.

# Obbiettivo:
L' `evaluator` creerà casualmente il codice segreto scegliendo quattro cifre, ciascuna delle quali potrebbe essere 0, 1, 2, 3, 4 o 5 (al posto dei classici pioli di sei colori differenti).
Lo scopo dello studente sarà quello di creare un programma in grado di individuare il codice segreto nel minor numero di tentativi possibile.

# Regole:
Lo studente, scelto un codice, potrà chiedere al codificatore (`evaluator`) di valutare il codice inviato attraverso le funzioni `int blackScore(int c1, int c2, int c3, int c4)` ed `int whiteScore(int c1, int c2, int c3, int c4)` (vedere i programmi di esempio per capire meglio come fare).
Queste funzioni restituiranno rispettivamente il numero di pioli neri (quante cifre del codice segreto sono state indovinate) e bianchi (la cifra suggerita è presente nel codice segreto ma in posizione diversa). Ad esempio:

Codice segreto: 2-3-4-5
Lo studente propone il codice 1-3-4-2
In questo caso la funzione `blackScore` restituirà il valore 2 (le cifre 3 e 4 sono nella stessa posizione sia nel codice studente sia in quello segreto) mentre la funzione `whiteScore` restituirà il valore 1 (la cifra 2 è presente nel codice segreto ma lo studente ha sbagliato posizione).

A quali cifre siano riferiti i pioli neri ed a quali i pioli bianchi sta allo studente capirlo od indovinarlo...
Il gioco terminerà quando, alla chiamata della funzione `blackScore`, questa restituirà il valore 4 (codice segreto trovato).

NB: nel caso il codice segreto sia, per esempio, 1-2-3-4 e lo studente proponga 5-0-1-1, il risultato sarà un singolo piolo bianco (dato che nel codice segreto è presente un solo 1). Lo stesso vale se lo studente proponesse 1-5-0-1: il risultato sarà un singolo piolo nero.
