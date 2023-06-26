#include<iostream>
#include<string>

using namespace std;

int main() {

    int a[] = {11, 22, 3, 44, 35, 34};

    // sorting a array
    for (int i = 0; i < 6; i++) {
        for (int j = i+1; j < 6; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j]= temp;
            }
        }
    }
    // print array
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }


    return 0;
}

