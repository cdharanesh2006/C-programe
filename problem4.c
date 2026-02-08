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

        if (status == 0) {          // machine failed
            currentStreak++;

            if (currentStreak > maxStreak) {
                maxStreak = currentStreak;
            }
        } else {                    // machine working
            currentStreak = 0;
        }

        i++;
    }

    printf("Longest Failure Streak: %d\n", maxStreak);

    return 0;
}
