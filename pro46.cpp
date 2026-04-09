 #include <iostream>
using namespace std;
class Biryani{
    public:
    virtual void prepartion()=0;
    virtual void starting()=0;
    virtual void serve()=0;
    void make(){
      prepartion();
      starting();
      serve();
    }
};
class chickenBiryani: public Biryani{
    public:
    void prepartion() override{
        cout <<" firstly thoutght how make the biryani and what required :"<<endl;
    }
    void starting() override{
        cout <<"start to make the birany:"<<endl;
    }
    void serve()override{
        cout <<"Serve the biryani to :"<<endl;
    }
};

class sadaBiryani: public Biryani{
    public:
    void prepartion() override{
        cout <<" firstly thoutght how make the biryani and what required :"<<endl;
    }
    void starting() override{
        cout <<"start to make the birany:"<<endl;
    }
    void serve() override{
        cout <<"Serve the biryani to :"<<endl;
    }
};
int main(){
    chickenBiryani c;
    sadaBiryani s;
    c.make();
    s.make();
    return 0;
}

