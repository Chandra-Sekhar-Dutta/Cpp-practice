#include<iostream>
using namespace std;
void Price_star(int star){
    if (star==1){
        cout<<"The price of the hotels will be 1000$ per day.";
    }
    else if(star==2){
        cout<<"The price of the hotels will be 2500$ per day.";
    }
    else if(star==3){
        cout<<"The price of the hotels will be 3500$ per day.";
    }    
    else if(star==4){
        cout<<"The price of the hotels will be 6000$ per day.";
    }    
    else if(star==5){
        cout<<"The price of the hotels will be 10000$ per day.";
    }
    else{
        cout<<"Invalid Input. Try between 1 to 5.";
    }
}

class Hotel{
    private:
    string Name,ID; int Phone_no;
    
    public:
    void customer_details(string name, string id, int phone_no){
        Name=name;
        ID=id;
        Phone_no=phone_no;
    }
    
    void set(string name, string id, int phone_no){
        
        cout<<"Your name:";
        cin>>name;
        cout<<"Your ID Card:";
        cin>>id;
        cout<<"Your Phone number:";
        cin>>phone_no;
    }
    
    void room_num(int room_no){
            cout<<"Enter your room number and please enter in: ";
            cin>>room_no;
            if(room_no>=100 and room_no<=500){
                cout<<"You are welcomed.";
            }
            else{
                cout<<"Rooms are from 100 to 500 only";
            }
}
    void reserved(){
    cout<<"You have reserved a room for you. Thank you for choosing our servise.";
    }
};

class star1_hotel:public Hotel{
    private:
    int Star;
    public:
    void STAR(int star){
        Star=star;
    }
    void show_star1_hotel(){
        cout<<"Welcome to our hotel.";
    }
};

class star2_hotel:public Hotel{
    private:
    int Star;
    public:
    void STAR(int star){
        Star=star;
    }
    void show_star2_hotel(){
        cout<<"Welcome to our hotel.";
    }
};

class star3_hotel:public Hotel{
    private:
    int Star;
    public:
    void STAR(int star){
        Star=star;
    }
    void show_star3_hotel(){
        cout<<"Welcome to our hotel.";
    }
};

class star4_hotel:public Hotel{
    private:
    int Star;
    public:
    void STAR(int star){
        Star=star;
    }
    void show_star4_hotel(){
        cout<<"Welcome to our hotel.";
    }
};

class star5_hotel:public Hotel{
    private:
    int Star;
    public:
    void STAR(int star){
        Star=star;
    }
    void show_star5_hotel(){
        cout<<"Welcome to our hotel.";
    }
};

int main()
{
    string name, id; int phone_no,star,Choose,room_no,truth_value;
    cout<<"The hotels available are:\n1 star hotel-\n\t1.SEA HORSE INN, 2.Naksha Tree Hotel, 3.Kumar Hotel";
    cout<<"\n2 star hotel-\n\t1.Hotel Pandian, 2.GT Hotel, 3.Supreme Residency\n";
    cout<<"\n3 star hotel-\n\t1.Goguldham Hotel, 2.Hotel Bliss, 3.Golden Inn\n";
    cout<<"\n4 star hotel-\n\t1.Central Park Hotel, 2.Taj Resort, 3.Country Inn\n";
    cout<<"\n5 star hotel-\n\t1.Taj Hotel, 2.Bhawan Palace, 3.Leela Palace\n";
    cout<<"\nDid you booked any room? If yes please mention 1 for 'Yes' or 0 for 'No': ";
    cin>>truth_value;
    if(truth_value==1){
    cout<<"\nYour type of hotel is:\n1 star/ 2 star/ 3 star/ 4 star/ 5 star:";
    cin>>star;
    cout<<"\n Choose the hotel:";
    cin>>Choose;
            if(star==1){
                if(Choose==1){
                    star1_hotel SEA_HORSE_INN;
                    SEA_HORSE_INN.room_num(room_no);
                }
                else if(Choose==2){    
                    star1_hotel Naksha_Tree_Hotel;
                    Naksha_Tree_Hotel.room_num(room_no);
                }
                else if(Choose==3){
                    star1_hotel Kumar_Hotel;
                    Kumar_Hotel.room_num(room_no);
                }
                else{
                	cout<<"Hotel available are only 3. Please choose from the list.";
				}
            }
            else if(star==2){
                if(Choose==1){
                    star2_hotel Hotel_Pandian;
                    Hotel_Pandian.room_num(room_no);
                }
                else if(Choose==2){
                    star2_hotel GT_Hotel;
                    GT_Hotel.room_num(room_no);
                }
                else if(Choose==3){
                    star2_hotel Supreme_Residency;
                    Supreme_Residency.room_num(room_no);
                }
                else{
                	cout<<"Hotel available are only 3. Please choose from the list.";
				}
            }
            else if(star==3){
                if(Choose==1){
                    star3_hotel Goguldham_Hotel;
                    Goguldham_Hotel.room_num(room_no);
                }
                else if(Choose==2){
                    star3_hotel Hotel_Bliss;
                    Hotel_Bliss.room_num(room_no);
                }
                else if(Choose==3){
                    star3_hotel Golden_Inn;
                    Golden_Inn.room_num(room_no);
                }
                else{
                	cout<<"Hotel available are only 3. Please choose from the list.";
				}
            }
            else if(star==4){
                if(Choose==1){
                    star4_hotel Central_Park_Hotel;
                    Central_Park_Hotel.room_num(room_no);
                }
                else if(Choose==2){
                    star4_hotel Taj_Resort;
                    Taj_Resort.room_num(room_no);
                }
                else if(Choose==3){
                    star4_hotel Country_Inn;
                    Country_Inn.room_num(room_no);
                }
                else{
                	cout<<"Hotel available are only 3. Please choose from the list.";
				}
            }
            else if(star==5){
                if(Choose==1){
                    star4_hotel Taj_Hotel;
                    Taj_Hotel.room_num(room_no);
                }
                else if(Choose==2){
                    star5_hotel Bhawan_Palace;
                    Bhawan_Palace.room_num(room_no);
                }
                else if(Choose==3){
                    star5_hotel Leela_Palace;
                    Leela_Palace.room_num(room_no);
                }
                else{
                	cout<<"Hotel available are only 3. Please choose from the list.";
				}
            }
            
    }
    else if(truth_value==0){
    cout<<"\nYour type of hotel is:\n1 star/ 2 star/ 3 star/ 4 star/ 5 star:";
    cin>>star;
    Price_star(star);
    cout<<"\n";
    
        if(star==1)
    {
    cout<<"Choose the following hotels:\n1 for SEA HORSE INN, 2 for Naksha Tree Hotel, 3 for Kumar Hotel:";
    cin>>Choose;

        if (Choose==1){
    star1_hotel SEA_HORSE_INN;
    SEA_HORSE_INN.set( name,  id,  phone_no);
    SEA_HORSE_INN.reserved();
    SEA_HORSE_INN.show_star1_hotel();
        }
    
        else if (Choose==2){
    star1_hotel Naksha_Tree_Hotel;
    Naksha_Tree_Hotel.set( name,  id,  phone_no);
    Naksha_Tree_Hotel.reserved();
    Naksha_Tree_Hotel.show_star1_hotel();
        }
    
        else if (Choose==3){
    star1_hotel Kumar_Hotel;
    Kumar_Hotel.set( name,  id,  phone_no);
    Kumar_Hotel.reserved();
    Kumar_Hotel.show_star1_hotel();
        }
    
        else{
        cout<<"Invalid Input";
    }
    }
        else if(star==2){
    cout<<"Choose the following hotels:\n1 for Hotel Pandian, 2 for GT Hotel, 3 for Supreme Residency:";
    cin>>Choose;
        if (Choose==1){
    star2_hotel Hotel_Pandian;
    Hotel_Pandian.set( name,  id,  phone_no);
    Hotel_Pandian.reserved();
    Hotel_Pandian.show_star2_hotel();
        }
    
        else if (Choose==2){
    star2_hotel GT_Hotel;
    GT_Hotel.set( name,  id,  phone_no);
    GT_Hotel.reserved();
    GT_Hotel.show_star2_hotel();
        }
    
        else if (Choose==3){
    star2_hotel Supreme_Residency;
    Supreme_Residency.set( name,  id,  phone_no);
    Supreme_Residency.reserved();
    Supreme_Residency.show_star2_hotel();
        }
        
        else{
        cout<<"Invalid Input";
    }
    }

        else if(star==3){
    cout<<"Choose the following hotels:\n1 for Goguldham Hotel, 2 for Hotel Bliss, 3 for Golden Inn:";
    cin>>Choose;
        if (Choose==1){
    star3_hotel Goguldham_Hotel;
    Goguldham_Hotel.set( name,  id,  phone_no);
    Goguldham_Hotel.reserved();
    Goguldham_Hotel.show_star3_hotel();
        }
    
        else if (Choose==2){
    star3_hotel Hotel_Bliss;
    Hotel_Bliss.set( name,  id,  phone_no);
    Hotel_Bliss.reserved();
    Hotel_Bliss.show_star3_hotel();
        }
    
        else if (Choose==3){
    star3_hotel Golden_Inn;
    Golden_Inn.set( name,  id,  phone_no);
    Golden_Inn.reserved();
    Golden_Inn.show_star3_hotel();
        }
        
        else{
        cout<<"Invalid Input";
    }
    }

        else if(star==4){
    cout<<"Choose the following hotels:\n1 for Central Park Hotel, 2 for Taj Resort, 3 for Country Inn:";
    cin>>Choose;
        if (Choose==1){
    star4_hotel Central_Park_Hotel;
    Central_Park_Hotel.set( name,  id,  phone_no);
    Central_Park_Hotel.reserved();
    Central_Park_Hotel.show_star4_hotel();
        }
    
        else if (Choose==2){
    star4_hotel Taj_Resort;
    Taj_Resort.set( name,  id,  phone_no);
    Taj_Resort.reserved();
    Taj_Resort.show_star4_hotel();
        }
    
        else if (Choose==3){
    star4_hotel Country_Inn;
    Country_Inn.set( name,  id,  phone_no);
    Country_Inn.reserved();
    Country_Inn.show_star4_hotel();
        }
        
        else{
        cout<<"Invalid Input";
    }
    }

        else if(star==5){
    cout<<"Choose the following hotels:\n1 for Taj Hotel, 2 for Bhawan Palace, 3 for Leela Palace:";
    cin>>Choose;
        if (Choose==1){
    star4_hotel Taj_Hotel;
    Taj_Hotel.set( name,  id,  phone_no);
    Taj_Hotel.reserved();
    Taj_Hotel.show_star4_hotel();
        }
    
        else if (Choose==2){
    star5_hotel Bhawan_Palace;
    Bhawan_Palace.set( name,  id,  phone_no);
    Bhawan_Palace.reserved();
    Bhawan_Palace.show_star5_hotel();
        }
    
        else if (Choose==3){
    star5_hotel Leela_Palace;
    Leela_Palace.set( name,  id,  phone_no);
    Leela_Palace.reserved();
    Leela_Palace.show_star5_hotel();
        }
        
        else{
        cout<<"Invalid Input";
    }
    }

    else{
        cout<<"Only 1 to 5 rated Hotels are available. Please cooperate. ";
    }
    }
else{
    cout<<"Select between 0 and 1 only.";
}
return 0;
}

