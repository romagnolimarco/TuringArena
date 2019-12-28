int combinazioni[1296][4]; //Tutte le possibili combinazioni
int codice[4]; //Ultimo codice proposto
int black, white;
int num=0; //Numero di valori certamente presenti finora individuati
int presenti[4]; //Lista dei valori certamente presenti finora individuati



//Emula il crittatore:
bool mastermind(int indice){
    int b=0;
    for(int i=0; i<4; i++) if(combinazioni[indice][i]==codice[i]) b++;
    if(b!=black) return false;
    return true;
}



void play(int blackScore(int c1, int c2, int c3, int c4), int whiteScore(int c1, int c2, int c3, int c4)) {

    //Crea tutte le possibili combinazioni:
    combinazioni[0][0]=0;
    combinazioni[0][1]=0;
    combinazioni[0][2]=0;
    combinazioni[0][3]=0;
    for(int i=1; i<1296; i++){
        combinazioni[i][3]=combinazioni[i-1][3];
        combinazioni[i][2]=combinazioni[i-1][2];
        combinazioni[i][1]=combinazioni[i-1][1];
        combinazioni[i][0]=combinazioni[i-1][0];
        if(combinazioni[i][3]<5) combinazioni[i][3]++;
        else{
            combinazioni[i][3]=0;
            if(combinazioni[i][2]<5) combinazioni[i][2]++;
            else{
                combinazioni[i][2]=0;
                if(combinazioni[i][1]<5) combinazioni[i][1]++;
                else{
                    combinazioni[i][1]=0;
                    combinazioni[i][0]++;
                }
            }
        }
    }

    while(true){
        int index=-1;

        //Scegliamo il prossimo codice da sottoporre:
        for(int i=0; i<1296; i++){
            if(combinazioni[i][0]!=-1){ //Se il primo num è -1, significa che quella combinazione è già stata scartata
                if(num<3){ 
                    //Se non conosciamo tutti i numeri presenti, ci conviene che i numeri sconosciuti siano tutti uguali:
                    int n=-1;
                    bool vaBene=true;
                    for(int j=0; j<4; j++){
                        //Vediamo se il valore in questione è tra quelli già individuati:
                        bool div=true;
                        for(int k=0; k<num; k++){
                            if(combinazioni[i][j]==presenti[k]){
                                div=false;
                                break;
                            }
                        }
                        //Controlliamo che i numeri non trovati siano uguali tra loro:
                        if(div){
                            if(n==-1) n=combinazioni[i][j];
                            else if(n!=combinazioni[i][j]){
                                vaBene=false;
                                break;
                            }
                        }
                    }
                    if(vaBene){
                        index=i;
                        break;
                    }
                }
                else{
                    index=i;
                    break;
                }
            }
        }

        codice[0]=combinazioni[index][0];
        codice[1]=combinazioni[index][1];
        codice[2]=combinazioni[index][2];
        codice[3]=combinazioni[index][3];
        black=blackScore(codice[0], codice[1], codice[2], codice[3]);
        white=whiteScore(codice[0], codice[1], codice[2], codice[3]);

        if(black+white>num){
            //Memorizziamo i numeri sicuramente presenti e cancelliamo le combinazioni che non li contengono:
            for(int i=0; i<num; i++){
                for(int j=0; j<4; j++){
                    if(presenti[i]==combinazioni[index][j]){
                        combinazioni[index][j]=-1;
                        break;
                    }
                }
            }
            //Eliminati i numeri che già conosciamo, vediamo cosa ci rimane da scoprire:
            int nuovo=-1;
            for(int i=0; i<4; i++){
                if(combinazioni[index][i]!=-1){
                    nuovo=combinazioni[index][i];
                    break;
                }
            }
            //Ora aggiungiamo il nuovo numero a quelli conosciuti:
            for(int i=0; i<black+white-num; i++){
                presenti[num+i]=nuovo;
            }
            //E rimuoviamo questa combinazione:
            combinazioni[index][0]=-1;
            //Cancelliamo combinazioni dove compare questo numero ma in quantità diversa:
            int ric=black+white-num;
            for(int i=0; i<1296; i++){
                if(combinazioni[i][0]!=-1){
                    int ric_com=0;
                    for(int j=0; j<4; j++){
                        if(combinazioni[i][j]==nuovo) ric_com++;
                    }
                    if(ric_com!=ric) combinazioni[i][0]=-1;
                }
            }
            num=black+white;
        }
        else if(black+white==num && num<4){
            //Se il numero totale di pioli rimane invariato, significa che l'ultimo numero non è presente:
            for(int i=0; i<num; i++){
                for(int j=0; j<4; j++){
                    if(presenti[i]==combinazioni[index][j]){
                        combinazioni[index][j]=-1;
                        break;
                    }
                }
            }
            //Eliminati i numeri che già conosciamo, vediamo cosa ci rimane da scoprire:
            int nuovo=-1;
            for(int i=0; i<4; i++){
                if(combinazioni[index][i]!=-1){
                    nuovo=combinazioni[index][i];
                    break;
                }
            }
            //Ora eliminiamo il numero sicuramente non presente:
            for(int i=0; i<1296; i++){
                if(combinazioni[i][0]!=-1){
                    for(int j=0; j<4; j++){
                        if(combinazioni[i][j]==nuovo){
                            combinazioni[i][0]=-1;
                            break;
                        }
                    }
                }
            }
        }

        //Ed infine cancelliamo uno ad uno le combinazioni impossibili, emulando mastermind:
        for(int i=0; i<1296; i++){
            if(combinazioni[i][0]!=-1){
                if(!mastermind(i)) combinazioni[i][0]=-1;
            }
        }
    }
}