// 0x36Day of 0x365Days challenge
// VEDANT BHARAD
// 22-11-2022
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);
int parse_int(char*);
int* rotLeft(int a_count, int* a, int d, int* result_count) {
    *result_count=a_count;
    for(int loop = 0; loop < d; loop++)
    {
        int temp =a[0];
        for(int loop2 = 0; loop2 < (a_count-1); loop2++){
            a[loop2]=a[loop2+1];
        }
        a[a_count-1]=temp;
    }
    return a;
}
int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
    char** first_multiple_input = split_string(rtrim(readline()));
    int n = parse_int(*(first_multiple_input + 0));
    int d = parse_int(*(first_multiple_input + 1));
    char** a_temp = split_string(rtrim(readline()));
    int* a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        int a_item = parse_int(*(a_temp + i));
        *(a + i) = a_item;
    }
    int result_count;
    int* result = rotLeft(n, a, d, &result_count);
    for (int i = 0; i < result_count; i++) {
        fprintf(fptr, "%d", *(result + i));
        // printf("%d", *(result + i));
        if (i != result_count - 1) {
            fprintf(fptr, " ");
            // printf(" ");
        }
    }
    fprintf(fptr, "\n");
    fclose(fptr);
    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);
    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        if (!line) {
            break;
        }
        data_length += strlen(cursor);
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }
        alloc_length <<= 1;
        data = realloc(data, alloc_length);
        if (!data) {
            data = '\0';
            break;
        }
    }
    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
        data = realloc(data, data_length);
        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);
        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }
    return data;
}
char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }
    if (!*str) {
        return str;
    }
    while (*str != '\0' && isspace(*str)) {
        str++;
    }
    return str;
}
char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }
    if (!*str) {
        return str;
    }
    char* end = str + strlen(str) - 1;
    while (end >= str && isspace(*end)) {
        end--;
    }
    *(end + 1) = '\0';
    return str;
}
char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");
    int spaces = 0;
    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }
        splits[spaces - 1] = token;
        token = strtok(NULL, " ");
    }
    return splits;
}
int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);
    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }
    return value;
}