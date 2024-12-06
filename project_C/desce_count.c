#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record using the FitnessData struct
void tokenizeRecord(char *record, FitnessData *data) {
    char *ptr = strtok(record, ",");
    if (ptr != NULL) {
        strncpy(data->date, ptr, sizeof(data->date) - 1);
        data->date[sizeof(data->date) - 1] = '\0';

        ptr = strtok(NULL, ",");
        if (ptr != NULL) {
            strncpy(data->time, ptr, sizeof(data->time) - 1);
            data->time[sizeof(data->time) - 1] = '\0';

            ptr = strtok(NULL, ",");
            if (ptr != NULL) {
                data->steps = atoi(ptr);
            }
        }
    }
}

// Function to validate a record
int validateRecord(char *record) {
    FitnessData data;
    tokenizeRecord(record, &data);

    // Additional validation checks
    return strlen(data.date) == 10 &&
           strlen(data.time) == 5 &&
           data.steps >= 0;  // Assuming steps should be a non-negative integer
}

// Function to compare records for sorting
int compareRecords(const void *a, const void *b) {
    FitnessData *dataA = (FitnessData *)a;
    FitnessData *dataB = (FitnessData *)b;

    return dataB->steps - dataA->steps;
}

int main() {
    char filename[256];
    printf("Enter Filename: ");
    scanf("%s", filename);

    // Step 1: Open and validate the file
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: invalid file\n");
        return 1;
    }

    FitnessData *data = NULL;
    size_t linesCount = 0;
    char line[100];

    while (fgets(line, sizeof(line), file) != NULL) {
        // Validate each record in the file
        if (!validateRecord(line)) {
            printf("Error: invalid record in the file\n");
            fclose(file);
            free(data);
            return 1;
        }

        // Resize the data array
        data = realloc(data, (linesCount + 1) * sizeof(FitnessData));

        // Tokenize and store the data
        tokenizeRecord(line, &data[linesCount]);

        linesCount++;
    }

    fclose(file);

    // Step 2: Sort the data by descending order of steps
    qsort(data, linesCount, sizeof(FitnessData), compareRecords);

    // Step 3: Write out the sorted data to a new file with .tsv extension
    char outputFilename[256];
    snprintf(outputFilename, sizeof(outputFilename), "%s.tsv", filename);
    file = fopen(outputFilename, "w");

    for (size_t i = 0; i < linesCount; i++) {
        fprintf(file, "%s\t%s\t%d\n", data[i].date, data[i].time, data[i].steps);
    }

    fclose(file);
    free(data);

    printf("Data sorted and written to %s\n", outputFilename);

    return 0;
}
