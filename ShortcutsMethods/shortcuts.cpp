// vector
sort(v.begin(), v.end());           // Sort
reverse(v.begin(), v.end());        // Reverse
v.push_back(10);                    // Insert element at end
v.pop_back();                       // Remove last element
v.erase(v.begin() + 1);             // Remove element at index
v.insert(v.begin() + 2, 99);        // Insert at position

bool found = binary_search(v.begin(), v.end(), 3);
int max_val = *max_element(v.begin(), v.end());
int min_val = *min_element(v.begin(), v.end());
int sum = accumulate(v.begin(), v.end(), 0);



//String 
 string s = "hello";

reverse(s.begin(), s.end());         // Reverse
sort(s.begin(), s.end());            // Sort alphabetically
s += " world";                       // Concatenate
s.substr(0, 3);                      // Substring
s.find("lo");                        // Find substring
s.erase(0, 2);                       // Erase characters
s.insert(2, "xx");                   // Insert substring
transform(s.begin(), s.end(), s.begin(), ::toupper); // To uppercase
transform(s.begin(), s.end(), s.begin(), ::tolower); // To lowercase



//common algorithms
 rotate(v.begin(), v.begin() + 2, v.end());  // Rotate
next_permutation(v.begin(), v.end());       // Next lexicographical permutation
prev_permutation(v.begin(), v.end());       // Previous permutation
count(v.begin(), v.end(), 3);               // Count occurrences
find(v.begin(), v.end(), 4);                // Find element
bool found = binary_search(arr, arr + n, 3); // Binary Search


// lowerbound and upperbound
auto lb = lower_bound(v.begin(), v.end(), 5);
    cout << "lower_bound(5): index = " << lb - v.begin() << endl; 

// Math formula 
int g = gcd(a, b);   // Greatest Common Divisor
int l = lcm(a, b);   // Least Common Multiple

// bits 
__builtin_popcount(15);       // Count of set bits (GCC/Clang)
__builtin_ctz(16);            // Count trailing zeros
__builtin_clz(16);            // Count leading zeros
__builtin_parity(15);         // Parity (odd/even number of 1s)