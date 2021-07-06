 There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is start time of meeting i and F[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time? 
Also note start time of one chosen meeting can't be equal to the end time of the other chosen meeting.
 int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        int count=1;
        int e=v[0][0];
        for(int i=1;i<n;i++)
        {
            if(v[i][1]>e)
            {
                count++;
                e=v[i][0];
            }
        }
        return count;
    }
