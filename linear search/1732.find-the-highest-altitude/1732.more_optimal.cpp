class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int current = 0;
        int maxi = 0;

        for(int i = 0; i < gain.size(); i++)
        {
            current = current + gain[i];

            if(current > maxi)
                maxi = current;
        }

        return maxi;
    }
};