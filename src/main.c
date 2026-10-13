#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Return the sum of decimal digits of a positive integer. */
static int sum_digits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s array_size\n", argv[0]);
        return 1;
    }

    char *end = NULL;
    long requested = strtol(argv[1], &end, 10);
    if (end == argv[1] || *end != '\0' || requested <= 0 || requested > 1000000) {
        fprintf(stderr, "array_size must be a positive integer no greater than 1000000\n");
        return 1;
    }

    int n = (int)requested;
    int *arr = malloc((size_t)n * sizeof(*arr));
    if (arr == NULL) {
        fprintf(stderr, "Unable to allocate memory for %d elements\n", n);
        return 1;
    }

    srand((unsigned int)time(NULL));
    printf("Array:\n");

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000 + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    int max_sum = 0;
    for (int i = 0; i < n; i++) {
        int current_sum = sum_digits(arr[i]);
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Numbers with max digit sum:\n");
    for (int i = 0; i < n; i++) {
        if (sum_digits(arr[i]) == max_sum) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nMax sum = %d\n", max_sum);
    free(arr);
    return 0;
}
