#include <iostream>

using namespace std;

void displayList(int list[])
{
        for( int i = 0; i < 10; i++ ) {
        cout << list[i]<<"\t";
        }

}

void linearSearch( int a[], int key )
{
	int loc;
	for( int i = 0; i < 10; i++ ) {
		if( a[i] == key ) {
			loc = i + 1;
			break;
		}
		else
			loc = 0;
	}
	if( loc != 0 )
        	cout<<"Key found at position "<<loc<<" in the array";
    	else
        	cout<<"Could not find given key in the array";
}

int binarySearch(int myarray[], int beg, int end, int key)
{
    int mid;
    if(end >= beg) {
        mid = (beg + end)/2;
        if( myarray[mid] == key ){
            return mid+1;
        }
        else if(myarray[mid] < key) {
            return binarySearch(myarray, mid+1, end, key);
        }
        else {
            return binarySearch(myarray, beg, mid-1, key);
        }
    }
    return -1;
}
int main()
{
	int choice;
	cout << "Enter which search you want to perform: \n" << "1. Linear Search\n2. Binary Search" << endl ;
	cin >> choice;
	int array[] = { 5, 8, 10, 13, 21, 23, 25, 43, 54, 75 };
	if( choice == 1 ) {
		cout << "Input list ...\n";
		displayList(array);
		cout << endl;
		cout << "Enter the key that has to be searched: ";
		int key;
		cin >> key;
		linearSearch(array, key);
	}
	else if( choice == 2 ) {
		cout << "Input list ...\n";
                displayList(array);
                cout << endl;
                cout << "Enter the key that has to be search "<< endl;
                int key;
		int location = -1;
                cin >> key;
		location = binarySearch( array, 0, 9, key );
		 if(location != -1)  {
			cout<<"Key found at location "<<location;
    		}
    		else {
        		cout<<"Requested key not found";
    		}
	}
	else {
		cout << "Invalid Choice";
	}
	return 0;
}

