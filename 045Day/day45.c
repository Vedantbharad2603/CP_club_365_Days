// 0x45Day of 0x365Days challenge
// VEDANT BHARAD
// 1-12-2022
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
int parse_int(char*);
char* myFun(char* arr,int len)
{
    for(int loop=0;loop<len;loop++){
        for(int loop2=loop;loop2<len;loop2++){
            if(arr[loop]<arr[loop2]){
                char temp=arr[loop];
                arr[loop]=arr[loop2];
                arr[loop2]=temp;
            }
        }
    }
    return arr;
}
char* gridChallenge(int grid_count, char** grid) {
    for(int loop=0;loop<grid_count;loop++){
        for(int loop2=0;loop2<grid_count;loop2++){
            for(int loop3=loop2;loop3<grid_count;loop3++){
                if(grid[loop][loop2]>grid[loop][loop3]){
                    char temp=grid[loop][loop2];
                    grid[loop][loop2]=grid[loop][loop3];
                    grid[loop][loop3]=temp;
                }
            }
        }
    }
    for(int loop1=0; loop1<grid_count; loop1++){
        for(int loop2=0; loop2<grid_count-1; loop2++){
            if(grid[loop2][loop1]>grid[loop2+1][loop1]){
                return "NO";
            }
        }
    }
    return "YES";
}
int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
    int t = parse_int(ltrim(rtrim(readline())));
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n = parse_int(ltrim(rtrim(readline())));
        char** grid = malloc(n * sizeof(char*));
        for (int i = 0; i < n; i++) {
            char* grid_item = readline();
            *(grid + i) = grid_item;
        }
        char* result = gridChallenge(n, grid);
        // fprintf(fptr, "%s\n", result);
        printf("%s\n", result);
    }
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
int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);
    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }
    return value;
}