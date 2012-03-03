#include<iostream>
#include<utility>
using namespace std;

int main(){
	int T;
	cin>>T;
	int N;
	while(T--){
		cin>>N;
		pair<int,int> array1[N];
		int s,t;
		for(int i=0; i<N; i++){
			cin>>s>>t;
			array1[i]=make_pair(s,t);
		}
		int cnt[N];
		for(int i=0; i<N; i++){
			cnt[i]=0;
			for(int j=0; j<N; j++){
				if((array1[j].first<=array1[i].first && array1[j].second>=array1[i].first) ||
					(array1[j].first<=array1[i].second && array1[j].first>=array1[i].first)||
					(array1[i].first%2==0 && array1[j].second==array1[i].first-1)||
					(array1[i].second%2==1 && array1[j].first==array1[i].first+1))
					cnt[i]+=1;
			}
		}
		int max=0;
		for(int k=0; k<N; k++){
			if(cnt[k]>max) max=cnt[k];
		}
		cout<<(max*10)<<endl;
	}
	return 0;
}
