#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[101], dob[11];
    float score1, score2, score3, total;
} Candidate;

int main() {
    int n, i;
    float maxScore = 0;
    scanf("%d", &n);
    Candidate candidates[n];

    for (i = 0; i < n; i++) {
        candidates[i].id = i + 1;
        getchar();
        fgets(candidates[i].name, 101, stdin);
        fgets(candidates[i].dob, 11, stdin);
        scanf("%f %f %f", &candidates[i].score1, &candidates[i].score2, &candidates[i].score3);
        candidates[i].total = candidates[i].score1 + candidates[i].score2 + candidates[i].score3;
        if (candidates[i].total > maxScore) maxScore = candidates[i].total;
    }

    for (i = 0; i < n; i++)
        if (candidates[i].total == maxScore)
            printf("%d %s%s %.1f\n", candidates[i].id, candidates[i].name, candidates[i].dob, candidates[i].total);

    return 0;
}
