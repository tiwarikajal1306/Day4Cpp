#include <iostream>

using namespace std;

void displayList(int list[])
{
	for( int i = 0; i < 10; i++ ) {
        cout << list[i]<<"\t";
        }

}

void bubbleSort(int a[])
{
	int i, j,temp;
	cout<<endl;
	for( i = 0; i < 10; i++ ) {
		for(j = i+1; j < 10; j++) {
			if(a[j] < a[i]) {
			temp = a[i];
			a[i] = a[j];
         		a[j] = temp;
      			}
   		}
	}
}

void insertionSort(int a[])
{
	int i, value, index;
	cout << endl;
	for( i = 1; i < 10; i++ ) {
		value = a[i];
		index = i;
		while(index > 0 && a[index-1] > value) {
			a[ index ] = a[ index - 1 ];
			index = index - 1;
		}
		a[ index ] = value;
	}
}

void swap ( int *a, int *b )
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition( int a[], int low, int high )
{
	int pivot = a[high];
	int i = ( low - 1 );
	for( int j = low; j < high; j++ ) {
		if( a[j] <= pivot ) {
			i++;
			swap( &a[i], &a[j] );
		}
	}
	cout << endl;
	displayList( a );
	swap( &a[ i + 1 ], &a[high] );
	return ( i + 1 );
}
void quickSort( int a[], int low, int high )
{
	if( low < high ) {
		int pi = partition( a, low, high );
		quickSort( a, low, pi - 1 );
		quickSort( a, pi + 1, high );
	}
}

int main()
{
	int choice;
	cout << "Enter Which sort  you want to  perform: \n" << "1. Bubble Sort\n2. Insertion Sort \n3. Qick sort \n4. Merge Sort" << endl ;
	cin >> choice;
	int array[10] = {10, 2, 0,14,43,25,18,1,5,45};
	if( choice == 1 ) {
		cout <<"Input list ...\n";
		displayList(array);
		bubbleSort(array);
		cout <<"Sorted Element List ...\n";
		displayList(array);
	}
	else if( choice == 2 ) {
		cout <<"Input list ...\n";
                displayList(array);
		insertionSort(array);
		cout <<"Sorted Element List ...\n";
                displayList(array);
	}
	else if( choice == 3 ) {
		cout << "Input list ...\n";
                displayList(array);
		cout << endl;
		int n = sizeof( array ) / sizeof( array[0] );
		//int n = 10;
		quickSort( array, 0, n-1 );
		cout << endl;
		cout <<"Sorted Element List ...\n";
                displayList(array);
	}
	else
		cout << "Invalid sort";
   	return 0;
}
