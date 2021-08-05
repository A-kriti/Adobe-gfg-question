// ques - https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1#

class Solution{
  public:
      vector<long long> lcmAndGcd(long long A , long long B) {
          // code here
          vector<long long> l;

          long long t=A*B;


          while(A!=B){

              if(A>B){
                  A=A-B;
              }

              else{
                  B=B-A;
              }

          }

          l.push_back(t/A);
          l.push_back(B);

          return l;
      }
};
