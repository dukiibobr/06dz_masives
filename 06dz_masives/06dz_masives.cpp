
#include <iostream>
using namespace std;

int main()
{
   //дз з самого низу!!!!!!!!!!!!!!!!












	//int train[3];
	//train[0] = 5;
	//train[1] = 3;
	//train[2] = 7;

	//cout << "vagon 1: " << train[0] << endl;
	//cout << "vagon 2: " << train[1] << endl;
	//cout << "vagon 3: " << train[2] << endl;

	//const int size = 12;
	//int marks[size];

	//marks[0] = 12;
	//marks[1] = 10;
	//marks[2] = 11;
	//marks[3] = 1;
	//marks[4] = 9;
	//marks[5] = 7;
	//marks[6] = 11;
	//marks[7] = 11;
	//marks[8] = 4;
	//marks[9] = 5;
	//marks[10] = 8;
	//marks[11] = 8;
	//
	//cout << "marks: " << marks[0] << "-" << marks[5] << "-" << marks[11] << endl;



	/*int arr1[5];


	double arr[size]*/


	//const int size = 10;
	//int arr1[size] = { 1,2,3,4,5,6 };

	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr1[i] << " ";
	//}

	//cout << endl;

	//int arr2[size] = { 1 };
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr2[i] << " ";
	//}

	//cout << endl;

	//int arr3[size] = { 1,2,3 };
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr3[i] << " ";
	//}

	//cout << endl;

	//int arr4[size];
	//for (int i = 0; i < size; i++)
	//{
	//	cout << "enter number " << i + 1<<": ";
	//	cin >> arr4[i];
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	cout << arr4[i] << " ";
	//}
	//cout << endl;



	//const int Size = 10;

	//int arr5[Size] = {5,-9,4,-78,2,-15,6,4,1,-1};

	//int suma = 0;
	//int min = arr5[0], max = arr5[0];

	//for (int i = 0; i < Size; i++)
	//{
	//	if (arr5[i] < 0) {
	//		suma += arr5[i];
	//	}
	//	if (arr5[i] > max) {
	//		max = arr5[i];  
	//	}
	//    if (arr5[i] < min) {
	//		min = arr5[i];
	//	}
	//}
	//cout << "summ of negative elements=" << suma << endl;
	//cout << "max=" << max << ",min=" << min;




	//1

//const int size = 10;
//int arr4[size];
//int dobutok = 1;
//for (int i = 0; i < size; i++)
//	{
//		cout << "enter number " << i + 1<<": ";
//		cin >> arr4[i];
//		dobutok *= arr4[i];
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr4[i] << " ";
//	}
//	cout << endl;
//	cout << "dobutok=" << dobutok;

	//2

//const int size = 7;
//int arr[size];
//
//int neg = 0;
//int pos = 0;
//for (int i = 0; i < size; i++)
//	{
//		cout << "enter number [-12 to 50]" << i + 1<<": ";
//		cin >> arr[i];
//		if (arr[i]<0)
//		{
//			++neg;
//		}
//		if (arr[i]>0)
//		{
//			++pos;
//		}
//	}
//	
//	cout << "positive numbers-" << pos << ",negative numbers-" << neg << endl;

	//3

	/* const int size = 7;
	 long arr[size] = {-1,2,4,67,7,8,-9};

	 int summ = 0;

	 for (int i = 0; i < size; i++)
			{
				if (arr[i]%2==0)
				{
					summ += arr[i];
				}
			}
	 cout << "summ of parni el= " << summ;*/

	 //4

	 /* const int size = 11;
	  int arr[size] = {};

	  for (int i = 1; i < size; i++)
	  {
		  arr[i] = pow(2, i);
		  cout << arr[i] << " ";
	  }
	  cout << endl;
	  for (int i = size - 1; i > 0; i--)
	  {
		  cout << arr[i] << " ";
	  }*/

	  //5


	   //const int size = 10;
	   //long arr[size] = {-1,2,4,67,7,8,-9,-6,7,7};
	   //for (int i = 0; i < size; i++)
	   //{

		  // cout << arr[i] << " ";

	   //}
	   //cout << endl;
	   //for (int i = 0; i < size; i++)
	   //{
		  // if (arr[i]<0)
		  // {
		  //	 arr[i] *= -1;
		  // }
	   //}


	   //for (int i = 0; i < size; i++)
	   //{

		  //	 cout << arr[i] << " ";

	   //}


	   //8


	const int size = 12;
	int arr[size] = {};

	int rangeS;
	cout << "enter start of the range: " << endl;
	cin >> rangeS;

	int rangeE;
	cout << "enter end of the range: " << endl;
	cin >> rangeE;
	

	for (int i = rangeS-1; i < rangeE; i++)
	{
		cout << "entre profit for " << i + 1 << " month: ";
		cin >> arr[i];
	}

	
	int max = arr[rangeS - 1];
	int min = arr[rangeS - 1];

	int maxMonth = rangeS;
	int minMonth = rangeS;
	

	for (int i = rangeS; i < rangeE; i++)
	{
		if (arr[i]>max)
		{
			max = arr[i];
			maxMonth = i + 1;
		}

		if (arr[i]<min)
		{
			min = arr[i];
			minMonth = i + 1;
		}
	}


	cout << "max profit= " << max << " month= " << maxMonth << endl;
	cout << "min profit= " << min << " month= " << minMonth << endl;
}
