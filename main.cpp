#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {


  // IMPLEMENT HERE//
  if(cnt == M){
  for(int i = 0; i<M; i++){
  cout<<vec[i]<<" ";
  }
  cout<<endl;
  return;
  }
  int start = (vec.empty() ? 1:vec.back()+1);

  for(int i = start; i<=N; i++){
  vec.push_back(i);
  func(cnt + 1);
  vec.pop_back();
  }

}

int main() {
   cin >> N >> M;
   func(0);
}
