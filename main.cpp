/* 

DATA AND ALGORITHMS ACTIVITY

INOCANDO, NATHANIEL P.

*/

// HEADER
#include <iostream>

using namespace std;    

class Data { 
    int input;
    int input2;
    int input3;
    int arr[100];
    int elem;

public:

    void Display();
    int OD();
    int TD();
    int MD();
    int Asc();
    int Des();
    void Perform();
    void Insert();
    void Delete();
    int Continue();
};
// MAIN EXECUTION
int main(void) {Data scan;  scan.Display();  return 0; }

// FUNCTIONS
void Data::Display() {
    do {
        /*
        cout << "===================================================" << endl;
        cout << " █▀▄▀█ █▀▀ █▄░█ █░█   █▀▄ █▀█ █ █░█ █▀▀ █▄░█ " << endl;
        cout << " █░▀░█ ██▄ █░▀█ █▄█   █▄▀ █▀▄ █ ▀▄▀ ██▄ █░▀█" << endl;
        cout << "===================================================" << endl;
        */
        cout << " " << endl;
        cout << "=========================================" << endl;
        cout << "         ENTER OPTION" << endl;
        cout << endl;
        cout << "    (1) ONE-DIMENSIONAL" << endl;
        cout << "    (2) TWO-DIMENSIONAL ARRAY" << endl;
        cout << "    (3) MULTI-DIMENSIONAL ARRAY" << endl;
        cout << "    (4) SORTING ARRAY DESCENDING" << endl;
        cout << "    (5) SORTING ARRAY ASCENDING" << endl;
        cout << "    (6) EXIT"<<endl;
        cout << "=========================================" << endl;
        cout << "ENTER CHOICE: ";
        cin >> input;
        while (cin.fail() || cin.peek() != '\n' || input <= -1 || input >= 7) {
            cout << "INVALID INPUT, TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> input;
        }
        switch (input) {
        case 1:
            this->OD();
            break;

        case 2:
            this->TD();
            break;

        case 3:
            this->MD();
            break;

        case 4:
            this->Asc();
            break;

        case 5:
            this->Des();
            break;
         
        case 6:
            cout<<"TERMINATED! ";
            exit(0);
            break;
        }
    } while (false);
}

int Data::OD() {

   
    
    
    do {
        cout << "================" << endl;
        cout << " ARRAY QUEUEING" << endl;
        cout << "================" << endl;
        cout<<"\n";
        cout<<"ENTER NUMBER OF INDEX: ";
        cin >> elem;

        arr[elem];
        cout << "-ENTER "<<elem<<" NUMBERS-" << endl;

        for (int i = 0; i < elem; ++i) {
            cout << "ENTER INDEX [" << i << "]: ";
            cin >> arr[i];

            while (cin.peek() != '\n' || cin.fail()) {
                cin.clear();
                cin.ignore(255, '\n');
                cout << "INVALID INPUT!" << endl;
                cout << "ENTER INDEX [" << i << "]: ";
                cin >> arr[i];
            }
        }
        
        cout << "THE ARRAY OF NUMBERS ARE THE FOLLOWING: \n" << endl;
        cout << "[";
        for (int j = 0; j < elem; ++j) {
            cout << arr[j];
        if (j < elem - 1) {
            cout << ",\t ";
        }
        }
        cout << "]\n";
        cout<<"\n";
        Perform();
        
    } while (false);
   
}

int Data::TD() {
    int TWOD[5][2];
    do {
        cout << "=========================" << endl;
        cout << "  TWO DIMENSIONAL ARRAY" << endl;
        cout << "=========================" << endl;

        for (int a = 0; a < 5; a++) {
            for (int b = 0; b < 2; b++) {
                cout << "Enter an index at row " << a + 1 << ", column " << b + 1 << ": ";
                cin >> TWOD[a][b];

                while (cin.peek() != '\n' || cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "INVALID INPUT!" << endl;
                    cout << "Enter an index at row " << a + 1 << ", column " << b + 1 << ": ";
                    cin >> TWOD[a][b];
                }
            }
        }
        cout << "=============================\n";
        cout << "  VISUALIZATION OF 2D ARRAY" << endl;
        cout << "=============================\n";
        cout << "\n";
        cout << "TWOD [5][2] = {\n" << endl;

        for (int i = 0; i < 5; i++) {
            cout << "{";
            for (int j = 0; j < 2; j++) {
                cout << TWOD[i][j];
                if (j < 1) {
                    cout << " , ";
                }
            }
            cout << "}," << endl;
        }
        cout << "\n};\n" << endl;

        cout << "}\n";
        cout << "\n";

        OPTION2:
        cout << "==========================================================" << endl;
        cout << "      ENTER A PROCESS YOU WANT THE DISPLAY TO PERFORM" << endl;
        cout << "==========================================================" << endl;
        cout << "|                                                        |" << endl;
        cout << "| (1) SEARCH THE NUMBER FROM WHICH SPECIFIC INDEX        |" << endl;
        cout << "| (2) SEARCH THE INDEX TO IDENTIFY WHICH SPECIFIC NUMBER |" << endl;
        cout << "| (3) ARRANGE THE DISPLAY FROM ASCENDING ORDER           |" << endl;
        cout << "| (4) ARRANGE THE DISPLAY FROM DESCENDING ORDER          |" << endl;
        cout<<  "| (5) INSERT AN INDEX                                    |" << endl;
        cout<<  "| (6) DELETE AN INDEX                                    |" << endl;
        cout << "| (7) GO BACK TO MENU                                    |" << endl;
        cout << "| (8) EXIT                                               |" << endl;
        cout << "|________________________________________________________|" << endl;
        cout << "\n";
        cout << "CHOICE: ";
        cin >> input;

        while (cin.peek() != '\n' || cin.fail() || input <= -1 || input == 0 || input >= 7) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "INVALID INPUT: ";
            cin >> input;
        }

        switch (input) {
            case 1:
                
                int searchNumber;
                cout << "Enter the number to search: ";
                cin >> searchNumber;

                for (int i = 0; i < 5; i++) {
                    for (int j = 0; j < 2; j++) {
                        if (TWOD[i][j] == searchNumber) {
                            cout << "Number " << searchNumber << " found at row " << i << ", column " << j << "." << endl;
                            break;
                        }
                    }
                }
                cout<<"\n";
                                        cout<<endl;
                                        
                                        cout<<"PRESS 1 GO BACK TO MENU"<<endl;
                                        cout<<"PRESS 2 GO BACK TO OPTIONS"<<endl;
                                        cout<<"PRESS 0 TO EXIT"<<endl;
                                        cout<<": ";

                                        cin>> input3;

                                        while(cin.peek() != '\n' || cin.fail() || input3 <=-1 || input3 >=3){

                                            cin.clear();
                                            cin.ignore(255,'\n');
                                            cout<<"INVALID INPUT: ";
                                            cin >> input3;


                                        }

                                        switch(input3){

                                            case 1: 
                                            
                                            Display();

                                            case 2:

                                            goto OPTION2;

                                            break;


                                            case 0:

                                            cout<<"TERMINATED!";
                                            exit(0);

                                            break;
                                        }
                break;

            case 2:
                
	cout << "=======================================" << endl;
        cout << " █▀ █▀▀ ▄▀█ █▀█ █▀▀ █░█ █ █▄░█ █▀▀" << endl;
        cout << " ▄█ ██▄ █▀█ █▀▄ █▄▄ █▀█ █ █░▀█ █▄█" << endl;
        cout << "=======================================" << endl;
        cout << endl;

        cout << "INPUT THE FIRST NUMBER ELEMENT YOU WANT TO LOCATE: ";
        cin >> input2;
        while (cin.peek() != '\n' || cin.fail() || input2 <= -1 || input2 >= 5) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "INVALID INPUT!: ";
            cin >> input2;
        }
        cout << "INPUT THE SECOND NUMBER ELEMENT YOU WANT TO LOCATE: ";
        cin >> input3;
        while (cin.peek() != '\n' || cin.fail() || input3 <= -1 || input3 >= 2) {
            cin.clear();
            cin.ignore(255, '\n');
            cout << "INVALID INPUT: ";
            cin >> input3;
        }

        cout << "THIS IS THE NUMBER LOCATED ACCORDING TO YOUR SPECIFIC INPUT: ";
        cout << TWOD[input2][input3] << endl;

        cout<<"\n";
                                        cout<<endl;
                                        
                                        cout<<"PRESS 1 GO BACK TO MENU"<<endl;
                                        cout<<"PRESS 2 GO BACK TO OPTIONS"<<endl;
                                        cout<<"PRESS 0 TO EXIT"<<endl;
                                        cout<<": ";

                                        cin>> input3;

                                        while(cin.peek() != '\n' || cin.fail() || input3 <=-1 || input3 >=3){

                                            cin.clear();
                                            cin.ignore(255,'\n');
                                            cout<<"INVALID INPUT: ";
                                            cin >> input3;


                                        }

                                        switch(input3){

                                            case 1: 
                                            
                                            Display();

                                            case 2:

                                            goto OPTION2;

                                            break;


                                            case 0:

                                            cout<<"TERMINATED!";
                                            exit(0);

                                            break;
                                        }


                break;

            case 3:
   
    for (int i = 0; i < 5 * 2 - 1; i++) {
        for (int j = 0; j < 5 * 2 - i - 1; j++) {
            int row1 = j / 2;
            int col1 = j % 2;
            int row2 = (j + 1) / 2;
            int col2 = (j + 1) % 2;
            
            if (TWOD[row1][col1] > TWOD[row2][col2]) {
                
                int temp = TWOD[row1][col1];
                TWOD[row1][col1] = TWOD[row2][col2];
                TWOD[row2][col2] = temp;
            }
        }
    }

    
    cout << "THE NUMBERS IN ASCENDING ORDER ARE THE FOLLOWING: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            cout << TWOD[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"\n";
                                        cout<<endl;
                                        
                                        cout<<"PRESS 1 GO BACK TO MENU"<<endl;
                                        cout<<"PRESS 2 GO BACK TO OPTIONS"<<endl;
                                        cout<<"PRESS 0 TO EXIT"<<endl;
                                        cout<<": ";

                                        cin>> input3;

                                        while(cin.peek() != '\n' || cin.fail() || input3 <=-1 || input3 >=3){

                                            cin.clear();
                                            cin.ignore(255,'\n');
                                            cout<<"INVALID INPUT: ";
                                            cin >> input3;


                                        }

                                        switch(input3){

                                            case 1: 
                                            
                                            Display();

                                            case 2:

                                            goto OPTION2;

                                            break;


                                            case 0:

                                            cout<<"TERMINATED!";
                                            exit(0);

                                            break;
                                        }
    break;


            case 4:
   
    for (int i = 0; i < 5 * 2 - 1; i++) {
        for (int j = 0; j < 5 * 2 - i - 1; j++) {
            int row1 = j / 2;
            int col1 = j % 2;
            int row2 = (j + 1) / 2;
            int col2 = (j + 1) % 2;
            
            if (TWOD[row1][col1] < TWOD[row2][col2]) {
               
                int temp = TWOD[row1][col1];
                TWOD[row1][col1] = TWOD[row2][col2];
                TWOD[row2][col2] = temp;
            }
        }
    }

   
    cout << "THE NUMBERS IN DESCENDING ORDER ARE THE FOLLWING: " << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 2; j++) {
            cout << TWOD[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"\n";
                                        cout<<endl;
                                        
                                        cout<<"PRESS 1 GO BACK TO MENU"<<endl;
                                        cout<<"PRESS 2 GO BACK TO OPTIONS"<<endl;
                                        cout<<"PRESS 0 TO EXIT"<<endl;
                                        cout<<": ";

                                        cin>> input3;

                                        while(cin.peek() != '\n' || cin.fail() || input3 <=-1 || input3 >=3){

                                            cin.clear();
                                            cin.ignore(255,'\n');
                                            cout<<"INVALID INPUT: ";
                                            cin >> input3;


                                        }

                                        switch(input3){

                                            case 1: 
                                            
                                            Display();

                                            case 2:

                                            goto OPTION2;

                                            break;


                                            case 0:

                                            cout<<"TERMINATED!";
                                            exit(0);

                                            break;
                                        }
    break;

            case 5:
                 cout<<"test";
            break;


            case 6:
                cout<<"test2:";
            break;


            case 7:
                Display();
                break;

            case 8:
                cout << "TERMINATED!";
                exit(0);
        }
    } while (false);
    return TWOD[0][0];
}

 
int Data::MD() {
    int MD[3][4][2];
    cout << "===============================" << endl;
    cout << "  MULTI-DIMENSIONAL ARRAY" << endl;
    cout << "===============================" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "ENTER AN INDEX AT DEPTH " << i + 1 << ", ROW " << j + 1 << ", COLUMN " << k + 1 << ": ";
                cin >> MD[i][j][k];

                while (cin.peek() != '\n' || cin.fail()) {
                    cin.clear();
                    cin.ignore(255, '\n');
                    cout << "INVALID INPUT!" << endl;
                    cout << "ENTER AN INDEX AT DEPTH " << i + 1 << ", ROW " << j + 1 << ", COLUMN " << k + 1 << ": ";
                    cin >> MD[i][j][k];
                }
            }
        }
    }

    cout << "==========================================" << endl;
    cout << "  VISUALIZATION OF MULTI-DIMENSIONAL ARRAY" << endl;
    cout << "==========================================" << endl;
    cout << "\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Depth " << i + 1 << ", Row " << j + 1 << ": ";
            for (int k = 0; k < 2; k++) {
                cout << MD[i][j][k];
                if (k < 1) {
                    cout << " , ";
                }
            }
            cout << endl;
        }
    }

    cout << "=============================================" << endl;
    cout << " █▀ █▀▀ ▄▀█ █▀█ █▀▀ █░█ █ █▄░█ █▀▀" << endl;
    cout << " ▄█ ██▄ █▀█ █▀▄ █▄▄ █▀█ █ █░▀█ █▄█" << endl;
    cout << "=============================================" << endl;
    cout << endl;

    cout << "INPUT THE DEPTH ELEMENT YOU WANT TO LOCATE: ";
    cin >> input;
    while (cin.peek() != '\n' || cin.fail() || input < 1 || input > 3) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "INVALID INPUT!: ";
        cin >> input;
    }

    cout << "INPUT THE ROW ELEMENT YOU WANT TO LOCATE: ";
    cin >> input2;
    while (cin.peek() != '\n' || cin.fail() || input2 < 1 || input2 > 4) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "INVALID INPUT: ";
        cin >> input2;
    }

    cout << "THIS IS THE ELEMENT LOCATED ACCORDING TO YOUR SPECIFIC INPUT: ";
    cout << MD[input - 1][input2 - 1][0] << ", " << MD[input - 1][input2 - 1][1] << endl;

    Continue();
    return 0; 
}

int Data::Asc() {
    int i, j, a, n, bless;

    cout << "==========================" << endl;
    cout << "  NUMBER TO ASCENDING " << endl;
    cout << "==========================\n" << endl;
    cout << "ENTER YOUR ELEMENT VALUE: ";
    cin >> n;
    while (cin.peek() != '\n' || cin.fail() || n <= -1 || n == 0) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "INVALID INPUT!: ";
        cin >> n;
    }
    cout << endl;
    int number[n];
    for (i = 0; i < n; ++i) {
        cout << "ENTER NUMBER " << i + 1 << ": ";
        cin >> number[i];
    }

    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (number[i] > number[j]) {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }

    cout << "==========================================================\n";
    cout << "THE FOLLOWING NUMBERS ARRANGED IN ASCENDING ORDER ARE:\n" << endl;
    cout << "ASCENDING: " << endl;
    for (i = 0; i < n; ++i) {
        cout << number[i] << endl;
    }

    Continue();
    return number[0];
}

int Data::Des() {
    int i, j, a, n, bless;
    cout << "==========================" << endl;
    cout << " NUMBER TO DESCENDING " << endl;
    cout << "==========================\n" << endl;
    cout << "ENTER YOUR ELEMENT VALUE: ";
    cin >> n;
    while (cin.peek() != '\n' || cin.fail() || n <= -1 || n == 0) {
        cin.clear();
        cin.ignore(255, '\n');
        cout << "INVALID INPUT!: ";
        cin >> n;
    }
    cout << endl;
    int number[n];
    for (i = 0; i < n; ++i) {
        cout << "ENTER NUMBER " << i + 1 << ": ";
        cin >> number[i];
    }
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (number[i] < number[j]) {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    cout << "==========================================================" << endl;
    cout << "THE FOLLOWING NUMBERS ARRANGE IN DESCENDING ORDER ARE:\n" << endl;
    cout << "DESCENDING: " << endl;
    for (i = 0; i < n; ++i) {
        cout << number[i] << endl;
    }
    Continue();
    return number[0];
}

int Data::Continue() {
    do {
        cout << "PRESS 1 TO CONTINUE 0 TO EXIT: ";
        cin >> input;
        while (cin.peek() != '\n' || cin.fail() || input <= -1 || input >= 2) {
            cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
            cin.clear();
            cin.ignore(255, '\n');
            cin >> input;
        }
        if(input == 1){

           Display();
        }
        else if(input == 0){

            cout<<"TERMINATED!";
            exit(0);
        }
    } while (false);
    return input;
}
void Data::Insert() {
    int insertIndex, insertValue;
     cout << "ENTER AN INDEX FROM 0 TO " << elem << "): ";
    cin >> insertIndex;

    while (cin.fail() || insertIndex < 0 || insertIndex > elem) {
        cin.clear();
        cin.ignore(300, '\n');
        cout << "INVALID INPUT: ";
        cin >> insertIndex;
    }

    cout << "ENTER THE NUMBER TO INSERT: ";
    cin >> insertValue;

    while (cin.fail()) {
        cin.clear();
        cin.ignore(300, '\n');
        cout << "ERROR! PLEASE INPUT NUMBERS ONLY" << endl;
        cout << "ENTER THE NUMBER TO INSERT: ";
        cin >> insertValue;
    }

    
    for (int i = elem; i > insertIndex; i--) {
        arr[i] = arr[i - 1];
    }


    arr[insertIndex] = insertValue;
    elem++;

    cout << "THE ARRAYS ARE THE FOLLOWING: " << endl;
    cout<<endl;
    cout << "[";
    for (int i = 0; i < elem; i++) {
        cout << arr[i];
        if (i < elem - 1) {
            cout << ",\t ";
        }
    }
    cout << "]" << endl;
    Perform();
}

void Data::Delete() {
      int deleteIndex;

    cout << "ENTER AN INDEX FROM 0 TO " << elem - 1 << "): ";
    cin >> deleteIndex;

    while (cin.fail() || deleteIndex < 0 || deleteIndex >= elem) {
        cin.clear();
        cin.ignore(300, '\n');
        cout << "INVALID INPUT, PLEASE TRY AGAIN!: ";
        cin >> deleteIndex;
    }


    for (int i = deleteIndex; i < elem - 1; i++) {
        arr[i] = arr[i + 1];
    }

    elem--;

    cout << "THE ARRAYS ARE THE FOLLOWING: " << endl;
    cout<<endl;
    cout << "[";
    for (int i = 0; i < elem; i++) {
        cout << arr[i];
        if (i < elem - 1) {
            cout << ",\t";
        }
    }
    cout << "]" << endl;
    Perform();
}

void Data::Perform(){
bool found = false;
                        OPTION:
        cout<<"\n"<<endl;
        
        cout << "==========================================================" << endl;
        cout << "      ENTER A PROCESS YOU WANT THE DISPLAY TO PERFORM" << endl;
        cout << "==========================================================" << endl;
        cout << "|                                                        |" << endl;
        cout << "| (1) SEARCH THE NUMBER FROM WHICH SPECIFIC INDEX        |" << endl;
        cout << "| (2) SEARCH THE INDEX TO IDENTIFY WHICH SPECIFIC NUMBER |" << endl;
        cout << "| (3) ARRANGE THE DISPLAY FROM ASCENDING ORDER           |" << endl;
        cout << "| (4) ARRANGE THE DISPLAY FROM DESCENDING ORDER          |" << endl;
        cout<<  "| (5) INSERT AN INDEX                                    |" << endl;
        cout<<  "| (6) DELETE AN INDEX                                    |" << endl;
        cout << "| (7) GO BACK TO MENU                                    |" << endl;
        cout << "| (8) EXIT                                               |" << endl;
        cout << "|________________________________________________________|" << endl;
                            cout<<"\n";
                            cout<<"CHOICE: ";
                            cin >> input;
                            
                                        while(cin.fail() || cin.peek()!= '\n' || input <=-1 || input == 0 || input >=9){
                                                cin.clear();
                                                cin.ignore(255,'\n');
                                                cout<<"INVALID INPUT: ";
                                                cin >> input;

                                        }  

                                        switch(input){

                                             case 1:

                                             do{
                                            cout << "INPUT THE NUMBER DISPLAY YOU WANT TO LOCATE IN THE INDEX: ";
                                            cin >> input2;
                                            for (int i = 0; i < 5; i++) {
                                             if (arr[i] == input2) {
                                             cout << "THE NUMBER " << input2 << " IS LOCATED AT INDEX: [" << i <<"]"<<endl;
                                             cout<<endl;
                                            found = true;
                                            break;

                                           
                                                           }
                                                     }
                                                      
                                                if(!found){
                                        cout << "The number " << input2 << " was not found in the array." << endl;
                                               
                                            }
                                             }while(!found);

                                                 cout<<"\n";
                                        cout<<endl;
                                        
                                        cout<<"PRESS 1 GO BACK TO MENU"<<endl;
                                        cout<<"PRESS 2 GO BACK TO OPTIONS"<<endl;
                                        cout<<"PRESS 0 TO EXIT"<<endl;
                                        cout<<": ";

                                        cin>> input3;

                                        while(cin.peek() != '\n' || cin.fail() || input3 <=-1 || input3 >=3){

                                            cin.clear();
                                            cin.ignore(255,'\n');
                                            cout<<"INVALID INPUT: ";
                                            cin >> input3;


                                        }

                                        switch(input3){

                                            case 1: 
                                            
                                            Display();

                                            case 2:

                                            goto OPTION;

                                            break;


                                            case 0:

                                            cout<<"TERMINATED!";
                                            exit(0);

                                            break;
                                        }
                                            break;

                                     

                                    case 2:
                                 cout << "INPUT THE INDEX NUMBER ELEMENT YOU WANT TO LOCATE: ";
                                 cin >> input2;
                                 while (cin.peek() != '\n' || cin.fail() || input <= -1 || input >= 5) {
                                 cin.clear();
                                 cin.ignore(255, '\n');
                                 cout << "INVALID INPUT!: ";
                                 cin >> input;
                              }

                                 cout<<"\n";
                                 cout << "THIS IS THE NUMBER LOCATED ACCORDING TO YOUR SPECIFIC INPUT: ";
                                 cout << arr[input2] << endl;
                                 cout<<endl;

                                     cout<<"\n";
                                        cout<<endl;
                                        
                                        cout<<"PRESS 1 GO BACK TO MENU"<<endl;
                                        cout<<"PRESS 2 GO BACK TO OPTIONS"<<endl;
                                        cout<<"PRESS 0 TO EXIT"<<endl;
                                        cout<<": ";

                                        cin>> input3;

                                        while(cin.peek() != '\n' || cin.fail() || input3 <=-1 || input3 >=3){

                                            cin.clear();
                                            cin.ignore(255,'\n');
                                            cout<<"INVALID INPUT: ";
                                            cin >> input3;


                                        }

                                        switch(input3){

                                            case 1: 
                                            
                                            Display();

                                            case 2:

                                            goto OPTION;

                                            break;


                                            case 0:

                                            cout<<"TERMINATED!";
                                            exit(0);

                                            break;
                                        }

                                   break;


                                   case 3:

                                    for (int i = 0; i < 4; i++) {
                                         for (int j = 0; j < 4 - i; j++) {
                                                 if (arr[j] > arr[j + 1]) {
                                                     int temp = arr[j];
                                                      arr[j] = arr[j + 1];
                                                    arr[j + 1] = temp;
                                                     }
                                                  }
                                                }

    
                                       cout << "THE FOLLOWING NUMBERS IN ASCENDING ORDER ARE: ";
                                        for (int i = 0; i < 5; i++) {
                                       cout << arr[i] << "\t";
                                        }
                                        cout<<"\n";
                                        cout<<endl;
                                        
                                        cout<<"PRESS 1 GO BACK TO MENU"<<endl;
                                        cout<<"PRESS 2 GO BACK TO OPTIONS"<<endl;
                                        cout<<"PRESS 0 TO EXIT"<<endl;
                                        cout<<": ";

                                        cin>> input3;

                                        while(cin.peek() != '\n' || cin.fail() || input3 <=-1 || input3 >=3){

                                            cin.clear();
                                            cin.ignore(255,'\n');
                                            cout<<"INVALID INPUT: ";
                                            cin >> input3;


                                        }

                                        switch(input3){

                                            case 1: 
                                            
                                            Display();

                                            case 2:

                                            goto OPTION;

                                            break;


                                            case 0:

                                            cout<<"TERMINATED!";
                                            exit(0);

                                            break;
                                        }
                                        break;

                                    
                                    case 4: 

                                        for (int i = 0; i < 4; i++) {
                                        for (int j = 0; j < 4 - i; j++) {
                                        if (arr[j] < arr[j + 1]) {
                
                                        int temp = arr[j];
                                         arr[j] = arr[j + 1];
                                        arr[j + 1] = temp;
                                             }
                                         }
                                     }

   
                                            cout << "THE FOLLOWING NUMBERS IN DESCENDING ORDER ARE: ";
                                            for (int i = 0; i < 5; i++) {
                                            cout << arr[i] << "\t";
                                             }
                                             cout<<endl;
                                                
                                                cout<<"\n";
                                        cout<<endl;
                                        
                                        cout<<"PRESS 1 GO BACK TO MENU"<<endl;
                                        cout<<"PRESS 2 GO BACK TO OPTIONS"<<endl;
                                        cout<<"PRESS 0 TO EXIT"<<endl;
                                        cout<<": ";

                                        cin>> input3;

                                        while(cin.peek() != '\n' || cin.fail() || input3 <=-1 || input3 >=3){

                                            cin.clear();
                                            cin.ignore(255,'\n');
                                            cout<<"INVALID INPUT: ";
                                            cin >> input3;


                                        }

                                        switch(input3){

                                            case 1: 
                                            
                                            Display();

                                            case 2:

                                            goto OPTION;

                                            break;


                                            case 0:

                                            cout<<"TERMINATED!";
                                            exit(0);

                                            break;
                                        }

                                  break;

                case 5:
                  Insert();
            break;


            case 6:
                 Delete();
            break;


            case 7:
                Display();
                break;

            case 8:
                cout << "TERMINATED!";
                exit(0);
}
}
