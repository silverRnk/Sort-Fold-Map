#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int foldNumber(vector<int> a, function<int(int, int)> operation){

    int acc = 0;

    for (auto x: a){
        acc = operation(x, acc);
    }

    return acc;
}

vector<int> sortNumberDecreasing(vector<int> a, int size){

    vector <int> ans;

    vector <int> toBeProcess = a;
    int currentLargest = toBeProcess.begin()
    for(i = 0, i < size, i++){

    }

}

int sumNumbers(int a, int b){
   return a + b;
}

int main()
{
    vector <int> vec = {2, 3, 5, 7, 10};


    int sum = 0;

    sum = foldNumber(vec, sumNumbers);


    cout <<"Sum: "<<sum <<"\n";
    cout << "Hello world!" << endl;



    return 0;
}
