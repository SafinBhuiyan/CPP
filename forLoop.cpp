#include <iostream>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout);
    #endif

int a,b;
cin >> a >> b;
for(int i =a; i <= b; i++){
    if(i==1)cout<<"one";
    else if(i==2)cout<<"two"<<endl;
    else if(i==3)cout<<"three"<<endl;
    else if(i==4)cout<<"four"<<endl;
    else if(i==5)cout<<"five"<<endl;
    else if(i==6)cout<<"six"<<endl;
    else if(i==7)cout<<"seven"<<endl;
    else if(i==8)cout<<"eight"<<endl;
    else if(i==9)cout<<"nine"<<endl;

else
{
if( i%2 ==0)cout << "even" << endl;
else cout << "odd" << endl;
}
}

return 0;
}