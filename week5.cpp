#include <iostream>
#include <cmath>
using namespace std;
void problem1(){
    for(int i=1; i<11; i++){
        cout << i << " ";
    }
}
void problem2(){
    int sum = 0;
    for(int i=0; i<10; i++){
        cout << i+1 << " ";
        sum +=i+1;
    }
    cout << "\n";
    cout << "Sum:" << sum << "\n";
}
void problem3(){
    for(int i=1; i<101; ++i){
        if(i % 5 != 0) cout << i << ' ';
    }
}
void problem4(){
    int a;
    cin >> a;
    for(int i=1; i<a+1; ++i){
        if(!(i%10)) cout << i << ' ';
    }
}
void problem5(){
    int ln=0;
    for(int i=int('A'); i<=int('Z'); ++i){
        ln++;
        cout << char(i) << ' ';
        if(ln%5==0) cout <<"\n";
    }
}
void problem6(){
    double gpa = 0;
    int cred = 0;
    int n;
    cin >> n;
    while(n--){
        // a= kred hr b = mark
        double a,b;
        cin >> a >> b;
        gpa += a*b;
        cred += a;
    }
    cout << "Your total GPA is " << gpa / cred;
}
void problem7(){
    int n;
    cin >> n;
    int cnt=0;
    for(int i=2; i<=int(sqrt(n)); ++i){
        if(n%i==0)cnt++;
    }
    if(cnt==0) cout << "Number is prime\n";
    else cout << "Number is not prime\n";
}
void problem8(){
    long long a;
    cin >> a;
    long long sum=0;
    for(long long i=1; i<a+1; ++i){
        cout << i << '*' << i << '=' << i*i << "\n";
        sum+=i*i;
    }
    cout << "Sum:" << sum << "\n";
}
void problem9(){
    int n;
    int mx=0;
    do{
        cin >> n;
        mx=max(n,mx);
    }
    while(n!=0);
    cout << "Max is:" << mx << "\n";
}
void problem10(){
    double sum=0;
    double n,pos=0,neg=0;
    int mx=0;
    do{
        cin >> n;
        sum+=n;
        if(n>0)pos++;
        if(n<0) neg++;
    }
    while(n!=0);
    cout << "The number of positives:" << pos << "\n";
    cout << "The number of negatives:" << neg <<"\n";
    cout << "Total is:" << sum<< "\n";
    cout << "Average is:"<< sum/(pos+neg)<< "\n";

}
int main() {
    // problem1();
    //problem2();
    //problem3();
   // problem4();
  // problem5();
 // problem6();
//  problem7();
    //problem8();
   // problem9();
  // problem10();

    return 0;
}
