#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int num,total=0;
	vector<int> V;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	inFile>>num;
	for(int i=0;i<num;i++){
		int temp;
		inFile>>temp;
		V.push_back(temp);
	}
	sort(V.begin(),V.end());
	for(int i=V.size()-1;i>V.size()-6;i--) total+=V[i];
	printf("%d\n",total);
}
