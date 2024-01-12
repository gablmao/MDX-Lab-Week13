#include <iostream>

using namespace std;

template <typename T>  //creates a generic template for a class, meaning it can create with any datatype
class List {
    private:
        T *data;
        int size;  //keeps count size of List

    public:
        T item;
        List(){
            data = new T[100];  //limits size to 100
            size = 0;
        }
        void add(T item){
            data[size++] = item;
        }

        void remove(int pos){
            List<T> temp;
            int newSize = size - pos;
            /*
            say you have a list = [1, 2, 3, 4, 5]
            and you call remove(3) -> remove item in list at position 3 = 3

            just copy the first half of the list to a new list up to pos
            then copy the other half past the pos
            */
            for (int i = 0; i < pos; i++){
                temp.add(i);
            }

            for (int i = pos++; i < newSize; i++){
                temp.add(i);
            }
        }

        int sizeOf(){
            return size;
        }

        T get(int pos){
            return data[pos];
        }
};

int main(){
    return 0;
}