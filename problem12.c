#include <stdio.h>

int main() {
    int N, usage;
    int maxUsage = 0;
    int surgeCount = 0;
    int i = 0;

    scanf("%d", &N);

    while (i < N) {
        scanf("%d", &usage);

        if (usage > maxUsage) {
            maxUsage = usage;
        }

        if (usage > 5) {
            surgeCount++;
        }

        i++;
    }

    printf("Max Usage: %d\n", maxUsage);
    printf("Surge Hours: %d\n", surgeCount);

    return 0;
}
