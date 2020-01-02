#include<iostream>
#include<vector>

using namespace std;

int InversePairs(vector<int> data){
    int length = data.size();
    if(length<0)
        return 0;;
    vector<int> copy;
    for(int i = 0;i<length;i++){
        copy.push_back(data[i]);
    }
    long long count = InversePairsCore(data,copy,0,length-1);
    return count %1000000007;
}

long long InversepairsCore(vector<int> &data,vector<int> &copy,int left,int right){
    if(left==right){
        copy[left] = data[left];
        return 0;
    }
    int mid = ((right-left)>>1)+left;
    long long leftCount,rightCount;
    leftCount = InversepairsCore(data,copt,left,mid);
    rightCount = InversepairsCore(data,copt,mid+1,right);
    int i =mid;
    int j = right;
    int indexcopy = right;
    long long count;
    while(i>=left && j>=mid+1){
        if(data[i]>data[j]){
            copy[indexcopy--]=data[i--];
            count += j-mid;
        }else{
            copy[indexcopy--]=data[j--];
        }
    }
    for(;i>=left;i--){
        copy[indexcopy--]=data[i];
    }
    for(;j>=mid+1;j--){
        copy[indexcopy--]=data[j];
    }
    return count+leftcount+rightcount;
}

int main(){
    vector<int> inputdata = {1,2,3,4,5,6,7,0};
    int res = InversePairs(data);
    cout<<"the inverse pairs count is : "<<res<<endl;
    sysrem("pause");
    return 0;
}

