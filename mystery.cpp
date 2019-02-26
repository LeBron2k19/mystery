#include <iostream>
#include <vector>
using namespace std;

void print(auto A)
{
   for (auto a : A) 
        cout <<a<<" ";

   cout<<endl;
}


void mystery1(auto& Data) //Selection Sort
{
  cout<<endl<<"Mystery 1 (Selection Sort)"<<endl<<"---------------------"<<endl;

  unsigned int i, j, minIndex;
  int tmp;
  for (i = 0; i < Data.size() - 1; i++)
  {
	minIndex = i;

	for (j = i + 1; j < Data.size(); j++)
	{
		if (Data[j] < Data[minIndex])
			minIndex = j;
	}

	if (minIndex != i)
	{
		swap(Data[i], Data[minIndex]);
		
		/*	 tmp = Data[i]; 		//Alternative Swap
			 Data[i] = Data [minIndex];
			 Data[minIndex] = tmp; 		*/   
	}
	
	print(Data);

  } //End outer for-loop
}   // End function




void mystery2(auto& Data) //Bubble Sort
{
  cout<<endl<<"Mystery 2 (Bubble Sort)"<<endl<<"---------------------"<<endl;

  for (unsigned int i = 0 ; i < Data.size( ) ; i++)
  {
    for (unsigned int j = 0 ; j < i ; j++)
	if ( Data[ i ] < Data[ j ] )
	    swap( Data[ i ] , Data[ j ] );

    print(Data);
  }		//Ends outer for-loop (this brace is needed to include the print 			statement, {which prints after each iteration})

}


void mystery3(auto& Data) //Insertion Sort
{
  cout<<endl<<"Mystery 3 (Insertion Sort)"<<endl<<"---------------------"<<endl;

int nextIndex, moveitem, insertVal;

  for (nextIndex = 1; nextIndex < Data.size(); nextIndex ++)
  {
	insertVal = Data[nextIndex];
	moveitem = nextIndex;

	while (moveitem > 0 && Data[moveitem -1] > insertVal)
	{
		Data[moveitem]  = Data[moveitem -1];
		moveitem--;
	} //End While
	
	Data[moveitem] = insertVal;

	print(Data);
  }	//End For
}  	//End Function



int main()
{
    
  vector<int> Data = {36, 18, 22, 30, 29, 25, 12};

  vector<int> D1 = Data;
  vector<int> D2 = Data;
  vector<int> D3 = Data;

  mystery1(D1);
  mystery2(D2);
  mystery3(D3);

}
