#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,1,2,3,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int hashArr[12] = {0};
    int count = 0;
    for(int i = 0; i < n; i++){
        hashArr[arr[i]]++;
    }
for(int i :hashArr) cout<<i<<" ";
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int SIZE = 10; // Size of hash table
    vector<int> table;

    // Hash function - converts key to array index
    int hashFunction(int key) {
        return key % SIZE;  // Simple modulo hash function
    }

public:
    HashTable() {
        // Initialize hash table with -1 (empty slots)
        table.resize(SIZE, -1);
    }

    // Insert a value into hash table
    void insert(int value) {
        int index = hashFunction(value);
        
        // Linear Probing: If slot is occupied, try next slot
        while(table[index] != -1) {
            cout << "Collision at index " << index << ", probing next slot" << endl;
            index = (index + 1) % SIZE;  // Move to next slot
        }
        
        table[index] = value;
        cout << "Value " << value << " inserted at index " << index << endl;
    }

    // Search for a value in hash table
    bool search(int value) {
        int index = hashFunction(value);
        int originalIndex = index;
        
        while(table[index] != -1) {
            if(table[index] == value) {
                cout << "Value " << value << " found at index " << index << endl;
                return true;
            }
            index = (index + 1) % SIZE;
            
            // If we've searched entire table
            if(index == originalIndex) {
                break;
            }
        }
        cout << "Value " << value << " not found" << endl;
        return false;
    }

    // Display hash table
    void display() {
        cout << "\nHash Table Contents:" << endl;
        for(int i = 0; i < SIZE; i++) {
            cout << "Index " << i << ": ";
            if(table[i] == -1)
                cout << "Empty";
            else
                cout << table[i];
            cout << endl;
        }
    }
};

int main() {
    HashTable ht;
    
    // Insert some values
    ht.insert(5);
    ht.insert(15);  // Will cause collision with 5 (15 % 10 = 5)
    ht.insert(25);  // Will cause another collision
    ht.insert(7);
    
    // Display the hash table
    ht.display();
    
    // Search for values
    ht.search(15);  // Should be found
    ht.search(8);   // Should not be found
    return 0;
}