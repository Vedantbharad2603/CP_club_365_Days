// 0x90Day of 0x365Days challenge
// VEDANT BHARAD
// 15-1-2023
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    int *arr=malloc(n*sizeof(int));
    for(int loop1=0;loop1<n;loop1++){
        float p=(tr[loop1].a+tr[loop1].b+tr[loop1].c)/2.0;
        arr[loop1]=(p*(p-tr[loop1].a)*(p-tr[loop1].b)*(p-tr[loop1].c));
    }
    for(int loop1=0;loop1<n;loop1++){
        for(int loop2=0;loop2<n-loop1-1;loop2++)
        {
            if(arr[loop2]>arr[loop2+1])     
            {
                int temp=arr[loop2];
                arr[loop2]=arr[loop2+1];
                arr[loop2+1]=temp;

                temp=tr[loop2].a;
                tr[loop2].a=tr[loop2+1].a;
                tr[loop2+1].a=temp;

                temp=tr[loop2].b;
                tr[loop2].b=tr[loop2+1].b;
                tr[loop2+1].b=temp;

                temp=tr[loop2].c;
                tr[loop2].c=tr[loop2+1].c;
                tr[loop2+1].c=temp;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}