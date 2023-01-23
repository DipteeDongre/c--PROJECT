#include<iostream>
using namespace std;
class Book
{
    private:
            int bcode;
            string bname;
            int price;
            string authorname;
    public:
            Book(int bc,string bn,int p,string an)
            {
                bcode=bc;
                bname=bn;
                price=p;
                authorname=an;
                cout<<"\n parameterized constructor invoked";
            }        
      Book(Book &b)
      {
        bcode=b.code;
        bname=b.name;
        price=b.price;
        authorname=b.authorname;
        cout<<"copy constructor";
      }      
      void showDetails()
      {
        cout<<"\n book cobe="<<bcode;  
        cout<<"\n book name="<<bname;  
        cout<<"\n price="<<price;
        cout<<"\nauthorname="<<authorname;
      }
};
int main()
{
    Book b1(101,"BHH",200,"dip");
    b1.showDetails();

    Book b2(102,"JDDJ",200,"skdj");
    b2.showDetails();

    Book b3(b1);
    b3.showDetails();
}