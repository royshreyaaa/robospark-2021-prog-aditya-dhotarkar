#include <iostream>
using namespace std;
class personal 
{
    //protected:
    public:
    string Name, Surname , address;
    long  mobile_no, dob;
    personal()
    {
    Name = "null", Surname = "null", address="null";
    mobile_no =0L, dob=0L;
    }
    personal1(string n, string sn, string a, long m, long d){
        Name = n;
        Surname = sn;
        address = a;
        mobile_no = m;
        dob = d;
    }
    void print_personal()
    {
        cout<<"Name : " << Name;
        cout<<"Surname : " << Surname;
        cout<<"Address : " << address;
        cout<<"Mobile Number : " << mobile_no;
        cout<<"Date of Birth : " << dob;
    }
};

class professional 
{
    //protected:
    public:
    string Name_of_org, job_profile , project;    
    professional()
    {
    Name_of_org = "null", job_profile = "null", project="null";    
    }
    professional1(string n1, string jp1, string p1){
        Name_of_org = n1;
        job_profile = jp1;
        project = p1;
    }
    void print_professional()
    {
        cout<<"Name of organization : " << Name_of_org;
        cout<<"Job Profile : " << job_profile;
        cout<<"Project : " << project;
    }
    
};
class academic
{
    //protected:
    public:
    int year_of_passing, cgpa;
    string college_name ="null", branch="null";     
    academic()
    {
    year_of_passing = 0, cgpa = 0;
    college_name ="null", branch ="null";        
    }
    academic1(string cn1, string b1, int y1, int c2){
        college_name = cn1;
        branch = b1;
        year_of_passing = y1;
        cgpa = c2;
    }
    void print_academic()
    {
        cout<<"College Name : " << college_name;
        cout<<"Branch : " << branch;
        cout<<"Year of Passing : " << year_of_passing;
        cout<<"Cgpa : " << cgpa;
    }    
};
class biodata : public personal , public professional , public academic
{ public:
    biodata()
    {

    }
    public void print_details()
    {
        personal r;
        personal pr1 ("Shreya", "Roy", "Kolkata", 1419, 2604);
        pr1.print_personal();
        professional r2;
        professional pr2 ("TRF", "Mentee", "OOPs");
        pr2.print_professional();
        academic pr3 ("Vit", "E&TC", 2024, 9);
        pr3.print_academic();
    }
};
int main()
{
    biodata b;
    b.print_details();   
cout<<123;
return 0;
}