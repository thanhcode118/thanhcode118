#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void tong(int n){
     int sum=0;
for (int i=0;i<=n;i++){
     sum+=i;
}
  cout<<sum;
}
int main(){
     tong(2);
}