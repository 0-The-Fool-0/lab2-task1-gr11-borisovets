#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
int sum_digits(int num) {
int sum = 0;

while(num > 0) {
    sum += num % 10;
    num /= 10;
}

return sum;
}
int main(int argc, char *argv[]) {
if(argc < 2) {
    printf("Usage: %s array_size\n", argv[0]);
    return 1;
}

int n = atoi(argv[1]);

int arr[n];

srand(time(NULL));

printf("Array:\n");

for(int i = 0; i < n; i++) {

    arr[i] = rand() % 1000 + 1;

    printf("%d ", arr[i]);
}

printf("\n");

int max_sum = 0;

for(int i = 0; i < n; i++) {

    int s = sum_digits(arr[i]);

    if(s > max_sum)
        max_sum = s;
}

printf("Numbers with max digit sum:\n");

for(int i = 0; i < n; i++) {

    if(sum_digits(arr[i]) == max_sum)
        printf("%d ", arr[i]);
}

printf("\nMax sum = %d\n", max_sum);

return 0;
=======

int sum_digits(int num) {

    int sum = 0;

    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(int argc, char *argv[]) {

    if(argc < 2) {
        printf("Usage: %s array_size\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);

    int arr[n];

    srand(time(NULL));

    printf("Array:\n");

    for(int i = 0; i < n; i++) {

        arr[i] = rand() % 1000 + 1;

        printf("%d ", arr[i]);
    }

    printf("\n");

    int max_sum = 0;

    for(int i = 0; i < n; i++) {

        int s = sum_digits(arr[i]);

        if(s > max_sum)
            max_sum = s;
    }

    printf("Numbers with max digit sum:\n");

    for(int i = 0; i < n; i++) {

        if(sum_digits(arr[i]) == max_sum)
            printf("%d ", arr[i]);
    }

    printf("\nMax sum = %d\n", max_sum);

    return 0;
>>>>>>> 2fd559187a15b5ddc2aecbb0e131405b34915c8a
}
