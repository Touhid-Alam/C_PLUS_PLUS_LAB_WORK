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

class Mobile{
private:
    string mobilenum;
    float balance;
    string osname;
    bool status;
    Account acc;

public:
    Mobile(){}

    Mobile(string num,float b,string os,bool a){
    mobilenum=num;
    balance=b;
    osname=os;
    status=a;
    }

     Mobile(string num,float b,string os,bool a,Account ac){
    mobilenum=num;
    balance=b;
    osname=os;
    status=a;
    acc =ac;
    }

    void setBalance(float b){
    balance=b;
    }
    float getBalance(){
    return balance;
    }

    void setStatus(bool s){
    status=s;
    }
    bool getStatus(){
    return status;
    }

    void setOsname(string os){
    osname=os;
    }
    string getOsname(){
    return osname;
    }

    void setMobilenum(string num){
    mobilenum=num;
    }
    string getMobilenum(){
    return mobilenum;
    }

    Account getAccount(){return acc;}


    void call(float x){
    if(getStatus()==false){

      balance=balance-x*0.5;
    }
    else{
        cout<<"SORRY"<<endl;
        }
    }

    ~Mobile(){}

    Mobile operator +(int amount)
    {
        Mobile m;
        m.setBalance(balance+amount);
        m.setMobilenum(mobilenum);
        return m;
    }

    void showInfo(){
        cout<<getMobilenum()<<endl;
        cout<<getBalance()<<endl;
    }

};



int main(){

    Account acc1("Touhid",2222,50000,"Permanent");
      Mobile m1("111111",100,"IOS",false,acc1);
    m1.showInfo();
    m1.getAccount().showAccDetails();


    return 0;
}
