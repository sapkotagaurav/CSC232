#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int partition(int list[], int size){
     	int pivot = list[0], ptr = 1;
	int temp;
	
	for (int i = 1; i < size; i++)
	{
		if (list[i] < pivot)
		{
			if (i != ptr)
			{
				temp = list[ptr];
				list[ptr] = list[i];
				list[i] = temp;
			}
			ptr++;
		}
	}
	list[0] = list[ptr - 1];
	list[ptr - 1] = pivot;
	
	return ptr - 1;
}

void test_part(){
    int size;
    cout <<"Please enter the list:";
    cin>>size;
    int *list = new int[size];
    for (int i = 0; i < size; i++)
	{
		cin >> list[i];
	}

	
	int index = partition(list, size);
	
	cout << "The list after partition is: ";
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}

bool strictlyEqual(const int list1[], const int list2[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        if (list1[i] != list2[i])
        {
            cout<<list1[i] <<" "<<list2[i]<<endl;
            return false;
        }
    }
    return true;
}

int test_strictly_equal(){
    string list1;
    string list2;
    int i=0;
    int j =0 ;
    cout<<"Enter first array"<<endl;
    getline(cin, list1);
    cout<<"Enter first array"<<endl;
    getline(cin, list2);
    if (list1.length() != list2.length())
    {
        cout<<"Not Equal"<<endl;
        return 0;
    }
    
    int list_1[10];
    int list_2[10];
    int temp = 0;
    while (i<list1.length())
    {
        if (list1[i] == ' ')
        {
            temp = 0;
            i=i+1;
            continue;
        }else{
            if (temp!=0){
                list_1[j-1] =temp*10+  (list1[i] - '0');
                temp =temp*10+  (list1[i] - '0');

            }else{
                list_1[j] = list1[i]-'0';
                j=j+1;
                temp = (list1[i] - '0');

            }
            
            
            i=i+1;
        }
        
        
        
    }
    i=0;
    j=0;
    temp=0;
    
    while (i<list2.length())
    {
        if (list2[i] == ' ')
        {
            temp = 0;
            i=i+1;
            continue;
        }else{
            if (temp!=0){
                list_2[j-1] =temp*10+  (list2[i] - '0');
                temp =temp*10+  (list1[i] - '0');

            }else{
                list_2[j] = list2[i]-'0';
                j=j+1;
                temp = (list2[i] - '0');

            }
            
            
            i=i+1;
        }
        
        
        
    }
    (strictlyEqual(list_1,list_2,j)) ? cout<<"These Arrays are equal"<<endl :  cout<<"These arrays are not equal"<<endl;
    

   

    

return 1;
}

int main(){
    test_strictly_equal();
    test_part();
}