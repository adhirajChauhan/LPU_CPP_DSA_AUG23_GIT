#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;

    //1
    pair<string, int> p1 = make_pair("Hello",3);
    m.insert(p1);

    //2
    pair<string,int> p2("World", 2);
    m.insert(p2);

    //3
    m["How"] = 1;

    cout << m.at("Hello") << endl;
    cout << m["How"] << endl;

    cout << m.size() << endl;

    m.erase("How");
    cout << m.size() << endl;


}