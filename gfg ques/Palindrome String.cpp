// ques - https://www.interviewbit.com/problems/palindrome-string/

bool alpha(char input_char) {

    
    return ((input_char >= 65 && input_char <= 90)||
         (input_char >= 97 && input_char <= 122)|| (input_char >= 48 && input_char <= 57));
       
        
}


int Solution::isPalindrome(string A) {

    string s1="";
    int w=A.length();
    for(int i=0;i<w;i++){
        if(alpha(A[i])){
            s1.push_back(A[i]);

        }

    }
    
    int n=s1.length();
    //cout<<s1<<endl;
    
    string s2 = s1;
    reverse(s2.begin(),s2.end());
    
    //cout<<s2<<endl;
    
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    
    int c=0;
    //int q=s1.length();
    for(int i=0;i<n;i++){
        if(s1[i]==s2[i]){
            c++;
        }
        if(s1[i]!=s2[n-1-i]){
            break;
        }
    }
    //cout<<c<<endl;
    if(c==n){
        return 1;
    }
    return 0;

}
