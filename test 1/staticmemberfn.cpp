#include<iostream>
using namespace std;
class static_type
{
    private:
    static int i;
    public:
    static void init(int x){
        i=x;
    }
    void show()
    {
        cout<<i;
    }
};
int static_type::i;//define i
int main(){
    static_type::init(100);
    static_type x;
    x.show();
    return 0;

}