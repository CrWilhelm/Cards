#include <iostream> 
#include <string>
#include <random>
#include <vector>
using namespace std;

   string Charcatercolor = "cherry";
   string Chareactercolor = "blueberry";
   string Charactercolor = "banana";
   string Charctercolor = "apple";
   
   string Charcatercolor2 = "cherry";
   string Chareactercolor2 = "blueberry";
   string Charactercolor2 = "banana";
   string Charctercolor2 = "apple";
   
   string Charcatercolor3 = "cherry";
   string Chareactercolor3 = "blueberry";
   string Charactercolor3 = "banana";
   string Charctercolor3 = "apple";
   

int main(){
    cout << "Welcome to Fruit Rollup - The Game\n";
    cout << "\nReminder: all entries are case sensitive";
    cout << "\nChoose cherry, blueberry, banana, or apple (avatar)\n";
  

   cin >> Charactercolor;
   if (Charactercolor == "cherry"){ cout << "\nPlayer 2, choose blueberry, banana, or apple\n";
    cin >> Charactercolor2;
        if (Charactercolor2 == "blueberry"){ cout << "\n Player 3, choose banana or apple\n";
        cin >> Charactercolor3;
             if (Charactercolor3 == "banana") cout << "\n Player 4 you are apple\n";
                if (Charactercolor3 == "apple") cout << "\n Player 4 you are banana\n";
        }
       if (Charactercolor2 == "banana"){ cout << "\n Player 3, choose blueberry or apple\n";
       cin >> Charactercolor3;
             if (Charactercolor3== "blueberry") cout << "\n Player 4 you are apple\n";
                if (Charactercolor3 == "apple") cout << "\n Player 4 you are blueberry\n";
       }
       if (Charactercolor2 == "apple"){ cout << "\n Player 3, choose blueberry or banana\n";
       cin >> Charactercolor3;
       if (Charactercolor3 == "banana") cout << "\n Player 4 you are blueberry\n";
       if (Charctercolor3 == "blueberry") cout << "\n Player 4 you are banana\n";
    }
   }
    
   if (Charactercolor == "blueberry"){ cout << "\nPlayer 2, choose cherry, banana, or apple\n";
    cin >> Charactercolor2;
        if (Charactercolor2 == "cherry"){ cout << "\n Player 3, choose banana or apple\n";
        cin >> Charactercolor3;
        if (Charactercolor3 == "apple") cout << "\n Player 4 you are banana\n";
         if (Charactercolor3 == "banana") cout << "\n Player 4 you are apple\n";
        }
       if (Charactercolor2 == "banana"){ cout << "\n Player 3, choose cherry or apple\n";
      cin >> Charactercolor3;
        if (Charactercolor3 == "apple") cout << "\n Player 4 you are cherry\n";
        if (Charactercolor3 == "cherry") cout << "\n Player 4 you are apple\n";
      }
       if (Charactercolor2 == "apple"){ cout << "\n Player 3, choose cherry or banana\n";
        cin >> Charactercolor3;
        if (Charactercolor3 == "cherry") cout << "\n Player 4 you are banana\n";
        if (Charactercolor3 == "banana") cout << "\n Player 4 you are cherry\n";
       }
   }
   
   if (Charactercolor == "banana"){ cout << "\nPlayer 2, choose cherry, blueberry, or apple\n";
   cin >> Charactercolor2;
   if (Charactercolor2 == "cherry"){ cout << "\n Player 3, choose blueberry or apple\n";
   cin >> Charactercolor3;
   if (Charctercolor3 == "blueberry") cout << "\n Player 4 you are apple\n";
   if (Charactercolor3 == "apple") cout << "n Player 4 you are blueberry\n";
   }
    if (Charactercolor2 == "blueberry"){ cout << "\n Player 3, choose cherry or apple\n";
    cin >> Charactercolor3;
    if (Charactercolor3 == "cherry") cout << "\n Player 4 you are apple\n";
    if (Charactercolor3 == "apple") cout << "\n Player 4 you are cherry\n";
    }
    if (Charactercolor2 == "apple"){ cout << "\n Player 3, choose blueberry or cherry\n";
    cin >> Charactercolor3;
             if (Charactercolor3== "blueberry") cout << "\n Player 4 you are cherry\n";
             if (Charactercolor3 == "cherry") cout << "\n Player 4 you are blueberry\n";
   }
   }
  
   if (Charactercolor == "apple"){ cout << "\nPlayer 2, choose cherry, blueberry, or banana\n";
       cin >> Charactercolor2;
       if (Charactercolor2 == "cherry"){ cout << "\n Player 3, choose blueberry or banana\n";
   cin >> Charactercolor3;
   if (Charctercolor3 == "blueberry") cout << "\n Player 4 you are banana\n";
   if (Charactercolor3 == "banana") cout << "\n Player 4 you are blueberry\n";
   }
   if (Charactercolor2 == "blueberry"){ cout << "\n Player 3, choose cherry or banana\n";
    cin >> Charactercolor3;
    if (Charactercolor3 == "cherry") cout << "\n Player 4 you are banana\n";
    if (Charactercolor3 == "banana") cout << "\n Player 4 you are cherry\n";
    }
     if (Charactercolor2 == "banana"){ cout << "\n Player 3, choose cherry or blueberry\n";
      cin >> Charactercolor3;
        if (Charactercolor3 == "blueberry") cout << "\n Player 4 you are cherry\n";
        if (Charactercolor3 == "cherry") cout << "\n Player 4 you are blueberry\n";
      }
   }

 std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 6);
    std::string input;
         string move;
         string turn;
         string dice;
         
         cout << "\nIt's a race to the finish! Whoever gets the farthest wins!";
         cout << " But be quick, there's only 4 turns";
    //for (int i=0; i<5; i++){
    cout << "\nTo proceed, enter roll\n";
        std::cin >> input;
         int rollp1a = dis(gen);
        if (input == "roll"){
            //int rollp1a = dis(gen);
            if(rollp1a == 1){
                std::cout << "\n player 1 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 1 move " << rollp1a << " spaces.\n";
            }}
            
            
     cout << "\nTo proceed, enter roll\n";
            std::cin >> move;
            int rollp2a = dis(gen);
        if (move == "roll"){
            //int rollp2a = dis(gen);
            if(rollp2a == 1){
                std::cout << "\n player 2 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 2 move " << rollp2a << " spaces.\n";
            }}
    
    cout << "\nTo proceed, enter roll\n";
            std::cin >> turn;
             int rollp3a = dis(gen);
        if (turn == "roll"){
            //int rollp3a = dis(gen);
            if(rollp3a == 1){
                std::cout << "\n player 3 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 3 move " << rollp3a << " spaces.\n";
            }}
            
  
     cout << "\nTo proceed, enter roll\n";
            std::cin >> dice;
            int rollp4a = dis(gen);
        if (dice == "roll"){
           // int rollp4a = dis(gen);
            if(rollp4a == 1){
                std::cout << "\n player 4 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 4 move " << rollp4a << " spaces.\n";
            }}
    
  
    //}
    cout << "\nTo proceed, enter roll\n";
        std::cin >> input;
         int rollp1b = dis(gen);
        if (input == "roll"){
            //int rollp1b = dis(gen);
            if(rollp1b == 1){
                std::cout << "\n player 1 move " << 1 << " space.\n";
            }
            if(rollp1b==6){
                std::cout << "\n player 1 move " << 6 << " spaces. Fruitilicious roll!\n";
            }  
            else {
                std::cout << "\n player 1 move " << rollp1b << " spaces.\n";
            }}
            
    
    cout << "\nTo proceed, enter roll\n";
            std::cin >> move;
            int rollp2b= dis(gen);
        if (move == "roll"){
            //int rollp2b= dis(gen);
            if(rollp2b == 1){
                std::cout << "\n player 2 move " << 1 << " space.\n";
            }
            if(rollp2b==6){
                std::cout << "\n player 2 move " << 6 << " spaces. Fruitilicious roll!\n";
            }  
            else {
                std::cout << "\n player 2 move " << rollp2b << " spaces.\n";
            }}
    cout << "\nTo proceed, enter roll\n";
            std::cin >> turn;
            int rollp3b = dis(gen);
        if (turn == "roll"){
            //int rollp3b = dis(gen);
            if(rollp3b == 1){
                std::cout << "\n player 3 move " << 1 << " space.\n";
            }
            if(rollp3b==6){
                std::cout << "\n player 3 move " << 6 << " spaces. Fruitilicious roll!\n";
            }  
            else {
                std::cout << "\n player 3 move " << rollp3b << " spaces.\n";
            }}
    cout << "\nTo proceed, enter roll\n";
            std::cin >> dice;
            int rollp4b = dis(gen);
        if (dice == "roll"){
            //int rollp4b = dis(gen);
            if(rollp4b == 1){
                std::cout << "\n player 4 move " << 1 << " space.\n";
            }
            if(rollp4b==6){
                std::cout << "\n player 4 move " << 6 << " spaces. Fruitilicious roll!\n";
            }  
            else {
                std::cout << "\n player 4 move " << rollp4b << " spaces.\n";
            }}
            int p1progress= rollp1b+rollp1a;
            int p2progress= rollp2a+rollp2b;
            int p3progress= rollp3a+rollp3b;
            int p4progress= rollp4a+rollp4b;
            cout << "\nYou're almost there! Heres's where you stand\n";
            cout << "Player 1 " << p1progress << endl; 
            cout << "Player 2 " << p2progress << endl;
            cout << "Player 3 " << p3progress << endl; 
            cout << "Player 4 " << p4progress << endl;
            
    cout << "\nTo proceed, enter roll\n";
        std::cin >> input;
         int rollp1c = dis(gen);
        if (input == "roll"){
            //int rollp1b = dis(gen);
            if(rollp1c == 1){
                std::cout << "\n player 1 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 1 move " << rollp1c << " spaces.\n";
            }}
             cout << "\nTo proceed, enter roll\n";
        std::cin >> input;
         int rollp2c = dis(gen);
        if (input == "roll"){
            //int rollp1b = dis(gen);
            if(rollp2c == 1){
                std::cout << "\n player 2 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 2 move " << rollp2c << " spaces.\n";
            }}
        cout << "\nTo proceed, enter roll\n";
            std::cin >> turn;
             int rollp3c = dis(gen);
        if (turn == "roll"){
            //int rollp3a = dis(gen);
            if(rollp3c == 1){
                std::cout << "\n player 3 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 3 move " << rollp3c << " spaces.\n";
            }}
             cout << "\nTo proceed, enter roll\n";
        std::cin >> input;
         int rollp4c = dis(gen);
        if (input == "roll"){
            //int rollp1b = dis(gen);
            if(rollp4c == 1){
                std::cout << "\n player 4 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 4 move " << rollp4c << " spaces.\n";
            }}
             cout << "\nTo proceed, enter rolltide\n";
        std::cin >> input;
         int rollp1d = dis(gen);
        if (input == "rolltide"){
            //int rollp1b = dis(gen);
            if(rollp1d == 1){
                std::cout << "\n player 1 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 1 move " << rollp1d << " spaces.\n";
            }}
     cout << "\nTo proceed, enter rolltide\n";
            std::cin >> move;
            int rollp2d= dis(gen);
        if (move == "rolltide"){
            //int rollp2b= dis(gen);
            if(rollp2d == 1){
                std::cout << "\n player 2 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 2 move " << rollp2d << " spaces.\n";
            }}
             cout << "\nTo proceed, enter rolltide\n";
        std::cin >> input;
         int rollp3d = dis(gen);
        if (input == "rolltide"){
            //int rollp1b = dis(gen);
            if(rollp3d == 1){
                std::cout << "\n player 3 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 3 move " << rollp3d << " spaces.\n";
            }}
            
             cout << "\nTo proceed, enter rolltide\n";
        std::cin >> input;
         int rollp4d = dis(gen);
        if (input == "rolltide"){
            //int rollp1b = dis(gen);
            if(rollp4d == 1){
                std::cout << "\n player 4 move " << 1 << " space.\n";
            }
            else {
                std::cout << "\n player 4 move " << rollp4d << " spaces.\n";
            }}
            
   int p1= rollp1a+rollp1b+rollp1c+rollp1d;
   int p2= rollp2a+rollp2b+rollp2c+rollp2d;
   int p3= rollp3a+rollp3b+rollp3c+rollp3d;
   int p4= rollp4a+rollp4b+rollp4c+rollp4d;
   
   cout << "\nPlayer 1 you moved " << p1 << " spaces total!" << endl;
 cout << "Player 2 you moved " << p2 << " spaces total!" << endl;
 cout <<"Player 3 you moved " << p3 << " sapces total!" <<endl;
 cout << "Player 4 you moved " << p4 << " spaces total!"<< endl;
 
 if (p1>p2&&p1>p3&&p1>p4){
     cout << "Congratulations Player 1! You have mastered the art of fruit rolling so therefore can be named Fruit Master Ninja. Others will bow before you! ";
 }
  if (p2>p1&&p2>p3&&p2>p4){
     cout << "Congratulations Player 2! You have mastered the art of fruit rolling so therefore can be named Fruit Master Ninja. Others will bow before you! ";
 }
 if (p3>p2&&p3>p1&&p3>p4){
     cout << "Congratulations Player 3! You have mastered the art of fruit rolling so therefore can be named Fruit Master Ninja. Others will bow before you! ";
 }
  if (p4>p2&&p4>p3&&p4>p1){
     cout << "Congratulations Player 4! You have mastered the art of fruit rolling so therefore can be named Fruit Master Ninja. Others will bow before you! ";
  }
  
  if (p1==p2||p1==p3||p1==p4||p2==p3||p2==p4||p3==p4){
      cout << "It's a tie. Play again!";
  }
 
  cout << endl;
  
    return 0;
}