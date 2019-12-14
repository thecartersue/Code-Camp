#include<stdio.h>
#include<stdbool.h>
int hammingDistance(int aList[], int bList[], int len);
int sum3or5Multiples();
bool lastDigit(int, int);
int reverseInt(int); 

// CodeCampTester.c -- EE 312 Project 1 -- Tester class

/* Student information for assignment:
 * 
 * Name: Zane
 * email address: thezanefreeman@utexas.edu
 * UTEID: zcf222
 * Section 5 digit ID: 16195
 *  
 */

int main() {


    int h7[] = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    int h8[] = {1, 2, 9, 4, 7, 4, 3, -5, 10};
    int expected = 4;
    int actual = hammingDistance(h7, h8, 9);
    printf("Zane's Test 1 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 1, hamming distance\n\n");
    else printf("**** FAILED **** test Zane's 1, hamming distance\n\n");

    int h9[] = {1, 6, 3, 7, 5, 4};
    int h10[] = {1, 2, 10, 4, 5, 4};
    expected = 3;
    actual = hammingDistance(h9, h10, 6);
    printf("Zane's Test 2 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 2, hamming distance\n\n");
    else printf("**** FAILED **** Zane's test 2, hamming distance\n\n");

    int h11[] = {1, 2, 3};
    int h12[] = {6, 2, 10};
    expected = 2;
    actual = hammingDistance(h11, h12, 3);
    printf("Zane's Test 3 hamming distance: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 3, hamming distance\n\n");
    else printf("**** FAILED **** Zane's test 3, hamming distance\n\n");

    int n1 = 707;
    int n2 = 497;
    expected = true;
    actual = lastDigit(n1, n2);
    printf("Zane's Test 4 last digit: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 4, last digit\n\n");
    else printf("**** FAILED **** Zane's test 4, last digit\n\n");

    n1 = 12;
    n2 = 3115;
    expected = false;
    actual = lastDigit(n1, n2);
    printf("Zane's Test 5 last digit: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 5, last digit\n\n");
    else printf("**** FAILED **** Zane's test 5, last digit\n\n");

    n1 = 1029;
    n2 = 999;
    expected = true;
    actual = lastDigit(n1, n2);
    printf("Zane's Test 6 last digit: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 6, last digit\n\n");
    else printf("**** FAILED **** Zane's test 6, last digit\n\n");

  //sum of multiples of 3 or 5
    expected = 233168;
    actual = sum3or5Multiples();
    printf("Zane's Test 7 sum of multiples: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 7, sum of multiples of 3 or 5\n\n");
    else printf("**** FAILED **** Zane's test 7, sum of multiples of 3 or 5\n\n");


    n1 = 4096;
    expected = 6904;
    actual = reverseInt(n1);
    printf("Zane's Test 8 reverse int: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 8, reverse int\n\n");
    else printf("**** FAILED **** Zane's test 8, reverse int\n\n");

    n1 = -123;
    expected = -321;
    actual = reverseInt(n1);
    printf("Zane's Test 9 reverse int: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 9, reverse int\n\n");
    else printf("**** FAILED **** Zane's test 9, reverse int\n\n");

    n1 = 10;
    expected = 01;
    actual = reverseInt(n1);
    printf("Zane's Test 10 reverse int: expected value: %d, actual value: %d\n", expected, actual);

    if(expected == actual)  printf("passed Zane's test 10, reverse int\n\n");
    else printf("**** FAILED **** Zane's test 10, reverse int\n\n");
}

