// Task: Understand this solution---

map<char,int> mp;
queue<char> q;
int n=A.size();
for(int i=0;i<n;i++)
{
    q.push(A[i]);
    mp[A[i]]++;
    while(mp.size()>2)
    {
        char ch=q.front();
        q.pop();
        mp[ch]--;
        if(mp[ch]==0) mp.erase(ch);
    }
    if(mp.size()==2 && q.size()>=3)
    {
        int p=q.size();
        p/=3;
        auto it=mp.begin();
        if(it->second>p)
        {
            return 1;
        }
        it++;
        if(it->second>p)
            return 1;
    }
}
return 0;
