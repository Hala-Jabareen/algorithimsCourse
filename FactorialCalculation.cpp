#include<bits/stdc++.h>
using namespace std;
long long iterativeFactorial(long long n)
{
    long long fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
long long recursiveFactorial(long long n)
{
    if(n==1) return 1;
    else {
        return n*recursiveFactorial(n-1);
    }
}
int main(){
    long long n;
    cout<<"Please enter a positive number"<<endl;
    cin>>n;
    long long result;
    auto start_time = std::chrono::high_resolution_clock::now();
    result=iterativeFactorial(n);
  //  result=recursiveFactorial(n);
    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
    std::cout << "Execution time: " << duration.count() << " microseconds" << std::endl;
    cout<<"Factorial(n)= "<<result<<endl;
   return 0;
}

