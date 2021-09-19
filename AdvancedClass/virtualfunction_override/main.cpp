
#include <iostream>
#include <string>


// function hidden: class inheritance, directly re-define the function with the same name in children class

// override with virtual function : declare virtual in parent class, and redifine it with override key word in children class

// interface with pure virtual function : declare pure virtual in parent class without defining it, define it with override key word in children class


class Entity_hidden{
    public:
        std::string get_name(){return "Entity_hidden";}
};

class Player_hidden : public Entity_hidden{
    private:
        std::string m_name;
    public:
        Player_hidden(const std::string& name):m_name(name){}
        std::string get_name(){return m_name;}

};

void PrintName_hidden(Entity_hidden* entity){
    std::cout<<entity->get_name()<<std::endl;
};



class Entity_virtual{
    public:
        virtual std::string get_name(){return "Entity_hidden";}
};

class Player_virtual: public Entity_virtual{
    private:
        std::string m_name;
    public:
        Player_virtual(const std::string& name):m_name(name){}
        std::string get_name() override {return m_name;}

};

void PrintName_virtual(Entity_virtual* entity){
    std::cout<<entity->get_name()<<std::endl;
};


class Entity_pure_virtual{
    public:
        virtual std::string get_name()=0;
};

class Player_pure_virtual: public Entity_pure_virtual{
    private:
        std::string m_name;
    public:
        Player_pure_virtual(const std::string& name):m_name(name){}
        std::string get_name() override {return m_name;}

};

void PrintName_pure_virtual(Entity_pure_virtual* entity){
    std::cout<<entity->get_name()<<std::endl;
};





int main(){
    Entity_hidden* e= new Entity_hidden();
    std::cout<<e->get_name()<<std::endl;
    PrintName_hidden(e);

    Player_hidden* p= new Player_hidden("HaHa");
    std::cout<<p->get_name()<<std::endl;
    PrintName_hidden(p);



    Entity_virtual* e_1= new Entity_virtual();
    std::cout<<e_1->get_name()<<std::endl;
    PrintName_virtual(e_1);

    Player_virtual* p_1= new Player_virtual("HaHa");
    std::cout<<p_1->get_name()<<std::endl;
    PrintName_virtual(p_1);


    /* can not instantiate 
    Entity_pure_virtual* e_2= new Entity_pure_virtual();
    std::cout<<e_2->get_name()<<std::endl;
    PrintName_pure_virtual(e_2);
    */
    Player_pure_virtual* p_2= new Player_pure_virtual("HaHa");
    std::cout<<p_2->get_name()<<std::endl;
    PrintName_pure_virtual(p_2);
}