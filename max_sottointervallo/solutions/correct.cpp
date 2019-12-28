int max_sottointervallo(int N, int* seq) {
    int n=1, prov=1;
    for(int i=0; i<N-1; i++){
        if(seq[i] < seq[i+1]) prov++;
        else{
            if(prov>n) n=prov;
            prov=1;
        }
    }
    if(prov>n) n=prov;
    return n;
}