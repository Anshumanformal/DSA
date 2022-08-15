class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left;
        stack<pair<int ,int>> s;
        for(int i=0;i< n;i++)
        {
        if(s.size()==0)
        {
        left.push_back(-1);
        }
        else if(s.size()>0 &&s.top().first< heights[i])
        {
        left.push_back(s.top().second);
        }
        else
        {
        while(s.size()>0 && s.top().first>=heights[i])
        {
        s.pop();
        }
        if(s.size()==0)
        {
        left.push_back(-1);
        }
        else
        left.push_back(s.top().second);
        }
        s.push({heights[i],i});
        }

                 vector<int> right;
            int q = n;
            while(!s.empty())
            {
                s.pop();
            }
            for(int i=n-1;i>=0;i--)
            {
                if(s.size()==0)
                {
                    right.push_back(q);
                }
                else if(s.size()>0 &&s.top().first< heights[i])
                {
                    right.push_back(s.top().second);
                }
                else
                {
                    while(s.size()>0 && s.top().first>=heights[i])
                    {
                        s.pop();
                    }
                    if(s.size()==0)
                    {
                        right.push_back(q);
                    }
                    else
                        right.push_back(s.top().second);
                }
                s.push({heights[i],i});
            }
                reverse(right.begin(),right.end());
                int width[n+1];
                for(int i=0;i<n;i++)
                {
                    width[i]=right[i]-left[i]-1;
                }
                long long int area;
            long long  res=0;
                for(int i=0;i<n;i++)
                {
                    area=heights[i]*width[i];
                    res=max(res,area);

                }

                return res;
    }
};