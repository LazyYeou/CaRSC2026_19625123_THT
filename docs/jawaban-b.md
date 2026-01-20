## Bagian B

### DASPRO
1. 1. * **Class** dalam OOP bertindak sebagai blueprint dari sebuah objek. Dengan adanya class kita dapat membuat objek dengan sifat yang sama dalam jumlah banyak.
        ```cpp
         //Class untuk hewan anjing
         class Cat {
             //property
             std::string name;

             //method
             void meow() {
                 std::cout << "miawww :3" << std::endl;
             }
         };
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
        * **Abstraction** adalah konsep menghilangkan proses yang rumit dan hanya menampilkan   fitur esensial / inti. Aplikasinya dalam c++ adalah berupa abstract classes
        ```cpp
        class Kendaraan {
        public: 
            //virtual pure function
            virtual void horn() = 0;
        };

        class mobil : public Kendaraan {
        public: 
            //definisi ulang fungsi dari abstract class
            void horn() override {
                std::cout << "BIP BIP" << std::endl;
            } 
        };
        ```
        * **Encapsulation** merupakan proses membungkus data dan method kedalam sebuah unit     biasanya berupa class untuk mencegah data diakses dari luar unit tersebut.
        ```cpp
        class Kendaraan {
        private:
            string jenis;
        public:
            void setJenis(string jenis) {
                this->jenis = jenis;
            }

            void getJenis() {
                return jenis;
            }
        };
        ```
        * **Inheritance** merupakan konsep penurunan data dan method dari kelas satu kelas ke   kelas lainnya. Dalam terminologinya kelas yang menurunkan fiturnya disebut parent class atau superclass dan class yang mewarisi fitur disebut children class atau subclass. 
        ```cpp
        //parent class
        class Hewan {
        public:
            void eat() {
                std::cout<< "NOM NOM" << std::endl;
            }
        };

        //child class
        class Kucing : public Hewan {
        public:
            void suara() {
                std::cout << "MIAW :3" << std::endl;
            }
        };
        ```
        * **Polymorphism** merupakan konsep dimana sebuah fungsi dapat memiliki behaviour yang berbeda tergantung dengan objek yang menerimannya
        ```cpp 
        class Kendaraan {
        public: 
            //virtual pure function
            virtual void horn() = 0;
        };

        class Mobil : public Kendaraan {
        public: 
            //definisi ulang fungsi untuk class Mobil
            void horn() override {
                std::cout << "BIP BIP" << std::endl;
            } 
        };
        class Motor : public Kendaraan {
        public: 
            //definisi ulang fungsi untuk class Motor
            void horn() override {
                std::cout << "TIN TIN" << std::endl;
            } 
        };
        ```
        * Referensi
            * [OOP in C++](https://www.geeksforgeeks.org/cpp/object-oriented-programming-in-cpp/) 
            * [C++ reference](https://en.cppreference.com/w/cpp.html)
    2.
2.  
