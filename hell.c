#include <stdio.h>
#include <string.h>

void main() {
    int pos, count = 0, i = 0, count2 = 0;
    char mains[150], sub[50];
    printf("Enter main string: ");
    gets(mains);
    printf("Enter substring: ");
    gets(sub);
    printf("Enter position at which substring is to be inserted: ");
    scanf("%d", &pos);
    count = strlen(mains);
    count2 = strlen(sub);
    if (count + count2 < sizeof(mains)) {
        for (i = count; i >= pos; i--) {
            mains[i + count2] = mains[i];
        }
        for (int j = 0; j < count2; j++) {
            mains[pos + j] = sub[j];
        }
        printf("Modified string: %s\n", mains);
    } else {
        printf("Error: Substring too large to insert.\n");
    }
}