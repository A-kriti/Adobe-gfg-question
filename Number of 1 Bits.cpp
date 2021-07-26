//Ques link - https://practice.geeksforgeeks.org/problems/set-bits0143/1


class Solution {

  public:
      int setBits(int N) {
          // Write Your Code here

          int c=0;
          int x;

          while(N!=0){
              x=N%2;
              if(x==1){
                  c+=1;

              }
              N=N/2;

          }
          return c;
      }
};
