#include <iostream>
#include <string>
using std::cout;
using std::cin;

class SimpleList {
    public:
        int size;
        int maxIndex = -1;
        std::string type;
        int simplelist[10];
        SimpleList(/*int size, std::string type*/) {
            //most csak az integer működik (ha eljutok ma odáig)
        }
        void insert(int value){
            if(maxIndex < size) {
                //if(type == string) {} //stb.
                this->simplelist[++maxIndex] = value;
            }
            else {
                while(size <= maxIndex ) {
                    size *= 2;
                    //új tömb létrehozása?
                    //ha már elég nagy a tömb?
                    //
                }                
            }

        }
        void read(int index) {
            cout << simplelist[index] << '\n';
        }
        void indexSwitch(int first, int second){
            int temp = simplelist[first];
            simplelist[first] = simplelist[second];
            simplelist[second] = temp;
        }
};

int main() {
    cout << "hi\n";

    SimpleList simpleList;
    simpleList.insert(5);
    simpleList.insert(6);
    simpleList.insert(8);

    simpleList.read(0);
    simpleList.read(1);
    simpleList.read(2);

    simpleList.indexSwitch(1, 0);
    simpleList.read(0);
    simpleList.read(1);
    simpleList.read(2);


    int end;
    cin >> end;
    return 0;
}