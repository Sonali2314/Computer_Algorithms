#include<iostream>
using namespace std;
struct job{
	char id;
    int profit;
    int deadline;
};

void jobsort(job arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j].profit < arr[j + 1].profit)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


int jobseq(job arr[], int n, int maxdeadline)
{
    jobsort(arr, n);
    bool timeslot[maxdeadline] = {0};
    int maxp = 0;
    cout<<"Pofitable Array of id's : ";
    for (int i = 0; i < n; i++)
    {
        int d = min(maxdeadline, arr[i].deadline);
        for (int j = d - 1; j >= 0; j--)
        {
            if (timeslot[j] == 0)
            {
                timeslot[j] = 1;
                cout << arr[i].id << " ";
                maxp = maxp + arr[i].profit;
                break;
            }
        }
    }
    return maxp;
}
int main()
{
	int n;
    cout << "Enter the number of jobs : " ;
    cin >> n;
    int maxdeadline;
    cout << "Enter the max deadline ";
    cin >> maxdeadline;
    job arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Id , Profit , Deadline " << i + 1 << ":" << endl;
        cin >> arr[i].id >> arr[i].profit >> arr[i].deadline;
    }
    int maxp = jobseq(arr, n, maxdeadline);
    cout << "\nThe Maximum profit that can be obtained is: " << maxp << endl;
	
}
