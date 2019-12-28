//Esempio di come potrebbe essere costruito il programma:

void play(int blackScore(int c1, int c2, int c3, int c4), int whiteScore(int c1, int c2, int c3, int c4)) {
    int black; //numero di pioli neri
    int white; //numero di pioli bianchi

    //Primo tentativo:
    black=blackScore(0, 0, 0, 0);
    white=whiteScore(0, 0, 0, 0);
    //Ora che sai "quanto è corretto" il codice 0-0-0-0, puoi farti i tuoi calcoli, per poi passare al secondo tentativo...
    if(black>0){ /*...*/ }
    if(white>0){ /*...*/ }

    //Secondo tentativo:
    black=blackScore(1, 1, 1, 1);
    white=whiteScore(1, 1, 1, 1);

    //Secondo tentativo:
    black=blackScore(2, 2, 2, 2);
    white=whiteScore(2, 2, 2, 2);

    //Terzo tentativo:
    black=blackScore(3, 3, 3, 3);
    white=whiteScore(3, 3, 3, 3);
    
    //Quarto tentativo:
    black=blackScore(4, 4, 4, 4);
    white=whiteScore(4, 4, 4, 4);

    //Quinto tentativo:
    black=blackScore(5, 5, 5, 5);
    white=whiteScore(5, 5, 5, 5);

    //Sesto tentativo:
    black=blackScore(0, 0, 0, 1);
    white=whiteScore(0, 0, 0, 1);

    //...
}

//NB: per una questione di stampa, chiama sempre per prima la funzione "blackScore", seguita da "whiteScore"
//NB: esistono sei tipi di pioli: 0, 1, 2, 3, 4 e 5