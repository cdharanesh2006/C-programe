#include <stdio.h>

int main() {
    int n;
    int vehicles;
    int congestionMinutes = 0;
    int currentStreak = 0, longestStreak = 0;
    int i = 0;

    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &vehicles);

        if (vehicles > 20) {
            congestionMinutes++;
            currentStreak++;

            if (currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }

        i++;
    }

    printf("Congestion Minutes: %d\n", congestionMinutes);
    printf("Longest Congestion Streak: %d");

    return 0;
}
