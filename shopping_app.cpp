#include<bits/stdc++.h>
using namespace std;

void create();
void login();
void exit();

string name,address;
float Total=0;
long long int phn;
vector <string> vec;
class DC
{
    public:
        string name,date;
        int cvv;
        long long int num;
        DC(){
            system("cls");
            cout<<"\n\n\n\t\t\tEnter name written on card : ";
            cin>>name;
            cout<<"\n\t\t\tEnter expiry date of the card : ";
            cin>>date;
            cout<<"\n\t\t\tEnter card number : ";
            cin>>num;
            cout<<"\n\t\t\tEnter cvv : ";
            cin>>cvv;

        }
};
class prod{
    public:
        string unique_id;
        string Pname;
        int price;
};
class cartss : public prod{
    public:
        void ATC();
        void select();
        void menu();
        void products();
        void abc();
        void cart();
        void cod();
        void debit();
        void pay();
        void bill();
        void Remove();
};
int main()
{
    string c;
    cout<<"\n(Sign in Page)"<<endl;
    cout<<"\n\n\t\t__"<<endl;
    cout<<"\n\t\t\t\t\tWELCOME TO E-MARKET\n";
    cout<<"\t\t\t\t\t\t\t-Market For Quality Shopping"<<endl;
    cout<<"\t\t__"<<endl;
    cout<<"\n\n\t\t\t\t\t\tMENU"<<endl;
    cout<<"\n\t\tPRESS 1 TO CREATE ACCOUNT"<<endl;
    cout<<"\t\tPRESS 2 TO LOGIN"<<endl;
    cout<<" \t\tPRESS 3 TO EXIT"<<endl;
    cout<<"\n\t\tPlease enter your choice: ";
    cin>>c;
    cout<<endl;
    if(c=="1"){
        create();
    }
    else if (c=="2"){
        login();
    }
    else if (c=="3"){
        exit();
    }
    else{
        system("cls");
        main();
    }
}
void create()
{
    string id,pass;
    system("cls");
    cout<<"\n\t(NOTE:Kindly Avoid adding space between characters.)";
    cout<<"\n\n\tPlease Enter your email-id: ";
    cin>>id;
    cout<<"\n\tPlease Enter password: ";
    cin>>pass;

    ofstream f1("records.txt",ios::app);
    f1<<id<<' '<<pass<<endl;

    system("cls");
    cout<<"Account created succesfully!\n";
    main();
}
void login()
{
 int count;
 string id,pass,loginid,loginpass;
 system("cls");
 cout<<"\n\t(NOTE:Kindly Avoid adding space between characters.)";
 cout<<"\n\n\n\n\tPlease Enter your Name: ";
 cin>>name;
 cout<<"\n\tEnter your email-id: ";
 cin>>id;
 cout<<"\n\tEnter Password: ";
 cin>>pass;


 ifstream input("records.txt");

 while(input>>loginid>>loginpass)
 {
     if(loginid==id &&  loginpass==pass)
     {
         count=1;
         system("cls");
     }
 }
 input.close();
 if(count==1)
 {
     cout<<"\n\tLogin Successfull! :)"<<endl;;
     cout<<"\n\n\tWelcome "<<name<<" ";

 }
 else
    {
        cout<<"\n\tLogin Error!"<<endl;
        cout<<"\n\t (Kindly recheck your userid and password)\n";
        main();

    }
    cout << endl;
    cout << "\n\tEnter you Mobile Number : ";
    cin >> phn;
    cout << "\n\tEnter you Address : ";
    cin >> address;

    cartss C;
    C.menu();
}
void exit()
{
    system("cls");
    cout<<"\n\n\n\tThankyou! for visiting us :)!\n\n\n\n\n\n";
    //system.exit(0);
}
void cartss :: menu(){
    system("cls");
    string n;
    cout<<"\n\n\n\t\t\t--------------------------------------------------";
    cout<<"\n\t\t\t\t\tE-MARKET MAIN MENU"<<endl;
    cout<<"\t\t\t--------------------------------------------------"<<endl;
    cout<<"\n\n\t\t\t\t  |    (1) View Products          |"<<endl;
    cout<<"\t\t\t\t  |    (2) Select Products        |"<<endl;
    cout<<"\t\t\t\t  |    (3) View Cart              |"<<endl;
    cout<<"\t\t\t\t  |    (4) E-Bill                 |"<<endl;
    cout<<"\t\t\t\t  |    (5) Select Payment method  |"<<endl;
    cout<<"\t\t\t\t  |    (6) Exit                   |"<<endl;
    cout<<"\n\n\t\t\t Enter Your Choice : ";
    cin>>n;
    if (n=="1"){
        products();
    }
    else if (n=="2"){
        select();
    }
    else if (n=="3"){
        cart();
    }
    else if (n=="4"){
        bill();
    }
    else if (n=="5"){
        pay();
    }
    else if (n=="6"){
        system("cls");
        cout<<"Thank you! for visiting us :)!\n\n\n\n\n";
    }
    else{
        system("cls");
        menu();
    }
}

void cartss :: products(){
  int option;
  system("cls");
  cout<<"\n\t\t\t\t\t\tPRODUCT LIST";
  cout<<"\n\t\t\t\t\t__";
  cout<<"\n\n\n\t\t[SHOE SECTION]";
  cout<<"\n\t\t1.Jordan Mids ";
  cout<<"\n\t\t2.Jordan Highs";
  cout<<"\n\t\t3.Jordan Lows";
  cout<<"\n\t\t4.Jordan Dunks";
  cout<<"\n\t\t5.Yeezy Slides";
  cout<<"\n\n\t\t[BOTTOMS]";
  cout<<"\n\t\t1.Tailored pants";
  cout<<"\n\t\t2.Cargo Pants";
  cout<<"\n\t\t3.Joggers";
  cout<<"\n\t\t4.Jeans";
  cout<<"\n\t\t5.Denim Shorts";
  cout<<"\n\n\t\t[SHIRTS]";
  cout<<"\n\t\t1.Checked Patterns";
  cout<<"\n\t\t2.Stripes Style";
  cout<<"\n\t\t3.Half Sleeves";
  cout<<"\n\t\t4.Full Sleeves";
  cout<<"\n\t\t5.Slim Fit";
  cout<<"\n\n\t\t[JACKETS]";
  cout<<"\n\t\t1.Windcheater";
  cout<<"\n\t\t2.Puffer Jacket";
  cout<<"\n\t\t3.Bomber Jacket";
  cout<<"\n\t\t4.Denim Jacket";
  cout<<"\n\t\t5.Fleece Jacket";
  cout<<"\n\n\t\t[ACCESSORIES]";
  cout<<"\n\t\t1.Gold Rings";
  cout<<"\n\t\t2.Grey Shades";
  cout<<"\n\t\t3.Hat";
  cout<<"\n\t\t4.Pearl Necklace";
  cout<<"\n\t\t5.Platinum Bracelet"<<endl<<endl;
  cout<<"\n\t\t__";
  cout<<"\n\n\t\tPress 1 to go to Main Menu : ";
  cin>>option;
  switch(option){
    case 1:
        system("cls");
        menu();
        break;
    default:
        products();
  }
}
void cartss :: select(){
    system("cls");
  cout<<"\n\t\t\t\t\t\tPRODUCT LIST";
  cout<<"\n\t\t\t\t\t__";
  cout<<"\n\n\n\t\t[SHOE SECTION]";
  cout<<"\n\t\t1.Jordan Mids(SO1):               Rs.8999 ";
  cout<<"\n\t\t2.Jordan Highs(SO2):              Rs.12499";
  cout<<"\n\t\t3.Jordan Lows(SO3):               Rs.7650";
  cout<<"\n\t\t4.Jordan Dunks(SO4):              Rs.9999";
  cout<<"\n\t\t5.Yeezy Slides(SO5):              Rs.14250";

  cout<<"\n\n\t\t[BOTTOMS]";
  cout<<"\n\t\t6.Tailored pants(BO1):             Rs.2999";
  cout<<"\n\t\t7.Cargo Pants(BO2):                Rs.3499";
  cout<<"\n\t\t8.Joggers(BO3):                    Rs.1750";
  cout<<"\n\t\t9.Jeans(BO4):                      Rs.2999";
  cout<<"\n\t\t10.Denim Shorts(BO5):              Rs.2499";

  cout<<"\n\n\t\t[SHIRTS]";
  cout<<"\n\t\t11.Checked Patterns(SH1):          Rs.1650";
  cout<<"\n\t\t12.Stripes Style(SH2):             Rs.2099";
  cout<<"\n\t\t13.Half Sleeves(SH3):              Rs.1999";
  cout<<"\n\t\t14.Full Sleeves(SH4):              Rs.2999";
  cout<<"\n\t\t15.Slim Fit(SH5):                  Rs.1599";

  cout<<"\n\n\t\t[JACKETS]";
  cout<<"\n\t\t16.Windcheater(JA1):               Rs.6499";
  cout<<"\n\t\t17.Puffer Jacket(JA2):             Rs.4499";
  cout<<"\n\t\t18.Bomber Jacket(JA3):             Rs.7999";
  cout<<"\n\t\t19.Denim Jacket(JA4):              Rs.4999";
  cout<<"\n\t\t20.Fleece Jacket(JA5):             Rs.3750";

  cout<<"\n\n\t\t[ACCESSORIES]";
  cout<<"\n\t\t21.Gold Rings(AC1):                Rs.11999";
  cout<<"\n\t\t22.Grey Shades(AC2):               Rs.2999";
  cout<<"\n\t\t23.Hat(AC3):                       Rs.1499";
  cout<<"\n\t\t24.Pearl Necklace(AC4):            Rs.8499";
  cout<<"\n\t\t25.Platinum Bracelet(AC5):         Rs.12750";
    ATC();


}
void cartss :: ATC(){
    string p;
    cout<<"\n\n\n\t\t__";
     cout<<"\n\n\t\t(Enter '0' to go to MAIN MENU)";
    cout<<"\n\n\t\tEnter product number you want to add to cart : ";
    cin >> p;
    if (p=="1"){
        vec.push_back("SO1");
    }
    else if (p=="2"){
        vec.push_back("SO2");
    }
    else if (p=="3"){
        vec.push_back("SO3");
    }
    else if (p=="4"){
        vec.push_back("SO4");
    }
    else if (p=="5"){
        vec.push_back("SO5");
    }
    else if (p=="6"){
        vec.push_back("BO1");
    }
    else if (p=="7"){
        vec.push_back("BO2");
    }
    else if (p=="8"){
        vec.push_back("BO3");
    }
    else if (p=="9"){
        vec.push_back("BO4");
    }
    else if (p=="10"){
        vec.push_back("BO5");
    }
    else if (p=="11"){
        vec.push_back("SH1");
    }
    else if (p=="12"){
        vec.push_back("SH2");
    }
    else if (p=="13"){
        vec.push_back("SH3");
    }
    else if (p=="14"){
        vec.push_back("SH4");
    }
    else if (p=="15"){
        vec.push_back("SH5");
    }
    else if (p=="16"){
        vec.push_back("JA1");
    }
    else if (p=="17"){
        vec.push_back("JA2");
    }
    else if (p=="18"){
        vec.push_back("JA3");
    }
    else if (p=="19"){
        vec.push_back("JA4");
    }
    else if (p=="20"){
        vec.push_back("JA5");
    }
    else if (p=="21"){
        vec.push_back("AC1");
    }
    else if (p=="22"){
        vec.push_back("AC2");
    }
    else if (p=="23"){
        vec.push_back("AC3");
    }
    else if (p=="24"){
        vec.push_back("AC4");
    }
   else if (p=="25"){
        vec.push_back("AC5");
    }
    else if (p=="0"){
        menu();
    }
    abc();
}
void cartss :: abc(){
    string n;
    system("cls");

    cout<<"\n\n\n\n\t\t\t1.To Continue Shopping";
    cout<<"\n\n\t\t\t2.To view Cart";
    cout<<"\n\n\t\t\t3.To checkout";
    cout<<"\n\n\t\t\t4.Go to MAIN MENU";
    cout<<"\n\n\t\t\t__";
    cout<<"\n\n\n\n\t\t\tEnter Your Choice:";
    cin >> n;
    if (n=="1"){
        select();
    }
    else if (n=="2"){
        cart();
    }
    else if (n=="3"){
        bill();
    }
    else if (n=="4"){
        menu();
    }
    else {
        abc();
    }
}
void cartss :: cart(){
    cartss JM;
    JM.unique_id = "SO1";
    JM.Pname = "Jordan Mids";
    JM.price = 9000;

    cartss JH;
    JH.unique_id = "SO2";
    JH.Pname = "Jordan Highs";
    JH.price = 12500;

    cartss JL ;
    JL.unique_id = "SO3";
    JL.Pname = "Jordan Lows";
    JL.price = 7650;

    cartss JD;
    JD.unique_id = "SO4";
    JD.Pname = "Jordan Dunks";
    JD.price = 10000;

    cartss YS;
    YS.unique_id = "SO5";
    YS.Pname = "Yeezy Slides";
    YS.price = 14250;

    cartss TP;
    TP.unique_id = "BO1";
    TP.Pname = "Tailored Pants";
    TP.price = 3000;

    cartss CP;
    CP.unique_id = "BO2";
    CP.Pname = "Cargo Pants";
    CP.price = 3500;

    cartss JO;
    JO.unique_id = "BO3";
    JO.Pname = "Joggers";
    JO.price = 1750;

    cartss JE;
    JE.unique_id = "BO4";
    JE.Pname = "Jeans";
    JE.price = 3000;

    cartss DS;
    DS.unique_id = "BO5";
    DS.Pname = "Denim Shorts";
    DS.price = 2500;

    cartss CPS;
    CPS.unique_id = "SH1";
    CPS.Pname = "Checked Patterns";
    DS.price = 1650;

    cartss SS;
    SS.unique_id = "SH2";
    SS.Pname = "Stripes Style";
    SS.price = 2100;

    cartss HS;
    HS.unique_id = "SH3";
    HS.Pname = "Half Sleeves";
    HS.price = 2000;

    cartss FS;
    FS.unique_id = "SH4";
    FS.Pname = "Full Sleeves";
    FS.price = 3000;

    cartss SF;
    SF.unique_id = "SH5";
    SF.Pname = "Slim Fit";
    SF.price = 1600;

    cartss WC;
    WC.unique_id = "JA1";
    WC.Pname = "Wind cheater";
    WC.price = 6500;

    cartss PJ;
    PJ.unique_id = "JA2";
    PJ.Pname = "Puffer Jacket";
    PJ.price = 4500;

    cartss BJ;
    BJ.unique_id = "JA3";
    BJ.Pname = "Bomber Jacket";
    BJ.price = 8000;

    cartss DJ;
    DJ.unique_id = "JA4";
    DJ.Pname = "Denim Jacket";
    DJ.price = 5000;

    cartss FC;
    FC.unique_id = "JA5";
    FC.Pname = "Fleece Jacket";
    FC.price = 3750;

    cartss GR;
    GR.unique_id = "AC1";
    GR.Pname = "Gold Rings";
    GR.price = 12000;

    cartss GS;
    GS.unique_id = "AC2";
    GS.Pname = "Grey Shades";
    GS.price = 3000;

    cartss H;
    H.unique_id = "AC3";
    H.Pname = "Hats";
    H.price = 1500;

    cartss PN;
    PN.unique_id = "AC4";
    PN.Pname = "Pearl Necklace";
    PN.price = 8500;

    cartss PB;
    PB.unique_id = "AC5";
    PB.Pname = "Platinum Bracelet";
    PB.price = 12750;

    system("cls");
    cout<<"\n\t\t\t\t\t__";
    cout<<"\n\n\t\t\t\t\t\t\t[CART]";
    cout<<"\n\t\t\t\t\t__";
    cout<<"_"<<endl<<endl;
    float T=0;
    for (int i=0;i<vec.size();i++){

        if (vec[i]=="SO1"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<JM.unique_id;
            cout << "\n\t\t\t Product Name : "<<JM.Pname;
            cout << "\n\t\t\t Price : "<<JM.price;
            T+=JM.price;
        }
        else if (vec[i]=="SO2"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<JH.unique_id;
            cout << "\n\t\t\t Product Name : "<<JH.Pname;
            cout << "\n\t\t\t Price : "<<JH.price;
            T+=JH.price;
        }
        else if (vec[i]=="SO3"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<JL.unique_id;
            cout << "\n\t\t\t Product Name : "<<JL.Pname;
            cout << "\n\t\t\t Price : "<<JL.price;
            T+=JL.price;
        }
        else if (vec[i]=="SO4"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<JD.unique_id;
            cout << "\n\t\t\t Product Name : "<<JD.Pname;
            cout << "\n\t\t\t Price : "<<JD.price;
            T+=JD.price;
        }
        else if (vec[i]=="SO5"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<YS.unique_id;
            cout << "\n\t\t\t Product Name : "<<YS.Pname;
            cout << "\n\t\t\t Price : "<<YS.price;
            T+=YS.price;
        }

         else if (vec[i]=="BO1"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<TP.unique_id;
            cout << "\n\t\t\t Product Name : "<<TP.Pname;
            cout << "\n\t\t\t Price : "<<TP.price;
            T+=TP.price;
        }
        else if (vec[i]=="BO2"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<CP.unique_id;
            cout << "\n\t\t\t Product Name : "<<CP.Pname;
            cout << "\n\t\t\t Price : "<<CP.price;
            T+=CP.price;
        }
        else if (vec[i]=="BO3"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<JO.unique_id;
            cout << "\n\t\t\t Product Name : "<<JO.Pname;
            cout << "\n\t\t\t Price : "<<JO.price;
            T+=JO.price;
        }
        else if (vec[i]=="BO4"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<JE.unique_id;
            cout << "\n\t\t\t Product Name : "<<JE.Pname;
            cout << "\n\t\t\t Price : "<<JE.price;
            T+=JE.price;
        }
        else if (vec[i]=="BO5"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<DS.unique_id;
            cout << "\n\t\t\t Product Name : "<<DS.Pname;
            cout << "\n\t\t\t Price : "<<DS.price;
            T+=DS.price;
        }

         else if (vec[i]=="SH1"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<CPS.unique_id;
            cout << "\n\t\t\t Product Name : "<<CPS.Pname;
            cout << "\n\t\t\t Price : "<<CPS.price;
            T+=CPS.price;
        }
        else if (vec[i]=="SH2"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<SS.unique_id;
            cout << "\n\t\t\t Product Name : "<<SS.Pname;
            cout << "\n\t\t\t Price : "<<SS.price;
            T+=SS.price;
        }
        else if (vec[i]=="SH3"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<HS.unique_id;
            cout << "\n\t\t\t Product Name : "<<HS.Pname;
            cout << "\n\t\t\t Price : "<<HS.price;
            T+=HS.price;
        }
        else if (vec[i]=="SH4"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<FS.unique_id;
            cout << "\n\t\t\t Product Name : "<<FS.Pname;
            cout << "\n\t\t\t Price : "<<FS.price;
            T+=FS.price;
        }
        else if (vec[i]=="SH5"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<SF.unique_id;
            cout << "\n\t\t\t Product Name : "<<SF.Pname;
            cout << "\n\t\t\t Price : "<<SF.price;
            T+=SF.price;
        }

         else if (vec[i]=="JA1"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<WC.unique_id;
            cout << "\n\t\t\t Product Name : "<<WC.Pname;
            cout << "\n\t\t\t Price : "<<WC.price;
            T+=WC.price;
        }
        else if (vec[i]=="JA2"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<PJ.unique_id;
            cout << "\n\t\t\t Product Name : "<<PJ.Pname;
            cout << "\n\t\t\t Price : "<<PJ.price;
            T+=PJ.price;
        }
        else if (vec[i]=="JA3"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<BJ.unique_id;
            cout << "\n\t\t\t Product Name : "<<BJ.Pname;
            cout << "\n\t\t\t Price : "<<BJ.price;
            T+=BJ.price;
        }
        else if (vec[i]=="JA4"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<DJ.unique_id;
            cout << "\n\t\t\t Product Name : "<<DJ.Pname;
            cout << "\n\t\t\t Price : "<<DJ.price;
            T+=DJ.price;
        }
        else if (vec[i]=="JA5"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<FC.unique_id;
            cout << "\n\t\t\t Product Name : "<<FC.Pname;
            cout << "\n\t\t\t Price : "<<FC.price;
            T+=FC.price;
        }

         else if (vec[i]=="AC1"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<GR.unique_id;
            cout << "\n\t\t\t Product Name : "<<GR.Pname;
            cout << "\n\t\t\t Price : "<<GR.price;
            T+=GR.price;
        }
        else if (vec[i]=="AC2"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<GS.unique_id;
            cout << "\n\t\t\t Product Name : "<<GS.Pname;
            cout << "\n\t\t\t Price : "<<GS.price;
            T+=GS.price;
        }
        else if (vec[i]=="AC3"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<H.unique_id;
            cout << "\n\t\t\t Product Name : "<<H.Pname;
            cout << "\n\t\t\t Price : "<<H.price;
            T+=H.price;
        }
        else if (vec[i]=="AC4"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<PN.unique_id;
            cout << "\n\t\t\t Product Name : "<<PN.Pname;
            cout << "\n\t\t\t Price : "<<PN.price;
            T+=PN.price;
        }
        else if (vec[i]=="AC5"){
            cout << "\n\t\t\t"<<i+1<<"->";
            cout << "\n\t\t\t Code : "<<PB.unique_id;
            cout << "\n\t\t\t Product Name : "<<PB.Pname;
            cout << "\n\t\t\t Price : "<<PB.price;
            T+=PB.price;
        }

    }
    string n;
    cout<<"\n\n\t\t\t__";
    cout <<"\n\n\n\t\t\t*Total Amount : "<<T;
    cout<<"\n\n\t\t\t1.To Continue Shopping";
    cout<<"\n\n\t\t\t2.To Remove Item";
    cout<<"\n\n\t\t\t3.To checkout";
    cout<<"\n\n\t\t\t4.Go to MAIN MENU";
    cout<<"\n\n\t\t\tPress :";
    cin >> n;
    if (n=="1"){
        select();
    }
    else if (n=="3"){
        Total=T;
        bill();
    }
    else if (n=="2"){
        Remove();
    }
    else if (n=="4"){
        menu();
    }
    else{
        cart();
    }
}

void cartss :: bill(){
    string n;
    system("cls");
    cout<<"\n\t\t\t\t\t\tElectronic-Reciept";
    cout<<"\n\t\t\t\t\t_";
    cout << "\n\n\n\t\t\tCustomer Name : "<<name;
    cout << "\n\n\t\t\tCustomer Mobile Number : "<<phn;
    cout << "\n\n\t\t\tCustomer Address : "<<address;
    cout<<"\n\n\t\t\t------------------------------------";
    cout << "\n\n\t\t\tTotal Amount : "<<Total;
    cout << "\n\n\t\t\tGST : 18%";
    cout << "\n\n\t\t\tTotal Amount Payable : "<<Total+(Total*0.18);

    ofstream f2("Bill.txt",ios::app);
    f2<<"Customer Name: "<<name<<endl<<"Customer Mobile Number: "<<phn<<endl<<"Customer Address: "<<address<<endl<<"Total Amount Payable: "<<Total+(Total*0.18);

    cout<<"\n\t\t\t__";
    cout << "\n\n\t\t\tPress 1 to make Payment";
    cout << "\n\t\t\tPress 2 to Go to MAIN MENU";
    cout << "\n\t\t\tEnter your Choice:";
    cin >> n;

    if (n=="1"){
        pay();
    }
    else if (n=="2"){
        menu();
    }
    else{
        bill();
    }
}

void cartss :: pay(){
    string n;
    system("cls");
     cout<<"\n\t\t\t\t\tPAYMENT";
    cout<<"\n\t\t\t\t_";

    cout<<"\n\n\n\n\t\t\t1) Cash On Delivery";
    cout<<"\n\n\t\t\t2) Pay Using Debit Card ";
    cout<<"\n\n\t\t\t3) Exit";
    cout<<"\n\n\n\t\t\tSelect Payment option:";
    cin >> n;
    if (n=="1"){
        cod();
    }
    else if (n=="2"){
            debit();
    }
    else if (n=="3"){
        system("cls");
        cout<<"Thankyou! for visiting us :)!\n\n\n\n\n";
    }
    else {
        pay();
    }
}

void cartss :: cod(){
    system("cls");
    cout<<"\n\n\n\t\t\tPayment Mode selected successfully!"<<endl<<endl;
    cout <<"\n\t\t\tYour order will be delivered at- "<<address<< "   ASAP:)"<<endl;
    cout << endl<<endl<<endl<<endl;
}

void cartss :: debit(){
    DC d;
    int n;
    cout<<"\n\t\t\tYour Payment is successfull!";
    cout << endl<<endl<<endl<<endl;
}

void cartss :: Remove(){
    string rem;
    cout << "\t\t\tEnter the code of Removable : ";
    cin >> rem;
    vector <string> temp;
    for(int i=(vec.size()-1);i>=0;i--){
        if (vec[i]!=rem){
            temp.push_back(vec[i]);
            vec.pop_back();
        }
        else{
            vec.pop_back();
        }
    }
    for(int i=(temp.size()-1);i>=0;i--){
        vec.push_back(temp[i]);
        temp.pop_back();
    }
    cart();
}
