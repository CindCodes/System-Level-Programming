#include <stdio.h>
    int main() {
        int num = 2;
        switch (num) {
            case 1:
                printf("Value is 1");
                break;
            case 2:
                printf("Value is 2");
                break;
            case 3:
                printf("Value is 3");
                break;
            default:
                printf("Out of range");
                break;
        }
        return 0;
    }
