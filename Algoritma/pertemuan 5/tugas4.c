#include <stdio.h>

int main() {
    int midtermScore, finalExamScore, assignmentScore;
    float finalScore;

    printf("Enter your midterm score (0-100): ");
    scanf("%d", &midtermScore);

    printf("Enter your final exam score (0-100): ");
    scanf("%d", &finalExamScore);

    printf("Enter your assignment score (0-100): ");
    scanf("%d", &assignmentScore);

    finalScore = (midtermScore * 0.3) + (finalExamScore * 0.4) + (assignmentScore * 0.3);

    printf("Your final score is: %.2f\n", finalScore);

    if (finalScore >= 70) {
        printf("PASS\n");
    } else if (finalScore >= 60) {
        printf("REMEDIAL\n");
    } else {
        printf("FAIL\n");
    }

    return 0;
}