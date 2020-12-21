#include<iostream>
 
using namespace std;
 
class Indextable{
private:
	int length,num;
    int elem[100];
    int table[100];
	int index[100]; 
public:
	void addK(int k)
	{
		num=k;
		for(int i=1;i<=num;i++)
        {
        	cin>>table[i];
		}
		for(int i=1;i<=num;i++)
			index[i]=(length/k)*(i-1)+1;
	}
    Indextable(int n){
      	length=n;
      	
        for(int i=1;i<=length;i++)
            cin>>elem[i];
        
        	
    }
    int search(int key){
    	int flag,sum=0;
        for(int i=1;i<=num;i++)
        {
        	sum++;
        	if(table[i]>=key)
        	{
        		flag=i;
        		break;
			}
			if(table[num]<key)
				return 0;
		}
        	
		for(int i=index[flag];i<index[flag]+length/num;i++)
		{
			sum++;
			if(key==elem[i])
			{
				cout<<i<<"-"<<sum<<endl;
				return i;
			}
			
		}
		return 0;
    }
};
 
int main()
{
    int n;
    cin>>n;
	Indextable p(n);
	int k;
    cin>>k;
    p.addK(k);
	int t;
	cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(p.search(a)==0) cout<<"error"<<endl;
    }
}
