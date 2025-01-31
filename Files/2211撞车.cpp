#include <iostream>
#include <vector>
#include <string>
using namespace std;


//错误版
//思路是对的，每辆车只会提供一个撞车
//左右的，向外开出的车不会撞
//剩下的车，一定会遭遇撞击，并且每辆车最多提供一次撞击，
//换言之，S车不会提供撞击，而且L车和R车只会提供一次撞击

//下面代码的问题是在于从左向右数，更新状态，只能考虑左边的车，而不能考虑右边的车
//所以SLLL的撞击能正常计算为3，但是RRRS的撞击无法计算，只会计算为1
class _Solution
{
public:
    int countCollisions(string directions)
    {
        int res = 0;
        for (int i = 0; i < directions.size(); i++)
        {
            if (directions[i] == 'L')
            {
                if (i != 0 && directions[i - 1] != 'L')
                {
                    res++;
                    directions[i] = 'S';
                }
            }
            else if (directions[i] == 'R')
            {
                if (i != directions.size() - 1 && directions[i + 1] != 'R')
                {
                    res++;
                    directions[i] = 'S';
                }
            }
        }
        return res;
    }
};

//正确版

class Solution {
public:
    int countCollisions(string directions) {
        int res = directions.size();
        int left = 0;
        int right = 0;
        //减去左边的车
        for (int i = 0; i < directions.size(); i++)
        {
            if (directions[i] == 'L')
            {
                res--;
            }
            else{
                left = i;
                break;
            }
        }
        //减去右边的车
        for (int i = directions.size()-1; i >= 0; i--)
        {
            if (directions[i] == 'R')
            {
                res--;
            }
            else{
                right = i;
                break;
            }
        }
        //减去中间的车
        for (int i = left; i <= right; i++)
        {
            if (directions[i] == 'S')
            {
                res--;
            }
        }
        return res;
    }
};