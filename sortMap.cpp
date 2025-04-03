#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    map<char, int> freqMap = {{'a', 5}, {'b', 2}, {'c', 9}, {'d', 1}};
    
    // Create a vector from the map
    vector<pair<char, int>> vec(freqMap.begin(), freqMap.end());
    
    // Correct way to print pairs
    for(const auto& i : vec){
        cout << i.first << ": " << i.second << "\t";
    }
    cout << endl;
    
    // Sort by frequency (descending order)
    sort(vec.begin(), vec.end(), 
         [](const pair<char, int>& a, const pair<char, int>& b) {
             return a.second > b.second;
         });
    
    // Print sorted results
    cout << "After sorting:" << endl;
    for (const auto& pair : vec) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    return 0;
}