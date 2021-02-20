

https://practice.geeksforgeeks.org/problems/stack-using-two-queues

    queue<int> q1;
    queue<int> q2;   

    void QueueStack :: push(int x)
    {
	    if (q1.empty())
	        return -1;
	    int size = q1.size();
	    for (int i = 0; i < size - 1; i++)
	        {
                q1.push(q1.front());
                q1.pop();
            }
	    return q1.pop();
    }
	
  int QueueStack :: pop())
    {
	    q1.push(a);
    }

