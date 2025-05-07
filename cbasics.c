#include<stdio.h>
void main(){
    int a[10];
    int b[5];
    for(int i=0;i<5;i++){
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < 5; i++) {
        b[i] = 0;
    }
    for(int i = 0; i < 5; i++) {
        if (b[i] == 1)
            continue;
        int c = 1;
        for(int j = i + 1; j < 5; j++) {
            if (a[i] == a[j]) {
                c++;
                b[j] = 1;
            }
        }
        printf("%d occurs %d times\n", a[i], c);
    }
}

#include<stdio.h>
void main(){
    int a[10];
    for(int i=0;i<5;i++){
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    int b,c;
    b=c=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>b){
            b=a[i];
        }
        if(a[i]<c){
            c=a[i];
        }
    }
    printf("the max element is %d",b);
    printf("the min element is %d",c);
}

#include<stdio.h>
void main(){
    int a[10],b[5],c[5];
    int k=0,l=0;
    for(int i=0;i<5;i++){
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        if(a[i]%2 == 0){
            b[k]=a[i];
            k++;
        }
        else{
            c[l]=a[i];
            l++;
        }
    }
    printf("the even numbers are");
    for(int i=0;i<k;i++){
        printf("%d",b[i]);
    }
    printf("\n the odds numbers are");
    for(int i=0;i<l;i++){
        printf("%d",c[i]);
    }
}

#include<stdio.h>
void main(){
    int a[10];
    int b=7,k=0;
    for(int i=0;i<5;i++){
        printf("element - %d : ",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<4;i++){
        for(int j=i;j<5;j++){
            if(a[i]>a[j]){
                a[i]^=a[j]^=a[i]^=a[j];
            }
        }
    }
    while(a[k]<b){
        k++;
    }
    for(int i=5;i>k;i--){
        a[i]=a[i-1];
    }
    a[k]=b;
    for(int i=0;i<6;i++){
        printf("%d",a[i]);
    }
}
//array and typedef
#include <stdio.h>
typedef int n;
void main() {
    n a[5] = {1, 2, 3, 4, 5};
    for(n i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
}
//array and file handling
#include <stdio.h>
void main() {
    int a[] = {5,11,3,4,8,9,10};
    int n = 7;
    FILE *f = fopen("data.txt", "w");
    for(int i = 0; i < n; i++) {
        fprintf(f, "%d\n", a[i]);
    }
    fclose(f);
}
//file handling and array

#include <stdio.h>
void main() {
    int a[100], n = 0;
    FILE *f = fopen("data.txt", "r");
    while(fscanf(f, "%d", &a[n]) != EOF) {
        n++;
    }
    fclose(f);
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

#include <stdio.h>
void main() {
    const int a[] = {1, 2, 3, 4, 5};
    printf("Array elements:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    //a[0] = 100; Error: cannot assign to const
}

#include <stdio.h>
void main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *const p = arr;
    printf("Before change:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    p[0] = 100;
    printf("\nAfter change:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
    // p = 1; Error: cannot change pointer address
}

#include <stdio.h>
void f() {
    int a[] = {1, 2, 3};
    a[0] += 1;
    printf("Array: %d %d %d\n", a[0], a[1], a[2]);
}
void main() {
    f();
    f();
    f();
}

#include <stdio.h>
void main() {
    int x = 10;
    int *p = &x;    
    int **q = &p;   
    printf("%d\n", x); 
    printf("%d\n", *p);
    printf("%d\n", **q);
}

#include <stdio.h>
#include <stdlib.h>
void main() {
    int a[3];
    int *p;
    for (int i = 0; i < 3; i++) {
        p= (int *)malloc(sizeof(int));
        scanf("%d",p);
        a[i]=*p;            
        free (p);   
    }
    for (int i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }
}

