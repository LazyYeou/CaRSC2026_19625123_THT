## Bagian B

### DASPRO
1. * **Class** dalam OOP bertindak sebagai blueprint dari sebuah objek. Dengan adanya class kita dapat membuat objek dengan sifat yang sama dalam jumlah banyak.
   ```cpp
    //Class untuk hewan anjing
    class Cat {
        //property
        std::string name;

        //method
        void meow() {
            std::cout << "miawww :3" << std::endl;
        }
    }
   ```
   * **Objek** adalah bentuk nyata dari **class**
    ```cpp
    class Cat {
    private:
            std::string name;
        
    public:
            //constructor
            Cat(std::string name){
                this->name = name; 
            }

            //setter nama
            std::string getName() {
                return name;
            }

            void meow() {
                std::cout << "miawww :3" << std::endl;
            }

    };

    int main() {
        //objek dari class Cat dengan nama cat1
        Cat cat1("si imoet");
        std::cout << cat1.getName() << std::endl;
        cat1.meow();
    }
    ```
    * **Abstraction** adalah proses menghilangkan proses yang rumit dan hanya menampilkan fitur esensial.
    ```cpp
    
    ```


    * Referensi
       * [OOP in C++](https://www.geeksforgeeks.org/cpp/object-oriented-programming-in-cpp/) 
