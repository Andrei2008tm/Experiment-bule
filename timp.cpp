#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;

int main(){
       ifstream fin("valori.txt");
    //     ifstream fin("valori-sortare.txt");
    int n;
    fin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
        fin >> v[i];
    auto start = chrono::high_resolution_clock::now();
    bool sortat = false;
    while (sortat == false)
    {
        sortat = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                sortat = false;
            }
        }
    }
    
    auto stop = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = stop - start;
    cout << "Time taken by function: "
         << duration.count() << " seconds" << endl;
    return 0;
}