#include<iostream>
#include<vector>
using namespace std;
bool binary(int a[][4],int rows,int cols,int target)
{
    int s = 0;
    int e = rows*cols-1;
    int mid = (s+e)/2;
    while(s<=e)
    {
        int rowindex=mid/cols;
        int colindex=mid%cols;
        int element = a[rowindex][colindex];

        if(element==target)
        {
            cout<<"target found at"<<rowindex<<" "<<colindex<<endl;
            return true;
        }
        if(element<target)
        s=mid+1;
        else
        e=mid-1;

        mid=(s+e)/2;
    }
    return false;
}
int main()
{
    int a[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows=5;
    int col=4;
    int target=55;
    
    bool ans=binary(a,rows,col,target);
    if(ans)
    cout<<"target is found";
    else 
    cout<<"target is not found";

    return 0;

}