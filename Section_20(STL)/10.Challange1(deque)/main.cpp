//checking if a string is palindrome or NOT using deque
//My solution
#include<iostream>
#include<deque>
#include<algorithm>
#include<string>
#include<vector>
#include<cctype>
#include<iomanip>
using namespace std;

bool is_palindrome(string s){
    int f=0,g=0;
    string str{};
    //removing all other characters without alphabet and converts them to uppercase
    for(int i=0;i<s.length();i++){
        if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
            s[i]=toupper(s[i]);
            str+=s[i];
        }
    }

deque<char>d1;
    for(int i=0;i<str.length();i++){
        d1.push_front(str[i]);
    }
for(int i=0;i<str.length();i++){
    if(str[i]==d1[i])
        f=1;
    else 
        g=1;
    
}
if(f==1 && g==0)
    return true;
else
    return false;

}

int main(){
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    // string s;
    // cin>>s;
    // cout<<boolalpha;
    // cout<<is_palindrome(s)<<endl;

    
    return 0;
}