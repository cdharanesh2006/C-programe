#include <stdio.h>

int main() {
    int n;
    int status;
    int i = 0;
    int currentStreak = 0;
    int maxStreak = 0;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &status);

        if (status == 0) {          // EMI missed
            currentStreak++;

            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {                    // EMI paid
            currentStreak = 0;
        }

        i++;
    }

    printf("Longest Default Streak: %d\n", maxStreak);

    return 0;
}
