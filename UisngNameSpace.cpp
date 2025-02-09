#include <iostream>
namespace Newnamespace{
    class C{
        public:
        void F(){
            std::cout << "Hello" << std::endl;
        }
        
        void F2(){
            std::cout << "World" << std::endl;
        }
    };
}

int main()
{
    Newnamespace::C c;
    c.F();
    
    using namespace Newnamespace;
    // The using directive allows all the names in a namespace to be used without the namespace-name as an explicit qualifier. 
    C c1;
    c1.F();
    c1.F2();

    return 0;
}
