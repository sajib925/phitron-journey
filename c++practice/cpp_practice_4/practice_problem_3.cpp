#include <bits/stdc++.h>
using namespace std;


int main() {
    string sentence;
    getline(cin, sentence);
    getchar();

    string target_word;
    cin >> target_word;

    int count = 0;

    stringstream ss(sentence);
    string word;
    while (ss >> word)
    {
        if (word == target_word)
        {
            count++;
        }
        
    }
    
    cout << count << endl;

    return 0;
}