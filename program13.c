#include <stdio.h>

int main() {
    int dataPackGB, N;
    int usage;
    int day = 0;
    int exhaustedDay = -1;
    int overused = 0;

    scanf("%d", &dataPackGB);
    scanf("%d", &N);

    while (day < N) {
        scanf("%d", &usage);
        day++;

        dataPackGB -= usage;

        if (dataPackGB <= 0 && exhaustedDay == -1) {
            exhaustedDay = day;

            if (dataPackGB < 0) {
                overused = -dataPackGB;
            }
            break;   // stop once exhausted
        }
    }

    if (exhaustedDay == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        printf("Exhausted Day: %d\n", exhaustedDay);
        printf("Overused Data: %d\n", overused);
    }

    return 0;
}
