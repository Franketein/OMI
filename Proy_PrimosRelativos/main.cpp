#include <iostream>
#include <vector>

using namespace std;

int MCD (int a, int b)
{
    if (a%b == 0)
        return b;

    return MCD(b, a%b);
}

int main()
{
    int N;
    cin >> N;
    vector<int> nums;
    for (int i = 1; i<=N; i++)
    {
        nums.push_back(i);
    }

    int a = N;
    while (nums.size() > 1)
    {
        a = nums[nums.size()-1];
        int i = 0;
        while(true)
        {
            if (MCD(a, nums[i]) == 1)
            {
                //cout<<nums[i]<<endl;
                nums.erase(nums.begin()+i);
                i = 0;
                continue;
            }
            else if (i == nums.size()-1)
            {
                break;
            }
            i++;
        }
        nums.erase(nums.begin()+(nums.size()-1));
    }
    cout<<nums[0];
    return 0;
}
