#include<iostream>
using namespace std;

//create a package music.
namespace music{
     
    class Playable{
        public:
        virtual void play()=0;
    };
}


//create a package music_string.
namespace music_string{
    class Veena : public music::Playable{
        public:
        void play() override{
            cout<<"Playing Veena"<<endl;
        }
    };
}

//create a package music_wind.
namespace music_wind{
    class Saxophone : public music::Playable{
        public:
        void play() override{
            cout<<"Playing Saxophone"<<endl;
        }
    };
}

//create a package live.
  namespace live{
    class Test {
        public:
        void test(){

            music_string::Veena v;
            v.play();

            music_wind:: Saxophone S;
            S.play();

            music::Playable* p;
            p = &v;
            p->play();

            p = &S;
            p->play();


        }
    };
  }

int main(){

    live::Test t;
    t.test();

    return 0;
}