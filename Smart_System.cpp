#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <climits>


using namespace std;
class CampusGraph{
    private:
    unordered_set<string> Building;
    unordered_map<string, vector<pair<string, int>>> graph;

    public:
    void addBuilding(){
        string name;
        cout <<"Please Enter the Building name:"<<endl;
        cin >> name;
        Building.insert(name);

        cout <<"You Add the Bulings Succfully :"<<endl;

    }
    void addRoad(){
        string srcBuilding;
         string desBuilding;
          int distance;
        cout <<"Please Enter the Scourse Buliding  "<<endl;
        cin>>srcBuilding;
        cout <<"Please Enter the Destination Building:"<<endl;
        cin>>desBuilding;
        cout <<"Please Enter the Distance Sourse to Destination:"<<endl;
        cin>>distance;
        if((Building.find(srcBuilding)==Building.end()) || (Building.find(desBuilding)==Building.end())){

            cout <<"The Building is not found Please add the building first:" <<endl;
            return;
        }
        graph[srcBuilding].push_back({desBuilding, distance});
        graph[desBuilding].push_back({srcBuilding, distance});
        
    }
    void displayMap(){
        for(auto item: graph){
            cout <<item.first<<"->";
            for(auto negb: item.second){
            cout <<negb.first<<"( "<<negb.second<<" )"<<endl;;
            }
            cout <<endl;
        }


    }
    void shortPath(){
        int current;
        int newdistance;
        string srcBuilding;
        string destBuilding;
        unordered_map<string, int> distance;
        priority_queue<pair<int , string>,
        vector<pair<int, string>>, greater<pair<int, string>>> pq;
        cout <<"please enter your src Building:"<<endl;
        cin >>srcBuilding;
        cout <<"please enter your dest buliding:"<<endl;
        cin >>destBuilding;
        if(Building.find(srcBuilding)==Building.end() || Building.find(destBuilding)==Building.end()){
            cout <<"Not Found:"<<endl;
            return;

        }
        for(auto item: Building){
            distance[item]=INT_MAX;// intailize the distance infinity
        }
        distance[srcBuilding]=0;
        pq.push({0, srcBuilding});
        
        while(!pq.empty()){
            auto current=pq.top();// top pair lo
            pq.pop(); // or romove kr do 
            int curentdistance=current.first; // curent distane
            string currentBuilding=current.second;// current building
            for(auto negb: graph[currentBuilding]){
                string nextBuilding=negb.first;  // negb buliding
                int roadDistance=negb.second;  //  distance
                int newDistance=curentdistance+roadDistance;// src to newbuilding  new distance 
                if(newDistance< distance[nextBuilding]){
                    distance[nextBuilding]=newDistance; //update distance 
                    
                // update distance or next bulidng ko queue ma add kro 
                pq.push({newDistance, nextBuilding});
                }



            
            }


            
        }
        if (distance[destBuilding] == INT_MAX)
{
    cout << "No Path Found!" << endl;
}
else
{
    cout << "Shortest Distance from "
         << srcBuilding << " to "
         << destBuilding << " = "
         << distance[destBuilding] << endl;
}
        


    }

};
class RoomManager{
    private:
   
    unordered_map<string, int> roomCapacity;
    unordered_map<string, bool> roomAwailabilty;
    public:
    bool roomExists(string roomId){
    return roomCapacity.find(roomId) != roomCapacity.end();
}

    void addRoom(){
        string roomId;
        int capacity;
        bool awailablity;
        cout <<"Plese Enter the room id;"<<endl;
        cin >> roomId;
        cout <<"Please enter the capcity of the room:"<<endl;
        cin >>capacity;
        cout <<"Plese enter awailablity of room:(0 for no and 1 for yes)"<<endl;
        cin >>awailablity;
          if(roomCapacity.find(roomId)!=roomCapacity.end()){
            cout <<"the room is already exist:"<<endl;
            return;
        }
    roomCapacity[roomId] = capacity;
    roomAwailabilty[roomId] = awailablity;

    cout << "Room added Successfully." << endl;

    }
    void SearchRoom(){
        string roomId;
        cout <<"Please enter the room id which you want to search:"<<endl;
        cin>> roomId;
        if(roomCapacity.find(roomId)== roomCapacity.end()){
           cout <<"the room is not found:"<<endl;
           return ;        
        }
        auto it=roomCapacity.find(roomId);
        cout <<it->second<<endl;
        auto itt= roomAwailabilty.find(roomId);
        cout <<itt->second<<endl;;

        
        

    }
    void AllocateRoom(){
        string roomId;
        cout <<"Enter the room id whihc you want to allcate the room:"<<endl;
        cin >>roomId;
        if(roomCapacity.find(roomId)== roomCapacity.end()){
            cout <<"the room is not found :"<<endl;
            return;
        }
        auto it=roomAwailabilty.find(roomId);
        if(it->second==false){
            cout <<"the room is already is allcated :"<<endl;
            return ;
        }
        it->second=false;
        cout <<"the room is successfuly allcated:"<<endl;

    }
    void checkAwailablity(){
        string roomId;
        cout <<"enter the room id "<<endl;
        cin >>roomId;
        if(roomCapacity.find(roomId)==roomCapacity.end()){
            cout <<"the room is not found:"<<endl;
            return;
        }
        auto it= roomAwailabilty.find(roomId);
        if(it->second==false){
            cout <<"the room is already allocated:"<<endl;
            
        }else if(it->second==true){
            cout <<"the room is awailable please visit:"<<endl;
            return ;
        }
         


    }
};
class EventManager{
private:
    unordered_map<string,string> eventName;
    unordered_map<string,string> eventRoomId;
    unordered_map<string,string> eventDate;
    unordered_map<string,string> eventTime;

public:

    void addEvent(RoomManager &obj2){
        string eventId,name,roomId,date,time;

        cout<<"Enter Event ID:"<<endl;
        cin>>eventId;

        if(eventName.find(eventId)!=eventName.end()){
            cout<<"Event already exists."<<endl;
            return;
        }

        cout<<"Enter Event Name:"<<endl;
        cin>>name;
           cout<<"Enter Room ID:"<<endl;
    cin>>roomId;

    if(!obj2.roomExists(roomId)){
        cout<<"Room ID not found. Please add the room first."<<endl;
        return;
    }

       

        cout<<"Enter Event Date:"<<endl;
        cin>>date;

        cout<<"Enter Event Time:"<<endl;
        cin>>time;

        eventName[eventId]=name;
        eventRoomId[eventId]=roomId;
        eventDate[eventId]=date;
        eventTime[eventId]=time;

        cout<<"Event Added Successfully."<<endl;
    }

    void searchEvent(){
        string eventId;

        cout<<"Enter Event ID:"<<endl;
        cin>>eventId;

        if(eventName.find(eventId)==eventName.end()){
            cout<<"Event not found."<<endl;
            return;
        }

        cout<<"Event Name : "<<eventName[eventId]<<endl;
        cout<<"Room ID    : "<<eventRoomId[eventId]<<endl;
        cout<<"Date       : "<<eventDate[eventId]<<endl;
        cout<<"Time       : "<<eventTime[eventId]<<endl;
    }

    void deleteEvent(){
        string eventId;

        cout<<"Enter Event ID:"<<endl;
        cin>>eventId;

        if(eventName.find(eventId)==eventName.end()){
            cout<<"Event not found."<<endl;
            return;
        }

        eventName.erase(eventId);
        eventRoomId.erase(eventId);
        eventDate.erase(eventId);
        eventTime.erase(eventId);

        cout<<"Event Deleted Successfully."<<endl;
    }

    void displayEvents(){

        if(eventName.empty()){
            cout<<"No Events Found."<<endl;
            return;
        }

        for(auto item:eventName){

            string id=item.first;

            cout<<"Event ID : "<<id<<endl;
            cout<<"Event Name : "<<eventName[id]<<endl;
            cout<<"Room ID : "<<eventRoomId[id]<<endl;
            cout<<"Date : "<<eventDate[id]<<endl;
            cout<<"Time : "<<eventTime[id]<<endl;
            cout<<endl;
        }
    }
};
int main(){
    CampusGraph obj;
    RoomManager obj2;
    EventManager obj3;
    int choice;
    do{
        cout <<"===>Smart Navigation  And Resourse Management System====>"<<endl;
        cout <<" 1.. Navigation ========:"<<endl;
        cout <<" 2... ClassRoom ========:"<<endl;
        cout <<"3.. Event ==============:"<<endl;
        cout <<"4 ....Exit =============:"<<endl;
        cout <<"Please Enter your Choice :"<<endl;
        cin >>choice;
        switch(choice){
            case 1:
            cout <<"Welcome you are Succufully enter in Navigation System:"<<endl;
            int ch;
            do{
                cout <<"Please Select your today operation :"<<endl;
                cout <<"1... Add buildings =====:"<<endl;
                cout <<"2.. Add Roads ==========:"<<endl;
                cout <<" 3.. Show Map===========:"<<endl;
                cout <<"4 ''''Find Short Path===;"<<endl;
                cout <<"5 Go Back Main Menu: ====:"<<endl;
                cout <<"Please Enter your choice :"<<endl;
                cin >> ch;
                switch(ch){
                    case 1:
                    obj.addBuilding();
                    break;
                    case 2:
                    obj.addRoad();
                    break;
                    case 3:
                    obj.displayMap();
                    break;
                    case 4:
                    obj.shortPath();
                    break;
                    case 5:
                    cout <<"So you are in main Menu"<<endl;
                    break;
                   
                    default:
                    cout <<"inValid No you enter Please try again:"<<endl;
                    break;
                    
                }


            }
            while(ch !=5);
            break;
            case 2:
             cout <<"Welcome  Room Maager section"<<endl;
            int ch2;
            do{
                cout <<"Please Select your today operation :"<<endl;
                cout <<"1... Add Room =====:"<<endl;
                cout <<"2..  Search Room ==========:"<<endl;
                cout <<" 3..Allocate the room ===========:"<<endl;
                cout <<"4 ''''Ceheck the awailabilty===;"<<endl;
                cout <<"5 Go Back Main Menu: ====:"<<endl;
                cout <<"Please Enter your choice :"<<endl;
                cin >> ch2;
                switch(ch2){
                    case 1:
                    obj2.addRoom();
                    break;
                    case 2:
                    obj2.SearchRoom();
                    break;
                    case 3:
                    obj2.AllocateRoom();
                    break;
                    case 4:
                    obj2.checkAwailablity();
                    break;
                    case 5:
                    cout <<"So you are in main Menu"<<endl;
                    break;
                   
                    default:
                    cout <<"inValid No you enter Please try again:"<<endl;
                    break;
                    
                }


            }
            while(ch2 !=5);
            break;
            case 3:
            
{
    int ch3;
    do{
        cout<<"===== Event Management ====="<<endl;
        cout<<"1. Add Event"<<endl;
        cout<<"2. Search Event"<<endl;
        cout<<"3. Delete Event"<<endl;
        cout<<"4. Display Events"<<endl;
        cout<<"5. Go Back"<<endl;

        cin>>ch3;

        switch(ch3){
            case 1:
                obj3.addEvent(obj2);
                break;
            case 2:
                obj3.searchEvent();
                break;
            case 3:
                obj3.deleteEvent();
                break;
            case 4:
                obj3.displayEvents();
                break;
            case 5:
                cout<<"Back to Main Menu"<<endl;
                break;
            default:
                cout<<"Invalid Choice"<<endl;
        }

    }while(ch3!=5);

    break;
}
            break;
            
            case 4:
            cout <<"Exit the programe Successfully:"<<endl;
            break;
            default:
            cout <<"you Enter the invailed choice please try again :"<<endl;
            break;
        
        }

    }
    while(choice !=4);
    return 0;
}
