// C++ program to check for balanced brackets.

#include <bits/stdc++.h>
using namespace std;
bool areBracketsBalanced(string s)
{
	std::stack<char>e;
        for(auto&c:s){
            if(c=='('){
                e.push(')');
                continue;
            }

            if(c=='{'||c=='['){
            	
                e.push(c+2);
                continue;
            } 
            if(e.size()==0||c!=e.top())
                return false;
            e.pop();
        }
        if(e.size()>0)
            return false;
    
        return true;


}
 
// Driver code
int main()
{
	string expr = "(){}[]";

	// Function call
	if (areBracketsBalanced(expr))
		cout << "Balanced";
	else
		cout << "Not Balanced";
	return 0;
}
