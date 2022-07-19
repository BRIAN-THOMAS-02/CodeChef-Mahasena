Mahasena - "https://www.codechef.com/submit/AMR15A"
SUBMISSION


#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d, even=0, odd=0;
    int t;
    
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a%2 == 0)
            even++;
            
        else
            odd++;
    }
    
    if(even > odd)
        cout<<"\nREADY FOR BATTLE";
        
    else
        cout<<"\nNOT READY";
	
	return 0;
}
