//
// Created by user on 3/8/2022.
//

//
// Created by user on 3/6/2022.
//
int isPrime(int number)
{
    if(number < 2)
        return 0;
    if(number == 2)
        return 1;
    if(number % 2 == 0)
        return 0;
    for(int i=3; i<number; i+=2)
        if(number % i == 0)
            return 0;
    return 1;
}
void getResult(int start, int end, int* v, int* result)
{
    int j = -1;
    for(int i = start; i <= end; i++)
        result[++j] = v[i];
}
void primeNumberSequence(int n, int* v,int &k, int* result)
{
    int  nr=0, nrmax = 0, j;
    for(int i = 0; i < n; i++)
    {
        if(isPrime(v[i]) == 1)
        {
            nr++;
            if(nr > nrmax)
            {
                nrmax = nr;
                j = i;
            }

        }
        else
            nr = 0;
    }
    getResult(j - nrmax + 1, j, v, result);
    k = j - (j - nrmax) ;

}

