#include <iostream>
using namespace std;

void inputdata(int n, double temp[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter The Tempraure for the Reading No." << i + 1 << ": ";
		cin >> temp[i];

		if (temp[i] > 100 || temp[i] < -50)
		{
			cout << "Temprature Should Be in the Valid range of -50 Degree Celcius to 100 Degree Celcius, Please Enter the Value Again: ";
			cin >> temp[i];
		}
	}
}

void getStatus(int n, double temp[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Temprature Status of Reading No." << i + 1 << ": ";
		if (temp[i] < 0)
		{
			cout << "Too Cold" << endl;
		}
		else if(temp[i] <= 30)
		{
			cout << "Normal" << endl;
		}
		else if (temp[i] <= 60)
		{
			cout << "High" << endl;
		}
		else
		{
			cout << "Critical" << endl;
		}
	}
}

void displayReport(int n, double temp[])
{
	cout << "--------Readings--------" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Reading No." << i + 1 << ": " << temp[i] << endl;
	}

	getStatus(n, temp);

}

int main()
{
	int n;

	cout << "Enter the number of temprature readings: ";
	cin >> n;

	double* temp = new double[n];

	inputdata(n, temp);
	displayReport(n, temp);

	double sum = 0;
	double AvgTemp;

	for (int i = 0; i < n; i++)
	{
		sum += temp[i];
	}

	AvgTemp = sum / n;
	cout << "Average Temprature: " << AvgTemp << endl;

	double max = temp[0];
	for (int i = 0; i < n; i++)
	{
		if (temp[i] < max)
		{
			max = temp[i];
		}
	}
	cout << "Highest Temprature: " << max << endl;

	double min = temp[0];
	for (int i = 0; i < n; i++)
	{
		if (temp[i] > min)
		{
			min = temp[i];
		}
	}
	cout << "Lowest Temprature: " << min << endl;

	delete[] temp;
}