#include<iostream>
#define n 6
using namespace std;
class Queue{
	public:
		int front=-1;
		int rear=-1;
		int arr[n];
		bool enque(int data){
			if(rear==n-1){
				cout<<"overflow ";
				return false;
			}
			else{
			
			 if(front==-1)
			front=0;
			
				rear++;
			//	front++;
			
				arr[rear]=data;
				
				cout<<data<<endl;
				}
				return true;
			
		}
		int deque(){
			if(front<0){
				cout<<"underflow ";
			}
//			else if(front==-1)
//			front=0;
			else{
				int element;
				element=arr[front];
				if(front>=rear){
				
//			 		cout<<"delete element "<<arr[front];
//				front++;;
	front=-1;
	rear=-1;
				
				}
				else{
					front++;
				}
							
							cout<<element<<endl;//	cout<<"deleted element 2"<<arr[front];

//				int s;
//				s=a
				
			}
		}
};
int main(){
	Queue q;
	q.enque(34);
	//q.enque(23);
//	q.deque();
//que(12);
//q.enque(45);

	q.deque();
}
