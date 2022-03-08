//
// Created by user on 3/8/2022.
//

//
// Created by user on 3/6/2022.
//
void getResultInterval(int start, int end, int* v, int* result){
    int j = -1;
    for (int i = start; i <= end; i++)
        result[++j] = v[i];
}

void sequenceInterval(int n, int* v, int a, int b, int &k, int* result) {
    int nr = 0, nrmax = 0, j;
    for (int i = 0; i < n; i++) {
        if (v[i] >= a && v[i] <= b) {
            nr++;
            if (nr > nrmax) {
                nrmax = nr;
                j = i;
            }

        } else
            nr = 0;
    }
    getResultInterval(j - nrmax + 1, j, v, result);
    k = j - (j - nrmax);
}
