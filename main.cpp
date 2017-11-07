/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agendron
 *
 * Created on November 2, 2017, 2:17 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

class Base {
public:
    Base() {}
    virtual void Draw() {}   
private:
};


class TreeType1 : public Base {

public:
    TreeType1() : Base() {}
    void Draw(void) {
        cout << "Drawing 1:\n /\\\n//\\\\" << endl;
    }
private:
};


class TreeType2 : public Base {

public:
    TreeType2() : Base() {}
    void Draw(void) {
        cout << "Drawing 2:\n /\\\n/**\\" << endl;
    }
private:
};


class TreeType3 : public Base {

public:
   TreeType3() : Base() {}
   void Draw(void) {
        cout << "Drawing 3:\n /\\\n/++\\" << endl;
    }
private:
};


int main(int argc, char** argv) {
    
    Base *trees[3];
    
    TreeType1 *tree1;
    TreeType2 *tree2;    
    TreeType3 *tree3;
    
    trees[0] = tree1 = new TreeType1;
    trees[1] = tree2 = new TreeType2;
    trees[2] = tree3 = new TreeType3;
            
    for(int i = 0; i <= 2; i++)
    {
        trees[i]->Draw();
    }
    
    return 0;
}

