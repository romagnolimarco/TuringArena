int collatz(int n)
{
	int iterazioni=1;
	while(n>1){
		iterazioni++;
		if(n%2==0) n=n/2;
		else n= 3*n +1;
	}
	return iterazioni;
}
