#include<iostream>


using namespace std;

int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
        int elements_count;
        float k;
        cin>>elements_count>>k;
        int elements[elements_count];
        for(int i=0; i<elements_count; i++)
        {
            cin>>elements[i];
        }

        int a, b;
        for(float i=0; i<k; i++)
        {
            a=elements[(int)i%elements_count];
            b=elements[elements_count-((int)i%elements_count)-1];
            elements[(int)i%elements_count]=a^b;
        }

        for(int j=0; j<elements_count; j++)
        {
            cout<<elements[j];
            cout<<" ";
        }

        cout<<endl;
    }
}