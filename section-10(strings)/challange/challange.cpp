//***substitution cipher***
//***written by foyez ahmed dewan...
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string alphabet {"abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ.,?'1234567890+=-{}[]:"};
    string key {"qwertyuiopasdfghjklzxcvbnm 1234567890+=[]{}:QWERTYUIOPASDFGHJKLZXCVBNM123'"};
    string secret_msg {};
    cout<<"Enter your secret message: ";
    getline(cin,secret_msg);
    string encrypt_letter{};
    string decrypt_letter{};
    size_t position{};  
    string encrypt_msg {};
    string decrypt_msg {};
    cout<<"Encryption on going...."<<endl;
   
    for(size_t i {0}; i<secret_msg.length(); i++)
        {
            
            position= alphabet.find(secret_msg.at(i));
            if(position != string::npos)
                {
                    encrypt_letter=key.at(position);
                    encrypt_msg+=encrypt_letter;
                }
            else
                encrypt_msg+=secret_msg.at(i);     
                       
        }
        cout<<"Your encrypt message is : "<<encrypt_msg ;

        cout<<"\nDecryption on going....."<<endl;

    for(size_t i {0}; i<encrypt_msg.length(); i++)
        {
            position= key.find(encrypt_msg.at(i));
            if(position != string::npos)
                {
                    decrypt_letter=alphabet.at(position);
                    decrypt_msg+=decrypt_letter;
                }
            else
                decrypt_msg+=encrypt_msg.at(i);                 
        }
        cout<<"Your decrypt msg is : "<<decrypt_msg;
    
    return 0;
}


///***Solution****
// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string alphabet {"abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ.,?'1234567890+=-{}[]:"};
//     string key {"qwertyuiopasdfghjklzxcvbnm 1234567890+=[]{}:QWERTYUIOPASDFGHJKLZXCVBNM123'"};
//     string secret_msg {};
//     cout<<"Enter your secret message: ";
//     getline(cin,secret_msg);
//     string encrypted_msg {};
//     string decrypted_msg {};
//     cout<<"encryption going on..."<<endl;
//     for(auto c:secret_msg)
//         {
//             size_t position {alphabet.find(c)};
//             if(position != string::npos)
//                 {
//                     char new_char {key.at(position)};
//                     encrypted_msg+=new_char;
//                 }
//             else
//                 encrypted_msg+=c;
//         }
//     cout<<"Your encrypted message is : "<<encrypted_msg<<endl;

//     cout<<"Decryption going on...."<<endl;
//     for(auto c:encrypted_msg)
//         {
//             size_t position {key.find(c)};
//             if(position != string::npos)
//                 {
//                     char decrypt_letter {alphabet.at(position)};
//                     decrypted_msg+=decrypt_letter;
//                 }
//             else
//                 decrypted_msg+=c;
//         }
//         cout<<"Your decrypted message is : "<<decrypted_msg<<endl;

//     return 0;
// }