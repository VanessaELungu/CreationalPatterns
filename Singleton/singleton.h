#ifndef singleton
#define singleton

using namespace std;
class Singleton
{

    private:

    static Singleton* instance;
    int data;
    Singleton();
    
    public:
    
    static Singleton* getInstance();
    int getData();
    void setData(int data);
  
};

#endif
