//Esempio di come potrebbe essere costruito il programma:

void play(int blackScore(int c1, int c2, int c3, int c4), int whiteScore(int c1, int c2, int c3, int c4)) {
    int black; //numero di pioli neri
    int white; //numero di pioli bianchi

    for(int i=0; i<6; i++){
        blackScore(i, i, i, i);
        whiteScore(i, i, i, i);

        //Fatti i tuoi calcoletti:
        if(black>0){ /*...*/ }
        if(white>0){ /*...*/ }
    }
}

//NB: per una questione di stampa, chiama sempre per prima la funzione "blackScore", seguita da "whiteScore"
//NB: esistono sei tipi di pioli: 0, 1, 2, 3, 4 e 5