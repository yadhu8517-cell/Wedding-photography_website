#include <iostream>

using namespace std;
class BubbleSort{
int a[100],n,i,j,temp;

public:
    void getData(){
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"enter"<<n<<"elements:"<<endl;
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void sort()
    {
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
    void display()
    {
        cout<<"the sorted elements using the bubble sort technique are:"<<endl;
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    BubbleSort B;
    B.getData();
    B.sort();
    B.display();
    return 0;
}
