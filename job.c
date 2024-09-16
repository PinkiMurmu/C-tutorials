#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int deadline;
    int profit;
} Job;
int compare(const void *a, const void *b) {
    Job *jobA = (Job *)a;
    Job *jobB = (Job *)b;
    return jobB->profit - jobA->profit;
}
int min(int a, int b) {
    return (a < b) ? a : b;
}
void printJobSequence(Job jobs[], int n) {
    qsort(jobs, n, sizeof(Job), compare);
    int *slot = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        for (int j = min(n, jobs[i].deadline) - 1; j >= 0; j--) {
            if (slot[j] == 0) {
                printf("Job %d (Profit: %d, Deadline: %d)\n", jobs[i].id, jobs[i].profit, jobs[i].deadline);
                slot[j] = 1; 
                break;
            }
        }
    }
    free(slot);
}
int main() {
    int n;
    printf("Enter the number of jobs: ");
    scanf("%d", &n);
    Job *jobs = (Job *)malloc(n * sizeof(Job));
    for (int i = 0; i < n; i++) {
        printf("Enter job %d details (id, deadline, profit): ", i + 1);
        scanf("%d %d %d", &jobs[i].id, &jobs[i].deadline, &jobs[i].profit);
    }
    printf("Job sequence to maximize profit:\n");
    printJobSequence(jobs, n);
    free(jobs);
    return 0;
}