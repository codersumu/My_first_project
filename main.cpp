#include <iostream>
using namespace std;
int price;
class phone{
    private: //data hiding 
        // Attribute (int variable)
    
    public: 
    string brand; // Attribute (string variable)
    string model; // Attribute (string variable)
    
    
    void description(){   // Method 
        cout<< "A smartphone is a handheld electronic device that integrates various features beyond basic voice communication."<<endl<<endl;
    }
   
    void Dis(string x, string y){ 
      brand =x;
      model =y; 
     
    }
   
};

class OS : private phone{ //singel inheratance
    public:
    void setprice(int p){
        price =p; 
    }
    int getprice(){
        return price; 
    }
     void display(){
        // cout<<"Brand = "<<brand<<" "<<endl<<"Model= "<<model<<endl; 
         cout<<"price: "<<getprice()<<endl<<endl;
    }
};

class  config{
    public:
    string display;
    int refrsh_rate;
    void D(string i){ //method
      display =i;
      
     
    }
    
};

class PS : public phone, public config{ // Multiple inheritance
    public:
    string ram;
    string rom;
    PS(string a, string b){ //constructor
      ram =a;
      rom =b; 
     
    }
    
    
     void show(){
        cout<<"Brand = "<<brand<<" "<<endl<<"Model= "<<model<<endl<<"Display = "<<display<<endl<<endl<<"Ram = "<<ram<<endl<<"Rom = "<<rom<<endl<<endl; 
        }
     ~PS(){
        cout<< "destructor executed."<<endl;// destructor
    }
    void camera(string x, string y){
    string back= x;
    string Ultrawide=y;
    cout<<"main back camera :"<<back<<endl<<"Ultrawide camera :"<<Ultrawide<<endl;
    }
     void camera(string x){
    string front= x;
    cout<<"Selfi Camera :" <<front<<endl<<endl;
    }
    
};


class os {
   public:
    virtual void print() {
        cout << "Android operating system" << endl;
    }
};

class Ios : public os {                      //virtual function
   public:
    void print() {
        cout << "Ios operating system" << endl;
    }
};
class userView{
    public:
    virtual void review() = 0;// pure abstract class/interface.
};
class android: public userView{    //abstraction 
public: 
void review(){
    cout<< "IOS operating system is more difficult than android."<<endl;
}
    
};

int main(){
    PS hlw("12gb","512gb");//object
    hlw.description();
    hlw.Dis("Apple","13 pro"); 
    hlw.D("OLED");
    hlw.show();
    hlw.camera("16 megapixel","12 megapixel");
    hlw.camera("12 megapixel");
     
     
     
    OS hi;
    hi.setprice(120000);
    hi.display();
    
    os *pointer;
    Ios ob;
    pointer = &ob;
    pointer -> print();
    
    userView *u;
    android a;
    u=&a;
    u ->review();
    
    
}

