// Robert Pace IV

#include <string>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

//----|Max Method|----//
int maximum(const vector<int> & v){
    int max = v[0];
    for (int j= 0; j<v.size() ; j++){
        if (v[j]>max) max = v[j];  
        }
    return max;
}

//----|isIncreasing Method|----//
bool isIncreasing(vector<int> v){
    int count=0, n = v.size();
    for (int i = 1; i < v.size(); i++) {
        cout << v[i] << " " << v[i-1] << endl;
        if (v[i]>=v[i-1]) count++;
    }
    if(count == n-1)
        return true;
    else 
        return false;
}

//----|Insert Method|----//
void insert(vector <int> & v, int k){
    int count=0,n= v.size();
    if(isIncreasing(v)==true){
        for(int i=0;i<n ; i++){
            if(count == 0){
                if(v[i] > k){
                    v.push_back(k);
                    swap(v[i],v[n]);
                    count++;
                    for(int j=0;j<n;j++){
                        if(v[j]>v[n]){
                            swap(v[n], v[j]);
                        }    
                    }
                }else if(maximum(v)<k){
                    v.push_back(k);
                }
            }
        }
        cout<<"The number "<<k<<" has been inserted into the vector."
            <<"\n The new vector order is: ";
        for(int val: v){
            cout<< val<< ", "; 
        }   
    }else{
        cout<<"The elements in the vector are not in increasing order"<<endl;
    }
}

//----|Factor Method|----//
vector<int> factor(int n){
    vector <int> v1;
    while (n%2 == 0)
    {
        printf("%d", 2);
        cout<<" * ";
        n = n/2;
        v1.push_back(2);
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            cout << i << " * ";
            n = n/i;
            v1.push_back(i);
        }
    }
    if (n > 2){
        cout << n << " ";
        v1.push_back(n);
    }    
    return v1;
}

//----|Append Method|----//
void appendVector(vector<int> & v, const vector<int> & w){
    for(int val : w){
        v.push_back(val);
        cout<<val<<", ";
    }

}
 

int main()
{
  int num;
  vector <int> v1 = {8,9,18,15,17,21}; 
  cout<< "\n\n\n==============================================|Vectors|=========================================\n\n";
  cout<<"Starting Vector Elements: ";
  for(int val : v1){
    cout<< val<< ", ";
  }
  cout<<"\n\n\n*|MAX FUNCTION|*\n";
  int max = maximum(v1);
  cout << "Max is: " << max;
  
  cout<<"\n\n\n*|Append Vector Function|*\n";
  vector <int> w1 = {25,28,31};
  cout<<"The elements { ";
  appendVector(v1,w1);
  cout<<"} have been appended to the vector\n"
        <<"The new vector order is: ";
  for(int val : v1){
      cout<< val << ", ";
  }

  cout<<"\n\n\n*|PRIME FACTOR FUNCTION|*\n";
  cout << "Please enter a number: "<<endl;
  cin >> num;
  cout <<"The prime factors of "<<num<<" is: ";
  vector <int> primeFacts = factor(num);

  cout<<"\n\n\n*|INSERT FUNCTION|*\n";
  insert(v1, 21);

  cout<< "\n\n================================================================================================\n\n\n";
}

