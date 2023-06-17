#include <iostream>
using namespace std;
string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
int total = 0;
void enter()
{
  int choice;
  cout << "How many students do you want to enter data: ";

  for (int i = total; i < choice + total; i++)
  {
    cout << "\n Enter the data of student: " << i + 1 << endl
         << endl;
    cout << "Enter name_";
    cin >> arr1[i];
    cout << "Enter rollno_";
    cin >> arr2[i];
    cout << "Enter class_";
    cin >> arr3[i];
    cout << "Enter cource_";
    cin >> arr4[i];
    cout << "Enter contact no_";
    cin >> arr5[i];
    cout << "Enter Guardian contact no_";
    cin >> arr6[i];
  }

  total = total + choice;
}

void show()
{
  for (int i = 0; i < total; i++)
  {
    cout << "Data of the student is___" << i + 1 << endl
         << endl;
    cout << "Name_ " << arr1[i] << endl;
    cout << "Roll No._ " << arr2[i] << endl;
    cout << "Class_ " << arr3[i] << endl;
    cout << "Cource Name_ " << arr4[i] << endl;
    cout << "Contact no._ " << arr5[i] << endl;
    cout << "Guardian Conatact no._ " << arr6[i] << endl;
  }
}

void search()
{
  string rollno;
  cout << "Enter the Roll no. to search the data_";
  cin >> rollno;
  for (int i = 0; i < total; i++)
  {
    if (rollno == arr2[i])
    {
      cout << "Data of the student is___" << i + 1 << endl
           << endl;
      cout << "Name_ " << arr1[i] << endl;
      cout << "Roll No._ " << arr2[i] << endl;
      cout << "Class_ " << arr3[i] << endl;
      cout << "Cource Name_ " << arr4[i] << endl;
      cout << "Contact no._ " << arr5[i] << endl;
      cout << "Guardian Conatact no._ " << arr6[i] << endl;
    }
    else
    {
      cout << "No data found";
      continue;
    }
  }
}

void update()
{
  string rollno;
  cout << "Enter the Roll no. to search the data_";
  cin >> rollno;
  for (int i = 0; i < total; i++)
  {
    if (rollno == arr2[i])
    {
      cout << "Previous Data" << endl
           << endl;
      cout << "Data of the student is___" << i + 1 << endl
           << endl;
      cout << "Name_ " << arr1[i] << endl;
      cout << "Roll No._ " << arr2[i] << endl;
      cout << "Class_ " << arr3[i] << endl;
      cout << "Cource Name_ " << arr4[i] << endl;
      cout << "Contact no._ " << arr5[i] << endl;
      cout << "Guardian Conatact no._ " << arr6[i] << endl;
      cout << "New data input by users" << endl
           << endl;
      cout << "Enter name_";
      cin >> arr1[i];
      cout << "Enter rollno_";
      cin >> arr2[i];
      cout << "Enter class_";
      cin >> arr3[i];
      cout << "Enter cource_";
      cin >> arr4[i];
      cout << "Enter contact no_";
      cin >> arr5[i];
      cout << "Enter Guardian contact no_";
      cin >> arr6[i];
    }
  }
}

void delet()
{
  int a;
  cout << "Enter 1 to delet all data__" << endl;
  cout << "Enter 2 to delet a specific data" << endl;
  cin >> a;
  if (a == 1)
  {
    total = 0;
    cout << "All data delet" << endl;
  }
  else if (a == 2)
  {
    string rollno;
    cout << "Enter the Roll no. to search the data_";
    cin >> rollno;
    for (int i = 0; i < total; i++)
    {
      if (rollno == arr2[i])
      {
        for (int j = 0; j < total; j++)
        {
          arr1[j] = arr1[j + 1];
          arr2[j] = arr2[j + 1];
          arr3[j] = arr3[j + 1];
          arr4[j] = arr4[j + 1];
          arr5[j] = arr5[j + 1];
          arr6[j] = arr6[j + 1];
        }
        total--;
        cout << "speacific data delet" << endl
             << endl;
      }
    }
  }
}

main()
{
  int value;
  while (true)
  {
    cout << "Press 1 to enter data" << endl;
    cout << "Press 2 to show data" << endl;
    cout << "Press 3 to search data" << endl;
    cout << "Press 4 to update data" << endl;
    cout << "Press 5 to delet data" << endl;
    cout << "Press 6 to exit" << endl;
    cout << "Please choice your key_ " << endl;
    cin >> value;
    switch (value)
    {
    case 1:
      enter();
      break;

    case 2:
      show();
      break;

    case 3:
      search();
      break;

    case 4:
      update();
      break;

    case 5:
      delet();
      break;

    case 6:
      exit(0);
      break;

    default:
      cout << "INVALID INPUT" << endl;
      break;
    }
  }
}
