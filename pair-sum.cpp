// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pair_sum(vector<int> vec, int target){
//     vector<int> ans;
//     int n=vec.size();

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//         if(vec[i]+vec[j]==target){
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     }
//     return ans;
// }

// int main(){
//  vector<int> vec = {2,7,11,15};
//  int target=9;
//  vector<int> ans = pair_sum(vec,target);
//  cout<<ans[0]<<" "<<ans[1];
// return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

vector<int> pair_sum(vector<int> vec, int target){
    vector<int> ans;
    int n=vec.size();
     int i=0;
     int j=n-1;
    int ps=0;
     while(i<j){
        ps=vec[i]+vec[j];

        if(ps<target){
            i++;
        }else if(ps>target){
            j--;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
     }
    return ans;
}

int main(){
 vector<int> vec = {2,7,11,15};
 int target=9;
 vector<int> ans = pair_sum(vec,target);
 cout<<ans[0]<<" "<<ans[1];
return 0;
}