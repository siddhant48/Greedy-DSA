//Leetcode

class Solution {
public:
    int leastInterval(vector<char>&tasks, int n) {
       int counter[26]={0};
        int maxm = 0;
        int maxCount = 0;
        for(char task : tasks) {
            counter[task - 'A']++;
            if(maxm == counter[task - 'A']) {
                maxCount++;
            }
            else if(maxm < counter[task - 'A']) {
                maxm = counter[task - 'A'];
                maxCount = 1;
            }
        }
        
        int partCount = maxm - 1;
        int partLength = n - (maxCount - 1);
        int emptySlots = partCount * partLength;
        int availableTasks = tasks.size() - maxm * maxCount;
        int idles = max(0, (emptySlots - availableTasks));
        
        return tasks.size() + idles;
    }
};
