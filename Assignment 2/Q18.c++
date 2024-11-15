/*18. Write a class that represents a class of wireless device. A device has a location (point object may be
used), a fixed unique id, and a fixed circular transmission range. Write suitable constructors and
member functions for this class. Instantiates 10 such devices. Choose location (coordinates) and
transmission range of the devices randomly. Now, for each of these devices, find the neighbor devices
(i.e. devices that belong to the transmission range). Suppose, all of these devices have moved to a new
location (randomly chosen). Find out the new set of neighbors for each of these devices.*/

#include<iostream>
#include<math.h>
using namespace std ;

class wirless 
{
   int x,y,uid,r;
   public:
   wirless()
   {
       this->x = 0;
       this->y = 0;
       this->uid = 0;
       this-> r = 0;
   }

   void get(int a, int b, int c, int d)
   {
       this->x = a;
       this->y = b;
       this->uid = c;
       this-> r = d;
   }

   void Neighbour(wirless a, wirless b)
   {
       double dist = sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
       if(dist<r)
       cout << b.uid << " ";
   }

   int getUID()
   {
       return this->uid;
   }
    
};
int main()
{
    wirless arr[10];
    
    for(int i = 0; i < 10; i++)
    {
        int a,b,d;
        cout << "Enter co-ordinates of the " << i+1 << " device : ";
        cin >> a >> b;
        cout << "Enter transmission range of the " << i+1 << " device : ";
        cin >> d;
        arr[i].get(a,b,i+1,d);
    }

    for(int i = 0; i < 10; i++)
    {
        cout << "Neighbours of " << arr[i].getUID() << " are : ";
        for(int j = 0; j < 10; j++)
        {
            if(i!=j)
            {
                arr[i].Neighbour(arr[i],arr[j]);
            }

        }
        cout << "\n";
    }
   return 0;
}



int main(){

    return 0 ;
}