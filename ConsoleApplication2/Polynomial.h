#pragma once
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


class Polynomial
{
public:
	double a0, a1, a2; // objevime promene polynomu typu double

    vector<double> A; // vector pro zapsani jednotlivych promenych 

    Polynomial(double x0) { // tri typu konstruktoru
        this->a0 = x0;
        A.push_back(x0);
    }

    Polynomial(double x0, double x1) {
        A.push_back(x0);
        A.push_back(x1);
    }


    Polynomial(double x0, double x1, double x2) {
        A.push_back(x0);
        A.push_back(x1);
        A.push_back(x2);
    }
    

    Polynomial(vector<double> x0) {
        A = x0;
    }

    double GetVectorValue(int koef) {
        
        return A[koef]; // metoda get
    }


    void print(vector<double> vect) { // metoda print pro libovolny vektor
        int size = vect.size();
        cout << size << endl;

        for (int i = 0; i < size; i++)
        {
            cout << vect[i];
            if (i != 0)
                cout << "x^" << i;
            if (i != size - 1)
                cout << " + ";
        }
        cout << endl;
    }


    double result(vector<double> res, double x0) { // vysledek libovolneho vektoru x0
        int size = res.size();
        double result = 0;
        for (int i = 0; i < size; i++) {
            result += pow(x0, i) * res[i];
        }
        return result;
        
    }

    int max(int m, int n) { return (m > n) ? m : n; } // max size


    vector<double> add(vector<double> first, vector<double> second) // soucet dvou vektoru
    {   
        int m = first.size();
        int n = second.size();
        int size = this->max(m, n);
        double* sum = new double[size];
        vector<double> sums;
        for (int i = 0; i < m; i++) {
            sums.insert(sums.begin() + i, first[i]);
        }

        for (int i = 0; i < n; i++) {
            sums[i] += second[i];
        }
        return sums;
    }

};

