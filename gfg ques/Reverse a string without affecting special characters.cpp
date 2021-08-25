// ques - https://www.geeksforgeeks.org/reverse-a-string-without-affecting-special-characters/



#include <bits/stdc++.h>

using namespace std;


bool charCheck(char input_char)
{
    
    return ((input_char >= 65 && input_char <= 90)||
         (input_char >= 97 && input_char <= 122)|| (input_char >= 48 && input_char <= 57));
       
        
}

char* reverse(char* input1){
    
    
    
    std::string s;
    s += input1;
    
    int r = strlen(input1) - 1, l = 0;
 
    
    while (l < r)
    {
        
        if (!charCheck(s[l]))
            l++;
        else if(!charCheck(s[r]))
            r--;
 
        else 
        {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
    
    
    
    char* char_arr;
    string str_obj(s);
    char_arr = &str_obj[0];
    
    return char_arr;
    
    
}


int main()
{
    char* s="This34#is@&special";
    
    cout<<reverse(s);

    return 0;
}
