#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class TrainManagement
{
private:
    int trainNumber;
    string name;
    string source;
    string destination;
    string departureTime;
    string arrivalTime;
    int totalSeats;
    int availableSeats;
    float fare;

public:
    void settrain(
        int trainNumber,
        string name,
        string source,
        string destination,
        string departureTime,
        string arrivalTime,
        int totalSeats,
        int availableSeats,
        float fare)
    {
        this->trainNumber = trainNumber;
        this->name = name;
        this->source = source;
        this->destination = destination;
        this->departureTime = departureTime;
        this->arrivalTime = arrivalTime;
        this->totalSeats = totalSeats;
        this->availableSeats = availableSeats;
        this->fare = fare;
    }

    int getTrainNumber()
    {
        return trainNumber;
    }

    void print()
    {
        cout << "\n===== Train Details =====\n";

        cout << "Train Number : " << trainNumber << endl;
        cout << "Name : " << name << endl;
        cout << "Source : " << source << endl;
        cout << "Destination : " << destination << endl;
        cout << "Departure Time : " << departureTime << endl;
        cout << "Arrival Time : " << arrivalTime << endl;
        cout << "Total Seats : " << totalSeats << endl;
        cout << "Available Seats : " << availableSeats << endl;
        cout << "Fare : " << fare << endl;
    }
};

class TicketBooking
{
private:
    string pnr;
    int trainnumber;
    string passenger;
    string bookingStatus;
    string bookingTime;
    float Fare;

public:
    TicketBooking()
    {
    }

    void setTicket(
        string pnr,
        int trainnumber,
        string passenger,
        string bookingStatus,
        string bookingTime,
        float Fare)
    {
        this->pnr = pnr;
        this->trainnumber = trainnumber;
        this->passenger = passenger;
        this->bookingStatus = bookingStatus;
        this->bookingTime = bookingTime;
        this->Fare = Fare;
    }

    void getprint()
    {
        cout << "\n===== Ticket Details =====\n";

        cout << "PNR : " << pnr << endl;
        cout << "Train Number : " << trainnumber << endl;
        cout << "Passenger : " << passenger << endl;
        cout << "Booking Status : " << bookingStatus << endl;
        cout << "Booking Time : " << bookingTime << endl;
        cout << "Fare : " << Fare << endl;
    }
};

class Undo
{
private:
    stack<TicketBooking> s;

public:
    void push(TicketBooking ticket)
    {
        s.push(ticket);

        cout << "\nCancelled Ticket Stored in Stack!\n";
    }

    TicketBooking pop()
    {
        if (s.empty())
        {
            cout << "\nNo Cancelled Ticket!\n";

            return TicketBooking();
        }

        TicketBooking temp = s.top();

        s.pop();

        return temp;
    }

    bool isEmpty()
    {
        return s.empty();
    }

    int size()
    {
        return s.size();
    }
};

class Passenger
{
public:
    string pnr;
    string name;
    int age;
    string gender;
    string berthPreference;
    string phone;

    Passenger()
    {
    }

    Passenger(
        string pnr,
        string name,
        int age,
        string gender,
        string berthPreference,
        string phone)
    {
        this->pnr = pnr;
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->berthPreference = berthPreference;
        this->phone = phone;
    }

    void display()
    {
        cout << "\n===== Passenger Details =====\n";

        cout << "PNR : " << pnr << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender : " << gender << endl;
        cout << "Berth Preference : " << berthPreference << endl;
        cout << "Phone : " << phone << endl;
    }
};

class Node
{
public:
    Passenger data;
    Node *next;

    Node(Passenger p)
    {
        data = p;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void insertPassenger(Passenger p)
    {
        Node *newNode = new Node(p);

        newNode->next = head;

        head = newNode;
    }

    void displayAllPassengers()
    {
        if (head == NULL)
        {
            cout << "\nNo Passengers Found!\n";

            return;
        }

        Node *temp = head;

        while (temp != NULL)
        {
            temp->data.display();

            temp = temp->next;
        }
    }
};

class Run
{
private:
    int choice;

    vector<TrainManagement> trainList;

    Undo cancellationStack;

    LinkedList passengerList;

public:
    void run()
    {
        do
        {
            cout << "\n=========================\n";
            cout << "Railway Booking System\n";
            cout << "=========================\n";

            cout << "1. Train Management\n";
            cout << "2. Ticket Booking\n";
            cout << "3. Cancellation & Undo\n";
            cout << "4. Passenger Details\n";
            cout << "5. Display All Passengers\n";
            cout << "6. Exit\n";

            cout << "\nEnter Your Choice : ";
            cin >> choice;

            switch (choice)
            {

            case 1:
            {
                TrainManagement t;

                int trainNumber;
                string name;
                string source;
                string destination;
                string departureTime;
                string arrivalTime;
                int totalSeats;
                int availableSeats;
                float fare;

                cout << "\nEnter Train Number : ";
                cin >> trainNumber;

                cout << "Enter Train Name : ";
                cin >> name;

                cout << "Enter Source : ";
                cin >> source;

                cout << "Enter Destination : ";
                cin >> destination;

                cout << "Enter Departure Time : ";
                cin >> departureTime;

                cout << "Enter Arrival Time : ";
                cin >> arrivalTime;

                cout << "Enter Total Seats : ";
                cin >> totalSeats;

                cout << "Enter Available Seats : ";
                cin >> availableSeats;

                cout << "Enter Fare : ";
                cin >> fare;

                t.settrain(
                    trainNumber,
                    name,
                    source,
                    destination,
                    departureTime,
                    arrivalTime,
                    totalSeats,
                    availableSeats,
                    fare);

                trainList.push_back(t);

                cout << "\nTrain Added Successfully!\n";

                t.print();

                break;
            }

            case 2:
            {
                TicketBooking B;

                string pnr;
                int trainnumber;
                string passenger;
                string bookingStatus;
                string bookingTime;
                float Fare;

                cout << "\nEnter PNR : ";
                cin >> pnr;

                cout << "Enter Train Number : ";
                cin >> trainnumber;

                cout << "Enter Passenger Name : ";
                cin >> passenger;

                cout << "Enter Booking Status : ";
                cin >> bookingStatus;

                cout << "Enter Booking Time : ";
                cin >> bookingTime;

                cout << "Enter Fare : ";
                cin >> Fare;

                B.setTicket(
                    pnr,
                    trainnumber,
                    passenger,
                    bookingStatus,
                    bookingTime,
                    Fare);

                B.getprint();

                break;
            }

            case 3:
            {
                TicketBooking cancelTicket;

                string pnr;
                int trainnumber;
                string passenger;
                string bookingTime;
                float Fare;

                cout << "\nEnter PNR : ";
                cin >> pnr;

                cout << "Enter Train Number : ";
                cin >> trainnumber;

                cout << "Enter Passenger Name : ";
                cin >> passenger;

                cout << "Enter Booking Time : ";
                cin >> bookingTime;

                cout << "Enter Fare : ";
                cin >> Fare;

                cancelTicket.setTicket(
                    pnr,
                    trainnumber,
                    passenger,
                    "CANCELLED",
                    bookingTime,
                    Fare);

                cancellationStack.push(cancelTicket);

                cout << "\nTicket Cancelled!\n";

                break;
            }

            case 4:
            {
                string pnr;
                string name;
                int age;
                string gender;
                string berthPreference;
                string phone;

                cout << "\nEnter PNR : ";
                cin >> pnr;

                cin.ignore();

                cout << "Enter Passenger Name : ";
                getline(cin, name);

                cout << "Enter Age : ";
                cin >> age;

                cout << "Enter Gender : ";
                cin >> gender;

                cout << "Enter Berth Preference : ";
                cin >> berthPreference;

                cout << "Enter Phone Number : ";
                cin >> phone;

                Passenger p(
                    pnr,
                    name,
                    age,
                    gender,
                    berthPreference,
                    phone);

                passengerList.insertPassenger(p);

                cout << "\nPassenger Added Successfully!\n";

                break;
            }

            case 5:
            {
                passengerList.displayAllPassengers();

                break;
            }

            case 6:
            {
                cout << "\nProgram Exit Successfully!\n";

                break;
            }

            default:
            {
                cout << "\nInvalid Choice!\n";
            }
            }

        } while (choice != 6);
    }
};

int main()
{
    Run r;

    r.run();

    return 0;
}