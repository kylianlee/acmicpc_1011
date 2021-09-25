//
// Created by Kylian Lee on 2021/09/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int solution(int dist){
  int temp = (int)sqrt(dist);
  int low_bound = temp * (temp + 1);
  if(dist > low_bound)
    return temp * 2 + 1;
  else if(dist > low_bound - temp)
    return temp * 2;
  else
    return temp * 2 - 1;
}

int main(){
  int case_num;
  cin >> case_num;
  for (int i = 0; i < case_num; ++i) {
    int s, t;
    cin >> s >> t;
    cout << solution(t - s) << endl;
  }
  return 0;
}