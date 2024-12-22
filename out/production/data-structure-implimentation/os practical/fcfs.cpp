#include <bits/stdc++.h>
using namespace std;

int min_at(int att[], int n, int visited[])
{

  int min = INT16_MAX;
  int j = 0;

  for (int i = 0; i < n; i++)
  {
    if (!visited[i])
    {
      if (min > att[i])
      {
        min = att[i];
        j = i;
      }
    }
  }
  visited[j] = true;
  return j;
}

int main()
{
  int n;
  cin >> n;
  int prev = 0;
  int at[n], bt[n], ct[n] = {-5}, tat[n], wt[n];
  int visited[n] = {0};

  cout << "Enter arrival time of process" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> at[i];
  }

  cout << "Enter burst time of process" << endl;
  for (int j = 0; j < n; j++)
  {
    cin >> bt[j];
  }

  for (int j = 0; j < n; j++)
  {
    int fat = min_at(at, n, visited);

    if (j == 0)
    {
      ct[fat] = at[fat] + bt[fat];
    }

    else
    {
      if (at[fat] <= ct[prev])
      {
        ct[fat] = ct[prev] + bt[fat];
      }
      else
      {
        ct[fat] = at[fat] + bt[fat];
      }
    }

    prev = fat;
  }

  float avgtat = 0;
  for (int i = 0; i < n; i++)
  {
    tat[i] = ct[i] - at[i];
    avgtat = avgtat + tat[i];
  }

  float avgwt = 0;
  for (int i = 0; i < n; i++)
  {
    wt[i] = tat[i] - bt[i];
    avgwt = avgwt + wt[i];
  }

  avgtat = float(avgtat) / float(n);
  avgwt = float(avgwt) / float(n);

  cout << "AT" << " " << "BT" << " " << "CT" << " " << "TAT" << " " << "WT" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << at[i] << "  " << bt[i] << "   " << ct[i] << "    " << tat[i] << "  " << wt[i] << endl;
  }

  cout << "Average turnaround time" << avgtat << endl;
  cout << "Average waiting  time" << avgwt << endl;

  return 0;
}