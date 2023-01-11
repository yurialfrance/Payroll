#include <iostream>  //cout and cin
#include <string> //for string
#include <windows.h> //for colors
#include <chrono> //para ma utilize yung date and time
#include <climits> // limit ng value
#include <ctime> //para magamit yung time
#include <map>
#include <cmath>

/*
 --------------------------------------------
| Copyright @2023                            |
| Created by: PLM BSIT 1-1                   |
|                 GROUP 3                    |
| Yuri Alfrance Egipto  Kristhia Lastra      |
| Rizza Mae Pardales    Alessandra San Jose  |
| Ricky Cabe            Carl Lachica         |
| Pocholo Balanac       Sharmaine Alauri    |
 --------------------------------------------
*/

using namespace std;

int main ()
{
    int login_logout;
    do{

    char letter_ans;


    system("cls"); // for clearing page
    HANDLE hdz= GetStdHandle(STD_OUTPUT_HANDLE); //declaring colors

/////////////////LOGIN Estetik print//////////////////////////////////////////
    SetConsoleTextAttribute(hdz,14);
    cout<<R"(
                         ___               ________          ________          ___          ________
                        |\  \             |\   __  \        |\   ____\        |\  \        |\   ___  \
                        \ \  \            \ \  \|\  \       \ \  \___|        \ \  \       \ \  \\ \  \
                         \ \  \            \ \  \\\  \       \ \  \  ___       \ \  \       \ \  \\ \  \
                          \ \  \____        \ \  \\\  \       \ \  \|\  \       \ \  \       \ \  \\ \  \
                           \ \_______\       \ \_______\       \ \_______\       \ \__\       \ \__\\ \__\
                            \|_______|        \|_______|        \|_______|        \|__|        \|__| \|__|
             )"<<'\n';

//////////////////End of Estetik Login Print///////////////////////////////////////

    string userName;
    string userPassword;
    int loginAttempt = 0;


    while (loginAttempt < 5)
    {

        SetConsoleTextAttribute(hdz,14);
        cout << "\t\t\t\t\t Please enter your username: ";
        SetConsoleTextAttribute(hdz,15);
        cin >> userName;
        SetConsoleTextAttribute(hdz,14);
        cout << "\t\t\t\t\t Please enter your password: ";
        SetConsoleTextAttribute(hdz,15);
        cin >> userPassword;

        if (userName == "user@manager" && userPassword == "pass123")
        {
    ////////////////////Loading Bar////////////////////////////////////////////////
    //Set ASCII to print special character.
    //Code page 437
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar1 = 177 /*Line line na load*/, bar2 = 219; /*Block na code*/

    cout << "\n\n\t\t\t\t\t\tWait a minute kapeng mainit...";
    cout << "\n\n\t\t\t\t\t\t";
    system("COLOR 0a"); //dark green
    for(int i = 0; i < 30; i++)
        cout << (char)bar1;

    cout <<"\r";
    cout <<"\t\t\t\t\t\t";
    for(int i = 0; i < 30; i++)
    {
        cout << (char)bar2;
        Sleep(150);
    }
  ///////////////////////End of Loading Bar///////////////////////////////////////////////

    system("cls"); // for clearing page
    SetConsoleTextAttribute(hdz,10);
    cout<<"\n\t\t\t\t\t\t\t  Successful Login!\n";
    system("Pause");
            SetConsoleTextAttribute(hdz,14);
            cout <<"\t\t\t\t\t\t----------------------------------- \n";
            cout <<"\t\t\t\t\t\t| Welcome to our system manager! "<<(char)1<<"|\n"; //char 1 for emoji
            cout <<"\t\t\t\t\t\t-----------------------------------\n";
            SetConsoleTextAttribute(hdz,15);
            break;

        }
        else
        {
            SetConsoleTextAttribute(hdz,12); //color red
            cout << "\n\t\t\t\t\t Invalid login attempt. Please try again. \n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            system("COLOR 0c"); //dark green
            cout<<R"(
                        _____                       _   _
                       |_   _|_ _ _ __ ___   __ _  | \ | | __ _
                         | |/ _` | '_ ` _ \ / _` | |  \| |/ _` |
                         | | (_| | | | | | | (_| | | |\  | (_| |
                         |_|\__,_|_| |_| |_|\__,_| |_| \_|\__,_|
                              Too Many Login Attempts
             )"<<'\n';

            return 0; //termination of program
    }

/////////////////////////////////////////////////////////////////
  // current date and time on the current system
   time_t now = time(0);

   // convert now to string form
   char* date_time = ctime(&now);

   cout << "\n\t\t\t\t\tThe current date and time is: "<<date_time << endl;
/////////////////////////////////////////////////////////////////
  do{ // buong code
  string fullName;
  int employeeCode;
  SetConsoleTextAttribute(hdz,14);
  cout << "\t\t\t\t\tType employee's full name: ";
  SetConsoleTextAttribute(hdz,15);
  cin>>ws;//clearing white spaces para ma read si getline
  getline (cin, fullName);
  cout<<endl;
  SetConsoleTextAttribute(hdz,14);
  cout<<"\t\t\t\t\tEnter employee code: ";
  SetConsoleTextAttribute(hdz,15);
  cin>>employeeCode;
  cout<<endl;



    double regular, basichrs, basicpay, daily, hourly, daysreported;
    double grosspay;
    double absentdays, absenthours, absentamount;
    double lateuthours, lateutamount;
    double overtime, otamount;
    int holyn, loan_op;
    int h;
    double holehrs, holpay;
    int pagibig;
    double taxinc, netpay, taxwith;
    double phealth;
    double sss;
	int option;
	double total_allowance = 0.0;
	double total_loan = 0.0;


    cout<<"\t\t\t\t\t[1] Weekly"<<endl;
    cout<<"\t\t\t\t\t[2] Semi-Monthly"<<endl;
    cout<<"\t\t\t\t\t[3] Monthly"<<endl;
    SetConsoleTextAttribute(hdz,14);
    cout<<"\t\t\t\t\tSelect Option: ";
    SetConsoleTextAttribute(hdz,15);
    cin>>option;

    cout<<endl;


        //WEEKLY
        if (option==1) {
            SetConsoleTextAttribute(hdz,14);
            cout<<"\t\t\t\t\tWEEKLY"<<endl;
            SetConsoleTextAttribute(hdz,15);
             SetConsoleTextAttribute(hdz,14);
             cout<<"\t\t\t\t\tENTER REGULAR PAY: ";
             SetConsoleTextAttribute(hdz,15);
             cin >> regular;

             daily = regular/26;

             cout << "\n\t\t\t\t\tDAILY RATE: " << daily;


             hourly = daily/8;

             cout << "\n\t\t\t\t\tHOURLY RATE: " << hourly;



        //LOOPING
        do {
            SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tENTER NUMBER OF REGULAR DAYS REPORTED: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> daysreported;
            if (daysreported > 7) {
                SetConsoleTextAttribute(hdz,12);
                cout << "\t\t\t\t\tERROR: Days reported must be less than or equal to 7." << endl;
                SetConsoleTextAttribute(hdz,15);
            }
            else if (daysreported == 0) {
                SetConsoleTextAttribute(hdz,12);
                cout << "\t\t\t\t\tERROR: Days reported must be less than or equal to 7 and not equal to 0." << endl;
                cout << "\t\t\t\t\tWow may suweldo pero di pumapasok? Ano yorn?" << endl;
                cout << "\t\t\t\t\tKaloka Babush!" << endl;
                SetConsoleTextAttribute(hdz,15);
                Sleep(1000);
                return 0;

            }
        } while (daysreported > 7);
        //END LOPPING

        basichrs = daysreported*8;

        cout << "\n\t\t\t\t\tBASIC PAY (HOURS): " << basichrs;


        basicpay = regular/4;

        cout << "\n\t\t\t\t\tBASIC PAY (AMOUNT): " << basicpay;



        //ABSENT
        SetConsoleTextAttribute(hdz,14);
        cout << "\n\n\t\t\t\t\tENTER NO. OF ABSENT DAYS: ";
        SetConsoleTextAttribute(hdz,15);
	    cin >> absentdays;

	    absenthours = (absentdays*8);

	    cout << "\n\t\t\t\t\tABSENT (HOURS): " << absenthours;


	    absentamount = (absenthours)*(hourly);


	    cout << "\n\t\t\t\t\tABSENT (AMOUNT): (" << absentamount << ")";

	    //END ABSENT


       //LATE
       SetConsoleTextAttribute(hdz,14);
       cout << "\n\n\t\t\t\t\tENTER LATE/UNDERTIME IN HOURS: ";
       SetConsoleTextAttribute(hdz,15);
       cin >> lateuthours;

	   cout << "\t\t\t\t\tLATE/UNDERTIME (HOURS):" << lateuthours;

	   lateutamount = hourly*lateuthours;

	   cout << "\n\t\t\t\t\tLATE/UNDERTIME (AMOUNT): (" << lateutamount << ")";
	   cout<<endl;
	   //END LATE

	   //OVERTIME
           otamount = 0;
           overtime = 0;
           cout << "\n\t\t\t\t\tOVERTIME (HOURS): " << overtime;
           cout << "\n\t\t\t\t\tOVERTIME (AMOUNT): " << otamount;
           cout<<endl;
       //END OVERTIME

	   //HOLIDAY
                holehrs = 0;
                holpay = 0;
               cout << "\n\t\t\t\t\tHOLIDAY PAY (HOURS): "<<holehrs;
               cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): "<<holpay;
               cout<<endl;
      //END HOLIDAY


     //ALLOWANCE
          bool has_another_allowance = true;

          while (has_another_allowance) {
            cout << "\n\t\t\t\t\tEnter the type of allowance";
            cout<<"\n\t\t\t\t\t  ______________________________";
            cout<<"\n\t\t\t\t\t | [1] for MEAL, [2] for LEAVE    |";
            cout<<"\n\t\t\t\t\t | [3] for RICE, [4] for MEDICAL  |";
            cout<<"\n\t\t\t\t\t | [5] for GIFTS,[6] for AWARDS   |";
            cout<<"\n\t\t\t\t\t  --------------------------------";
            SetConsoleTextAttribute(hdz,14);
            cout<<"\n\t\t\t\t\t: ";
            SetConsoleTextAttribute(hdz,15);
            int allowance_type;
            cin >> allowance_type;

            string allowance_type_name;
            switch (allowance_type) {
              case 1:
                allowance_type_name = "MEAL";
                break;
              case 2:
                allowance_type_name = "LEAVE";
                break;
              case 3:
                allowance_type_name = "RICE";
                break;
              case 4:
                allowance_type_name = "MEDICAL";
                break;
              case 5:
                allowance_type_name = "GIFTS";
                break;
              case 6:
                allowance_type_name = "AWARDS";
                break;
              default:
                allowance_type_name = "INVALID";
                break;
            }
            SetConsoleTextAttribute(hdz,14);
            cout << "\t\t\t\t\tEnter the amount of allowance: ";
            SetConsoleTextAttribute(hdz,15);
            double allowance_amount;
            cin >> allowance_amount;

            total_allowance += allowance_amount;
            SetConsoleTextAttribute(hdz,14);
            cout << "\t\t\t\t\tDo you have another allowance (y/n)? ";
            SetConsoleTextAttribute(hdz,15);
            char another_allowance;
            cin >> another_allowance;
            if (another_allowance == 'n') {
              has_another_allowance = false;
            }
          }

          cout << "\t\t\t\t\tTotal allowance: " << total_allowance << endl;

          //END ALLOWANCE




	   //GROSSPAY
	   grosspay = (basicpay-absentamount)-(lateutamount)+(otamount+holpay)+total_allowance;
		cout << "\n\n\t\t\t\t\t---------------------------------";
		cout << "\n\n\t\t\t\t\tTOTAL (GROSS PAY): " << grosspay;

		cout << "\n\n\t\t\t\t\t ---------------------------------";
		//END GROSSPAY


		//SSS
		int s;
		s = (basicpay-absentamount)-(lateutamount);

		switch (s)
		{
		case 537 ... 4249:
        sss = 45.00;
        cout<<"\n\t\t\t\t\tSSS: " << sss << endl;
        break;


        case 4250 ... 4749:
        sss = 50.63;
        cout<<"\n\t\t\t\t\tSSS: " << sss << endl;
        break;


        case 4750 ... 5249:
        sss = 56.25;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 5250 ... 5749:
        sss = 61.87;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 5750 ... 6249:
        sss = 67.50;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 6250 ... 6749:
        sss = 73.12;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 6750 ... 7249:
        sss = 78.75;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 7250 ... 7749:
        sss = 84.37;
        cout<<"\n\t\t\t\t\tSSS: "<< sss <<endl;
        break;


        case 7750 ... 8249:
        sss =90.00;
        cout<<"\n\t\t\t\t\tSSS: "<< sss <<endl;
        break;


        case 8250 ... 8749:
        sss = 95.62;
        cout<<"\n\t\t\t\t\tSSS: "<< sss <<endl;
        break;


        case 8750 ... 9249:
        sss = 101.25;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 9250 ... 9749:
        sss =106.87;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 9750 ... 10249:
        sss =112.50;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 10250 ... 10749:
        sss =118.12;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 10750 ... 11249:
        sss =123.75;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 11250 ... 11749:
        sss = 129.37;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 11750 ... 12249:
        sss = 135.00;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 12250 ... 12749:
        sss = 140.62;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 12750 ... 13249:
        sss = 146.25;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 13250 ... 13749:
        sss = 151.87;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 13750 ... 14249:
        sss =157.50;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 14250 ... 14749:
        sss = 163.12;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 14750 ... 15249:
        sss =168.75;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 15250 ... 15749:
        sss = 174.25;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 15750 ... 16249:
        sss = 180.00;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 16250 ... 16749:
        sss = 185.50;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 16750 ... 17249:
        sss = 191.25;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 17250 ... 17749:
        sss = 196.87;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 17750 ... 18249:
        sss = 202.50;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 18250 ... 18749:
        sss = 208.12;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 18750 ... 19249:
        sss = 213.75;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 19250 ... 19749:
        sss = 219.37;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 19750 ... 20249:
        sss = 225.00;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 20250 ... 20749:
        sss = 230.63;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 20750 ... 21249:
        sss = 236.25;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 21250 ... 21749:
        sss = 241.87;
        cout<<"\n\t\t\t\t\tSSS"<< sss << endl;
        break;


        case 21750 ... 22249:
        sss = 247.50;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 22250 ... 22749:
        sss = 253.12;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 22750 ... 23249:
        sss = 258.75;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 23250 ... 23749:
        sss = 264.37;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 23750 ... 24249:
        sss = 270.00;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 24250 ... 24749:
        sss = 275.62;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 24750 ... 25249:
        sss = 281.37;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 25250 ... 25749:
        sss = 286.87;
        cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
        break;


        case 25750 ... 26249:
        sss = 292.50;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 26250 ... 26749:
        sss = 298.00;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 26750 ... 27249:
        sss = 303.75;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 27250 ... 27749:
        sss = 309.25;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 27750 ... 28249:
        sss = 315.00;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 28250 ... 28749:
        sss = 320.50;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 28750 ... 29249:
        sss = 326.25;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 29250 ... 29749:
        sss =331.88;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        case 29750 ... INT_MAX:
        sss = 337.50;
        cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
        break;


        default:
        cout<<"\t\t\t\t\tInvalid"<<endl;
        break;

		}
		//END SSS


		//PHILHEALTH
        int p;
        p = regular;

        switch (p)
        {
            case 0 ... 10000:
            phealth = 56.25;
            cout<<"\n\t\t\t\t\tPhilHealth: "<<phealth<<endl;

            break;

            case 10001 ... 89999:
            phealth = ((p*0.045)/2)/4;
            cout << "\n\t\t\t\t\tPhilHealth: " << phealth << endl;
            break;

            case 90000 ... INT_MAX:
            phealth = 506.25;
            cout<<"\n\t\t\t\t\tPhilHealth: "<<phealth<<endl;
            break;
        }
        //END PHILHEALTH


            //PAGIBIG
            do {
                SetConsoleTextAttribute(hdz,14);
                cout << "\n\n\t\t\t\t\tENTER PAG-IBIG CONTRIBUTION: ";
                SetConsoleTextAttribute(hdz,15);
                cin >> pagibig;
                if (pagibig < 50){
                    SetConsoleTextAttribute(hdz,12);
                    cout << "\n\n\t\t\t\t\tERROR: Minimum amount is 50.00.";
                    SetConsoleTextAttribute(hdz,15);
                }
            } while (pagibig < 50);


            cout << "\n\t\t\t\t\t---------------------------------";
            //END PAGIBIG



            //TAX
            taxinc = (grosspay-sss)-(phealth)-(pagibig);
            cout << "\n\n\t\t\t\t\tTAXABLE INCOME: " << taxinc;

            int i;
            i = taxinc;

            switch (i)
            {
                case 0 ... 10416:
                taxwith = 0;
                cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                break;

                case 10417 ... 16666:
                taxwith = ((taxinc - 10417)*(0.20)) + 0;
                cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                break;

                case 16667 ... 33332:
                taxwith = ((taxinc - 16667)*(0.25)) + 1250;
                cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                break;

                case 33333 ... 83332:
                taxwith = ((taxinc - 33333)*(0.30)) + 5416.67;
                cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                break;

                case 83333 ... 333332:
                taxwith = ((taxinc - 83333)*(0.32)) + 20416.67;
                cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                break;

                case 333333 ... INT_MAX:
                taxwith = ((taxinc - 333333)*(0.35)) + 100416.67;
                cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                break;
            }
            //END TAX

            //LOAN
            int loantype, loanTerm;
                double loanAmount, interestRate, monthlyPayment;
                bool has_another_loan= true;
                int loan_type;

             SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tDO YOU WANT TO ENTER LOAN?\n\t\t\t\t\t[1]Yes\n\t\t\t\t\t[2]No\n\t\t\t\t\t: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> loan_op;

            if (loan_op == 1)
            {
                 while (has_another_loan) {
                    cout << "\n\t\t\t\t\tEnter the type of loan";
                    cout<<"\n\t\t\t\t\t  __________________________________________";
                cout<<"\n\t\t\t\t\t | [1] for PAYROLL LOAN, [2] for SSS LOAN       |";
                cout<<"\n\t\t\t\t\t | [3] for PERSONAL LOAN, [4] for PAG-IBIG LOAN |";
                cout<<"\n\t\t\t\t\t | [5] for AUTO LOAN                            |";
                cout<<"\n\t\t\t\t\t  ----------------------------------------------";
                SetConsoleTextAttribute(hdz,14);
                cout<<"\n\t\t\t\t\t: ";
                SetConsoleTextAttribute(hdz,15);
                cin >> loan_type;

                string loan_type_name;
                switch (loan_type) {
                  case 1:
                    loan_type_name = "PAYROLL LOAN";
                    break;
                  case 2:
                    loan_type_name = "SSS LOAN";
                    break;
                  case 3:
                    loan_type_name = "PERSONAL LOAN";
                    break;
                  case 4:
                    loan_type_name = "PAG-IBIG LOAN";
                    break;
                  case 5:
                    loan_type_name = "AUTO LOAN";
                    break;
                  default:
                    loan_type_name = "INVALID";
                    break;
                }
                       do {
                            SetConsoleTextAttribute(hdz,14);
                            cout << "\n\n\t\t\t\t\tENTER LOAN AMOUNT: ";
                            SetConsoleTextAttribute(hdz,15);
                            cin >> loanAmount;
                            if (loanAmount < 500){
                                SetConsoleTextAttribute(hdz,12);
                                cout << "\t\t\t\t\tERROR: Minimum amount is 500.00.";
                                SetConsoleTextAttribute(hdz,15);
                            }
                        } while (loanAmount < 500);

                        do {
                            SetConsoleTextAttribute(hdz,14);
                            cout << "\n\n\t\t\t\t\tENTER INTEREST RATE (%): ";
                            SetConsoleTextAttribute(hdz,15);
                            cin >> interestRate;
                            if  (interestRate < 1.3)
                            {
                                SetConsoleTextAttribute(hdz,12);
                                cout << "\t\t\t\t\tERROR: Minimum interest rate is 1.3% and Maximum rate is 15%.";
                                SetConsoleTextAttribute(hdz,15);
                            }
                        } while (interestRate < 1.3);

                          SetConsoleTextAttribute(hdz,14);
                          cout << "\t\t\t\t\tSELECT LOAN TERM (MONTHS): \n\t\t\t\t\t[] 1\n\t\t\t\t\t[] 3\n\t\t\t\t\t[] 12\n\t\t\t\t\t[] 6\n\t\t\t\t\t[] 18\n\t\t\t\t\t[] 24\n\t\t\t\t\t[] 30\n\t\t\t\t\t[] 36\n\t\t\t\t\t[] 60\n\t\t\t\t\t[] 84\n\t\t\t\t\t[] 240\n\t\t\t\t\t: ";
                SetConsoleTextAttribute(hdz,15);
                cin >> loanTerm;

                monthlyPayment = (loanAmount * interestRate) / (1 - pow(1 + interestRate, -loanTerm));
                cout << "\t\t\t\t\tLOAN: " << monthlyPayment << endl;

                total_loan+= monthlyPayment ;

                SetConsoleTextAttribute(hdz,14);
                cout << "\t\t\t\t\tDo you have another loan(y/n)?: ";
                SetConsoleTextAttribute(hdz,15);
                char another_loan;
                cin >> another_loan;
                if (another_loan== 'n') {
                  has_another_loan= false;
                }
                }

                cout << "\t\t\t\t\tTotal loan: " << total_loan << endl;

        }

            else if (loan_op == 2)
            {
                total_loan = 0;
               cout << "\n\t\t\t\t\tTOTAL LOAN: "<<total_loan;
            }

            else
            {
                cout << "\t\t\t\t\tInvalid";
            }

            //END LOAN



                    //NETPAY
                    cout << "\n\n\t\t\t\t\t---------------------------------";
                    double netdeduc;
                    netdeduc = sss+phealth+pagibig+taxwith+total_loan;
                    cout << "\n\t\t\t\t\t         (" << netdeduc << ")";

                    netpay = grosspay-netdeduc;
                    cout << "\n\n\t\t\t\t\tNET PAY: " << netpay;
            }
                    //END NETPAY
                    //END MONTHLY

            //END NETPAY
            //END WEEKLY


            //SEMI-MONTHLY
            else if (option==2) {
            SetConsoleTextAttribute(hdz,14);
            cout<<"\t\t\t\t\tSEMI-MONTHLY"<<endl;
            cout<<"\t\t\t\t\tENTER REGULAR PAY: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> regular;

            daily = regular/26;

            cout << "\n\t\t\t\t\tDAILY RATE: " << daily;

            hourly = daily/8;

            cout << "\n\t\t\t\t\tHOURLY RATE: " << hourly;

            //LOOPING
            do {
                SetConsoleTextAttribute(hdz,14);
                cout << "\n\n\t\t\t\t\tENTER NUMBER OF REGULAR DAYS REPORTED: ";
                SetConsoleTextAttribute(hdz,15);
                cin >> daysreported;
                if (daysreported > 16) {
                    SetConsoleTextAttribute(hdz,12);
                    cout << "\t\t\t\t\tERROR: Days reported must be less than or equal to 16." << endl;
                    SetConsoleTextAttribute(hdz,15);
                }
                else if (daysreported == 0) {
                SetConsoleTextAttribute(hdz,12);
                cout << "\t\t\t\t\tERROR: Days reported must be less than or equal to 16 and not equal to 0." << endl;
                cout << "\t\t\t\t\tWow may suweldo pero di pumapasok? Ano yorn?" << endl;
                cout << "\t\t\t\t\tKaloka Babush!" << endl;
                SetConsoleTextAttribute(hdz,15);
                Sleep(1000);
                return 0;

            }
            } while (daysreported > 16);
            //END LOPPING

             basichrs = daysreported*8;

            cout << "\n\t\t\t\t\tBASIC PAY (HOURS): " << basichrs;

            basicpay = regular/2;

            cout << "\n\t\t\t\t\tBASIC PAY (AMOUNT): " << basicpay;


            //ABSENT
            SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tENTER NO. OF ABSENT DAYS: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> absentdays;

            absenthours = (absentdays*8);

            cout << "\n\t\t\t\t\tABSENT (HOURS): " << absenthours;

            absentamount = (absenthours)*(hourly);

            cout << "\n\t\t\t\t\tABSENT (AMOUNT): (" << absentamount << ")";
            //END ABSENT

            //LATE
            SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tENTER LATE/UNDERTIME IN HOURS: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> lateuthours;

            cout << "\t\t\t\t\tLATE/UNDERTIME (HOURS):" << lateuthours;

            lateutamount = hourly*lateuthours;

            cout << "\n\t\t\t\t\tLATE/UNDERTIME (AMOUNT): (" << lateutamount << ")";
            //END LATE


            //OVERTIME
            //LOOPING
            do {
            SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tENTER REGULAR OVERTIME IN HOURS: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> overtime;
                if (overtime >= (daysreported*5)) {
                     cout << "\t\t\t\t\tOvertime hours is only 5:00 P.M to 10:00 P.M. For " << daysreported << " days reported, you cannot exceed " << (daysreported*5) << " hours in overtime.";
                }
            } while (overtime >= (daysreported*5));
            //END LOPPING
            //END OVERTIME


           otamount = hourly*overtime;
           cout << "\t\t\t\t\tOVERTIME (HOURS): " << overtime;
           cout << "\n\t\t\t\t\tOVERTIME (AMOUNT): " << otamount;


            //HOLIDAY
            SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tREPORTED DURING HOLIDAY?\n\t\t\t\t\t[1]Yes\n\t\t\t\t\t[2]No\n\t\t\t\t\t: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> holyn;

            if (holyn == 1)
            {
                int month, day;
            int year = 2023; // Use the current year as the default year

            // Create maps to store the regular holidays and special non-working days
              map<pair<int, int>, string> regular_holidays;
              regular_holidays[make_pair(1, 1)] = "NEW YEAR";
              regular_holidays[make_pair(6, 12)] = "INDEPENDENCE DAY ";
              regular_holidays[make_pair(12, 25)] = "CHRISTMAS DAY";
              regular_holidays[make_pair(4, 6)] = "MAUNDY THURSDAY";
              regular_holidays[make_pair(4, 7)] = "GOOD FRIDAY";
              regular_holidays[make_pair(4, 10)] = "MONDAY NEAREST ARAW NG KAGITINGAN";
              regular_holidays[make_pair(5, 1)] = "LABOR DAY";
              regular_holidays[make_pair(8, 28)] = "NATIONAL HEROES’ DAY";
              regular_holidays[make_pair(11, 27)] = "MONDAY NEAREST BONIFACIO DAY";
              regular_holidays[make_pair(12, 30)] = "RIZAL DAY";

              map<pair<int, int>, string> non_working_holidays;
              non_working_holidays[make_pair(1, 2)] = "ADDITIONAL SPECIAL NON-WORKING DAY (MONDAY NEAREST NEW YEAR’S DAY)";
              non_working_holidays[make_pair(2, 25)] = "EDSA PEOPLE POWER REVOLUTION ANNIVERSARY";
              non_working_holidays[make_pair(4, 8)] = "BLACK SATURDAY";
              non_working_holidays[make_pair(8, 21)] = "NINOY AQUINO DAY";
              non_working_holidays[make_pair(11, 1)] = "ALL SAINTS' DAY";
              non_working_holidays[make_pair(11, 2)] = "ALL SOULS' DAY";
              non_working_holidays[make_pair(12, 8)] = "FEAST OF THE IMMACULATE CONCEPTION OF MARY";
              non_working_holidays[make_pair(12, 31)] = "LAST DAY OF THE YEAR (NEW YEAR'S EVE)";

              SetConsoleTextAttribute(hdz,14);
              cout << "\t\t\t\t\tEnter a date (mm/dd): ";
              SetConsoleTextAttribute(hdz,15);
              cin >> month >> day;

              // Calculate yung day of the week gamit Zeller's congruence
              int h = (day + (13*(month+1))/5 + year + (year/4) - (year/100) + (year/400)) % 7 +1;

              // Convert yung value ng day sa words
              string day_of_week;
              switch (h) {
                case 7:
                  day_of_week = "SUNDAY";
                  break;
                case 1:
                  day_of_week = "MONDAY";
                  break;
                case 2:
                  day_of_week = "TUESDAY";
                  break;
                case 3:
                  day_of_week = "WEDNESDAY";
                  break;
                case 4:
                  day_of_week = "THURSDAY";
                  break;
                case 5:
                  day_of_week = "FRIDAY";
                  break;
                case 6:
                  day_of_week = "SATURDAY";
                  break;
              }

              // Check if yung date ay special holiday or special non-working day
              pair<int, int> date = make_pair(month, day);

              if (regular_holidays.count(date) > 0 && day_of_week != "Sunday") {
                cout << "\t\t\t\t\tDAY: " << day_of_week << " // HOLIDAY: "  << regular_holidays[date] << endl;
                cout << "\n\t\t\t\t\tEnter no. of hours reported: ";
                             cin >> holehrs;
                                if (holehrs <= 8  )
                                {
                                   holpay = (hourly*2)*holehrs;
                                   cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                   cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else if (holehrs >= 9 and holehrs <= 13)
                                {
                                   holpay = (hourly*2)*(1.3)*(holehrs-8);
                                   cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                   cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else if (holehrs >= 13 and holehrs <= 21)
                                {
                                    holpay = ((hourly*2)*holehrs)+((hourly*2)*(1.3)*(holehrs-8))+(hourly*2)*(0.10)*(holehrs-13);
                                    cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                    cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else
                                {
                                   cout << "\t\t\t\t\tInvalid";
                                }

              } else if (non_working_holidays.count(date) > 0 && day_of_week != "Sunday") {
                cout << "\t\t\t\t\tDAY: " << day_of_week << " // HOLIDAY: "  << non_working_holidays[date] << endl;
                SetConsoleTextAttribute(hdz,14);
                cout << "\n\t\t\t\t\tEnter no. of hours reported: ";
                SetConsoleTextAttribute(hdz,15);
                             cin >> holehrs;
                                if (holehrs <= 8  )
                                {
                                   holpay = (hourly*1.30)*holehrs;
                                   cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                   cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else if (holehrs >= 9 and holehrs <= 13)
                                {
                                   holpay = (hourly*1.30)*(1.30)*(holehrs-8);
                                   cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                   cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else if (holehrs >= 13 and holehrs <= 21)
                                {
                                    holpay = ((hourly*1.30)*holehrs)+((hourly*1.30)*(1.30)*(holehrs-8))+(hourly*1.30)*(0.10)*(holehrs-13);
                                    cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                    cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else
                                {
                                   cout << "\t\t\t\t\tInvalid";
                                }

              } else {
                cout << "\t\t\t\t\tThe day of the week is: " << day_of_week << endl;
              }

        }

            else if (holyn == 2)
            {
                holehrs = 0;
                holpay = 0;
               cout << "\n\t\t\t\t\tHOLIDAY PAY (HOURS): "<<holehrs;
               cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): "<<holpay;
            }

            else
            {
                cout << "\t\t\t\t\tInvalid";
            }

            //END HOLIDAY

            //ALLOWANCE
             bool has_another_allowance = true;

          while (has_another_allowance) {
                cout<<endl;
            cout << "\n\t\t\t\t\tEnter the type of allowance";
            cout<<"\n\t\t\t\t\t  ______________________________";
            cout<<"\n\t\t\t\t\t | [1] for MEAL, [2] for LEAVE    |";
            cout<<"\n\t\t\t\t\t | [3] for RICE, [4] for MEDICAL  |";
            cout<<"\n\t\t\t\t\t | [5] for GIFTS,[6] for AWARDS   |";
            cout<<"\n\t\t\t\t\t  --------------------------------";
            SetConsoleTextAttribute(hdz,14);
            cout<<"\n\t\t\t\t\t: ";
            SetConsoleTextAttribute(hdz,15);
            int allowance_type;
            cin >> allowance_type;

            string allowance_type_name;
            switch (allowance_type) {
              case 1:
                allowance_type_name = "MEAL";
                break;
              case 2:
                allowance_type_name = "LEAVE";
                break;
              case 3:
                allowance_type_name = "RICE";
                break;
              case 4:
                allowance_type_name = "MEDICAL";
                break;
              case 5:
                allowance_type_name = "GIFTS";
                break;
              case 6:
                allowance_type_name = "AWARDS";
                break;
              default:
                allowance_type_name = "INVALID";
                break;
            }
            SetConsoleTextAttribute(hdz,14);
            cout << "\t\t\t\t\tEnter the amount of allowance: ";
            SetConsoleTextAttribute(hdz,15);
            double allowance_amount;
            cin >> allowance_amount;

            total_allowance += allowance_amount;

            SetConsoleTextAttribute(hdz,14);
            cout << "\t\t\t\t\tDo you have another allowance (y/n)?: ";
            SetConsoleTextAttribute(hdz,15);
            char another_allowance;
            cin >> another_allowance;
            if (another_allowance == 'n') {
              has_another_allowance = false;
            }
          }

          SetConsoleTextAttribute(hdz,14);
          cout << "\t\t\t\t\tTotal allowance: " << total_allowance << endl;
          SetConsoleTextAttribute(hdz,15);
          //END ALLOWANCE


            //GROSSPAY
            grosspay = (basicpay-absentamount)-(lateutamount)+(otamount+holpay)+total_allowance;
            cout << "\n\n\t\t\t\t\t---------------------------------";
            cout << "\n\n\t\t\t\t\tTOTAL (GROSS PAY): " << grosspay;

            cout << "\n\n\t\t\t\t\t---------------------------------";
            //END GROSSPAY


            //SSS
            int s;
            s = (basicpay-absentamount)-(lateutamount)+(otamount+holpay);

            switch (s)
				{
				 case 537 ... 4249:
                    sss = 90.00;
                    cout<<"\n\t\t\t\t\tSSS: " << sss << endl;
                    break;


                    case 4250 ... 4749:
                    sss = 101.25;
                    cout<<"\n\t\t\t\t\tSSS: " << sss << endl;
                    break;


                    case 4750 ... 5249:
                    sss = 112.50;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 5250 ... 5749:
                    sss = 123.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 5750 ... 6249:
                    sss = 135.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 6250 ... 6749:
                    sss = 146.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 6750 ... 7249:
                    sss = 157.50;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 7250 ... 7749:
                    sss = 168.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss <<endl;
                    break;


                    case 7750 ... 8249:
                    sss =180.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss <<endl;
                    break;


                    case 8250 ... 8749:
                    sss = 191.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss <<endl;
                    break;


                    case 8750 ... 9249:
                    sss = 202.50;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 9250 ... 9749:
                    sss =213.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 9750 ... 10249:
                    sss =225.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 10250 ... 10749:
                    sss =236.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 10750 ... 11249:
                    sss =247.50;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 11250 ... 11749:
                    sss = 258.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 11750 ... 12249:
                    sss = 270.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 12250 ... 12749:
                    sss = 281.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 12750 ... 13249:
                    sss = 292.50;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 13250 ... 13749:
                    sss = 303.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 13750 ... 14249:
                    sss =315.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 14250 ... 14749:
                    sss = 326.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;

                    case 14750 ... 15249:
                    sss =337.50;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 15250 ... 15749:
                    sss = 348.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 15750 ... 16249:
                    sss = 360.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 16250 ... 16749:
                    sss = 371.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 16750 ... 17249:
                    sss = 382.50;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 17250 ... 17749:
                    sss = 393.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 17750 ... 18249:
                    sss = 405.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 18250 ... 18749:
                    sss = 416.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 18750 ... 19249:
                    sss = 427.50;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 19250 ... 19749:
                    sss = 438.75;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 19750 ... 20249:
                    sss = 450.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 20250 ... 20749:
                    sss = 461.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 20750 ... 21249:
                    sss = 472.50;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 21250 ... 21749:
                    sss = 483.75;
                    cout<<"\n\t\t\t\t\tSSS"<< sss << endl;
                    break;


                    case 21750 ... 22249:
                    sss = 495.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 22250 ... 22749:
                    sss = 506.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 22750 ... 23249:
                    sss = 517.50;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 23250 ... 23749:
                    sss = 528.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 23750 ... 24249:
                    sss = 540.00;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 24250 ... 24749:
                    sss = 551.25;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 24750 ... 25249:
                    sss = 562.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 25250 ... 25749:
                    sss = 573.75;
                    cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
                    break;


                    case 25750 ... 26249:
                    sss = 585.00;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 26250 ... 26749:
                    sss = 596.25;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 26750 ... 27249:
                    sss = 607.50;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 27250 ... 27749:
                    sss = 618.75;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 27750 ... 28249:
                    sss = 630.00;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 28250 ... 28749:
                    sss = 641.25;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 28750 ... 29249:
                    sss = 652.50;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    case 29250 ...29749:
                    sss =663.75;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;



                    case 29750 ... INT_MAX:
                    sss = 675.00;
                    cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                    break;


                    default:
                    SetConsoleTextAttribute(hdz,12);
                    cout<<"\t\t\t\t\tInvalid"<<endl;
                    SetConsoleTextAttribute(hdz,15);
                    break;

                }
                //END SSS


                //PHILHEALTH
                int p;
                p = regular;

                switch (p)
                {
                    case 0 ... 10000:
                    phealth = 112.50;
                    cout<<"\n\t\t\t\t\tPhilHealth: "<<phealth<<endl;

                    break;

                    case 10001 ... 89999:
                    phealth = ((p*0.045)/2)/2;
                    cout << "\n\t\t\t\t\tPhilHealth: " << phealth << endl;
                    break;

                    case 90000 ... INT_MAX:
                    phealth = 1012.50;
                    cout<<"\n\t\t\t\t\tPhilHealth: "<<phealth<<endl;
                    break;
                }
                //END PHILHEALTH



                //PAGIBIG
                do {
                    SetConsoleTextAttribute(hdz,14);
                    cout << "\n\n\t\t\t\t\tENTER PAG-IBIG CONTRIBUTION: ";
                    SetConsoleTextAttribute(hdz,15);
                    cin >> pagibig;
                    if (pagibig < 150){
                        SetConsoleTextAttribute(hdz,12);
                        cout << "\t\t\t\t\tERROR: Minimum amount is 150.00.";
                        SetConsoleTextAttribute(hdz,15);
                    }
                } while (pagibig < 150);

                cout << "\n\t\t\t\t\t---------------------------------";
                //END PAGIBIG


                //TAX

                taxinc = (grosspay-sss)-(phealth)-(pagibig);
                cout << "\n\n\t\t\t\t\tTAXABLE INCOME: " << taxinc;

                int i;
                i = taxinc;

                switch (i)
                {
                    case 0 ... 10416:
                    taxwith = 0;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 10417 ... 16666:
                    taxwith = ((taxinc - 10417)*(0.20)) + 0;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 16667 ... 33332:
                    taxwith = ((taxinc - 16667)*(0.25)) + 1250;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 33333 ... 83332:
                    taxwith = ((taxinc - 33333)*(0.30)) + 5416.67;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 83333 ... 333332:
                    taxwith = ((taxinc - 83333)*(0.32)) + 20416.67;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 333333 ... INT_MAX:
                    taxwith = ((taxinc - 333333)*(0.35)) + 100416.67;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;
                }
                //END TAX

                 //LOAN
                int loantype, loanTerm;
                double loanAmount, interestRate, monthlyPayment;
                bool has_another_loan= true;
                int loan_type;

             SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tDO YOU WANT TO ENTER LOAN?\n\t\t\t\t\t[1]Yes\n\t\t\t\t\t[2]No\n\t\t\t\t\t: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> loan_op;

            if (loan_op == 1)
            {
                 while (has_another_loan) {
                    cout << "\n\t\t\t\t\tEnter the type of loan";
                    cout<<"\n\t\t\t\t\t  __________________________________________";
                cout<<"\n\t\t\t\t\t | [1] for PAYROLL LOAN, [2] for SSS LOAN       |";
                cout<<"\n\t\t\t\t\t | [3] for PERSONAL LOAN, [4] for PAG-IBIG LOAN |";
                cout<<"\n\t\t\t\t\t | [5] for AUTO LOAN                            |";
                cout<<"\n\t\t\t\t\t  ----------------------------------------------";
                SetConsoleTextAttribute(hdz,14);
                cout<<"\n\t\t\t\t\t: ";
                SetConsoleTextAttribute(hdz,15);
                cin >> loan_type;

                string loan_type_name;
                switch (loan_type) {
                  case 1:
                    loan_type_name = "PAYROLL LOAN";
                    break;
                  case 2:
                    loan_type_name = "SSS LOAN";
                    break;
                  case 3:
                    loan_type_name = "PERSONAL LOAN";
                    break;
                  case 4:
                    loan_type_name = "PAG-IBIG LOAN";
                    break;
                  case 5:
                    loan_type_name = "AUTO LOAN";
                    break;
                  default:
                    loan_type_name = "INVALID";
                    break;
                }
                       do {
                            SetConsoleTextAttribute(hdz,14);
                            cout << "\n\n\t\t\t\t\tENTER LOAN AMOUNT: ";
                            SetConsoleTextAttribute(hdz,15);
                            cin >> loanAmount;
                            if (loanAmount < 500){
                                SetConsoleTextAttribute(hdz,12);
                                cout << "\t\t\t\t\tERROR: Minimum amount is 500.00.";
                                SetConsoleTextAttribute(hdz,15);
                            }
                        } while (loanAmount < 500);

                        do {
                            SetConsoleTextAttribute(hdz,14);
                            cout << "\n\n\t\t\t\t\tENTER INTEREST RATE (%): ";
                            SetConsoleTextAttribute(hdz,15);
                            cin >> interestRate;
                            if  (interestRate < 1.3)
                            {
                                SetConsoleTextAttribute(hdz,12);
                                cout << "\t\t\t\t\tERROR: Minimum interest rate is 1.3% and Maximum rate is 15%.";
                                SetConsoleTextAttribute(hdz,15);
                            }
                        } while (interestRate < 1.3);

                          SetConsoleTextAttribute(hdz,14);
                          cout << "\t\t\t\t\tSELECT LOAN TERM (MONTHS): \n\t\t\t\t\t[] 1\n\t\t\t\t\t[] 3\n\t\t\t\t\t[] 12\n\t\t\t\t\t[] 6\n\t\t\t\t\t[] 18\n\t\t\t\t\t[] 24\n\t\t\t\t\t[] 30\n\t\t\t\t\t[] 36\n\t\t\t\t\t[] 60\n\t\t\t\t\t[] 84\n\t\t\t\t\t[] 240\n\t\t\t\t\t: ";
                SetConsoleTextAttribute(hdz,15);
                cin >> loanTerm;

                monthlyPayment = (loanAmount * interestRate) / (1 - pow(1 + interestRate, -loanTerm));
                cout << "\t\t\t\t\tLOAN: " << monthlyPayment << endl;

                total_loan+= monthlyPayment ;

                SetConsoleTextAttribute(hdz,14);
                cout << "\t\t\t\t\tDo you have another loan(y/n)?: ";
                SetConsoleTextAttribute(hdz,15);
                char another_loan;
                cin >> another_loan;
                if (another_loan== 'n') {
                  has_another_loan= false;
                }
                }

                cout << "\t\t\t\t\tTotal loan: " << total_loan << endl;

        }

            else if (loan_op == 2)
            {
                total_loan = 0;
               cout << "\n\t\t\t\t\tTOTAL LOAN: "<<total_loan;
            }

            else
            {
                cout << "\t\t\t\t\tInvalid";
            }

            //END LOAN


                    //NETPAY
                    cout << "\n\n\t\t\t\t\t---------------------------------";
                    double netdeduc;
                    netdeduc = sss+phealth+pagibig+taxwith+total_loan;
                    cout << "\n\t\t\t\t\t         (" << netdeduc << ")";

                    netpay = grosspay-netdeduc;
                    cout << "\n\n\t\t\t\t\tNET PAY: " << netpay;
            }
                    //END NETPAY
                    //END SEMI-MONTHLY

/*
 --------------------------------------------
| Copyright @2023                            |
| Created by: PLM BSIT 1-1                   |
|                 GROUP 3                    |
| Yuri Alfrance Egipto  Kristhia Lastra      |
| Rizza Mae Pardales    Alessandra San Jose  |
| Ricky Cabe            Carl Lachica         |
| Pocholo Balanac       Sharmaine Alaurin    |
 --------------------------------------------
*/


            //MONTHLY
            else if (option==3) {
            SetConsoleTextAttribute(hdz,14);
            cout<<"\t\t\t\t\tMONTHLY"<<endl;

            cout<<"\n\t\t\t\t\tENTER REGULAR PAY: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> regular;

            daily = regular/26;

            cout << "\n\t\t\t\t\tDAILY RATE: " << daily;

            hourly = daily/8;

            cout << "\n\t\t\t\t\tHOURLY RATE: " << hourly;

            //LOOPING
            do {
                SetConsoleTextAttribute(hdz,14);
                cout << "\n\n\t\t\t\t\tENTER NUMBER OF REGULAR DAYS REPORTED: ";
                SetConsoleTextAttribute(hdz,15);
                cin >> daysreported;
                if (daysreported > 30) {
                    SetConsoleTextAttribute(hdz,12);
                    cout << "\t\t\t\t\tERROR: Days reported must be less than or equal to 30." << endl;
                    SetConsoleTextAttribute(hdz,15);
                }
                else if (daysreported == 0) {
                SetConsoleTextAttribute(hdz,12);
                cout << "\t\t\t\t\tERROR: Days reported must be less than or equal to 30 and not equal to 0." << endl;
                cout << "\t\t\t\t\tWow may suweldo pero di pumapasok? Ano yorn?" << endl;
                cout << "\t\t\t\t\tKaloka Babush!" << endl;
                SetConsoleTextAttribute(hdz,15);
                Sleep(1000);
                return 0;

            }
            } while (daysreported > 30);
            //END LOPPING

             basichrs = daysreported*8;

            cout << "\n\t\t\t\t\tBASIC PAY (HOURS): " << basichrs;

            basicpay = regular;

            cout << "\n\t\t\t\t\tBASIC PAY (AMOUNT): " << basicpay;


            //ABSENT
            SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tENTER NO. OF ABSENT DAYS: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> absentdays;

            absenthours = (absentdays*8);

            cout << "\n\t\t\t\t\tABSENT (HOURS): " << absenthours;

            absentamount = (absenthours)*(hourly);

            cout << "\n\t\t\t\t\tABSENT (AMOUNT): (" << absentamount << ")";
            //END ABSENT



            //LATE
            SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tENTER LATE/UNDERTIME IN HOURS: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> lateuthours;

            cout << "\t\t\t\t\tLATE/UNDERTIME (HOURS):" << lateuthours;

            lateutamount = hourly*lateuthours;

            cout << "\n\t\t\t\t\tLATE/UNDERTIME (AMOUNT): (" << lateutamount << ")";
            //END LATE


            //OVERTIME
            //LOOPING
            do {
            SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tENTER REGULAR OVERTIME IN HOURS: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> overtime;
                if (overtime >= (daysreported*5)) {
                     cout << "\t\t\t\t\tOvertime hours is only 5:00 P.M to 10:00 P.M. For " << daysreported << " days reported, you cannot exceed " << (daysreported*5) << " hours in overtime.";
                }
            } while (overtime >= (daysreported*5));
            //END LOPPING
            //END OVERTIME


           otamount = hourly*overtime;
           cout << "\t\t\t\t\tOVERTIME (HOURS): " << overtime;
           cout << "\n\t\t\t\t\tOVERTIME (AMOUNT): " << otamount;


            //HOLIDAY
            SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tREPORTED DURING HOLIDAY?\n\t\t\t\t\t[1]Yes\n\t\t\t\t\t[2]No\n\t\t\t\t\t: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> holyn;

            if (holyn == 1)
            {
                int month, day;
            int year = 2023; // Use the current year as the default year

            // Create maps to store the regular holidays and special non-working days
              map<pair<int, int>, string> regular_holidays;
              regular_holidays[make_pair(1, 1)] = "NEW YEAR";
              regular_holidays[make_pair(6, 12)] = "INDEPENDENCE DAY ";
              regular_holidays[make_pair(12, 25)] = "CHRISTMAS DAY";
              regular_holidays[make_pair(4, 6)] = "MAUNDY THURSDAY";
              regular_holidays[make_pair(4, 7)] = "GOOD FRIDAY";
              regular_holidays[make_pair(4, 10)] = "MONDAY NEAREST ARAW NG KAGITINGAN";
              regular_holidays[make_pair(5, 1)] = "LABOR DAY";
              regular_holidays[make_pair(8, 28)] = "NATIONAL HEROES’ DAY";
              regular_holidays[make_pair(11, 27)] = "MONDAY NEAREST BONIFACIO DAY";
              regular_holidays[make_pair(12, 30)] = "RIZAL DAY";

              map<pair<int, int>, string> non_working_holidays;
              non_working_holidays[make_pair(1, 2)] = "ADDITIONAL SPECIAL NON-WORKING DAY (MONDAY NEAREST NEW YEAR’S DAY)";
              non_working_holidays[make_pair(2, 25)] = "EDSA PEOPLE POWER REVOLUTION ANNIVERSARY";
              non_working_holidays[make_pair(4, 8)] = "BLACK SATURDAY";
              non_working_holidays[make_pair(8, 21)] = "NINOY AQUINO DAY";
              non_working_holidays[make_pair(11, 1)] = "ALL SAINTS' DAY";
              non_working_holidays[make_pair(11, 2)] = "ALL SOULS' DAY";
              non_working_holidays[make_pair(12, 8)] = "FEAST OF THE IMMACULATE CONCEPTION OF MARY";
              non_working_holidays[make_pair(12, 31)] = "LAST DAY OF THE YEAR (NEW YEAR'S EVE)";

              SetConsoleTextAttribute(hdz,14);
              cout << "\t\t\t\t\tEnter a date (mm/dd): ";
              SetConsoleTextAttribute(hdz,15);
              cin >> month >> day;

              // Calculate yung day of the week gamit Zeller's congruence
              int h = (day + (13*(month+1))/5 + year + (year/4) - (year/100) + (year/400)) % 7 +1;

              // Convert yung value ng day sa words
              string day_of_week;
              switch (h) {
                case 7:
                  day_of_week = "SUNDAY";
                  break;
                case 1:
                  day_of_week = "MONDAY";
                  break;
                case 2:
                  day_of_week = "TUESDAY";
                  break;
                case 3:
                  day_of_week = "WEDNESDAY";
                  break;
                case 4:
                  day_of_week = "THURSDAY";
                  break;
                case 5:
                  day_of_week = "FRIDAY";
                  break;
                case 6:
                  day_of_week = "SATURDAY";
                  break;
              }

              // Check if yung date ay special holiday or special non-working day
              pair<int, int> date = make_pair(month, day);

              if (regular_holidays.count(date) > 0 && day_of_week != "Sunday") {
                cout << "\t\t\t\t\tDAY: " << day_of_week << " // HOLIDAY: "  << regular_holidays[date] << endl;
                cout << "\n\t\t\t\t\tEnter no. of hours reported: ";
                             cin >> holehrs;
                                if (holehrs <= 8  )
                                {
                                   holpay = (hourly*2)*holehrs;
                                   cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                   cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else if (holehrs >= 9 and holehrs <= 13)
                                {
                                   holpay = (hourly*2)*(1.3)*(holehrs-8);
                                   cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                   cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else if (holehrs >= 13 and holehrs <= 21)
                                {
                                    holpay = ((hourly*2)*holehrs)+((hourly*2)*(1.3)*(holehrs-8))+(hourly*2)*(0.10)*(holehrs-13);
                                    cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                    cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else
                                {
                                   cout << "\t\t\t\t\tInvalid";
                                }

              } else if (non_working_holidays.count(date) > 0 && day_of_week != "Sunday") {
                cout << "\t\t\t\t\tDAY: " << day_of_week << " // HOLIDAY: "  << non_working_holidays[date] << endl;
                SetConsoleTextAttribute(hdz,14);
                cout << "\n\t\t\t\t\tEnter no. of hours reported: ";
                SetConsoleTextAttribute(hdz,15);
                             cin >> holehrs;
                                if (holehrs <= 8  )
                                {
                                   holpay = (hourly*1.30)*holehrs;
                                   cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                   cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else if (holehrs >= 9 and holehrs <= 13)
                                {
                                   holpay = (hourly*1.30)*(1.30)*(holehrs-8);
                                   cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                   cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else if (holehrs >= 13 and holehrs <= 21)
                                {
                                    holpay = ((hourly*1.30)*holehrs)+((hourly*1.30)*(1.30)*(holehrs-8))+(hourly*1.30)*(0.10)*(holehrs-13);
                                    cout << "\t\t\t\t\tHOLIDAY PAY (HOURS): " << holehrs;
                                    cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): " << holpay;
                                }
                                else
                                {
                                   cout << "\t\t\t\t\tInvalid";
                                }




              } else {
                cout << "\t\t\t\t\tThe day of the week is: " << day_of_week << endl;
              }

        }

            else if (holyn == 2)
            {
                holehrs = 0;
                holpay = 0;
               cout << "\n\t\t\t\t\tHOLIDAY PAY (HOURS): "<<holehrs;
               cout << "\n\t\t\t\t\tHOLIDAY PAY (AMOUNT): "<<holpay;
            }

            else
            {
                cout << "\t\t\t\t\tInvalid";
            }
            //END HOLIDAY

            //ALLOWANCE
             bool has_another_allowance = true;

          while (has_another_allowance) {
              cout<<endl;
            cout << "\n\t\t\t\t\tEnter the type of allowance";
            cout<<"\n\t\t\t\t\t  ______________________________";
            cout<<"\n\t\t\t\t\t | [1] for MEAL, [2] for LEAVE    |";
            cout<<"\n\t\t\t\t\t | [3] for RICE, [4] for MEDICAL  |";
            cout<<"\n\t\t\t\t\t | [5] for GIFTS,[6] for AWARDS   |";
            cout<<"\n\t\t\t\t\t  --------------------------------";
            SetConsoleTextAttribute(hdz,14);
            cout<<"\n\t\t\t\t\t: ";
            SetConsoleTextAttribute(hdz,15);
            int allowance_type;
            cin >> allowance_type;

            string allowance_type_name;
            switch (allowance_type) {
              case 1:
                allowance_type_name = "MEAL";
                break;
              case 2:
                allowance_type_name = "LEAVE";
                break;
              case 3:
                allowance_type_name = "RICE";
                break;
              case 4:
                allowance_type_name = "MEDICAL";
                break;
              case 5:
                allowance_type_name = "GIFTS";
                break;
              case 6:
                allowance_type_name = "AWARDS";
                break;
              default:
                allowance_type_name = "INVALID";
                break;
            }

            SetConsoleTextAttribute(hdz,14);
            cout << "\t\t\t\t\tEnter the amount of allowance: ";
            SetConsoleTextAttribute(hdz,15);
            double allowance_amount;
            cin >> allowance_amount;

            total_allowance += allowance_amount;

            SetConsoleTextAttribute(hdz,14);
            cout << "\t\t\t\t\tDo you have another allowance (y/n)? ";
            SetConsoleTextAttribute(hdz,15);
            char another_allowance;
            cin >> another_allowance;
            if (another_allowance == 'n') {
              has_another_allowance = false;
            }
          }

          cout << "\t\t\t\t\tTotal allowance: " << total_allowance << endl;
          //END ALLOWANCE


            //GROSSPAY
            grosspay = (basicpay-absentamount)-(lateutamount)+(otamount+holpay)+total_allowance;
            cout << "\n\n\t\t\t\t\t---------------------------------";
            cout << "\n\n\t\t\t\t\tTOTAL (GROSS PAY): " << grosspay;

            cout << "\n\n\t\t\t\t\t---------------------------------";
            //END GROSSPAY


            //SSS
            int s;
            s = (basicpay-absentamount)-(lateutamount)+(otamount+holpay);

            switch (s)
				{
				     case 537 ... 4249:
		sss = 180;
		cout<<"\nSSS: " << sss << endl;
		break;

		case 4250 ... 4749:
		sss = 202.50;
		cout<<"\n\t\t\t\t\tSSS: " << sss << endl;
		break;

		case 4750 ... 5249:
		sss = 225.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 5250 ... 5749:
		sss = 247.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 5750 ... 6249:
		sss = 270;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 6250 ... 6749:
		sss = 292.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 6750 ... 7249:
		sss = 315.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 7250 ... 7749:
		sss = 337.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss <<endl;
		break;

		case 7750 ... 8249:
		sss =360;
		cout<<"\n\t\t\t\t\tSSS: "<< sss <<endl;
		break;

		case 8250 ... 8749:
		sss = 382.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss <<endl;
		break;

		case 8750 ... 9249:
		sss = 405.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 9250 ... 9749:
		sss =427.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 9750 ... 10249:
		sss =450.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 10250 ... 10749:
		sss =472.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 10750 ... 11249:
		sss =495.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 11250 ... 11749:
		sss = 517.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 11750 ... 12249:
		sss = 540.00;
		cout<<"\n\t\t\t\t\tSS: "<< sss << endl;
		break;

		case 12250 ... 12749:
		sss = 562.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 12750 ... 13249:
		sss = 585.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 13250 ... 13749:
		sss = 607.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 13750 ... 14249:
		sss =630.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 14250 ... 14749:
		sss = 652.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 14750 ... 15249:
		sss =675.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 15250 ... 15749:
		sss = 697.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 15750 ... 16249:
		sss = 720.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 16250 ... 16749:
		sss = 742.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 16750 ... 17249:
		sss =765.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 17250 ... 17749:
		sss =787.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 17750 ... 18249:
		sss =810.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 18250 ... 18749:
		sss =832.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 18750 ... 19249:
		sss = 855.00;
		cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
		break;

		case 19250 ... 19749:
		sss = 877.50;
		cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
		break;

		case 19750 ... 20249:
		sss = 900;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 20250 ... 20749:
		sss =922.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 20750 ... 21249:
		sss = 945.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 21250 ... 21749:
		sss =967.50;
		cout<<"\n\t\t\t\t\tSSS"<< sss << endl;
		break;

		case 21750 ... 22249:
		sss =990.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 22250 ... 22749:
		sss = 1012.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 22750 ... 23249:
		sss = 1035.00;
		cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
		break;

		case 23250 ... 23749:
		sss = 1057.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 23750 ... 24249:
		sss = 1080.00;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 24250 ... 24749:
		sss = 1102.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 24750 ... 25249:
		sss = 1125.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 25250 ... 25749:
		sss =1147.50;
		cout<<"\n\t\t\t\t\tSSS: "<< sss << endl;
		break;

		case 25750 ... 26249:
		sss = 1170.00;
		cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
		break;

        case 26250 ... 26749:
                sss = 1192.50;
                cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                break;

        case 26750 ... 27249:
                sss = 1215.00;
                cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                break;

        case 27250 ... 27749:
                sss = 1237.50;
                cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                break;

        case 27750 ... 28249:
                sss = 1260.00;
                cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                break;

        case 28250 ... 28749:
                sss = 1282.50;
                cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                break;

        case 28750 ... 29249:
                sss = 1305.00;
                cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                break;

        case 29250 ... 29749:
                sss = 1327.50;
                cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                break;

        case 29750 ... INT_MAX:
                sss = 1350.00;
                cout<<"\n\t\t\t\t\tSSS:"<< sss << endl;
                break;


                default:
                cout<<"\t\t\t\t\tInvalid"<<endl;
                break;

                }
                //END SSS


                //PHILHEALTH

                int p;
                p = regular;

                switch (p)
                {
                    case 0 ... 10000:
                    phealth = 225.00;
                    cout<<"\n\t\t\t\t\tPhilHealth: "<<phealth<<endl;
                    break;

                    case 10001 ... 79999:
                    phealth = ((p*0.045)/2);
                    cout << "\n\t\t\t\t\tPhilHealth: " << phealth << endl;
                    break;

                    case 80000 ... INT_MAX:
                    phealth = 2025.00;
                    cout<<"\n\t\t\t\t\tPhilHealth: "<<phealth<<endl;
                    break;
                }
                //END PHILHEALTH



                //PAGIBIG
                do {
                    SetConsoleTextAttribute(hdz,14);
                    cout << "\n\n\t\t\t\t\tENTER PAG-IBIG CONTRIBUTION: ";
                    SetConsoleTextAttribute(hdz,15);
                    cin >> pagibig;
                    if (pagibig < 150){
                        SetConsoleTextAttribute(hdz,12);
                        cout << "\t\t\t\t\tERROR: Minimum amount is 150.00.";
                        SetConsoleTextAttribute(hdz,15);
                    }
                } while (pagibig < 150);

                cout << "\n\t\t\t\t\t---------------------------------";
                //END PAGIBIG


                //TAX
                taxinc = (grosspay-sss)-(phealth)-(pagibig);
                cout << "\n\n\t\t\t\t\tTAXABLE INCOME: " << taxinc;

                int i;
                i = taxinc;

                switch (i)
                {
                    case 0 ... 10416:
                    taxwith = 0;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 10417 ... 16666:
                    taxwith = ((taxinc - 10417)*(0.20)) + 0;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 16667 ... 33332:
                    taxwith = ((taxinc - 16667)*(0.25)) + 1250;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 33333 ... 83332:
                    taxwith = ((taxinc - 33333)*(0.30)) + 5416.67;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 83333 ... 333332:
                    taxwith = ((taxinc - 83333)*(0.32)) + 20416.67;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;

                    case 333333 ... INT_MAX:
                    taxwith = ((taxinc - 333333)*(0.35)) + 100416.67;
                    cout << "\n\n\t\t\t\t\tTAX WITHHELD: " << taxwith;
                    break;
                }
                //END TAX

                 //LOAN
                int loantype, loanTerm;
                double loanAmount, interestRate, monthlyPayment;
                bool has_another_loan= true;
                int loan_type;

             SetConsoleTextAttribute(hdz,14);
            cout << "\n\n\t\t\t\t\tDO YOU WANT TO ENTER LOAN?\n\t\t\t\t\t[1]Yes\n\t\t\t\t\t[2]No\n\t\t\t\t\t: ";
            SetConsoleTextAttribute(hdz,15);
            cin >> loan_op;

            if (loan_op == 1)
            {
                 while (has_another_loan) {
                    cout << "\n\t\t\t\t\tEnter the type of loan";
                    cout<<"\n\t\t\t\t\t  __________________________________________";
                cout<<"\n\t\t\t\t\t | [1] for PAYROLL LOAN, [2] for SSS LOAN       |";
                cout<<"\n\t\t\t\t\t | [3] for PERSONAL LOAN, [4] for PAG-IBIG LOAN |";
                cout<<"\n\t\t\t\t\t | [5] for AUTO LOAN                            |";
                cout<<"\n\t\t\t\t\t  ----------------------------------------------";
                SetConsoleTextAttribute(hdz,14);
                cout<<"\n\t\t\t\t\t: ";
                SetConsoleTextAttribute(hdz,15);
                cin >> loan_type;

                string loan_type_name;
                switch (loan_type) {
                  case 1:
                    loan_type_name = "PAYROLL LOAN";
                    break;
                  case 2:
                    loan_type_name = "SSS LOAN";
                    break;
                  case 3:
                    loan_type_name = "PERSONAL LOAN";
                    break;
                  case 4:
                    loan_type_name = "PAG-IBIG LOAN";
                    break;
                  case 5:
                    loan_type_name = "AUTO LOAN";
                    break;
                  default:
                    loan_type_name = "INVALID";
                    break;
                }
                       do {
                            SetConsoleTextAttribute(hdz,14);
                            cout << "\n\n\t\t\t\t\tENTER LOAN AMOUNT: ";
                            SetConsoleTextAttribute(hdz,15);
                            cin >> loanAmount;
                            if (loanAmount < 500){
                                SetConsoleTextAttribute(hdz,12);
                                cout << "\t\t\t\t\tERROR: Minimum amount is 500.00.";
                                SetConsoleTextAttribute(hdz,15);
                            }
                        } while (loanAmount < 500);

                        do {
                            SetConsoleTextAttribute(hdz,14);
                            cout << "\n\n\t\t\t\t\tENTER INTEREST RATE (%): ";
                            SetConsoleTextAttribute(hdz,15);
                            cin >> interestRate;
                            if  (interestRate < 1.3)
                            {
                                SetConsoleTextAttribute(hdz,12);
                                cout << "\t\t\t\t\tERROR: Minimum interest rate is 1.3% and Maximum rate is 15%.";
                                SetConsoleTextAttribute(hdz,15);
                            }
                        } while (interestRate < 1.3);

                          SetConsoleTextAttribute(hdz,14);
                          cout << "\t\t\t\t\tSELECT LOAN TERM (MONTHS): \n\t\t\t\t\t[] 1\n\t\t\t\t\t[] 3\n\t\t\t\t\t[] 12\n\t\t\t\t\t[] 6\n\t\t\t\t\t[] 18\n\t\t\t\t\t[] 24\n\t\t\t\t\t[] 30\n\t\t\t\t\t[] 36\n\t\t\t\t\t[] 60\n\t\t\t\t\t[] 84\n\t\t\t\t\t[] 240\n\t\t\t\t\t: ";
                SetConsoleTextAttribute(hdz,15);
                cin >> loanTerm;

                monthlyPayment = (loanAmount * interestRate) / (1 - pow(1 + interestRate, -loanTerm));
                cout << "\t\t\t\t\tLOAN: " << monthlyPayment << endl;

                total_loan+= monthlyPayment ;

                SetConsoleTextAttribute(hdz,14);
                cout << "\t\t\t\t\tDo you have another loan(y/n)?: ";
                SetConsoleTextAttribute(hdz,15);
                char another_loan;
                cin >> another_loan;
                if (another_loan== 'n') {
                  has_another_loan= false;
                }
                }

                cout << "\t\t\t\t\tTotal loan: " << total_loan << endl;

        }

            else if (loan_op == 2)
            {
                total_loan = 0;
               cout << "\n\t\t\t\t\tTOTAL LOAN: "<<total_loan;
            }

            else
            {
                cout << "\t\t\t\t\tInvalid";
            }

            //END LOAN


                    //NETPAY
                    cout << "\n\n\t\t\t\t\t---------------------------------";
                    double netdeduc;
                    netdeduc = sss+phealth+pagibig+taxwith+total_loan ;
                    cout << "\n\t\t\t\t\t         (" << netdeduc << ")";

                    netpay = grosspay-netdeduc;
                    cout << "\n\n\t\t\t\t\tNET PAY: " << netpay;


            }
                    //END NETPAY
                    //END MONTHLY

        SetConsoleTextAttribute(hdz, 2);
        cout<<"\n\n\n\t\t\t\t\tGENERATING PAYROLL \n\t\t\t\t\t";
           for(int a=1;a<8;a++)
        {
            Sleep(300);
            cout << "...";
        }
           cout<<"\n\t\t";
           system("PAUSE");
        SetConsoleTextAttribute(hdz,15);

/*
 --------------------------------------------
| Copyright @2023                            |
| Created by: PLM BSIT 1-1                   |
|                 GROUP 3                    |
| Yuri Alfrance Egipto  Kristhia Lastra      |
| Rizza Mae Pardales    Alessandra San Jose  |
| Ricky Cabe            Carl Lachica         |
| Pocholo Balanac       Sharmaine Alaurin    |
 --------------------------------------------
*/



//////////////////////////////////////////////////////////////////////////////////
    system("cls"); // for clearing page

    SetConsoleTextAttribute(hdz,14);
    cout<<R"(
                                                     ___ _____ _
                                                    |_ _|_   _| | ___   __ _
                                                     | |  | | | |/ _ \ / _` |
                                                     | |  | | | | (_) | (_| |
                                                    |___| |_| |_|\___/ \__, |
                                                                       |___/
                                                        No.1 IT company
             )"<<'\n';
   SetConsoleTextAttribute(hdz,15);
    // current date and time on the current system
   time_t now1 = time(0);

   // convert now to string form
   char* date_time1 = ctime(&now1);

   cout <<"\t\t\t\t\tPayroll Generated: " << date_time << endl;
   cout<< "\t\t\t\t\tEmployee Name: "<<fullName<<endl;
   cout<<"\t\t\t\t\tEmployee Code: "<<employeeCode<<endl;
   cout<<endl;
   cout<<"\t\t\t\t\tRegular Pay: "<<regular<<endl;
   cout<<"\n\t\t\t\t\t                          Hours               Amount";
   cout << "\n\t\t\t\t\tBasic Pay :                " << basichrs<<"                "<< basicpay;
   cout << "\n\t\t\t\t\tAbsent :                   " << absenthours<<"                  "<< absentamount;
   cout << "\n\t\t\t\t\tLate :                     " << lateuthours<<"                  "<< lateutamount;
   cout << "\n\t\t\t\t\tOvertime :                 " << overtime<<"                  "<< otamount;
   cout << "\n\t\t\t\t\tHoliday :                  " << holehrs<<"                  "<< holpay;
   cout << "\n\t\t\t\t\tAllowance :                                   "<< total_allowance;
   cout<<"\n\t\t\t\t\t---------------------------------------------------------------\n";
   cout << "\n\t\t\t\t\tGross Pay :                                   "<< grosspay;
   cout<<"\n\t\t\t\t\t---------------------------------------------------------------\n";
   cout << "\n\t\t\t\t\tSSS :                                         "<< sss;
   cout << "\n\t\t\t\t\tPhil Health :                                 "<< phealth;
   cout << "\n\t\t\t\t\tPag-ibig :                                    "<< pagibig;
   cout << "\n\t\t\t\t\tTaxable Income :                              "<< taxinc;
   cout << "\n\t\t\t\t\tTaxable Withheld :                            "<< taxwith;
   cout << "\n\t\t\t\t\tLoan :                                        "<< total_loan ;
   cout<<"\n\t\t\t\t\t---------------------------------------------------------------\n";
   cout << "\n\t\t\t\t\tNet Pay :                                     "<< netpay<<endl;
   cout<<endl;
   cout<<endl;
   cout<<endl;





SetConsoleTextAttribute(hdz,14);
cout<<"\t\t\t\t\tDo you want to calculate another employee's salary?(Y/N): ";
SetConsoleTextAttribute(hdz,11);
cin>>letter_ans;
cout<<"\n\t\t\t\t\t---------------------------------------------------------------\n";
cout<<"\n\n";

    } while ((letter_ans == 'Y') || (letter_ans=='y'));

    if (letter_ans == 'N' || 'n'){
    HANDLE hdz= GetStdHandle(STD_OUTPUT_HANDLE); //decalre ulit dahil hindi mabasa ni program si h
    SetConsoleTextAttribute(hdz,14);
    system("cls"); // for clearing page
    cout<<R"(
                         __  __                           _               ____        _                       _
                        |  \/  | __ _ _ __ __ _ _ __ ___ (_)_ __   __ _  / ___|  __ _| | __ _ _ __ ___   __ _| |_
                        | |\/| |/ _` | '__/ _` | '_ ` _ \| | '_ \ / _` | \___ \ / _` | |/ _` | '_ ` _ \ / _` | __|
                        | |  | | (_| | | | (_| | | | | | | | | | | (_| |  ___) | (_| | | (_| | | | | | | (_| | |_
                        |_|  |_|\__,_|_|  \__,_|_| |_| |_|_|_| |_|\__, | |____/ \__,_|_|\__,_|_| |_| __|\__,_|\__|
                                                |___/
                           _                                                                         _                 _
                         / _| ___  _ __   _   _ ___(_)_ __   __ _    ___  _   _ _ __   ___ _   _ ___| |_ ___ _ __ ___ | |
                        | |_ / _ \| '__| | | | / __| | '_ \ / _` |  / _ \| | | | '__| / __| | | / __| __/ _ \ '_ ` _ \| |
                        |  _| (_) | |    | |_| \__ \ | | | | (_| | | (_) | |_| | |    \__ \ |_| \__ \ ||  __/ | | | | |_|
                        |_|  \___/|_|     \__,_|___/_|_| |_|\__, |  \___/ \__,_|_|    |___/\__, |___/\__\___|_| |_| |_(_)
                                                            |___/                          |___/
                                            Mabuhay ang lahat ng manggagawang Pilipino!!!
             )"<<'\n';

             SetConsoleTextAttribute(hdz,15);

    }
             SetConsoleTextAttribute(hdz,2);
             cout << "\n\n\n\t\t\t\t\t[1]LOGOUT\n\t\t\t\t\t[2]EXIT\n\t\t\t\t\t: ";
             cin>>login_logout;
             } while ( login_logout == 1);

             if ( login_logout == 2){
                return 0;
             }



    }
/*
 --------------------------------------------
| Copyright @2023                            |
| Created by: PLM BSIT 1-1                   |
|                 GROUP 3                    |
| Yuri Alfrance Egipto  Kristhia Lastra      |
| Rizza Mae Pardales    Alessandra San Jose  |
| Ricky Cabe            Carl Lachica         |
| Pocholo Balanac       Sharmaine Alaurin    |
 --------------------------------------------
*/
