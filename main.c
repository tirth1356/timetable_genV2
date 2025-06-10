#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define DAYS 5
#define LECTURES_PER_DAY 8
#define MAX_SUBJECTS 10
#define MAX_NAME_LEN 30

typedef struct {
    char name[MAX_NAME_LEN];
} Subject;

int subjectCount;
Subject subjects[MAX_SUBJECTS];

const char *dayNames[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

void getTimeSlot(int period, char *slot) {
    int hour = 8;
    int minutes = 0;
    if (period >= 4) minutes += 30;
    hour += (period * 45 + minutes) / 60;
    minutes = (period * 45 + minutes) % 60;
    sprintf(slot, "%02d:%02d", hour, minutes);
}

void generateTimetable() {
    int timetable[DAYS][LECTURES_PER_DAY];
    int dailyCount[MAX_SUBJECTS];
    srand(time(NULL));

    for (int day = 0; day < DAYS; day++) {
        memset(dailyCount, 0, sizeof(dailyCount));
        int filled = 0;
        while (filled < LECTURES_PER_DAY) {
            int subj = rand() % subjectCount;
            if (dailyCount[subj] < 2) {
                timetable[day][filled++] = subj;
                dailyCount[subj]++;
            }
        }
    }

    printf("\n-------------------- Weekly Timetable --------------------\n");
    printf("%-10s", "Time");
    for (int d = 0; d < DAYS; d++) {
        printf("%-15s", dayNames[d]);
    }
    printf("\n----------------------------------------------------------\n");

    for (int i = 0; i < LECTURES_PER_DAY; i++) {
        char timeSlot[10];
        getTimeSlot(i, timeSlot);

        if (i == 4) {
            printf("%-10s", "11:00");
            for (int d = 0; d < DAYS; d++) printf("%-15s", "BREAK");
            printf("\n");
        }

        printf("%-10s", timeSlot);
        for (int d = 0; d < DAYS; d++) {
            printf("%-15s", subjects[timetable[d][i]].name);
        }
        printf("\n");
    }
}

int main() {
    printf("Enter the number of subjects (max %d): ", MAX_SUBJECTS);
    scanf("%d", &subjectCount);

    if (subjectCount <= 0 || subjectCount > MAX_SUBJECTS) {
        printf("Invalid number of subjects.\n");
        return 1;
    }

    for (int i = 0; i < subjectCount; i++) {
        printf("Enter name of subject %d: ", i + 1);
        scanf("%s", subjects[i].name);
    }

    generateTimetable();
    return 0;
}
