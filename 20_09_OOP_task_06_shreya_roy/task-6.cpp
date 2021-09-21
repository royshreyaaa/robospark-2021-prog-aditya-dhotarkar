#include <iostream>
using namespace std;
class personal 
{
    protected:
    string Name, Surname , address;
    long  mobile_no, dob;
    public:
    void get_personal()
    {
        cout<<"\nEnter Name:";
        cin >> Name;

        cout<<"\nEnter Surname:";
        cin >> Surname;

        cout<<"\nEnter address:";
        cin >> address;

        cout<<"\nEnter Mobile Number:";
        cin >> mobile_no;

        cout<<"\nEnter DOB:";
        cin >> dob;
    }
    void print_personal()
    {
        cout<<"Name : " << Name<< endl;
        cout<<"Surname : " << Surname<< endl;
        cout<<"Address : " << address<< endl;
        cout<<"Mobile Number : " << mobile_no<< endl;
        cout<<"Date of Birth : " << dob<< endl;
    }
};

class professional 
{
    protected:
    string Name_of_org, job_profile , project;
    public:    
    void get_professional()
    {
        cout<<"\nEnter Name of the organization:";
        cin >> Name_of_org;

        cout<<"\nEnter Job Profile:";
        cin >> job_profile;

        cout<<"\nEnter Project:";
        cin >> project;
    }
    void print_professional()
    {
        cout<<"Name of organization : " << Name_of_org<< endl;
        cout<<"Job Profile : " << job_profile<< endl;
        cout<<"Project : " << project<< endl;
    }
    
};
class academic
{
    protected:
    int year_of_passing, cgpa;
    string college_name , branch;     
    public:
    void get_academic(){
        cout<<"\nEnter Year of passing:";
        cin >> year_of_passing;

        cout<<"\nEnter CGPA:";
        cin >> cgpa;

        cout<<"\nEnter the college name:";
        cin >> college_name;

        cout<<"\nEnter Branch:";
        cin >> branch;
    }
    void print_academic()
    {
        cout<<"College Name : " << college_name<< endl;
        cout<<"Branch : " << branch<< endl;
        cout<<"Year of Passing : " << year_of_passing<< endl;
        cout<<"Cgpa : " << cgpa<< endl;
    }    
};
class biodata : public personal , public professional , public academic
{ public:
    personal obj;
    void getBioData()
    {
    printf("\nEnter Biodata\n");
        obj.get_personal();
        get_professional();
        get_academic(); 
    }
    void showBioData()
    {
        printf("\n\nBiodata\n");
        print_personal();
        print_professional();
        print_academic();
    }
};
int main()
{
    biodata b;
    b.getBioData();
    b.showBioData();
    return 0;;
return 0;
}