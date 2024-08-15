class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
 int five=0,ten=0,twenty=0;
 for(auto it:bills)
 {
    if(it==5)five++;
    else if(it==10)
    {
        if(five==0)return 0;
        else 
        {
            five--;ten++;
        }
    }
    else if(it==20)
    {
        if(five==0)return 0;
        else if(five<3&&ten==0)return 0;
        else if(five>=3&&ten==0){five=five-3;twenty++;}
        else{ten--;five--;twenty++;}
    }
 }
 return 1;
    }
};