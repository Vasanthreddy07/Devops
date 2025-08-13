#include <stdio.h>

int main() {
    int players, i;
    int totalScore = 0;

    printf("Enter the number of players: ");
    scanf("%d", &players);

    int scores[players];

    // Input scores for each player
    for (i = 0; i < players-1; i++) {
        printf("Enter score for player %d: ", i + 1);
        scanf("%d", &scores[i]);
        totalScore += scores[i];
    }

    // Display scores
    printf("\nCricket Scoreboard:\n");
    printf("Player\tScore\n");
    for (i = 0; i < players; i++) {
        printf("%d\t%d\n", i + 1, scores[i]);
    }
    printf("Total Score: %d\n", totalScore);

    return 0;
}
