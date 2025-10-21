#include "mylib.h"
#include <math.h>

#include<stdio.h>

int reverseDigits(int n) {
    int a = 0;
    while (b != 0) {
        a = a * 10 + (b % 10);
        b =b/ 10;
    }
    return r;
}

int isArmstrong(int num) {
    int temp = num, sum = 0, digits = 0;
    while (temp != 0) {
        digits++;
        temp =temp/ 10;
    }
    temp = num;
    while (temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return (sum == num);
}

int isAdams(int num) {
    int sq = num * num;
    int rev = reverseDigits(num);
    int revsq = rev * rev;
    return (sq == reverseDigits(revsq));
}

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int isPrimePalindrome(int num) {
    return (isPrime(num) && num == reverseDigits(num));
}
