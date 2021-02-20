//https://practice.geeksforgeeks.org/problems/queue-using-two-stacks

void StackQueue :: push(int x)
 {
       
        s1.push(x);
        
 }

int StackQueue :: pop()
{
      
        if(s2.empty()){
            if(s1.empty()){
                return -1;
            }
            else{
                while(!s1.empty()){
                    int ele=s1.top();
                    s1.pop();
                    s2.push(ele);
                }
                int ele=s2.top();
                s2.pop();
                return ele;
            }
        }
     
        else{
            int ele=s2.top();
            s2.pop();
            return ele;
        }
}