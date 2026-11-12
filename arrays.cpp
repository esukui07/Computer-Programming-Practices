/*
1. Write a program that accepts 10 numbers from the user and display the average using array.

int main(){
    int n[10];
    double average;
    double sum = 0;
    
    cout << "Please enter 10 numbers:\n";
  
    for(int i = 0; i < 10; i++){
        cin >> n[i];
        sum = sum + n[i];
    }
    average = sum / 10;
    
    cout << "\nThe average is " << average << ".";
    
    return 0;
}

2. Write a program that accepts the size and elements of an array from the user and define the maximum element.

int main(){
    int n[10];
    
    cout << "Please enter 10 numbers\n";
  
    for(int i = 0; i < 10; i++){
        cin >> n[i];
    }
    
    int maxNum = n[0];
    
    for(int i = 0; i < 10; i++){
        if(n[i] > maxNum){
            maxNum = n[i];
        }
    }
  
    cout << "\nThe maximum number is " << maxNum << ".";
    
    return 0;
}

3. Write a program that accepts the size and elements of two arrays from the user and perform the following tasks:
   a.) Add the two arrays.
   b.) Find the maximum of each elements in the array and store the maximum element into a third array.
   c.) Find the minimum element in each array and display the sum.
   
int main(){
    int n1[5];
    int sum1 = 0;
    
    cout << "Enter 5 numbers:\n";
    
    for(int a = 0; a < 5; a++){
        cin >> n1[a];
        sum1 += n1[a];
    }
    
    int maxNum1 = n1[0];
    int minNum1 = n1[0];
    
    for(int a = 0; a < 5; a++){
        if(n1[a] > maxNum1){
            maxNum1 = n1[a];
        }else if(n1[a] < minNum1){
            minNum1 = n1[a];
        }
    }
    
    int n2[5];
    int sum2 = 0;
    
    cout << "\nEnter 5 more numbers:\n";
    
    for(int b = 0; b < 5; b++){
        cin >> n2[b];
        sum2 += n2[b];
    }
    
    int maxNum2 = n2[0];
    int minNum2 = n2[0];
    
    for(int b = 0; b < 5; b++){
        if(n2[b] > maxNum2){
            maxNum2 = n2[b];
        }else if(n2[b] < minNum2){
            minNum2 = n2[b];
        }
    }
    
    int n3[] = {maxNum1, maxNum2};
    int minNum3 = n3[0];
    int sum3 = 0;
    
    if(maxNum1 < maxNum2){
        minNum3 = maxNum1;
    }else{
        minNum3 = maxNum2;
    }
    
    sum3 = maxNum1 + maxNum2;
    
    int totalSum = sum1 + sum2 + sum3;
    
    cout << "\nThe sum of the two arrays is " << sum1 + sum2 << ".\n"
         << "\nThe maximum number in the first array is " << maxNum1 << ".\n"
         << "The maximum number in the second array is " << maxNum2 << ".\n"
         << "\nThe minimum number in the first array is " << minNum1 << ".\n"
         << "The minimum number in the second array is " << minNum2 << ".\n"
         << "The minimum number in the third array is " << minNum3 << ".\n"
         << "\nThe sum of the third array is " << sum3 << ".\n"
         << "The total sum of the three arrays is " << totalSum << ".\n";

    return 0;
}

*/

#include <iostream>
using namespace std;

int main(){
    int n1[5];
    int sum1 = 0;
    
    cout << "Enter 5 numbers:\n";
    
    for(int a = 0; a < 5; a++){
        cin >> n1[a];
        sum1 += n1[a];
    }
    
    int maxNum1 = n1[0];
    int minNum1 = n1[0];
    
    for(int a = 0; a < 5; a++){
        if(n1[a] > maxNum1){
            maxNum1 = n1[a];
        }else if(n1[a] < minNum1){
            minNum1 = n1[a];
        }
    }
    
    int n2[5];
    int sum2 = 0;
    
    cout << "\nEnter 5 more numbers:\n";
    
    for(int b = 0; b < 5; b++){
        cin >> n2[b];
        sum2 += n2[b];
    }
    
    int maxNum2 = n2[0];
    int minNum2 = n2[0];
    
    for(int b = 0; b < 5; b++){
        if(n2[b] > maxNum2){
            maxNum2 = n2[b];
        }else if(n2[b] < minNum2){
            minNum2 = n2[b];
        }
    }
    
    int n3[] = {maxNum1, maxNum2};
    int minNum3 = n3[0];
    int sum3 = 0;
    
    if(maxNum1 < maxNum2){
        minNum3 = maxNum1;
    }else{
        minNum3 = maxNum2;
    }
    
    sum3 = maxNum1 + maxNum2;
    
    int totalSum = sum1 + sum2 + sum3;
    
    cout << "\nThe sum of the two arrays is " << sum1 + sum2 << ".\n"
         << "\nThe maximum number in the first array is " << maxNum1 << ".\n"
         << "The maximum number in the second array is " << maxNum2 << ".\n"
         << "\nThe minimum number in the first array is " << minNum1 << ".\n"
         << "The minimum number in the second array is " << minNum2 << ".\n"
         << "The minimum number in the third array is " << minNum3 << ".\n"
         << "\nThe sum of the third array is " << sum3 << ".\n"
         << "The total sum of the three arrays is " << totalSum << ".\n";

    return 0;
}