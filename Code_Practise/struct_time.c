#include <stdio.h>

struct Time
{
    int hours;
    int minutes;
};

int Difference(struct Time t1, struct Time t2)
{
    int totalMinutes1 = t1.hours * 60 + t1.minutes;
    int totalMinutes2 = t2.hours * 60 + t2.minutes;
    int difference =  totalMinutes2 - totalMinutes1;
    return difference;
}

int main()
{
    struct Time time1, time2;

    printf("Enter the first time (hours minutes): ");
    scanf("%d %d", &time1.hours, &time1.minutes);

    printf("Enter the second time (hours minutes): ");
    scanf("%d %d", &time2.hours, &time2.minutes);

    int differenceInMinutes = Difference(time1, time2);

    printf("The difference in minutes is: %d\n", differenceInMinutes);

    return 0;
}
