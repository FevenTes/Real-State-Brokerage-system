/*  ==============GROUP MEMBERS======================
   ||          NAME----------------------ID.No      ||
   ||                                               ||
   ||     1.ALHAMDU YAJBO---------------BDU1307343  ||
   ||     2.BIRHANU BAYE----------------BDU1309117  ||
   ||     3.ESUBALEW SINTIE-------------BDU1307570  ||
   ||     4.FEVEN TESFAYE---------------BDU1307726  ||
   ||     5.NATNAEL SISAY---------------BDU1308373  ||
   ||     6.NEJAT LEJEBA----------------BDU1308181  ||
   ||     7.SOLOMON YITAYEW-------------BDU1306121  ||
   ||                                               ||
    ========HOME SELLING MANAGMENT SYSTEM============
*/
#include <iomanip>
#include <iostream>
#include<cstring>
#include<unistd.h>
using namespace std;
struct Home_sell{
    char Owner_name[20];
    char Home_number[10];
    char Home_location[20];
    int Agent_number;
    int Home_age;
    int Home_type;
    float Home_area;
    float Home_price;
    Home_sell* next;
    Home_sell* prev;
};
Home_sell* head=NULL;
Home_sell* last=NULL;
struct Home_sell* insert;

//PROTOTYPE FOR INSERTION FUNCTIONS

void insert_input_begin();
void insert_input_middle();
void insert_input_end();

//PROTOTYPE FOR DELETING FUNCTIONS

void delete_begin();
void delete_End();
void delete_by_Owner_name();
void delete_by_Home_number();
void delete_by_Home_location();
void delete_by_Home_type();
void delete_by_Home_age();
void delete_by_Home_area();
void delete_by_Home_price();
void delete_by_position();
int  check_delete();
void exit_check();

//PROTOTYPE FOR DELETING MINIMUM AND MAXIMUM

void deleteHome(char *home_num);
void deleteHomewithMinimumAge();
void deleteHomewithMaximumAge();

//PROTOTYPE FOR DISPLAY FUNCTIONS

void display_content_forward();
void display_content_backward();
void upper_discription();//the description part of the table for displaying the records;
void display_fun(Home_sell* temp1);//the records are displayed with

//PROTOTYPE FOR COUNTING FUNCTIONS

void countbyownername();
void countnode();
void countbyhomelocation();
void countbyhometype();
void countbyagentnumber();
void countbyhomeage();
void countbyhomearea();
void countbyhomeprice();

//PROTOTYPE FOR SEARCHING FUNCTIONS

void searchByownerName();
void searchByhomenumber();
void searchByHomelocation();
void searchBYHometype();
void searchBYagentnumber();
void searchBYage();
void searchBYarea();
void searchBYprice();
int search_again();

//PROTOTYPE FOR CHECKING THE SEARCHING FUNCTIONS

void check_search(char name[],int num);
void check_search2(int key,int num);
void check_search3(int key1, int key2, int num);

//PROTOTYPE FOR UPDATING FUNCTIONS

void update_Owner_name();
void update_Home_number();
void update_Home_location();
void update_Home_type();
void update_Agent_number();
void update_Home_age();
void update_Home_area();
void update_Home_price();
int check_update();

//PRTOTYPE FOR SORTING FUNCTINOS

void swap_values(Home_sell*i, Home_sell*j);
void sortByOwner_name();
void SortByArea();
int SortByPrice();
int SortByHomeAge();
int SortByHomeType();
int SortByHomeNumber();
int SortByHome_location();
void choose_sort();

//PROTOTYPE FOR AVERAGE FUNCTIONS

void averagePrice();
void averageAge();

//PROTOTYPE FOR MINIMUM AND MAXIMUM FUNCTIONS

void maximumPrice();
void minimumPrice();

//INPUT VALIDATION DISPLAY PROTOTYPE

void inputvalidate();

//PROTOTYPE FOR TOP FUNCTIONS

void top10bypric();
void top7byhomeage();
void top15bylocation();
void top10byarea();
void top20byownername();

void home_clock();

int main()
{
    system("color 1f");
    string x;
    int y,z;
cout<<endl<<endl<<endl<<endl<<endl;
cout<<setw(75)<<"***           ***   "<<"*********"<<"  ***      "<<"   ************"<<"  *********   "<<"*****         *****  "<<"*********"<<endl;
cout<<setw(75)<<"***           ***   "<<"***      "<<"  ***      "<<"   ***         "<<"  **     **   "<<"*** **       ** ***  "<<"***      "<<endl;
cout<<setw(75)<<"***           ***   "<<"***      "<<"  ***      "<<"   ***         "<<"  **     **   "<<"***  **     **  ***  "<<"***      "<<endl;
cout<<setw(75)<<"***   *****   ***   "<<"*********"<<"  ***      "<<"   ***         "<<"  **     **   "<<"***   **   **   ***  "<<"*********"<<endl;
cout<<setw(75)<<"***  *** ***  ***   "<<"*********"<<"  ***      "<<"   ***         "<<"  **     **   "<<"***    *****    ***  "<<"*********"<<endl;
cout<<setw(75)<<"*** ***   *** ***   "<<"***      "<<"  ***      "<<"   ***         "<<"  **     **   "<<"***     ***     ***  "<<"***      "<<endl;
cout<<setw(75)<<"******     ******   "<<"***      "<<"  ***      "<<"   ***         "<<"  **     **   "<<"***             ***  "<<"***      "<<endl;
cout<<setw(75)<<"*****       *****   "<<"*********"<<"  *********"<<"   ************"<<"  *********   "<<"***             ***  "<<"*********"<<endl;
cout<<endl;
cout<<setw(100)<<"***************"<<"   ************ "<<endl;
cout<<setw(100)<<"      ***      "<<"   ***      *** "<<endl;
cout<<setw(100)<<"      ***      "<<"   ***      *** "<<endl;
cout<<setw(100)<<"      ***      "<<"   ***      *** "<<endl;
cout<<setw(100)<<"      ***      "<<"   ***      *** "<<endl;
cout<<setw(100)<<"      ***      "<<"   ***      *** "<<endl;
cout<<setw(100)<<"      ***      "<<"   ************ "<<endl<<endl<<endl;

cout<<setw(64)<<"***      ***   "<<"*********   "<<"*****         *****  "<<"*********"<<"            **********"<<"   *********"<<"  ***      "<<"  ***      "<<  endl;
cout<<setw(64)<<"***      ***   "<<"**     **   "<<"*** **       ** ***  "<<"***      "<<"            ***       "<<"   ***      "<<"  ***      "<<"  ***      "<<  endl;
cout<<setw(64)<<"***      ***   "<<"**     **   "<<"***  **     **  ***  "<<"***      "<<"            ***       "<<"   ***      "<<"  ***      "<<"  ***      "<<  endl;
cout<<setw(64)<<"************   "<<"**     **   "<<"***   **   **   ***  "<<"*********"<<"            **********"<<"   *********"<<"  ***      "<<"  ***      "<<  endl;
cout<<setw(64)<<"************   "<<"**     **   "<<"***    *****    ***  "<<"*********"<<"            **********"<<"   *********"<<"  ***      "<<"  ***      "<<  endl;
cout<<setw(64)<<"***      ***   "<<"**     **   "<<"***     ***     ***  "<<"***      "<<"                   ***"<<"   ***      "<<"  ***      "<<"  ***      "<<  endl;
cout<<setw(64)<<"***      ***   "<<"**     **   "<<"***             ***  "<<"***      "<<"                   ***"<<"   ***      "<<"  ***      "<<"  ***      "<<  endl;
cout<<setw(64)<<"***      ***   "<<"*********   "<<"***             ***  "<<"*********"<<"            **********"<<"   *********"<<"  *********"<<"  *********"<<  endl<<endl;
    cout<<setw(123)<<"PLEASE INSERT ANY KEY TO CONTINUE  ";
    getline(cin,x);
    system("cls");
    home_clock();
B:  while(z=1)
{
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  P:cout<<"\n\n\n\n";
    cout<<setw(140)<<"1. INSERT  RECORD           5. SEARCH RECORD \n\n\n";
    cout<<setw(140)<<"2. DISPLAY RECORD           6. UPDATE RECORD \n\n\n";
    cout<<setw(140)<<"3. DELETE  RECORD           7. SORT  RECORD  \n\n\n";
    cout<<setw(140)<<"4. COUNT   RECORD                            \n\n\n";
    cout<<setw(140)<<"             0. EXIT THE SYSTEM             \n\n\n";
    cout<<setw(117)<<"            ";
    cin>>y;
     if(cin.fail())
      {
      inputvalidate();
      goto P;
      }
    system("cls");
    switch(y)
    {
        case 1:
        {
            home_clock();
            int k;
        y:  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        c:  cout<<"\n\n\n";
            cout<<setw(160)<<"1. INSERT AT THE BEGINING       3. INSERT AT THE END           \n\n\n";
            cout<<setw(160)<<"2. INSERT AT THE MIDDLE         4. RETURN TO THE PREVIOUS PAGE \n\n\n";
            cout<<setw(160)<<"               0. EXIT FROM THE SYSTEM                         \n\n\n";
            cout<<setw(125)<<"               ";
            cin>>k;
            if(cin.fail())
              {
              inputvalidate();
              goto c;
              }
            switch(k)
            {
                case 1: insert_input_begin();
                break;
                case 2: {insert_input_middle();
                goto P;
                }
                case 3: insert_input_end();
                break;
                case 4: {
                    system("cls");
                   goto B;
                break;}
                case 0: {
                    exit_check();
                    goto y;
                        break;
                        }

                default:
                        {
                system("cls");
                cout<<"\n\n\n";
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
                goto c;
                break;
                        }
            }
         break;

        }
        case 2:
        {
             home_clock();
         int k;
        z:  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        D:  cout<<"\n\n\n";
            cout<<setw(140)<<"1. DISPLAY  FORWARD           \n\n\n";
            cout<<setw(140)<<"2. DISPLAY BACKWARD           \n\n\n";
            cout<<setw(140)<<"3. DISPLAY TOP VALUES         \n\n\n";
            cout<<setw(140)<<"4. RETURN TO THE PREVIOUS PAGE\n\n\n";
            cout<<setw(140)<<"0. EXIT FROM THE SYSTEM       \n\n\n";
            cout<<setw(120)<<"                ";
            cin>>k;
            if(cin.fail())
              {
              inputvalidate();
              goto D;
              }
                    switch(k)
            {
            case 1:{display_content_forward();
                    goto D;
                    break;}
            case 2:{display_content_backward();
                    goto D;
                    break;}

            case 3:
                {
                    system("cls");
                    int q;
                    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
              pe:   cout<<"\n\n\n\n";
                    cout<<setw(170)<<"1. DISPLAY TOP 10 BY HOME PRICE               4. DISPLAY TOP 10 BY HOME AREA  \n\n\n\n";
                    cout<<setw(170)<<"2. DISPLAY TOP 7  BY HOME AGE                 5. DISPLAY TOP 20 BY OWNER NAME \n\n\n\n";
                    cout<<setw(170)<<"3. DISPLAY TOP 15 BY HOME LOCATION            6. RETURN TO THE PREVIOUS PAGE  \n\n\n\n";
                    cout<<setw(120)<<"   ";
                    cin>>q;
                    if(cin.fail())
                      {
                      inputvalidate();
                      goto pe;
                      }
                    switch(q)
                    {
                    case 1:
                        {
                            system("cls");
                            top10bypric();
                            goto P;
                        }
                    case 2:
                        {
                             system("cls");
                             top7byhomeage();
                             goto P;
                        }
                    case 3:
                        {
                             system("cls");
                             top15bylocation();
                             goto P;
                        }
                    case 4:
                        {
                            system("cls");
                            top10byarea();
                            goto P;
                        }
                    case 5:
                        {
                            system("cls");
                            top20byownername();
                            goto P;
                        }
                    case 6:
                        {
                            system("cls");
                            goto B;
                        }
                    default:
                        {
                          system("cls");
                        cout<<"\n\n\n";
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                        cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
                        goto pe;
                        }
                    }
                    break;
                }

            case 4: {
                    system("cls");
                    goto B;
                    break;
                     }
            case 0: {
                    exit_check();
                    goto z;
                    break;
                    }

            default: {
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
                goto D;
                break;
                     }
            }
        break;
        }
        case 3:
        {
            home_clock();
            int k;
        w:  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        N:  cout<<"\n\n\n";
            cout<<setw(165)<<"1. DELETE THE FIRST RECORD                        6. DELETE BY   HOME TYPE  \n\n\n";
            cout<<setw(165)<<"2. DELETE THE  LAST RECORD                        7. DELETE BY HOME AGE     \n\n\n";
            cout<<setw(165)<<"3. DELETE BY OWNER NAME                           8. DELETE BY   HOME AREA  \n\n\n";
            cout<<setw(165)<<"4. DELETE BY   HOME NUMBER                        9. DELETE BY HOME PRICE   \n\n\n";
            cout<<setw(165)<<"5. DELETE BY HOME LOCATION                        10.DELETE BY Nth RECORD   \n\n\n";
            cout<<setw(165)<<"                        11. RETURN TO THE PREVIOUS PAGE                     \n\n\n";
            cout<<setw(166)<<"                         0. EXIT FROM THE SYSTEM                              \n\n";
            cout<<setw(120)<<"                            ";
            cin>>k;
            if(cin.fail())
              {
              inputvalidate();
              goto N;
              }
            switch(k)
            {
                case 1:{delete_begin();
                goto P;
                break;}
                case 2:{delete_End();
                goto P;
                break;}
                case 3:{delete_by_Owner_name();
                goto P;
                break;}
                case 4:{delete_by_Home_number();
                goto P;
                break;}
                case 5:{delete_by_Home_location();
                goto P;
                break;}
                case 6:{delete_by_Home_type();
                goto P;
                break;}
                case 7:{
                    system("cls");
                    int q;
                    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                 L: cout<<"\n\n\n";
                    cout<<setw(170)<<"1. Delete by searching age                 2. Delete minimum age         \n\n\n";
                    cout<<setw(170)<<"3. Delete maximum age                      4. Return to the previous page\n\n\n";
                    cout<<setw(130)<<" ";
                    cin>>q;
                    if(cin.fail())
                      {
                      inputvalidate();
                      goto L;
                      }
                      switch(q)
                      {
                      case 1:
                        {
                            system("cls");
                            delete_by_Home_age();
                            goto P;
                        }
                      case 2:
                        {
                            system("cls");
                            deleteHomewithMinimumAge();
                            goto P;
                        }
                      case 3:
                        {
                            system("cls");
                           deleteHomewithMaximumAge();
                           goto P;
                        }
                      case 4:
                        {
                            system("cls");
                            goto B;
                        }
                      default:
                        {
                            system("cls");
                            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                            cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
                            goto L;
                        }
                      }
                break;}
                case 8:{delete_by_Home_area();
                goto P;
                break;}
                case 9:{
                    delete_by_Home_price();
                    goto P;
                    break;
                       }
                case 11:
                {
                    system("cls");
                     goto B;
                     break;
                }
                case 10:{
                        delete_by_position();
                        break;
                        }
                case 0:
                {
                    exit_check();
                    goto w;
                        break;
                }
                default:
                {
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
                goto N;
                break;
                }
            }
            break;
        }
        case 4:{
              home_clock();
              int k;
         F: cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         G: cout<<"\n\n\n";
            cout<<setw(170)<<"1. COUNT TOTAL NUMBER OF RECORDS                   6. COUNT NUMBER OF RECORDS BY HOME AGE    \n\n\n";
            cout<<setw(170)<<"2. COUNT NUMBER OF RECORDS BY OWNER NAME           7. COUNT NUMBER OF RECORDS BY HOME AREA   \n\n\n";
            cout<<setw(170)<<"3. COUNT NUMBER OF RECORDS BY HOME LOCATION        8. COUNT NUMBER OF RECORDS BY HOME PRICE  \n\n\n";
            cout<<setw(170)<<"4. COUNT NUMBER OF RECORDS BY HOME TYPE            9. RETURN TO THE PREVIOUS PAGE            \n\n\n";
            cout<<setw(170)<<"5. COUNT NUMBER OF RECORDS BY AGENT NUMBER                                                   \n\n\n";
            cout<<setw(170)<<"                                    0. EXIT FROM THE SYSTEM                                  \n\n\n";
            cout<<setw(120)<<"  ";
            cin>>k;
            if(cin.fail())
              {
              inputvalidate();
              goto G;
              }
            switch(k){
                    case 1:{
                        countnode();
                    goto G;
                    break;}
                    case 2:{countbyownername();
                    goto G;
                    break;}
                    case 3:{countbyhomelocation();
                    goto G;
                    break;}
                    case 4:{countbyhometype();
                    goto G;
                    break;}
                    case 5:{countbyagentnumber();
                    goto G;
                    break;}
                    case 6:{countbyhomeage();
                    goto G;
                    break;}
                    case 7:{countbyhomearea();
                    goto G;
                    break;}
                    case 8:{countbyhomeprice();
                    goto G;
                    break;}
                    case 9:{
                                system("cls");
                                goto B;
                                break;
                            }
                    case 0:{
                     exit_check();
                      goto F;
                        break;
                            }
                        default:
                            {
                                system("cls");
                                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                                cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
                                goto G;
                                break;
                            }

                     }
                    break;
                }

        case 5: {
                    home_clock();
                    system("cls");
                    int k;
               sea: cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                se: cout<<"\n\n\n";
                    cout<<setw(170)<<"1. SEARCH BY OWNER NAME                         2. SEARCH BY HOME NUMBER  \n\n\n";
                    cout<<setw(170)<<"3. SEARCH BY HOME LOCATION                      4. SEARCH BY HOME TYPE    \n\n\n";
                    cout<<setw(170)<<"5. SEARCH BY AGENT NUMBER                       6. SEARCH BY HOME AGE     \n\n\n";
                    cout<<setw(170)<<"7. SEARCH BY HOME AREA                          8. SEARCH BY HOME PRICE   \n\n\n";
                    cout<<setw(170)<<"9. RETURN TO THE PREVIOUS PAGE                  0. EXIT THE SYSTEM        \n\n\n";
                    cout<<setw(130)<<"  ";
                    cin>>k;
                    if(cin.fail())
                      {
                      inputvalidate();
                      goto se;
                      }
                    switch(k)
                    {
                        case 1: {
                        searchByownerName();
                        goto sea;
                        break;
                        }
                        case 2: {
                        searchByhomenumber();
                        goto sea;
                        break;
                        }
                        case 3: {
                        searchByHomelocation();
                        goto sea;
                        break;
                        }
                        case 4: {
                        searchBYHometype();
                        goto sea;
                        break;
                        }
                        case 5: {
                        searchBYagentnumber();
                        goto sea;
                        break;
                        }
                        case 6: {
                            system("cls");
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                be:     cout<<"\n\n\n";
                            int q;
                        cout<<setw(170)<<"1. Search records by age              3.Return to the previous page \n\n\n";
                        cout<<setw(170)<<"2. Search the average age                                           \n\n\n";
                        cout<<setw(130)<<"   ";
                        cin>>q;
                        if(cin.fail())
                        {
                            inputvalidate();
                            goto be;
                        }
                        switch(q)
                        {
                          case 1: {searchBYage();
                                      goto sea;}
                          case 2:  {
                                    system("cls");
                                    averageAge();
                                    goto se;}
                          case 3:
                            {
                                system("cls");
                                goto sea;
                            }
                          default:
                            {
                              system("cls");
                                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                                cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
                                goto se;
                            }
                          }
                        }
                        case 7: {
                        searchBYarea();
                        goto sea;
                        break;
                        }
                        case 8: {
                        system("cls");
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                ee:     cout<<"\n\n\n";
                        int q;
                        cout<<setw(170)<<"1. Search records by price                  4. Search the minimum price     \n\n\n";
                        cout<<setw(170)<<"2. Search the average price                 5. Return to the previous page  \n\n\n";
                        cout<<setw(170)<<"3. Search the maximum price                                                 \n\n\n";
                        cout<<setw(130)<<"  ";
                        cin>>q;
                        if(cin.fail())
                        {
                            inputvalidate();
                            goto ee;
                        }
                        switch(q)
                        {
                          case 1: {searchBYprice();
                                      goto sea;}
                          case 2:  {
                                    averagePrice();
                                    goto se;
                                    break;
                                    }
                          case 3:
                            {
                                maximumPrice();
                                goto se;
                            }
                          case 4:
                            {
                                minimumPrice();
                                goto se;
                            }
                          case 5:
                            {
                                system("cls");
                                goto sea;
                            }
                          default:
                            {
                                system("cls");
                                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                                cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
                                goto ee;
                            }
                          }

                        }
                        case 9: {
                        system("cls");
                        goto B;
                        break;
                        }
                        case 0: {
                          exit_check();
                          goto sea;
                          break;
                        }

                        default: {
                        system("cls");
                                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                                cout<<setw(135)<<"Error!!!, Please Try Again ";
                                goto se;
                        break;
                        }
                    }

                    break;
                    }
        case 6:{
             home_clock();
    Fo:
            system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
Fb: cout<<"\n\n\n\n\n";
    cout<<setw(150)<<"1. Update  Owner name         5. Update  Agent Number \n\n\n";
    cout<<setw(150)<<"2. Update  Home Number        6. Update  Home Age     \n\n\n";
    cout<<setw(150)<<"3. Update  Home Location      7. Update  Home Area    \n\n\n";
    cout<<setw(150)<<"4. Update  Home Type          8. Update  Home price   \n\n\n";
    cout<<setw(150)<<"               9. Return to the previous page         \n\n\n";
    cout<<setw(150)<<"               0. Exit from the system                \n\n\n";
    cout<<setw(115)<<"   ";
    int k;
       cin>>k;
       if(cin.fail())
              {
              inputvalidate();
              goto Fb;
              }
      switch(k)
     {
      case 1:{update_Owner_name();
      goto Fo;
      break;}
      case 2:{update_Home_number();
      goto Fo;
      break;}
      case 3:{update_Home_location();
      goto Fo;
      break;}
      case 4:{update_Home_type();
      goto Fo;
      break;}
      case 5:{update_Agent_number();
      goto Fo;
      break;}
      case 6:{update_Home_age();
      goto Fo;
      break;}
      case 7:{update_Home_area();
      goto Fo;
      break;}
      case 8:{update_Home_price();
      goto Fo;
      break;}
      case 9:{
          system("cls");
          goto B;
      break;
        }
      case 0: {
          system("cls");
          exit_check();
          goto Fo;
           break;
              }
      default: {
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
                goto Fb;
                break;
                  }
      }
               break;
                }

      case 7:
        {
    home_clock();
    system("cls");
coc:cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
dod:cout<<"\n\n\n\n";
    cout<<setw(150)<<"1. Sort by Owner name                      5. Sort by  Home Age  \n\n\n";
    cout<<setw(150)<<"2. Sort by Home Number                     6. Sort by  Home Area \n\n\n";
    cout<<setw(150)<<"3. Sort by  Home Location                  7. Sort by  Home price\n\n\n";
    cout<<setw(150)<<"4. Sort by  Home Type                                            \n\n\n";
    cout<<setw(150)<<"               8. Return to the previous page                    \n\n\n";
    cout<<setw(150)<<"               0. Exit from the system                           \n\n\n";
    cout<<setw(115)<<"   ";
        int k;
       cin>>k;
     if(cin.fail())
              {
              inputvalidate();
              goto dod;
              }
      else {
      switch(k)
      {
          case 1:{sortByOwner_name();
                  goto dod;
                  break;
                    }

          case 2:{SortByHomeNumber();
                  goto dod;
                  break;
                    }

          case 3:{SortByHome_location();
                  goto dod;
                  break;
                    }
          case 4:{SortByHomeType();
                  goto dod;
                  break;
                    }

          case 5:{SortByHomeAge();
                  goto dod;
                  break;
                    }

          case 6:{SortByArea();
                  goto dod;
                  break;
                    }
          case 7:{SortByPrice();
                  goto dod;
                  break;
                    }

          case 8:{
                  system("cls");
                  goto B;
                  break;
                    }

          case 0:{ exit_check();
                   goto coc;
                   break;
                    }
          default:
            {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
            goto dod;
            break;
            }


      } //switch
      } //else


            break;
        }

        case 0: {
                exit_check();
                goto B;
                break;
                }
        default:
        {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(135)<<"Error!!!, Please Try Again \n\n";
            cout<<"\n\n\n";
            goto P;
        break;
        }
    }
 }
    return 0;
}
//============================================================================================
//INSERTING FUNCTIONS DEFINITIONS
//============================================================================================1
void insert_input_begin(){
     system("cls");
  A: cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     insert= new Home_sell;
     cin.ignore();
     cout<<setw(140)<<" Enter The Home Owner name     : ";
     cin.getline(insert->Owner_name,20);
     cout<<"\n\n\n";
  R: cout<<setw(140)<<" Enter The Home number         : ";
     cin.getline(insert->Home_number,10);
     Home_sell* h=head;
     while(h!=NULL) {
			  if(stricmp(insert->Home_number,h->Home_number)==0)
                {
                cout<<"\n\n\n";
                cout<<setw(140)<<"This Home Number is Already Existed, Please Try Again!!"<<endl;
                goto R;
                }
                h=h->next;
                    }
     cout<<"\n\n\n";
     cout<<setw(140)<<" Enter The Location Of The Home: ";
     cin.getline(insert->Home_location,20);
     cout<<"\n\n\n";
be:  cout<<setw(140)<<" Enter The Type Of The Home    : ";
     cout<<"G+";
     cin>>insert->Home_type;
     if(cin.fail())
    {
        inputvalidate();
        cout<<"\n\n\n\n";
        goto be;
    }
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 ce: cout<<"\n\n\n\n";
     cout<<setw(140)<<"Enter The Age Of The Home        : ";
     cin>>insert->Home_age;
     if(cin.fail() || insert->Home_age<0)
        {
        inputvalidate();
        goto ce;
        }
fe:  cout<<"\n\n\n";
     cout<<setw(140)<<"Enter The Area Of The Home(sq mt): ";
     cin>>insert->Home_area;
     if(cin.fail() || insert->Home_area<0)
        {
        inputvalidate();
        goto fe;
        }
  ge:cout<<"\n\n\n";
     cout<<setw(140)<<"Enter The Price Of The Home(Birr): ";
     cin>>insert->Home_price;
      if(cin.fail() || insert->Home_price<0)
        {
        inputvalidate();
        goto ge;
        }
  he:cout<<"\n\n\n";
     cout<<setw(140)<<"Enter The Agent Phone Number     : ";
     cout<<"+251-";
     cin>>insert->Agent_number;
      if(cin.fail() || insert->Agent_number<0)
        {
        inputvalidate();
        goto he;
        }
     system("cls");
     insert->next=NULL;
     insert->prev=NULL;
     if(head==NULL && last==NULL)
         {
             head=insert;
             last=insert;
         }
     else
     {
    insert->next=head;
    head->prev=insert;
    head=head->prev;
     }
int q;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
bib:cout<<"\n\n\n\n";
cout<<setw(140)<<"Would you like to add more Records?\n\n";
cout<<setw(135)<<"           1.YES              2.NO\n\n ";
cout<<setw(120)<<"          ";
cin>>q;
if(cin.fail())
              {
              inputvalidate();
              goto bib;
              }
switch(q){
case 1:{
    system("cls");
    goto A;
break;
}
default:{system("cls");
   return;
    break;}

}
}
//============================================================================================
void insert_input_end()
{
     system("cls");
  A: cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     insert= new Home_sell;
     cin.ignore();
     cout<<setw(140)<<" Enter The Home Owner name     : ";
     cin.getline(insert->Owner_name,20);
     cout<<"\n\n\n";
  R: cout<<setw(140)<<" Enter The Home number         : ";
     cin.getline(insert->Home_number,10);
     Home_sell* h=head;
     while(h!=NULL) {
			  if(stricmp(insert->Home_number,h->Home_number)==0)
                {
                cout<<"\n\n\n";
                cout<<setw(140)<<"This Home Number is Already Existed, Please Try Again!!"<<endl;
                goto R;
                }
                h=h->next;
                    }
     cout<<"\n\n\n";
     cout<<setw(140)<<" Enter The Location Of The Home: ";
     cin.getline(insert->Home_location,20);
     cout<<"\n\n\n";
     cout<<setw(140)<<" Enter The Type Of The Home    : ";
     cout<<"G+";
     cin>>insert->Home_type;
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  ie:cout<<"\n\n\n\n";
     cout<<setw(140)<<"Enter The Age Of The Home        : ";
     cin>>insert->Home_age;
     if(cin.fail() || insert->Home_age<0)
        {
        inputvalidate();
        goto ie;
        }
     cout<<"\n\n\n";
je:  cout<<setw(140)<<"Enter The Area Of The Home(sq mt): ";
     cin>>insert->Home_area;
     if(cin.fail() || insert->Home_area<0)
        {
        inputvalidate();
        goto je;
        }
ke:  cout<<"\n\n\n";
     cout<<setw(140)<<"Enter The Price Of The Home(Birr): ";
     cin>>insert->Home_price;
     if(cin.fail() || insert->Home_price<0)
        {
        inputvalidate();
        goto ke;
        }
le:  cout<<"\n\n\n";
     cout<<setw(140)<<"Enter The Agent Phone Number     : ";
     cout<<"+251-";
     cin>>insert->Agent_number;
     if(cin.fail() || insert->Agent_number<0)
        {
        inputvalidate();
        goto le;
        }
     system("cls");
     insert->next=NULL;
     insert->prev=NULL;
     if(head==NULL && last==NULL)
         {
         head=insert;
         last=insert;
         }
     else
     {
         last->next=insert;
         insert->prev=last;
         last=last->next;
     }
     cin.ignore();
int q;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
cout<<setw(140)<<"Would you like to add more Records?\n\n";
cout<<setw(135)<<"           1.YES              2.NO\n\n ";
cout<<setw(120)<<"          ";
cin>>q;
if(cin.fail())
              {
              inputvalidate();
              goto D;
              }
switch(q){
case 1:{
    system("cls");
    goto A;
break;
}
default:system("cls");
    break;

}
}
//=============================================================================================
void insert_input_middle()
{
A:  char n[20];
    cin.ignore();
    insert= new Home_sell;
    int found=0;
    system("cls");
 if(head==NULL && last==NULL)
         {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
         }
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<setw(150)<<"After which Owner name does you want to add your new Record\n\n\n";
    cout<<setw(140)<<"Enter the Owner name of that Record: ";
    cin.getline(n,20);
    Home_sell *temp1=head;
    while(temp1!=NULL){
            if(stricmp(n,temp1->Owner_name)==0){
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
     cout<<setw(140)<<" Enter The Home Owner name     : ";
     cin.getline(insert->Owner_name,20);
     cout<<"\n\n\n";
  R: cout<<setw(140)<<" Enter The Home number         : ";
     cin.getline(insert->Home_number,10);
     Home_sell* h=head;
     while(h!=NULL) {
			  if(stricmp(insert->Home_number,h->Home_number)==0)
                {
                cout<<"\n\n\n";
                cout<<setw(140)<<"This Home Number is Already Existed, Please Try Again!!"<<endl;
                goto R;
                }
                h=h->next;
                    }
     cout<<"\n\n\n";
     cout<<setw(140)<<" Enter The Location Of The Home: ";
     cin.getline(insert->Home_location,20);
     cout<<"\n\n\n";
     cout<<setw(140)<<" Enter The Type Of The Home    : ";
     cout<<"G+";
     cin>>insert->Home_type;
     system("cls");
     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  me:cout<<"\n\n\n\n";
     cout<<setw(140)<<"Enter The Age Of The Home        : ";
     cin>>insert->Home_age;
       if(cin.fail() || insert->Home_age<0)
        {
        inputvalidate();
        goto me;
        }
  ne:cout<<"\n\n\n";
     cout<<setw(140)<<"Enter The Area Of The Home(sq mt): ";
     cin>>insert->Home_area;
     if(cin.fail() || insert->Home_area<0)
        {
        inputvalidate();
        goto ne;
        }
  oe:cout<<"\n\n\n";
     cout<<setw(140)<<"Enter The Price Of The Home(Birr): ";
     cin>>insert->Home_price;
     if(cin.fail() || insert->Home_price<0)
        {
        inputvalidate();
        goto oe;
        }
  pe:cout<<"\n\n\n";
     cout<<setw(140)<<"Enter The Agent Phone Number     : ";
     cout<<"+251-";
     cin>>insert->Agent_number;
      if(cin.fail() || insert->Agent_number<0)
        {
        inputvalidate();
        goto pe;
        }
         insert->next=NULL;
         insert->prev=NULL;
        if(temp1->next==NULL)
        {
            found=1;
            system("cls");
            insert_input_end();
            return;
        }
          found=1;
         system("cls");

         insert->next=temp1->next;
         insert->prev=temp1;
         temp1->next->prev=insert;
         temp1->next=insert;
                }

         temp1=temp1->next;
         }

    if(found==0)
         {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(120)<<"There is no Record available with owner name "<<n<<",Please fill the Record First!!!";
            return;
         }
int q;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
cout<<setw(140)<<"Would you like to add more Records?\n\n";
cout<<setw(135)<<"           1.YES              2.NO\n\n ";
cout<<setw(120)<<"          ";
cin>>q;
if(cin.fail())
              {
              inputvalidate();
              goto D;
              }
switch(q){
case 1:{
    system("cls");
    goto A;
break;
}
default:
    break;
}
}
//============================================================================================
//DISPLAYING FUNCTIONS DEFINITIONS
//============================================================================================3
void display_content_forward()
{
  if(head==NULL && last==NULL)
  {system("cls");
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout<<setw(140)<<"NO RESULT HAS BEEN FOUND!!!";
      }
  else{
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<setw(100)<<"List of Available Homes: \n\n\n\n\n\n";
     upper_discription();
 for(Home_sell* h=head;h!=NULL;h=h->next)
        {
     display_fun(h);
        }
  }

}
//=============================================================================================
void display_content_backward()
{
  if(head==NULL && last==NULL)
  {system("cls");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout<<setw(140)<<"NO RESULT HAS BEEN FOUND!!!";
      }
  else{
        system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<setw(100)<<"List of Available Homes: \n\n\n\n\n\n";
    upper_discription();
 for(Home_sell* h=last;h!=NULL;h=h->prev)
        {
    display_fun(h);
        }

  }

}
//============================================================================================
//DELETING FUNCTIONS DEFINITIONS
//============================================================================================
void delete_begin()
{
     if(head==NULL && last==NULL)
         {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
         }
     else if(head==last)
     {
         head=NULL;
         last=NULL;
     }
     else
     {
         int m=check_delete();
         if(m==1)
                {
         Home_sell *temp=head;
         head=head->next;
         head->prev=NULL;
         temp->next=NULL;
         system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<setw(150)<<"The first Record is Deleted Successfully.\n\n";
         delete temp;
                }
     }
}
//============================================================================================
void delete_End()
{
     if(head==NULL && last==NULL)
         {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
         }
     else if(head==last)
     {
         head=NULL;
         last=NULL;
     }
     else
     {
         int m=check_delete();
         Home_sell *temp=last;
         if(m==1)
                {
         last=last->prev;
         last->next=NULL;
         temp->prev=NULL;
         system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<setw(150)<<"The Last Record is Deleted Successfully.\n\n";
         delete temp;
                }
     }
}

//============================================================================================
void delete_by_Owner_name()
{
  if(head==NULL && last==NULL)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }

  else
    {
  char name[20];
  cin.ignore();
  system("cls");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout<<setw(150)<<"Enter the name you want to delete :";
  cin.getline(name,20);
  Home_sell* h=last;
  int count=0;
  while(h!=NULL) {
           if(stricmp(name,h->Owner_name)==0)
                {
                      count=1;
                     if(h->prev==NULL)
                                {
					  delete_begin();
					  break;
                                }
                     else if(h==last) {
                      delete_End();
                      break;
                              }
                     else {
                      int m=check_delete();
                      if(m==1){
					  h->next->prev=h->prev;
					  h->prev->next=h->next;
					  h->next=NULL;
					  h->prev=NULL;
					  system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					  cout<<setw(150)<<"The Record with the name "<<h->Owner_name<<" is deleted successfully.\n";
					  delete h;
					  return;
                             }
                        }
               }
                h=h->prev;
            }
            if(count!=1){
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(150)<<"There is no record with the name "<<name<<endl;}
        }
    }


//============================================================================================
void delete_by_Home_location()
{
  if(head==NULL && last==NULL)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }

  else
    {
  char name[20];
  cin.ignore();
  system("cls");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout<<setw(150)<<"Enter the Location you want to delete :";
  cin.getline(name,20);
  Home_sell* h=last;
  while(h!=NULL) {
			  if(stricmp(name,h->Home_location)==0)
                {
                     if(h->prev==NULL)
                                {
					  delete_begin();
                      break;
                                }
                     else if(h==last) {
                      delete_End();
                      break;
                              }
                     else {
                      int m=check_delete();
                      if(m==1){
					  h->next->prev=h->prev;
					  h->prev->next=h->next;
					  h->next=NULL;
					  h->prev=NULL;
					  system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					  cout<<"\n The Record with the Location "<<h->Home_location<<" is deleted successfully.\n";
					  delete h;
					  return;
                             }
                        }
                 }
             else
               {
                h=h->prev;
               }
            }
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(150)<<"There is no record with the Location "<<name<<endl;
        }
}

//============================================================================================
void delete_by_Home_number()
{
if(head==NULL && last==NULL)
    {
        system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }

  else
    {
  char name[20];
  cin.ignore();
  system("cls");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout<<setw(120)<<"Enter the Home Number you want to delete :";
  cin.getline(name,20);
  Home_sell* h=last;
  while(h!=NULL) {
			  if(stricmp(name,h->Home_number)==0)
                {
                     if(h->prev==NULL)
                                {
					  delete_begin();
                      break;
                                }
                     else if(h==last) {
                      delete_End();
                      break;
                              }
                     else {
                      int m=check_delete();
                      if(m==1){
					  h->next->prev=h->prev;
					  h->prev->next=h->next;
					  h->next=NULL;
					  h->prev=NULL;
					  system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					  cout<<setw(150)<<"The Record with the Home Number "<<h->Home_number<<" is deleted successfully.\n";
					  delete h;
					  break;
                             }
                        }
                 }
             else
               {
                h=h->prev;

               }
            }
            system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<setw(150)<<"There is no record with the Home Number "<<name<<endl;
        }
}
//============================================================================================
void delete_by_Home_type()
{
if(head==NULL && last==NULL)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }

  else
    {
  int name;
  system("cls");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  cout<<setw(150)<<"Enter the Home type you want to delete :G+";
  cin>>name;
  Home_sell* h=last;
  while(h!=NULL) {
			  if(name==h->Home_type)
                {
                     if(h->prev==NULL)
                                {
					  delete_begin();
                      break;
                                }
                     else if(h==last) {
                      delete_End();
                      break;
                              }
                     else {
                      int m=check_delete();
                      if(m==1){
					  h->next->prev=h->prev;
					  h->prev->next=h->next;
					  h->next=NULL;
					  h->prev=NULL;
					  system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					  cout<<setw(150)<<"The Record with the Home Type "<<h->Home_type<<" is deleted successfully.\n";
					  delete h;
					  return;
                             }
                        }
                 }
             else
               {
                h=h->prev;
               }
            }
            system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<setw(140)<<"There is no record with the Home Type "<<name<<endl;
        }
}
//============================================================================================
void delete_by_Home_age()
{

  if(head==NULL && last==NULL)
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }

  else
    {
  int name;
  system("cls");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
  cout<<setw(150)<<"Enter the Home Age you want to delete :";
  cin>>name;
  if(cin.fail() || name<=0)
              {
              inputvalidate();
              goto D;
              }
  Home_sell* h=last;
  while(h!=NULL) {

			  if(name==h->Home_age)
                {
                     if(h->prev==NULL)
                                {
					  delete_begin();
                      break;
                                }
                     else if(h==last) {
                      delete_End();
                      break;
                              }
                     else {
                      int m=check_delete();
                      if(m==1){
					  h->next->prev=h->prev;
					  h->prev->next=h->next;
					  h->next=NULL;
					  h->prev=NULL;
					  system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					  cout<<setw(150)<<"The Record with the Home Age "<<h->Home_age<<" is deleted successfully.\n";
					  delete h;
					  return;
                             }
                        }
                 }
             else
               {
                h=h->prev;
               }
            }
            system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<setw(140)<<"There is no record with the Home Age "<<name<<endl;
        }
}

//============================================================================================
void delete_by_Home_area()
{
  if(head==NULL && last==NULL)
    {
        system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }

  else
    {
  int name;
  system("cls");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
  cout<<setw(150)<<"Enter the Home Area you want to delete in(sq mt) :";
  cin>>name;
    if(cin.fail() || name<=0)
              {
              inputvalidate();
              goto D;
              }
  Home_sell* h=last;
  while(h!=NULL) {
			  if(name==h->Home_area)
                {
                     if(h->prev==NULL)
                                {
					  delete_begin();
                      break;
                                }
                     else if(h==last) {
                      delete_End();
                      break;
                              }
                     else {
                      int m=check_delete();
                      if(m==1){
					  h->next->prev=h->prev;
					  h->prev->next=h->next;
					  h->next=NULL;
					  h->prev=NULL;
					  system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					  cout<<setw(150)<<"\n The Record with the Home Area "<<h->Home_area<<" is deleted successfully.\n";
					  delete h;
					  return;
                             }
                        }
                 }
             else
               {
                h=h->prev;
               }
            }
            system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<setw(140)<<"There is no record with the Home Area "<<name<<endl;
        }
}

//============================================================================================
void delete_by_Home_price()
{

    if(head==NULL && last==NULL)
    {
        system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }

  else
    {
  int name;
  system("cls");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 D: cout<<"\n\n\n\n";
  cout<<setw(150)<<"Enter the Home Price you want to delete in (Birr):";
  cin>>name;
    if(cin.fail() || name<=0)
              {
              inputvalidate();
              goto D;
              }
  Home_sell* h=last;
  while(h!=NULL) {
			  if(name==h->Home_price)
                {
                     if(h->prev==NULL)
                                {
					  delete_begin();
                      break;
                                }
                     else if(h==last) {
                      delete_End();
                      break;
                              }
                     else {
                      int m=check_delete();
                      if(m==1){
					  h->next->prev=h->prev;
					  h->prev->next=h->next;
					  h->next=NULL;
					  h->prev=NULL;
					  system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					  cout<<setw(150)<<"The Record with the Home Price "<<h->Home_price<<" is deleted successfully.\n";
					  delete h;
					  return;
                             }
                        }
                 }
             else
               {
                h=h->prev;
               }
            }
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"There is no record with the Home Price "<<name<<endl;
        }
}

//=========================================================================================================

void delete_by_position()
{
   if(head==NULL && last==NULL)
        {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n\n\n";
            return;
        }

  else
    {
  int name;
  system("cls");
  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
  cout<<setw(150)<<"Enter the Record Number you want to delete :";
  cin>>name;
    if(cin.fail() || name<=0)
              {
              inputvalidate();
              goto D;
              }
  Home_sell* h=head;
  int n=0;
  while(h!=NULL)
    {
        n++;
        if(name==n)
        {
                if(h->prev==NULL)
                    {
					  delete_begin();
                        break;
                    }
                else if(h==last)
                    {
                     delete_End();
                       break;
                    }
                else
                    {
					  h->next->prev=h->prev;
					  h->prev->next=h->next;
					  h->next=NULL;
					  h->prev=NULL;
                      system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					  cout<<setw(140)<<"The "<<n<<" Record is Deleted Successfully!!!"<<endl;
					  delete h;
					  return;
                    }
        }
        else
            h=h->next;
    }
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout<<setw(140)<<"There is no record with the record number "<<name<<endl;

    }

}
//========================================================================================================
//COUNTING FUNCTIONS DEFINITION
//========================================================================================================

void countnode()
{
int count=0;
Home_sell *temp=head;
while(temp!=NULL)
{
count++;
temp=temp->next;
}
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<setw(140)<<"The Total number of Record available is "<<count<<endl;
}

//========================================================================================================

void countbyownername()
{
char key[20];
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
cout<<setw(120)<<"Enter Owner Name :";
cin>>key;
  if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
int count=0;
Home_sell *temp=head;
while(temp!=NULL)
{
if(strcmp(key,temp->Owner_name)==0)
{
count++;
}
temp=temp->next;
}
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    if(count==0)
        cout<<setw(140)<<"There is No Record With Home Owner Name "<<key<<endl;
    else
        cout<<setw(140)<<"There are "<<count<<" Records."<<endl;
}

//========================================================================================================

void countbyhomelocation()
{
 char key[20];
  system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
cout<<setw(120)<<"Enter The Home Location :";
cin>>key;
  if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
int count=0;
Home_sell *temp=head;
while(temp!=NULL)
{
if(strcmp(key,temp->Home_location)==0)
{
count++;
}
temp=temp->next;
}
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
if(count==0)
    cout<<setw(140)<<"There is No Record With Home Location "<<key<<endl;
else
    cout<<setw(140)<<"There are "<<count<<" Records."<<endl;
}

//========================================================================================================

void countbyhometype()
{
 int key;
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
cout<<setw(120)<<"Enter The Home Type :";
cin>>key;
  if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
int count=0;
Home_sell *temp=head;
while(temp!=NULL)
{
if(key==temp->Home_type)
{
count++;
}
temp=temp->next;
}
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
if(count==0)
    cout<<setw(140)<<"There is No Record With Home Type "<<key<<endl;
else
    cout<<setw(140)<<"There are "<<count<<" Records."<<endl;
}

//========================================================================================================

void countbyagentnumber()
{
int key;
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
cout<<setw(120)<<"Enter The Agent Number :";
cin>>key;
  if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
int count=0;
Home_sell *temp=head;
while(temp!=NULL)
{
if(key==temp->Agent_number)
{
count++;
}
temp=temp->next;
}
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
if(count==0)
    cout<<setw(140)<<"There is No Record With Agent Number "<<key<<endl;
else
    cout<<setw(140)<<"There are "<<count<<" Records."<<endl;
}

//========================================================================================================

void countbyhomeage()
{
int key;
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
cout<<setw(120)<<"Enter The Home Age :";
cin>>key;
  if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
int count=0;
Home_sell *temp=head;
while(temp!=NULL)
{
if(key==temp->Home_age)
{
count++;
}
temp=temp->next;
}
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
if(count==0)
    cout<<setw(140)<<"There is No Record With Home Age "<<key<<endl;
else
    cout<<setw(140)<<"There are "<<count<<" Records."<<endl;
}

//========================================================================================================

void countbyhomearea()
{
int key;
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
cout<<setw(120)<<"Enter The Home Area :";
cin>>key;
  if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
int count=0;
Home_sell *temp=head;
while(temp!=NULL)
{
if(key==temp->Home_area)
{
count++;
}
temp=temp->next;
}
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
if(count==0)
    cout<<setw(140)<<"There is No Record With Home Area "<<key<<endl;
else
    cout<<setw(140)<<"There are "<<count<<" Records."<<endl;
}

//========================================================================================================

void countbyhomeprice()
{
int key;
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
D:cout<<"\n\n\n\n";
cout<<setw(120)<<"Enter The Home Price :";
cin>>key;
  if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
int count=0;
Home_sell *temp=head;
while(temp!=NULL)
{
if(key==temp->Home_price)
{
count++;
}
temp=temp->next;
}
 system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
if(count==0)
    cout<<setw(140)<<"There is No Record With Home Price "<<key<<endl;
else
    cout<<setw(140)<<"There are "<<count<<" Records."<<endl;
}
//==============================================================================================
//SEARCHING FUNCTIONS DEFINITIONS
//========================================================================================================

void searchByownerName() {
    again:
	  if(head==NULL && last==NULL)
		 {
		     system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     cout<<setw(155)<<"There is no Record available, Please fill the Record First!!!\n";
		     return;
         }
	  else {

		 char key[25];
		 cin.ignore();
		 system("cls");
		 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		 cout<<setw(130)<<"Enter The Owner Name :";
         cin.getline(key,25);
         int num=1;
	     check_search(key,num);
                    validate1:
               int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate1;}
                    }

			  }

//==============================================================================================
void searchByhomenumber() {
	      again:
	  if(head==NULL && last==NULL)
		{
		     system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     cout<<setw(155)<<"There is no Record available, Please fill the Record First!!!\n";
         }
	  else {

		 char key[25];
		 cin.ignore();
		 system("cls");
		 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      D: cout<<"\n\n\n\n";
		 cout<<setw(130)<<"Enter The Home number: ";
         cin.getline(key,25);
           if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
         int num=2;
		 check_search(key,num);
                          validate2:
                         int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate2;}
                    }
			  }

//==============================================================================================
void searchByHomelocation() {
	       again:
	  if(head==NULL && last==NULL)
		 {
		     system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     cout<<setw(155)<<"There is no Record available, Please fill the Record First!!!\n";
         }
	  else {

		 char key[25];
		 cin.ignore();
		 system("cls");
		 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		 cout<<setw(130)<<"Enter The Home location :";
         cin.getline(key,25);
         int num=3;
		 check_search(key,num);

           validate3:
         int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate3;}
			  }
	  }

//===============================================================================================
void searchBYHometype() {
	      again:
	  if(head==NULL && last==NULL)
		 {
		     system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     cout<<setw(155)<<"There is no Record available, Please fill the Record First!!!\n";
         }
	  else {

		 int key;
		 system("cls");
		 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		 cout<<setw(130)<<"Enter The Home type :G+";
         cin>>key;
         int num=11;
		 check_search2(key,num);

                     validate4:
               int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate4;}
			  }

	  }
//=================================================================================================

void searchBYagentnumber() {
	        again:
	    if(head==NULL && last==NULL)
		 {
		     system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     cout<<setw(155)<<"There is no Record available, Please fill the Record First!!!\n";
         }
	  else {
         system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      D: cout<<"\n\n\n\n";
		 int key;
		 cout<<setw(130)<<"Enter The Agent number :+251-";
         cin>>key;
           if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
         int num=5;
		 check_search2(key,num);
           validate5:
                       int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate5;}
			  }

	  }

//=========================================================================================================

void searchBYage() {
	      again:
	  if(head==NULL && last==NULL)
		 {
		     system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     cout<<setw(155)<<"There is no Record available, Please fill the Record First!!!\n";
         }
	  else {
		 int key1,key2,x;
                check1:
         system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
       D:cout<<"\n\n\n\n";
		 cout<<setw(170)<<"1.Search by Age range           4.Search above the exact Age \n\n\n";
		 cout<<setw(170)<<"2.Search by exact Age           5.Return to the previous page\n\n\n";
		 cout<<setw(170)<<"3.Search below the exact Age                                 \n\n\n";
		 cout<<setw(150)<<"   ";
		 cin>>x;
		   if(cin.fail() || x<=0)
              {
              inputvalidate();
              goto D;
              }
		 switch(x){
         case 1:
             {
             system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
             cout<<setw(130)<<"Enter the lowest range :";
             cin>>key1;
             cout<<"\n\n\n";
             cout<<setw(130)<<"Enter the upper range  :";
             cin>>key2;
             int num=1;
             check_search3(key1,key2,num);
                    validate6:
             int q=search_again();
                        if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate6;}

             }

		 case 2:
		     {
              system("cls");
              cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
           M: cout<<"\n\n\n\n";
              cout<<setw(130)<<"Enter The exact Home Age :";
		      cin>>key1;
		      if(cin.fail() || key1<=0)
              {
              inputvalidate();
              goto M;
              }
		      int num=2;
              check_search2(key1,num);

                        validatee:
                        int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validatee;}

		 }
		 case 3:
		 	{
                system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
             HI:cout<<"\n\n\n\n";
		 		cout<<setw(130)<<"Enter The Home Age :";
		 		cin>>key1;
		 		if(cin.fail() || key1<=0)
                  {
                  inputvalidate();
                  goto HI;
                  }
		 		int num=3;
		 		check_search2(key1,num);
                        validate7:
                int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate7;}
			 }
			 case 4:
			 	{
			 	     system("cls");
                     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                     cout<<"\n\n\n\n";
			 		 cout<<setw(130)<<"Enter The Home Age: ";
                     cin>>key1;
                     if(cin.fail() || key1<=0)
                      {
                      inputvalidate();
                      goto D;
                      }
                     int num=4;
                     check_search2(key1,num);
                                   validate8:
                    int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate8;}
				 }
            case 5: {
                system("cls");
                return;
                    break;
                    }
            default:
                        {
                             cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
					             goto check1;
                        }
		     }
        }
  }
//===================================================================================================================

void searchBYarea() {
	      again:
	  if(head==NULL && last==NULL)
		 {
		     system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     cout<<setw(155)<<"There is no Record available, Please fill the Record First!!!\n";
         }
	  else {

		 int key1,key2,x;
            check2:
		 system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      D: cout<<"\n\n\n\n";
		 cout<<setw(170)<<"1.Search by Area range          4.Search above the exact Area \n\n\n";
		 cout<<setw(170)<<"2.Search by exact Area          5.Return to the previous page \n\n\n";
		 cout<<setw(170)<<"3.Search below the exact Area                                 \n\n\n";
		 cout<<setw(150)<<"   ";
		 cin>>x;
		 if(cin.fail() || x<=0)
              {
              inputvalidate();
              goto D;
              }
		 switch(x){
         case 1:
             {
                 system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
             cout<<setw(130)<<"Enter the lowest range :";
             cin>>key1;
             cout<<"\n\n\n";
             cout<<setw(130)<<"Enter the upper range  :";
             cin>>key2;
             int num=2;
                check_search3(key1,key2,num);
                               validate9:
            int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate9;}

             }

		 case 2:
		     {
               system("cls");
               cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
          bak: cout<<"\n\n\n\n";
		       cout<<setw(130)<<"Enter The Exact home area  :";
               cin>>key1;
               if(cin.fail() || key1<=0)
                  {
                  inputvalidate();
                  goto bak;
                  }
               int num=5;
               check_search2(key1,num);
                    validate10:
             int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate10;}
                }
		 case 3:
		 	{
		 	    system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
             Do:   cout<<"\n\n\n\n";
		 		cout<<setw(130)<<"Enter The area :";
		 		cin>>key1;
		 		if(cin.fail() || key1<=0)
                  {
                  inputvalidate();
                  goto Do;
                  }
		 		int num=6;
		 		check_search2(key1,num);
                            validate11:
               int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate11;}
			 }
			 case 4:
			 	{
			 	     system("cls");
                     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                  Dom:   cout<<"\n\n\n\n";
			 		 cout<<setw(130)<<"Enter The area  :";
                     cin>>key1;
                     if(cin.fail() || key1<=0)
                      {
                      inputvalidate();
                      goto Dom;
                      }
                             int num=7;
                     check_search2(key1,num);

                                    validate12:
             int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate12;}
				 }
            case 5: {
                system("cls");
                return;
                    break;
                    }

            default:
				     {
				         cout<<setw(140)<<"you entered a wrong key,please try again"<<endl;
					    goto check2;

				     }
		     }
}
  }
//=========================================================================================================

void searchBYprice() {
	      again:
	  if(head==NULL && last==NULL)
		 {
		     system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		     cout<<setw(155)<<"There is no Record available, Please fill the Record First!!!\n";
         }
	  else {

		 int key1,key2,x;
            check3:
         system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        D: cout<<"\n\n\n\n";
		 cout<<setw(170)<<"1.Search homes  price range           4.Search homes above specific price  \n\n\n";
		 cout<<setw(170)<<"2.Search homes  by exact price        5.Return to the previous page        \n\n\n";
		 cout<<setw(170)<<"3.Search homes below specific price                                        \n\n\n";
		 cout<<setw(150)<<"   ";
		 cin>>x;
		 if(cin.fail() || x<=0)
              {
              inputvalidate();
              goto D;
              }
		 switch(x){
         case 1:
             {
                 system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
          Do: cout<<"\n\n\n\n";
             cout<<setw(130)<<"Enter the lower range :";
             cin>>key1;
             if(cin.fail() || key1<=0)
              {
              inputvalidate();
              goto Do;
              }
          Dom: cout<<setw(130)<<"Enter the upper range  :";
             cin>>key2;
             if(cin.fail() || key2<=0)
              {
              inputvalidate();
              cout<<"\n\n\n\n";
              goto Dom;
              }
                int num=3;
                check_search3(key1,key2,num);
                      validate13:
                 int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate13;}
             }

		 case 2:
		     {
               system("cls");
               cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
           ko:  cout<<"\n\n\n\n";
		       cout<<setw(130)<<"Enter The exact home price :";
		       cin>>key1;
		       if(cin.fail() || key1<=0)
                  {
                  inputvalidate();
                  goto ko;
                  }
               int num=8;
               check_search2(key1,num);
               validate14:
                int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate14;}
		 }
		 case 3:
		 	{
		 	    system("cls");
                cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            lif:cout<<"\n\n\n\n";
		 		cout<<setw(130)<<"Enter The area :";
		 		cin>>key1;
		 		if(cin.fail() || key1<=0)
              {
              inputvalidate();
              goto lif;
              }
		 		int num=9;
		 		check_search2(key1,num);
                               validate15:
                   int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate15;}
			 }
			 case 4:
			 	{
			 	    system("cls");
                    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                  fly: cout<<"\n\n\n\n";
			 		 cout<<setw(130)<<"Enter the price :";
                     cin>>key1;
                     if(cin.fail() || key1<=0)
                          {
                          inputvalidate();
                          goto fly;
                          }
                     int num=10;
                     check_search2(key1,num);
                                    validate16:
                   int q=search_again();
                         if(q==1)
                            {
                                system("cls");
                                goto again;}
                         else if(q==2)
                            {
                                system("cls");
                                return;}
                         else
                         {
                        system("cls");
                        cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                        goto validate16;}

                }

                case 5: {
                system("cls");
                return;
                    break;
                    }
                default:{
                             cout<<setw(140)<<"you enter a wrong key,please try again"<<endl;
					           goto check3;

                        }

				 }
		     }


}
//===================================================================================================
//SEARCH CHECKING FUNCTIONS DEFINITION
//===================================================================================================

void check_search(char name[],int num)
{
   	 Home_sell *i=last;
   	    int found=0;
		 while(i!=NULL)
		     {
if ((stricmp(name,i->Owner_name)==0 && num==1)
   || (stricmp(name,i->Home_location)==0 && num==3)
   || (stricmp(name,i->Home_number)==0 && num==2))
         {
     found=1;
   upper_discription();
    break;
         }
     i=i->prev;
    }

    while(i!=NULL)
    {
if((stricmp(name,i->Owner_name)==0 && num==1)
   || (stricmp(name,i->Home_location)==0 && num==3)
   || (stricmp(name,i->Home_number)==0 && num==2))
        {
     found=1;
   display_fun(i);
        }
    i=i->prev;
    }
                      if(found==0)
                      {
                      system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                      cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
                      cout<<endl;
                       }
}

//====================================================================================================================

void check_search2(int key,int num)
{
   	 Home_sell *i=last;
   	 int found=0;
		 while(i!=NULL) {
    if( (key==i->Home_age && num==2)
       || (key>i->Home_age && num==3)
       || (key<i->Home_age && num==4)
       || (i->Home_area==key && num==5)
       || (key>i->Home_area && num==6)
       || (key<i->Home_area && num==7)
       || (i->Home_price==key && num==8)
       || (key>i->Home_price && num==9)
       ||( i->Home_price>key && num==10)
       || (i->Home_type==key && num==11))
         {
    found=1;
    upper_discription();
    break;
        }
        i=i->prev;
                    }

    while(i!=NULL){
            if((key==i->Home_age && num==2)
       || (key>i->Home_age && num==3)
       || (key<i->Home_age && num==4)
       || (i->Home_area==key && num==5)
       || (key>i->Home_area && num==6)
       || (key<i->Home_area && num==7)
       || (i->Home_price==key && num==8)
       || (key>i->Home_price && num==9)
       ||( i->Home_price>key && num==10)
       ||(i->Home_type==key && num==11))
                {
        found=1;
        display_fun(i);
            }
    i=i->prev;
    }
                      if(found==0)
                      {
                          system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                      cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
                       cout<<endl;
                       }
}

//=======================================================================================================

void check_search3(int key1, int key2,int num)
{
   	 Home_sell *i=last;
   	 int found=0;
		 while(i!=NULL) {
          if((key1< i->Home_age) && (key2>i->Home_age)
            || ((key1< i-> Home_area) && (key2>i-> Home_area) && num==2)
            ||((key1< i-> Home_price) && (key2>i-> Home_price) && num==3))
         {
    found=1;
    upper_discription();
    break;
         }
     i=i->prev;
            }

    while(i!=NULL){
           if(((key1< i->Home_age) && (key2>i->Home_age) && num==1)
             ||((key1< i-> Home_area) && (key2>i-> Home_area) && num==2)
             ||((key1< i-> Home_price) && (key2>i-> Home_price) && num==3))
                {
                 found=1;
                 display_fun(i);
                }
            i=i->prev;
                  }
                      if(found==0)
                      {
                          system("cls");
                      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                      cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
                      cout<<endl;
                       }
}
//=====================================================================================================================
//UPDATING FUNCTIONS DEFINITION
//=======================================================================================================================

void update_Owner_name()
{
    int n;

      if(head==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
      }
    else
    {
  ke: n=0;
      char key[20];
      cin.ignore();
      system("cls");
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout<<setw(140)<<"Enter The Previous Owner name :";
      cin.getline(key,20);
      cout<<"\n\n\n";
          for(Home_sell *i=head;i!=NULL;i=i->next)
         {
            if(strcmp(key,i->Owner_name)==0)
            {
                char new1[20];
                cout<<setw(140)<<"Enter The New Owner name :";
                   n=1;
                   cin.getline(new1,20);
                   strcpy(i->Owner_name,new1);
                   system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                   cout<<setw(140)<<" UPDATE IS SUCSESSFUL";
                     break;
                  }
         }
          if(n==0)
          {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
            cout<<endl;
            return;
          }
          int num=check_update();
          if(num==1)
            goto ke;
          else
            return;
            }
     }

//=====================================================================================================================

  void update_Home_number()
{
    int n;
      if(head==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
      }
    else
    {
 ke:  n=0;
      char key[20];
      cin.ignore();
      system("cls");
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout<<setw(140)<<"Enter The Previous Home Number :";
      cin.getline(key,20);
      cout<<"\n\n\n";
          for(Home_sell *i=head;i!=NULL;i=i->next)
         {
            if(strcmp(key,i->Home_number)==0)
            {
                char new1[20];
                cout<<setw(140)<<"Enter The New Home Number :";
                        cin.getline(new1,20);
                   strcpy(i->Home_number,new1);
                  system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                   cout<<setw(140)<<"UPDATE IS SUCSESSFUL";
                       n++;
                     break;
                  }
                }

          if(n==0)
          {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
            cout<<endl;
            return;
          }
          int num=check_update();
          if(num==1)
            goto ke;
          else
            return;
            }
     }

//=====================================================================================================================

void update_Home_location()
{
    int n;
      if(head==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
      }
    else
    {
       n=0;
  ke: char key[20];
      cin.ignore();
      system("cls");
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout<<setw(140)<<"Enter The Previous Home Location :";
      cin.getline(key,20);
      cout<<"\n\n\n";
          for(Home_sell *i=head;i!=NULL;i=i->next)
         {
            if(strcmp(key,i->Home_location)==0)
            {
                 char new1[20];
                 cout<<setw(140)<<"Enter The New Home Location :";
                cin.getline(new1,20);
                   strcpy(i->Home_location,new1);
                    system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                   cout<<setw(140)<<"UPDATE IS SUCSESSFUL";
                       n++;
                     break;
                  }
                }


          if(n==0)
          {
           system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
            cout<<endl;
            return;
          }
          int num=check_update();
          if(num==1)
            goto ke;
          else
            return;
            }
     }


//=====================================================================================================================

void update_Home_type()
{
    int n;

      if(head==NULL)
      {
       system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
      }
    else
    {
       n=0;
      ke: int key;
      cin.ignore();
      system("cls");
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout<<setw(140)<<"Enter The Previous Home Type :G+";
      cin>>key;
          for(Home_sell *i=head;i!=NULL;i=i->next)
         {
            if(key==i->Home_type)
            {
                 int new1;
                cout<<setw(140)<<"Enter The New Home Type :G+";
                cin>>new1;
                i->Home_type=new1;
                system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                   cout<<setw(140)<<"UPDATE IS SUCSESSFUL";
                   n++;
                     break;
                  }
                }

          if(n==0)
          {
           system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
            cout<<endl;
            return;
          }
          int num=check_update();
          if(num==1)
            goto ke;
          else
            return;
            }
     }


//=====================================================================================================================

void update_Agent_number()
 {
    int n=0;

      if(head==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
      }
    else
    {
ke:    int key;
      system("cls");
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    D:  cout<<"\n\n\n\n";
      cout<<setw(140)<<"Enter The Previous Agent Number :+251-";
      cin>>key;
      if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
          for(Home_sell *i=head;i!=NULL;i=i->next)
         {
            if(key==i->Agent_number)
            {
                 int new1;
              no:  cout<<setw(140)<<"Enter The New Agent Number :+251-";
                        cin>>new1;
                        if(cin.fail() || key<=0)
                          {
                          inputvalidate();
                          cout<<"\n\n\n\n";
                          goto no;
                          }
                        int bro;
                        bro=i->Agent_number;
                        i->Agent_number=new1;
                        new1=bro;
                        n++;
                   cout<<"\n\n\n";
                   system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                   cout<<setw(140)<<"UPDATE IS SUCSESSFUL";
                     break;
                  }
                }

          if(n==0)
          {
           system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
            cout<<endl;
            return;
          }
           int num=check_update();
          if(num==1)
            goto ke;
          else
            return;
            }
     }

//=====================================================================================================================

void update_Home_age()
 {
     int n=0;
      if(head==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
      }
    else
    {
        int key;
  ke:   system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    D:  cout<<"\n\n\n\n";
        cout<<setw(140)<<"Enter The Previous Home Age :";
        cin>>key;
        if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
          for(Home_sell *i=head;i!=NULL;i=i->next)
         {
            if(key==i->Home_age)
            {
                 int new1;
                cout<<setw(140)<<"Enter The new Home Age ";
                        cin>>new1;
                        if(cin.fail() || key<=0)
                              {
                              inputvalidate();
                              cout<<"/n/n/n/n";
                              goto D;
                              }
                        int bro;
                        bro=i->Home_age;
                        i->Home_age=new1;
                        new1=bro;
                        n++;
                        system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                  cout<<setw(140)<<"UPDATE IS SUCSESSFUL";
                     break;
                  }
                }

          if(n==0)
          {
           system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
            cout<<endl;
            return;
          }
        int num=check_update();
          if(num==1)
          goto ke;
          else
          return;
          }
     }

//=====================================================================================================================
void update_Home_area()
 {
     int n=0;
      if(head==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
      }
    else
    {
ke:     int key;
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   D:   cout<<"\n\n\n\n";
        cout<<setw(140)<<"Enter The Previous Home Area :";
        cin>>key;
        if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
          for(Home_sell *i=head;i!=NULL;i=i->next)
         {
            if(key==i->Home_area)
            {
                 int new1;
              nit:  cout<<setw(140)<<"Enter The New Home Area :";
                        cin>>new1;
                        if(cin.fail() || key<=0)
                              {
                              inputvalidate();
                              cout<<"\n\n\n\n";
                              goto nit;
                              }
                        int bro;
                        bro=i->Home_area;
                        i->Home_area=new1;
                        new1=bro;
                        n++;
                        system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                  cout<<setw(140)<<"UPDATE IS SUCSESSFUL";
                     break;
                  }
                }

          if(n==0)
          {
           system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
            cout<<endl;
            return;
          }
         int num=check_update();
          if(num==1)
          goto ke;
          else
          return;
          }
     }


//=====================================================================================================================


void update_Home_price()
 {
     int n=0;
      if(head==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(140)<<"There is no Record available, Please fill the Record First!!!\n";
      }
    else
    {
ke:     int key;
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    D:  cout<<"\n\n\n\n";
        cout<<setw(140)<<"Enter The Previous Home Price :";
        cin>>key;
        if(cin.fail() || key<=0)
              {
              inputvalidate();
              goto D;
              }
          for(Home_sell *i=head;i!=NULL;i=i->next)
         {
            if(key==i->Home_price)
            {
                 int new1;
                cout<<setw(140)<<"Enter The New Home Price :";
                        cin>>new1;
                        int bro;
                        bro=i->Home_price;
                        i->Home_price=new1;
                        new1=bro;
                        n++;
                        system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                  cout<<setw(140)<<"UPDATE IS SUCSESSFUL";
                     break;
                  }
                }

          if(n==0)
          {
           system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"There is no Record available with this Item :"<<endl;
            cout<<endl;
            return;
          }
          int num=check_update();
          if(num==1)
          goto ke;
          else
          return;
          }
     }

//================================================================================================
//SYSTEM INTERACTING FUNCTIONS DEFINITION
//=====================================================================================================================

void exit_check()
{
            int m;
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            cout<<setw(140)<<"ARE YOU SURE YOU WANT TO EXIT FROM THE SYSTEM?\n\n";
            cout<<setw(127)<<"            1.YES           2.NO\n\n";
            cout<<setw(117)<<"          ";
            cin>>m;
            switch(m)
                    {
            case 1: {
            system("cls");
            exit(0);}
            break;
            default:{
            system("cls");
            return;
            }
           break;
            }

}

//================================================================================================
void inputvalidate()
{
      system("cls");
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
      cout<<setw(130)<<"Error!!!, Please Try Again \n\n";
      cin.clear();
      cin.ignore();
}
//================================================================================================

int check_update()
{
    int q;
      int check=1;
     D:   cout<<"\n\n\n\n";
          cout<<setw(150)<<"Would you like to update a Record again?\n\n";
          cout<<setw(137)<<"            1.YES               2.NO\n\n";
          cout<<setw(120)<<"          ";
          cin>>q;
          if(cin.fail() || q<=0)
              {
              inputvalidate();
              goto D;
              }
          switch(q)
          {
          case 1: {
             system("cls");
             return check;
            }
          default:{
            system("cls");
            check=2;
            break;}
          }
          return check;
}
//=========================================================================================================
int search_again()
{
    int ok=2;
                int q;
           N:   cout<<"\n\n\n\n";
                cout<<setw(140)<<"Would you like to Search again?\n\n";
                cout<<setw(135)<<"           1.YES              2.NO\n\n ";
                cout<<setw(120)<<"          ";
                cin>>q;
                if(cin.fail()|| q<0)
                {
                    system("cls");
                    inputvalidate();
                    goto N;
                }
                if(q==1)
                {
                system("cls");
                ok=1;
                return ok;
                }
                else if(q>2)
                        { cout<<setw(140)<<"You entered a wrong key,please try again"<<endl;
                          ok=3;
                          return ok;
                        }
   return ok;
}

//============================================================================================================
int check_delete()
{
      int q;
      int check=1;
      system("cls");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
          cout<<setw(140)<<"Are you Sure you want to Delete the Record?\n\n";
          cout<<setw(127)<<"            1.YES               2.NO\n\n";
          cout<<setw(117)<<"          ";
          cin>>q;
          switch(q)
          {
          case 1: {
             system("cls");
             return check;
            }
          default:{
            system("cls");
            check=2;
            break;}
          }
          return check;
}

//============================================================================================================

void home_clock()
    {
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<setw(120)<<"LOADING...";
    usleep(100000);
    system("cls");
    }
//==============================================================================================================
//SORTING FUNCTIONS DEFINITION
//==============================================================================================================

void sortByOwner_name()
{
    if(head==NULL && last==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
      }
      else{
struct Home_sell *i,*j;
 for(i=head;i->next!=nullptr;i=i->next)
 {
for(j=i->next;j!=NULL;j=j->next)
  {
         if(stricmp(i->Owner_name,j->Owner_name)>0)
        {
        swap_values(i,j);
        }
  }
    }
    choose_sort();
          }
}

//=====================================================================================================================


void SortByArea()
{
    if(head==NULL && last==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
      }
      else{
struct Home_sell *i,*j;
 for(i=head;i->next!=NULL;i=i->next)
 {
for(j=i->next;j!=NULL;j=j->next)
{
         if(i->Home_area>j->Home_area)
{ swap_values(i,j);
}}}
 choose_sort();
}

 }

//=====================================================================================================================

int SortByPrice()
{

    if(head==NULL && last==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
      }

      else{
struct Home_sell *i,*j;
 for(i=head;i->next!=NULL;i=i->next)
 {
for(j=i->next;j!=NULL;j=j->next)
{
         if(i->Home_price>j->Home_price)
{swap_values(i,j);

}}}

 choose_sort();
     }
     return 0;
  }

//=====================================================================================================================


int SortByHomeType()
{
      if(head==NULL && last==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
      }

      else{

struct Home_sell *i,*j;
 for(i=head;i->next!=NULL;i=i->next)
 {
for(j=i->next;j!=NULL;j=j->next)
{
         if(i->Home_type>j->Home_type)
{swap_values(i,j);

}}}
choose_sort();
}
return 0;
}

//=====================================================================================================================

int SortByHomeAge()
{
      if(head==NULL && last==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
      }
      else{
struct Home_sell *i,*j;
 for(i=head;i->next!=NULL;i=i->next)
 {
for(j=i->next;j!=NULL;j=j->next)
{
         if(i->Home_age>j->Home_age)
{swap_values(i,j);

}}}
choose_sort();
}
return 0;
}

//=====================================================================================================================


int SortByHomeNumber()
 {
       if(head==NULL && last==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
      }

      else{
struct Home_sell *i,*j;
 for(i=head;i->next!=NULL;i=i->next)
 {
for(j=i->next;j!=NULL;j=j->next)
{
         if(strcmp(i->Home_number,j->Home_number)>0)
{swap_values(i,j);
}}}
choose_sort();
}
return 0;
}

//=====================================================================================================================


int SortByHome_location()
 {
       if(head==NULL && last==NULL)
      {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
      }
      else{
struct Home_sell *i,*j;
 for(i=head;i->next!=NULL;i=i->next)
 {
for(j=i->next;j!=NULL;j=j->next)
{
         if(strcmp(i->Home_location,j->Home_location)>0)
{
swap_values(i,j);
                    }
                }
 }
 choose_sort();
            }
            return 0;
        }

//=====================================================================================================================

void choose_sort()
{
  int q;
  system("cls");
  bob:     cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
          cout<<setw(140)<<"Which type of Sorting do you want?  \n\n";
          cout<<setw(140)<<"   1.ASCENDING     2.DESENDING      \n\n";
          cout<<setw(115)<<"          ";
          cin>>q;
    if(cin.fail() || q<=0)
              {
              inputvalidate();
              goto bob;
              }
          switch(q)
          {
              case 1:{
                  system("cls");
                  display_content_forward();
                  return ;
              break;
              }
              default :{
                  system("cls");
                  display_content_backward();
              break;
              }
          }
}
//================================================================================================
//MAXIMUM AND MINIMUM RELATED FUNCTIONS DEFINITION
//================================================================================================
void minimumPrice()
{
    Home_sell *current = head->next;
    Home_sell *home_min_price = NULL;
    if (head != nullptr)
    {
        // start by assuming the first home has the lowest price
        int min_price = head->Home_price;
        home_min_price = head;
        while (current != nullptr)
        {
            if (current->Home_price < min_price)
            {
                home_min_price = current;
                min_price = current->Home_price;
                current = current->next;
            }

            else
            {
                current = current->next;
            }
        }
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout <<setw(150)<<"No home registered to be searched"<<endl;
        return;
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<setw(100)<<"The record with Minimum price \n\n\n";
            upper_discription();
            display_fun(home_min_price);

}
//================================================================================================
void maximumPrice()
{
    Home_sell *home_max_price = NULL;
    if (head != nullptr)
    {
        // start by assuming the first home has the highest price
        int max_price = head->Home_price;
        home_max_price = head;
        Home_sell *current = head->next;
        while (current != nullptr)
        {
            if (current->Home_price > max_price)
            {
                home_max_price = current;
                max_price = current->Home_price;
                current = current->next;
            }

            else
            {
                current = current->next;
            }
        }
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout <<setw(150)<<"No home registered to be searched"<< endl;
        return;
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout <<setw(100)<<"The record with Maximum price \n\n\n";
    upper_discription();
    display_fun(home_max_price);
}
//================================================================================================
void averageAge()
{
    float sum = 0;
    int t = 0;
    if(head==NULL){
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }
    else{
    for(Home_sell *i = head; i!=NULL; i=i->next){
       sum += i->Home_age;
       t++;
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<setw(145)<<"The Average Age of Available Homes Is: "<<sum/t<<" Year \n\n"<<endl;
    }
}
//================================================================================================
void averagePrice()
{
    float sum = 0;
    int t = 0;
    if(head==NULL){
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(145)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }
    else{
    for(Home_sell *i = head; i!=NULL; i=i->next){
       sum += i->Home_price;
       t++;
    }
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout<<setw(145)<<"The Average Price of Available Homes Is: "<<sum/t<<" Birr\n\n"<<endl;
    }
}
//================================================================================================
// delete home with the minimum age
void deleteHomewithMinimumAge()
{
    if (head != nullptr)
    {
        // start by assuming the first home has the lowest age
        char *home_num = head->Home_number;
        int min_age = head->Home_age;
        Home_sell *current = head->next;

        while (current != nullptr)
        {

            if (current->Home_age < min_age)
            {
                home_num = current->Home_number;
                min_age = current->Home_age;
                current = current->next;
            }

            else
            {
                current = current->next;
            }
        }
        deleteHome(home_num);
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(145)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }
}
//================================================================================================
// delete home with the maximum age
void deleteHomewithMaximumAge()
{
    if (head != nullptr)
    {
        // start by assuming the first home has the lowest age
        char *home_num = head->Home_number;
        int max_age = head->Home_age;
        Home_sell *current = head->next;

        while (current != nullptr)
        {

            if (current->Home_age > max_age)
            {
                home_num = current->Home_number;
                max_age = current->Home_age;
                current = current->next;
            }
            else
            {
                current = current->next;
            }
        }
        deleteHome(home_num);
    }
    else
    {
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(145)<<"There is no Record available, Please fill the Record First!!!\n";
        return;
    }
}
//================================================================================================
void deleteHome(char *home_num)
{
    if (head != nullptr)
    {
        Home_sell *current = head;
        if (current->Home_number == home_num)
        {
            head = current->next;
        }
        else
        {
            while (current != nullptr)
            {
                if (current->next->Home_number == home_num)
                {
                    current->next = current->next->next;
                    break;
                }
                else
                {
                    current = current->next;
                }
            }
        }
    }
}

//==============================================================================================
//TOP CALCULATING FUNCTIONS DEFINITION
//==============================================================================================

void swap_values(Home_sell*i, Home_sell*j)
{
char t[20];
int b;
strcpy(t,i->Owner_name);
strcpy(i->Owner_name,j->Owner_name);
strcpy(j->Owner_name,t);
strcpy(t,i->Home_location);
strcpy(i->Home_location,j->Home_location);
strcpy(j->Home_location,t);
strcpy(t,i->Home_number);
strcpy(i->Home_number,j->Home_number);
strcpy(j->Home_number,t);
b=i->Home_type;
i->Home_type=j->Home_type;
j->Home_type=b;
b=i->Home_area;
i->Home_area=j->Home_area;
j->Home_area=b;
b=i->Home_price;
i->Home_price=j->Home_price;
j->Home_price=b;
b=i->Home_age;
i->Home_age=j->Home_age;
j->Home_age=b;
b=i->Agent_number;
i->Agent_number=j->Agent_number;
j->Agent_number=b;
}
//====================================================================================================================
void top10bypric() {

    int count,i=0;
    Home_sell*temp1;
    Home_sell*temp2;
    if(head==NULL)
        {system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;}
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
 pp:    cout<<"\n\n\n\n";
        cout<<setw(150)<<"Enter the number of top records to be Displayed :";
        cin>>count;
        if(cin.fail())
        {
           system("cls");
           inputvalidate();
           goto pp;
        }
    if (count<i)
        {cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\n\n";
         cout<<setw(140)<<"The File has Insufficient Records "<<endl;
         }

    else {
        for(temp1=head; temp1->next!=NULL; temp1=temp1->next)
        {
            for(temp2=temp1->next; temp2!=NULL; temp2=temp2->next)
                if(temp1->Home_price < temp2->Home_price)
                {
                    swap_values(temp1,temp2);
                }
            if(count>0) {
                i++;
                count--;
                if(i==1)
             {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            upper_discription();
             }
            display_fun(temp1);
                        }
            else
                break;
        }
    }
}

//====================================================================================================================

void top7byhomeage() {

    int count,i=0;
    Home_sell*temp1;
    Home_sell*temp2;
    if(head==NULL)
        {system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;}
        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  L1:   cout<<"\n\n\n\n";
        cout<<setw(150)<<"Enter the number of top records to be Displayed :";
        cin>>count;
            if(cin.fail())
        {
           system("cls");
           inputvalidate();
           goto L1;
        }
    if (count<i)
        {cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\n\n";
         cout<<setw(140)<<"The File has Insufficient Records "<<endl;
         }

    else {
        for(temp1=head; temp1->next!=NULL; temp1=temp1->next)
        {
            for(temp2=temp1->next; temp2!=NULL; temp2=temp2->next)
                if(temp1->Home_age<temp2->Home_age)
                {
                    swap_values(temp1,temp2);
                }
            if(count>0) {
                i++;
                count--;
               if(i==1)
             {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            upper_discription();
            }
            display_fun(temp1);
                        }
            else
                break;
        }
    }
}
//===============================================================================================================

void top20byownername() {
    int count,i=0;
    Home_sell*temp1;
    Home_sell*temp2;
    if(head==NULL)
       {system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;}

        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  L1:   cout<<"\n\n\n\n";
        cout<<setw(150)<<"Enter the number of top records to be Displayed :";
        cin>>count;
         if(cin.fail())
        {
           system("cls");
           inputvalidate();
           goto L1;
        }
      if (count<i)
        {cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\n\n";
         cout<<setw(140)<<"The File has Insufficient Records "<<endl;
         }

    else {
        for(temp1=head; temp1->next!=NULL; temp1=temp1->next)
        {
            for(temp2=temp1->next; temp2!=NULL; temp2=temp2->next)
                if(strcmp(temp1->Owner_name,temp2->Owner_name)<0)
                {
                    swap_values(temp1,temp2);
                }
            if(count>0) {
                i++;
                count--;
                if(i==1)
            {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            upper_discription();
            }
            display_fun(temp1);
                        }
            else
                break;
        }
    }
}

//===============================================================================================================


void top15bylocation() {
    int count,i=0;
    Home_sell*temp1;
    Home_sell*temp2;
    if(head==NULL)
        {system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;}

        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  L1:   cout<<"\n\n\n\n";
        cout<<setw(150)<<"Enter the number of top records to be Displayed :";
        cin>>count;
         if(cin.fail())
        {
           system("cls");
           inputvalidate();
           goto L1;
        }
      if (count<i)
         {cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\n\n";
         cout<<setw(140)<<"The File has Insufficient Records "<<endl;
         }

    else {
        for(temp1=head; temp1->next!=NULL; temp1=temp1->next)
        {
            for(temp2=temp1->next; temp2!=NULL; temp2=temp2->next)
                if(strcmp(temp1->Home_location,temp2->Home_location)<0)
                {
                    swap_values(temp1,temp2);
                }
              if(count>0) {
                i++;
                count--;
             if(i==1)
             {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            upper_discription();
             }
            display_fun(temp1);
            }
            else
                break;
        }
    }
}

//===============================================================================================================


void top10byarea() {

    int count,i=0;
    Home_sell*temp1;
    Home_sell*temp2;
    if(head==NULL)
        {system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        cout<<setw(150)<<"There is no Record available, Please fill the Record First!!!\n";
        return;}

        system("cls");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  L1:   cout<<"\n\n\n\n";
        cout<<setw(150)<<"Enter the number of top records to be Displayed :";
        cin>>count;
         if(cin.fail())
        {
           system("cls");
           inputvalidate();
           goto L1;
        }
        if (count<i)
        {cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
         cout<<"\n\n\n\n";
         cout<<setw(140)<<"The File has Insufficient Records "<<endl;
         }

    else {
        for(temp1=head; temp1->next!=NULL; temp1=temp1->next)
        {
            for(temp2=temp1->next; temp2!=NULL; temp2=temp2->next)
                if(temp1->Home_area<temp2->Home_area)
                {
                    swap_values(temp1,temp2);
                }
            if(count>0) {
                i++;
                count--;
                if(i==1)
            {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            upper_discription();
            }
            display_fun(temp1);
                        }
            else
                break;
        }

    }
}

//===============================================================================================================

void display_fun(Home_sell* temp1)
{
     cout<<left;
     cout<<setw(20)<<temp1->Owner_name;
     cout<<setw(20)<<temp1->Home_number;
     cout<<setw(20)<<temp1->Home_location<<"G+"<<left;
     cout<<setw(20)<<temp1->Home_type;
     cout<<setw(20)<<temp1->Home_age;
     cout<<setw(20)<<temp1->Home_area<<"+251-"<<left;
     cout<<setw(20)<<temp1->Agent_number;
     cout<<right;
     cout<<setw(10)<<temp1->Home_price<<" Birr"<<right;
     cout<<endl;
     for(int i=0;i<165;i++)
     cout<<"_";
     cout<<endl;
}

//===============================================================================================================

void upper_discription()
{
    for(int i=0;i<165;i++)
    cout<<"_";
    cout<<endl;
    cout<<left;
    cout<<setw(20)<<"Owner name";
    cout<<setw(20)<<"Home number";
    cout<<setw(20)<<"Home location";
    cout<<setw(20)<<"Home type";
    cout<<setw(20)<<"Home age";
    cout<<setw(20)<<"Home area(sq mt)";
    cout<<setw(20)<<"Agent number";
    cout<<right;
    cout<<setw(24)<<"Home price\n";
    cout<<endl;
    for(int i=0;i<165;i++)
    cout<<"_";
    cout<<endl;
}

//===============================================================================================================
//=============================================END OF THE PROGRAM================================================
//===============================================================================================================
