#include <iostream>
using namespace std;
int main() {
  int n,a,l,p;
  cin>>n>>a>>l>>p;
  if(a>=n && l>=n && p>=n){
    cout<<"S\n"; 
  }else{
    cout<<"N\n"; 
  }
}
