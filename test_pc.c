#include <stdio.h>

#define BLUE   "\x1B[34m"
#define RESET  "\x1B[0m"

int main() {
    int choice = 0;

    while(choice != 3) {
        printf(BLUE "\n=== PkgMega Beta ===\n" RESET);
        printf("1. Homebrew Store\n");
        printf("2. Backup Manager\n");
        printf("3. Exit\n");
        printf("Select an option: ");

        if(scanf("%d", &choice) != 1) {
            // Invalid input, clear input buffer
            int c; while((c=getchar())!='\n' && c!=EOF);
            choice = 0;
        }

        switch(choice) {
            case 1:
                printf("Homebrew Store - placeholder\n");
                break;
            case 2:
                printf("Backup Manager - placeholder\n");
                break;
            case 3:
                break;
            default:
                printf("Invalid option\n");
        }
    }

    printf("Exiting PkgMega Beta\n");
    return 0;
}
