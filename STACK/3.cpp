#include <iostream>
#include <stack> 
using namespace std;

int main (){
string str = "hellojii";
stack<char> st;
for (int i=0 ; i<str.length(); i++){
    char ch = str[i];
    st.push(ch);

}
while(! st.empty()){
    cout<< st.top()<< endl;
    st.pop();


}
    return 0;

}