class Solution { //ETA BEST TIME COMPLEXITY 0MS
public:
    int isPalindrome(int num) {
    string str =to_string(num);
    string str2=str;
    reverse(str.begin(), str.end());
    if(str==str2)
        return true;
    else
        return false;
    //return std::stoi(str);
}

int main() {
    int num;
    cin>>num;

  cout<<(isPalindrome(num)? "true":"false");
    
    return 0;
}
};


//or this one THE TYPICAL WAY 
class Solution {
public:
    bool isPalindrome(int num) {
    int originalNum = num;
    long long reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}
};