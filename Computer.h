#ifndef COMPUTER_H
#define COMPUTER_H

using namespace std;

//Base Class

class Computer {
    
public:    
    
    struct CPU{
        
        string make = "AMD Ryzen 9 5900X";
        int core = 12; //has 12 cores
        int speed = 3.7; //3.7GHz
        int bit_size = 64; //64-bit
        
    };
    CPU cpu;    // Next to instantiate this first before calling class in main() Ex: Computer comp;| comp.cpu.make
    
    void fetch();
    // execute()
    //write_back()
    
    struct MEM{
        
       string tech = "Corsair Vengeance LPX 2x8GB";
       int size = 16; //16 GB
        
        //byte read(addr)
        //void write(addr,byte)
        //void clear(addr) 
    };
    MEM mem;
    
    struct STOR{
        
       string make = "Seagate BarraCuda"; //ST2000DM008
       int size = 2; // 2TB
       string stor_type = "HDD";
       
       // data * read(block addr)
       // void write(block addr,data*)
       // format()
        
    };
    STOR stor;
    
    struct OS{ //Operating System
    
        string make = "Microsoft Windows";
        string version = "21H2";
        int bit_size = 64; //64-bit
        
        string installed_programs[5] = {"Photoshop","Canvas","OperaGX","Chrome","Fortnite"};
        
        //open_file()
        //save_file()
        //print_file()
        
        //installed_program(p name)
        //remove_program(p name)
        //show_installed_progs() | Should use loop for array, to list all programs
        //string running_progs[]; | Connect void run(program_name) to add to another array, then call all running programs, make a "While code!="" ", meaning its empty, so it will add +1 to array, to get to next empty slot
        //void run(program_name)  | Run program, and send to array running_progs[];
        //void stop(program_name) | Send user input to function, to find the programs running in running_progs[], Ex: "While code != X(userinput),if{code = userinput, delete} "
        //void show_running_progs() | use for loop to output all programs running in running_progs[]
    };
    OS os;
    
    struct ROM_STOR{ //read only mem
        
        int size = 32; //32 GB
        
        //data* read(block addr)
    };
    ROM_STOR rom;
    
    struct NW { //network
    
        //type
        //mac_address
        //ip_address
        //speed
        
        
    };
    NW nw;
    
    struct SMPS{
        
        //wattage
        //inp_voltage
        
        //p_on()
        //p_off()
        
    };
    SMPS smps;
    
 
};


#endif