#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <assert.h>
#include "queue.h"

using namespace std;
void test1(){
    CP::queue<int> a;
    assert(a.empty());
    a.push(11);
    assert(a.front() == 11);//chect true/false  if false give the wrong line
    assert(a.back() == 11);
}
void test2(){
    CP::queue<int> b;
    assert(b.empty());
    b.push(152);
    b.push(16484);
    b.push(1525);
    b.pop();
    assert(b.front() == 16484);
    assert(b.back() == 1525);
    b.pop();
    assert(b.front() == b.back());
}
void test3(){
    CP::queue<int> c;
    c.push(2);
    c.push(4);
    c.push(8);
    assert(c.size() == 3);
    c.pop();
    assert(c.size() ==2);
    c.push(5);
    assert(c.front() == 4);
    assert(c.back() == 5);
    assert(c.size() == 3);

}
void test4(){
    CP::queue<vector<int>> d;
    vector<int> da,db;
    da.push_back(15);
    db.push_back(22);
    d.push(da);
    d.push(db);
    assert(d.size() == 2);
    assert(d.front().size() == d.back().size());
    d.front().push_back(150);
    assert (d.front().size() != d.back().size());
}
void test5(){

  CP::queue<vector<int>> q;
  vector<int> v1;
  vector<int> v2;
  for(int i = 1 ; i <= 100 ; i++){
    v1.push_back(i);
    if(i==100){
        v2.push_back(25478);
    }
  }
  q.push(v1);
  q.push(v2);
  assert(q.size() == 2);
  assert(q.front()[0] == 1);
  assert(q.back().empty() != true);
  assert(q.back()[0] == 25478);
}
int main(){
  test1(); cout << "test1 OK " << endl;
  test2(); cout << "test2 OK " << endl;
  test3(); cout << "test3 OK " << endl;
  test4(); cout << "test4 OK " << endl;
  test5(); cout << "test5 OK " << endl;

}
