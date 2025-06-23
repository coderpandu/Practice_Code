#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char data[100];
    int choice;

    while (1) {
        printf("\nFile Handling Menu:\n");
        printf("1. Write to file (overwrite)\n");
        printf("2. Append to file\n");
        printf("3. Display file contents\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline left by scanf

        if (choice == 1) {
            fp = fopen("sumeet.txt", "w");
            if (fp == NULL) {
                printf("Error opening file for writing.\n");
                continue;
            }
            printf("Enter text to write to file: ");
            fgets(data, sizeof(data), stdin);
            fputs(data, fp);
            fclose(fp);
            printf("Data written to file.\n");
        } else if (choice == 2) {
            fp = fopen("sumeet.txt", "a");
            if (fp == NULL) {
                printf("Error opening file for appending.\n");
                continue;
            }
            printf("Enter text to append to file: ");
            fgets(data, sizeof(data), stdin);
            fputs(data, fp);
            fclose(fp);
            printf("Data appended to file.\n");
        } else if (choice == 3) {
            fp = fopen("sumeet.txt", "r");
            if (fp == NULL) {
                printf("Error opening file for reading.\n");
                continue;
            }
            printf("File contents:\n");
            while (fgets(data, sizeof(data), fp) != NULL) {
                printf("%s", data);
            }
            fclose(fp);
        } else if (choice == 4) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
