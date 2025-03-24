/*Understanding :-> There are n events from timing [start.end] ; in each even a particular person is doing some action in that time bracket ; we have to find the timing when everyone mentioned is free so they can have party for k minutes non stop 

*/

/*#include <bits/stdc++.h>

using namespace std;

int convert(string s){
    
    int u1 = int(s[0])-48;
    int u5 = int(s[1])-48;
    
    int v = (u1*10 + u5)*60;
    
    u1 = int(s[3])-48;
    u5 = int(s[4])-48;
    
    v = v + (u1*10 + u5);
    
    return v 
    ;
}

void ck(int g){
	int u = g/60;
	int y = g%60;
	
	if(u<=9){
		cout<<"0";
		cout<<u;
	}
	else{
		cout<<u;
	}
	cout<<":";
	
	
	if(y<=9){
		cout<<"0";
		cout<<y;
	}
	else{
		cout<<y;
	}
}

int main() {
    int n;
    cin>>n;
    
    int k ; 
    cin>>k;
    
    int y[1441] = {0};
    
    for(int i=0;i<n;i++){
        string a,b,v1,v5;
        cin>>a;
        cin>>b; 
        cin>>v1>>v5;
        
        int t1 = convert(v1);
        int t5 = convert(v5);
        //cout<<t1<<" "<<t5;
        //cout<<'\n';
        y[t1] = y[t1] + 1 ; 
        y[t5+1] = y[t5+1] - 1 ; 
    }
    
    
    int i=1;
    while(i<1440){
        
        y[i] = y[i] + y[i-1];
        
        i++;
    }
    
    int c = 0 ; int g = 0 ; 
    for(int i=0;i<1440;i++){
        
        if(y[i]==0){
            c++;
            
            if(c==k)
            {
                ck(i-k+1);//convert this to (hh:mm)
                g = 1 ; 
                break ; 
            }
            
        }
        else{
            c = 0 ; 
        }
        
    }
    
    if(g==0){
        cout<<"-1";
    }
    
    
    
}*/

/*def convert(s):
    """Convert HH:MM time format to total minutes since 00:00."""
    u1 = ord(s[0]) - 48
    u5 = ord(s[1]) - 48
    v = (u1 * 10 + u5) * 60  # Convert hours to minutes
    
    u1 = ord(s[3]) - 48
    u5 = ord(s[4]) - 48
    v += (u1 * 10 + u5)  # Add minutes
    
    return v


def ck(g):
    """Convert minutes since 00:00 back to HH:MM format without built-in formatting functions."""
    u = g // 60  # Extract hours
    y = g % 60   # Extract minutes
    
    # Manually handle leading zero for hours
    if u < 10:
        print("0", end="")  
    print(u, end=":")
    
    # Manually handle leading zero for minutes
    if y < 10:
        print("0", end="")  
    print(y)


def main():
    n = int(input())  # Number of intervals
    k = int(input())  # Required free time in minutes

    y = [0] * 1441  # Array to store time slots

    for _ in range(n):
        a = input().strip()  # Read first string (not used)
        b = input().strip()  # Read second string (not used)
        v1 = input().strip()  # Start time in HH:MM format
        v5 = input().strip()  # End time in HH:MM format

        t1 = convert(v1)
        t5 = convert(v5)

        y[t1] += 1  # Mark the start of an event
        y[t5 + 1] -= 1  # Mark the end of an event

    # Calculate cumulative sum to get the number of events at each minute
    for i in range(1, 1440):
        y[i] += y[i - 1]

    c = 0
    g = 0
    for i in range(1440):
        if y[i] == 0:  # Check if the time slot is free
            c += 1
            if c == k:  # Found the required free interval
                ck(i - k + 1)  # Convert to HH:MM format
                g = 1
                break
        else:
            c = 0  # Reset count if there is an event

    if g == 0:
        print("-1")  # No free slot found


# Run the main function
if __name__ == "__main__":
    main()
*/