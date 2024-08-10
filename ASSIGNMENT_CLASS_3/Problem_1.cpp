#include<iostream>
using namespace std;

class Account{

private:

    string accName;
    int accNo;
    float balance;
    string accType;

public:
    Account(){}

    Account(string name,int no,float b, string type){

       accName = name;
       accNo = no;
       balance = b;
       accType = type;
    }

    ~Account(){
     }

   void setAccName(string name){
          accName = name;
   }
  string getAccName(){
       return accName;
  }


    void setAccNo(int no){
      accNo=no;
    }
    int getAccNo(){
       return accNo;
    }

    void setBalance(float b){
        balance = b;
    }
    float getBalance (){
       return balance;
    }

    void setAccType(string type){
        accType = type;
    }
    string getAccType(){
       return accType;
    }




  Account operator +(int x) {

     Account result;

     result.setAccName(accName);
     result.setAccNo(accNo);
     result.setBalance(balance+x);
     result.setAccType(accType);

  return result;
  }

  Account operator -(int x){
  Account result;
    result.setAccName(accName);
    result.setAccNo(accNo);
    result.setBalance(balance-x);
    result.setAccType(accType);

   return result;
  }

   void Transfer(Account*receiver, int amount){

      balance = balance - amount;
      receiver->setBalance(receiver->getBalance()+amount);
   }


  void showAccDetails(){

    cout<<"Account Name: "<<accName<<endl;
    cout<<"Account No: "<<accNo<<endl;
    cout<<"Account balance: "<<balance<<endl;
    cout<<"Account Type: "<<accType<<endl;
  }

};


int main(){

   Account acc1("Touhid",2222,50000,"Permanent");

   acc1=acc1+500;
   acc1.showAccDetails();

   acc1=acc1-1000;
   acc1.showAccDetails();

   Account acc2("Raian",1111,30000,"Permanent");



   acc1.Transfer(&acc2,10000);
   acc1.showAccDetails();
   acc2.showAccDetails();

return 0;
}
