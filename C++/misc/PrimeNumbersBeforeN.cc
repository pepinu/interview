#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

list<int> primeNumbers(int n){
    list<int> result;
    result.push_back(2);
    bool flag = 0;
    for(int i = 3; i < n; i+=2){
        for(int r : result){
            if(2*r > i){
                break;
            }
            if(i % r == 0){
                flag = true;
                break;
            }
        }
        if(!flag){
            result.push_back(i);
        }
        flag = false;
    }
    return result;
}

int main() {
  list<int> primesBeforeN = primeNumbers(150);
  for(auto i : primesBeforeN) cout << i << " ";
  return 0;
}
