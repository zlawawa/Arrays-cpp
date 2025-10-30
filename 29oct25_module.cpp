#include "29oct25.h"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//1
int sum1(int arr1[], int n1){
    int result1 = 0;
    for (int i = 0; i < n1; i++){
        result1 += arr1[i];
    }
    return result1;
}
int output1(){
    int size1;
    std::cout << "введите размер массива: ";
    std::cin >> size1;
    int arr1[size1];
    for (int i = 0; i < size1; i++){
    std::cin >> arr1[i];
    }
    std::cout << "сумма всех элементов массива: " << sum1(arr1, size1);
    return 0;
}
//2
int cnt_even(int arr2[], int n2){
    int count2 = 0;
    for (int i = 0; i < n2; i++){
        if (arr2[i] % 2 == 0){
            count2 += 1;
        }
    }
    return count2;
}
int output2(){
    int size2;
    std::cout << "введите размер массива: ";
    std::cin >> size2;
    int arr2[size2];
    for (int i = 0; i < size2; i++){
        std::cin >> arr2[i];
    }
    std::cout << "кол-во чётных элементов массива: " << cnt_even(arr2, size2);
    return 0;
}

//3
int max_el(int arr3[], int n3){
    int maximum = 0;
    for (int i = 0; i < n3; i++){
        if (arr3[i] > maximum){
            maximum = arr3[i];
        }
    }
    return maximum;
}
int min_el(int arr3[], int n3){
    int minimum = 10;
    for (int i = 0; i < n3; i++){
        if (arr3[i] < minimum){
            minimum = arr3[i];
        }
    }
    return minimum;
}
int output3(){
    int size3;
    std::cout << "введите размер массива: ";
    std::cin >> size3;
    int arr3[size3];
    for (int i = 0; i < size3; i++){
        std::cin >> arr3[i];
    }
    std::cout << "максимальный элемент массива: " << max_el(arr3, size3) << "\n";
    std::cout << "минимальный элемент массива: " << min_el(arr3, size3);
    return 0;
}

//4
double average(int arr4[], int n4){
    double result4 = 0, sum4 = 0;
    for (int i = 0; i < n4; i++){
        sum4 += arr4[i];
    }
    result4 = sum4 / n4;
    return result4;
}
int output4(){
    int size4;
    std::cout << "введите размер массива: ";
    std::cin >> size4;
    int arr4[size4];
    for (int i = 0; i < size4; i++){
        std::cin >> arr4[i];
    }
    std::cout << "среднее арифметическое массива: " << average(arr4, size4);
    return 0;
}

//5
void count_pos_neg(int arr5[], int n5){
    int plus = 0, minus = 0, zero = 0;
    for (int i = 0; i < n5; i++){
        if (arr5[i] > 0){
            plus += 1;
        }else if (arr5[i] < 0){
            minus += 1;
        }else{
            zero += 1;  
        }
    }
    std::cout << "положительных: " << plus << "\n";
    std::cout << "отрицательных: " << minus << "\n";
    std::cout << "ноль: " << zero << "\n";
}
int output5(){
    int size5;
    std::cout << "введите размер массива: ";
    std::cin >> size5;
    int arr5[size5];
    for (int i = 0; i < size5; i++){
        std::cin >> arr5[i];
    }
    count_pos_neg(arr5, size5);
    return 0;
}

//6
void reverse_array(int arr6[], int n6){
    for (int i = 0; i < n6 / 2; i++){
        int j = arr6[i];
        arr6[i] = arr6[n6 - 1 - i];
        arr6[n6 - 1 - i] = j;
    }
    for (int k = 0; k < n6; k++){
        std::cout << arr6[k] << " ";
    }
}
int output6(){
    int size6;
    std::cout << "введите размер массива: ";
    std::cin >> size6;
    int arr6[size6];
    for (int i = 0; i < size6; i++){
        std::cin >> arr6[i];
    }
    std::cout << "ваш перевёрнутый массив: "; 
    reverse_array(arr6, size6);
    return 0;
}

//7
int quantity(int arr7[], int n7){
    int count7 = 0;
    for (int i = 0; i < n7; i++){
        if (arr7[i+1] < arr7[i+2]){
            count7++;
        }
    }
    return count7;
}
int output7(){
    int size7;
    std::cout << "введите размер массива: ";
    std::cin >> size7;
    int arr7[size7];
    for (int i = 0; i < size7; i++){
        std::cin >> arr7[i];
    }
    std::cout << "кол-во локальных максимумов: " << quantity(arr7, size7);
    return 0;
}

//9
vector<int> writevct9(){
    int size9, num;
    vector<int> arr9;
    std::cout << "введите кол-во элементов: ";
    std::cin >> size9;
    std::cout << "введите " << size9 << " числа: " << "\n";
    for (; size9 > 0; size9--){
        std::cin >> num;
        arr9.push_back(num);
    }
    return arr9;
}
vector<int> merge(vector<int>& a, vector<int>& b){
    vector<int> merged;
    for (int i : a){
        merged.push_back(i);
    }
    for (int i : b){
        merged.push_back(i);
    }
    return merged;
}
void output9(){
    std::cout << "1 array - " ; 
    vector<int> a = writevct9();
    std::cout << "2 array - " ; 
    vector<int> b = writevct9();
    vector<int> merged = merge(a, b);
    std::cout << "соединенные массивы: " << "\n";
    for (int i : merged){
        std::cout << i << " ";
    }
}

//10
vector<int> writevct10(){
    int size10, num;
    vector<int> arr10;
    std::cout << "введите кол-во элемнтов: ";
    std::cin >> size10;
    std::cout << "введите " << size10 << " чисел: " << "\n";
    for (; size10 > 0; size10--){
        std::cin >> num;
        arr10.push_back(num);
    }
    return arr10;
}
void dell_zero(vector<int>& arr10){
    for (int i = 0; i < arr10.size(); ){
        if (arr10[i] == 0){
            arr10.erase(arr10.begin() + i);// ?
        }else{
            i++;
        }
    }
}
void output10(){
    vector<int> arr10 = writevct10();
    dell_zero(arr10);
    std::cout << "измененный массив: ";
    for (int i : arr10){
        std::cout << i << " ";
    }
}
