#include <stdio.h>
int main() {
    int pmsize, lmsize, fsize, i, j;
    printf("\nEnter Size of Physical memory: ");
    scanf("%d", &pmsize);
    printf("\nEnter Size of Logical memory: ");
    scanf("%d", &lmsize);
    printf("\nEnter Size of Frame: ");
    scanf("%d", &fsize);
    int n = lmsize / fsize;
    int m = pmsize / fsize;
    int frames[n];
    int f[m];
    printf("\nPhysical Memory is divided into %d frames.\n", m);
    printf("\nLogical Memory is divided into %d frames.\n", n);
    for (i = 0; i < m; i++) {
        f[i] = 0;
    }
    for (i = 0; i < n; i++) {
        printf("\nAvailable frames are:");
        for (j = 0; j < m; j++) {
            if (f[j] == 0)
                printf(" %d\t", j);
        }
        printf("\nEnter the Available Frame number where page %d must be placed: ", i);
        scanf("%d", &frames[i]);
        f[frames[i]] = 1;
    }
    printf("\nPAGE TABLE:");
    printf("\nPage Address\tFrame No");
    for (i = 0; i < n; i++) {
        printf("\n%d\t\t%d", i, frames[i]);
    }
    return 0;
}
