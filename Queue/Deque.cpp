#include <iostream>
#include <deque>
using namespace std;



int main (){
 deque<int> dq;
 dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    cout << dq.size() << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    


}