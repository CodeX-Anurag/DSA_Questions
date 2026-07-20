// Given two integers a and b, find the total number of set bits in both numbers.
 #include <iostream>
 using namespace std;

int countSetBits(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 2 == 1)             //    count += (n & 1);     n = n >> 1;  
            count++;

        n = n / 2;
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;

    int ans = countSetBits(a) + countSetBits(b);

    cout << ans;

    return 0;
}