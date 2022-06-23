// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}

// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    //code here
    stack<char> st;
    // push all the characters of the string into stack
    for(int i=0; i<len; i++) // runiing loop till size of the string
        st.push(S[i]);
    
    // create a new character array(i.e. string) of the same length as the given string
    char *temp = new char[len];
    int i=0;
    while(!st.empty()){
        temp[i++] = st.top();
        st.pop();
    }
    // append a null character at the end of string
    temp[i] = '\0';
    return temp;
}