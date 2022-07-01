class Solution {
public:
    
    // descending order sorting on the basis of number of units
    static bool comp(vector<int> a, vector<int> b)
    {
        if(a[1]>b[1])
            return true;
        return false;
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), comp);     //Sorting given array in descending order of numberOfUnitsPerBoxi
        int units = 0;
        for(int i=0; i<boxTypes.size(); i++)
        {
            if(boxTypes[i][0]<=truckSize)                 //if no. of boxes is less than or equal to trucksize
            {
                units += boxTypes[i][0]*boxTypes[i][1];   //take all the boxes and addd the units
                truckSize-=boxTypes[i][0];                //decrement the truckSize by numberOfBoxesi
            }
            else if(boxTypes[i][0]>truckSize)             //if truckSize is less than numberOfBoxesi
            {
                units += truckSize*boxTypes[i][1];        //take the boxes equal to remaining size and add the units
                break;
            }
        }
        return units;
    }
};