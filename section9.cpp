#include<iostream>
#include<vector>
using namespace std;

int main(){
    char selection {};
    // vector<int>marks {90,87,85,98,78};
    vector<int>marks {};
    int new_marks {0};
    int total {0};
    double mean {};
    int smallest_num {0};
    int largest_num {0};
    do
    {
        cout<<"\n*********Here is the list**********"<<endl;
        cout<<"P-Print numbers"<<endl;
        cout<<"A-Add a number"<<endl;
        cout<<"M-Display Mean of the numbers"<<endl;
        cout<<"S-Display Smallest one"<<endl;
        cout<<"L-Display Largest one"<<endl;
        cout<<"Q-Quit"<<endl;

        cout<<"\nEnter your choice: ";
        cin>>selection;

        switch(selection)
        {
            case 'P':
            case 'p':
                    {
                       
                        if(marks.size() != 0)
                            {
                                cout<<"Your marks list in the exam is here: [ ";
                                // for(int i {0}; i<marks.size(); i++)
                                // {
                                //     cout<<marks.at(i)<<" ";
                                // }
                                for(auto vec:marks)
                                {
                                    cout<<vec<<" ";
                                }
                                cout<<"]";
                            }
                        else
                            {
                                cout<<"[]-the list is empty"<<endl;
                            }

                    }
                    break;
            case 'A':
            case 'a':
                    {
                       
                        cout<<"Enter which number you want to add: "<<endl;
                        cin>>new_marks;
                       
                         marks.push_back(new_marks);         
                         cout<<new_marks<<" is added in the list."<<endl;
         
                    }
                    break;
            case 'M':
            case 'm':
                    {                       
                        if(marks.size() != 0)
                            {
                                // for(int i {0}; i< marks.size(); i++)
                                //     {
                                //         total+=marks.at(i);

                                //     }
                                for(auto vec:marks)
                                {
                                    total+=vec;
                                }
                                mean=static_cast<double>(total)/marks.size();
                                cout<<"The average marks in exam is :"<<mean<<endl;
                            }
                        else
                            {
                                cout<<"Unable to calculate the mean--no data"<<endl;
                            }

                    }
                    break;
            case 'S':
            case 's':
                    {
                        
                        if(marks.size() != 0)
                            {
                               smallest_num=marks.at(0);
                                // for(int i {1}; i<marks.size(); i++)
                                //     {
                                //         if(smallest_num<marks.at(i))
                                //             {
                                //                 smallest_num=smallest_num;
                                //             }
                                //         else
                                //             {
                                //                 smallest_num=marks.at(i);
                                //             }
                                //     }

                                for(auto vec:marks)
                                    {
                                        if(vec<smallest_num)
                                            {
                                                smallest_num=vec;
                                            }     
                                    }
                                cout<<"Here smallest number is : "<<smallest_num<<endl;
                            }
                        else
                            {
                               cout<<"Empty list..not possible to determine smallest one...add number in list first..."<<endl;
                            }
                    }
                    break;
            case 'L':
            case 'l':
                    {
                       
                       if(marks.size() != 0)
                            {
                                largest_num = marks.at(0);
                                // for (int i {0}; i<marks.size(); i++)
                                //     {
                                //         if(largest_num>marks.at(i))
                                //             {
                                //                 largest_num=largest_num;
                                //             }
                                //         else
                                //             {
                                //                 largest_num=marks.at(i);
                                //             }
                                //     }
                                for(auto vec:marks)
                                    {
                                        if(vec>largest_num)
                                            {
                                                largest_num=vec;                                              
                                            }
                                       
                                    }
                                cout<<"Here the largest one is : "<<largest_num<<endl;
                            }
                        else
                            {
                                  cout<<"Empty list...Not possible to determine largest number....please,add number in list first"<<endl;
                            }
                    }
                    break;
            case 'Q':
            case 'q':
                    {
                        cout<<"Goodbye...our program is over.."<<endl;
                    }
                    break;
            default:
                    cout<<"Invalid !please,try again"<<endl;

        }

    } while (selection != 'Q' && selection != 'q');
       
    return 0;
}