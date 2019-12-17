#include<stdio.h>
int prime(int);
int sum(int);

int prime(int n){ 
    for (int i = 2; i < n/2; i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    return 1;
}

int sum(int limit) {
    int num = 1, count = 0, sum = 0;
    while(count <= limit) {
        if (prime(num) == 1) {
            sum = sum + num;
            count++;
        }
        num++;
    }
    return sum;
}

void main() {
    printf("%d", sum(10));
}