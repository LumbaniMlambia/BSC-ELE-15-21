#include <iostream>
#include <random>
using namespace std;
int main() {
    // Create a random device
    random_device rd;
    // Create a Mersenne Twister pseudo-random number generator seeded with rd
        mt19937 gen(rd());
    // Generate integers between 0 and 11 inclusive
    uniform_int_distribution<> dis(0, 11);
    
    // Generate and print 10 random numbers
    
        int random_number = dis(gen);

        int daysUntilExpiration=random_number;
        
        if(daysUntilExpiration==0)
        {
            cout<<"Your subscription has expired.\n"<<endl;
        }
     
        else if(daysUntilExpiration==1)
        {
            cout<<"Your subscription expires within a day!"<<endl<<"Renew now and save 20%!\n"<<endl;
        }

        else if(daysUntilExpiration<=5)
        {
            cout<<"Your subscription expires in "<<daysUntilExpiration<<" days"<<endl<<"Renew now and save 10%!\n"<<endl;
        }

        else if (daysUntilExpiration<=10)
        {
            cout<<"Your subscription will expire soon."<<endl<<"Renew now!\n"<<endl;
        }
 
        else 
        {
            cout<<"You have an active subscription\n"<<endl;
        }
       
    
    return 0;
}
