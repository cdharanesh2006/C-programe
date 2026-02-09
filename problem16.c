#include <stdio.h>

int main() {
    int maxWeight, n;
    int currentWeight = 0;
    int peopleEntered = 0;
    int i = 0, weight;

    scanf("%d", &maxWeight);
    scanf("%d", &n);

    while (i < n) {
        scanf("%d", &weight);

        if (currentWeight + weight > maxWeight) {
            break;   // overload occurs
        }

        currentWeight += weight;
        peopleEntered++;
        i++;
    }

    printf("People Entered: %d\n", peopleEntered);

    if (peopleEntered < n) {
        printf("Overload Status: Yes");
    } else {
        printf("Overload Status: No");
    }

    return 0;
}
