/*#include <iostream>

using namespace std;

class Stack{
	
	int arr[5];
	
	
	private : 
	int top ;
	
	public :

	Stack(){
		 top = -1;
	
		
	}
	
	
	
	bool isfull(){
		if(top==4)
			return true;
		
		else 
			return false;
		
	}
	
	bool isEmpty(){
		if(top==-1)
			return true;
		
		else 
			return false;
		
	}
	
	void push(int a){
		if(! isfull()){
			top++;
			arr[top]=a;
		}
		else {
			cout<<"Stack is FULL!!!!!!"<<endl;
		}
	}
	
	void pop(){
		if(! isEmpty()){
			arr[top]=0;
			top--;
		}
		else {
			cout<<"Stack is EMPTY!!!!!!!"<<endl;
		}
	}
	
	void showstack(){
		
		for(int i=0; i<=top; i++)
		cout<<"\t"<<arr[i]<<endl;
	}
};

int main(){
	Stack S;
	S.push(4);
	S.push(8);
	S.push(12);
	S.push(16);
	S.push(20);
	cout<<"\n\tROLL NO : 20011598-041"<<endl;
	cout<<"\t----------------------"<<endl;
	cout<<"___________________"<<endl;
	cout<<"STACK AFTER PUSH :- "<<endl;
	S.showstack();
	cout<<"__________________\nSTACK AFTER POP :-"<<endl;
	S.pop();
	S.pop();
	S.showstack();
}*/

#include<iostream>

using namespace std;

class Stack{
	
	public:
		
		string arr[6];
	
	private :
		int top;
		
	public :
		
	Stack(){
		
		top = -1;
	}	
	
	bool isFull(){
		if(top==5)	
		return true;
		else
		return false;
	}
	
	bool isEmpty(){
		if(top==-1)
		return true;
		else
		return false;
	}
	
	void push(string a){
		
		if(!isFull()){
			top++;
			arr[top]=a;
		}
		else
		{
			cout<<"Stack is FULL!!!!!"<<endl;
		}
		
	}
	
	string pop(){
		
		if(!isEmpty()){
			
			string b;
			b=arr[top];
			top--;
			return b;
		}
		else
		{
			cout<<"Stack is EMPTY!!!!!"<<endl;
		}
		
	}
	
	void showstack(){
		for(int i=0; i<=top; i++)
		cout<<"\t"<<arr[i]<<endl;
	}
	

};

int main(){
	
	Stack S1 , S2 , S3;
	S1.push("APPLE");
	S1.push("MANGO");
	S1.push("BANANA");
	cout<<"\n\tROLL NO : 20011598-041"<<endl;
	cout<<"\t----------------------"<<endl;
	cout<<"____________________"<<endl;
	cout<<"FRUITS'S STACK :- \n"<<endl;
	S1.showstack();
	cout<<"_____________________"<<endl;
	S2.push("TOMATO");
	S2.push("POTATO");
	S2.push("ONION");
	cout<<"VEGETABLES'S STACK :- \n"<<endl;
	S2.showstack();
	cout<<"______________________________________"<<endl;
	
	string temp;
	
	temp=S1.pop();
	S3.push(temp);
	temp=S2.pop();
	S3.push(temp);
	temp=S1.pop();
	S3.push(temp);
	temp=S2.pop();
	S3.push(temp);
	temp=S1.pop();
	S3.push(temp);
	temp=S2.pop();
	S3.push(temp);
	cout<<"COMBINED FRUITS AND VEGETABLES STACK :- \n"<<endl;
	S3.showstack();
	
	
}

/*#include<iostream>

using namespace std;

class Stack{
	
	public :
		
		char arr[5];
		
	private : 
	 int top ;
	 
	 public :
	 	
	Stack(){
		top = -1;
	}
	
		bool isFull(){
		if(top==9)	
		return true;
		else
		return false;
	}
	
	bool isEmpty(){
		if(top==-1)
		return true;
		else
		return false;
	}
	
	void push(char a){
		if(!isFull()){
			top++;
			arr[top]=a;
		}
		else
		{
			cout<<"Stack is FULL!!!!!!"<<endl;			
		}
	}
	
	void pop(){
		if(!isEmpty()){
			arr[top]=0;
			top--;
		}
		else
		{
			cout<<"Stack is EMPTY!!!!!"<<endl;
		}
	}
	
	void showstack(){
		for(int i=0; i<=top; i++)
		cout<<"\t"<<arr[i]<<endl;
		if(arr[top]=='A'||arr[top]=='E'||arr[top]=='I'||arr[top]=='O'||arr[top]=='U'){
			cout<<"RECENTLY PUSHED ALPHABET IS VOWEL"<<endl;
			cout<<"_________________________________"<<endl;
		}
		else
		{
			cout<<"RECENTLY PUSHED ALPHABET IS CONSONANT"<<endl;
			cout<<"______________________________________"<<endl;
		}
	}
};

int main(){
	cout<<"\n\tROLL NO : 20011598-041 "<<endl;
	cout<<"\t----------------------"<<endl;
	Stack S;
	S.push('A');
	S.showstack();
	S.push('B');
	S.showstack();
	S.push('C');
	S.showstack();
	S.push('D');
	S.showstack();
	S.push('E');
	S.showstack();
	
}*/


/*#include<iostream>
#include<math.h>

using namespace std;

class Stack{
	
	public :
		
		int arr1[5];
		char arr2[5];
		
	private : 
	
	 int top ;
	 
	 public :
	 	
	Stack(){
		top = -1;
	}
	
		bool isFull(){
		if(top==4)	
		return true;
		else
		return false;
	}
	
	bool isEmpty(){
		if(top==-1)
		return true;
		else
		return false;
	}
	
	void push1(int a){
		if(!isFull()){
			top++;
			arr1[top]=a;
		}
		else
		{
			cout<<"Stack is FULL!!!!!!"<<endl;			
		}
	}
	void push2(char a){
		if(!isFull()){
			top++;
			arr2[top]=a;
		}
		else
		{
			cout<<"Stack is FULL!!!!!!"<<endl;			
		}
	}
	
	int pop1(){
		if(!isEmpty()){
			int x;
			x=arr1[top];
			top--;
			return x;
		}
		else
		{
			cout<<"Stack is EMPTY!!!!!"<<endl;
		}
	}
	char pop2(){
		if(!isEmpty()){
			char x;
			x=arr2[top];
			top--;
			return x;
		}
		else
		{
			cout<<"Stack is EMPTY!!!!!"<<endl;
		}
	}
	
	void showstack1(){
		for(int i=0; i<=top; i++)
		cout<<"\t"<<arr1[i]<<endl;
	}
	
	void showstack2(){
		for(int i=0; i<=top; i++)
		cout<<"\t"<<arr2[i]<<endl;
	}
	
};

int main(){
	
    Stack S1,S2,S3,S4;
    int num;
    char op;
    cout<<"\n\tROLL NO : 20011598-041"<<endl;
    cout<<"\t----------------------"<<endl;
    cout<<"___________________"<<endl;
    cout<<"ENTER 10 NUMBERS :- "<<endl;
    for(int b=0; b<=9; b++){
    	
    	cout<<"\t";cin>>num;

    	if(num%2==0){
    		
    		S1.push1(num);
		}
		else if(num%2!=0){
			S2.push1(num);
		}
		else {
			cout<<"ERROR"<<endl;
		}
	}
	cout<<"________________________"<<endl;
	cout<<"EVEN NUMBERS'S' STACK :-"<<endl;
	
	S1.showstack1();
	cout<<"_______________________"<<endl;
	cout<<"ODD NUMBERS'S' STACK :-"<<endl;
	S2.showstack1();
	cout<<"____________________"<<endl;
	cout<<"ENTER 5 OPERATORS :-"<<endl;
	for(int c=0; c<=4; c++){
		
		cout<<"\t";cin>>op;
		S3.push2(op);
		
	}
	cout<<"__________________"<<endl;
	cout<<"OPERATORS STACK :-"<<endl;
	S3.showstack2();
	
	
	int temp1, temp2, result;
	char temp3;
	
	for(int d=0; d<=4; d++){
	
	temp1=S1.pop1();
	temp2=S2.pop1();
	temp3=S3.pop2();
	
	if(temp3=='+'){
		result=temp1+temp2;
    	S4.push1(result);
	}
	else if(temp3=='-'){
		result=temp1-temp2;
	    S4.push1(result);
	}
	else if(temp3=='*'){
		result=temp1*temp2;
		S4.push1(result);
	}
	else if(temp3=='/'){
		result=temp1/temp2;
		S4.push1(result);
	}else if(temp3=='^'){
		result=pow(temp1,temp2);
		S4.push1(result);
	}
	else{
		cout<<"INVALID OPERATOR"<<endl;
	}
	
}
cout<<"__________________"<<endl;
cout<<"ANSWERS'S STACK :-"<<endl;
    S4.showstack1();
    
    
}*/

/*#include<iostream>

using namespace std;

class Queue{
	
	public :
		
		int arr[5];
		
	private :
	int front;
	int rear;
	
	public :
	
	Queue(){
		front=-1;
		rear=-1;
	}	
	
	bool isFull(){
		if(rear==4)
		return true;
		else
		return false;
	}
	
	bool isEmpty(){
		if(front==-1 && rear==-1)
		return true;
		else
		return false;
	}
	
	void Enqueue(int a){
		if(!isFull()){
			rear++;
			arr[rear]=a;
		}
		else {
			cout<<"Queue is FULL!!!!!"<<endl;
		}
	}
	
	void Dequeue(){
		if(!isEmpty() && front<=rear){
			front++;
			arr[front]=0;
		}
		else
		{
			cout<<"Queue is Empty"<<endl;
		}
	}
	
	void showqueue(){
		for(int i=0; i<=rear; i++)
		cout<<"\t"<<arr[i]<<endl;
	}
};

int main(){
	
	cout<<"\n\tROLL NO : 20011598-041"<<endl;
	cout<<"\t----------------------"<<endl;
	Queue Q;
	Q.Enqueue(5);
	Q.Enqueue(10);
	Q.Enqueue(15);
	Q.Enqueue(20);
	Q.Enqueue(25);
	cout<<"_______________________"<<endl;
	cout<<"QUEUE AFTER ENQUEUE :-"<<endl;
	Q.showqueue();
	
	Q.Dequeue();
	Q.Dequeue();
	cout<<"_______________________"<<endl;
	cout<<"QUEUE AFTER DEQUEUE :-"<<endl;
	Q.showqueue();
}*/


/*#include<iostream>

using namespace std;

class Queue{
	
	public :
		
		int arr[5];
		
	private :
	int front;
	int rear;
	
	public :
	
	Queue(){
		front=-1;
		rear=-1;
	}	
	
	bool isFull(){
		if(rear==4 && front==0)
		return true;
		else if(front==rear+1)
		return true;
		else
		return false;
	}
	
	bool isEmpty(){
		if(front==-1)
		return true;
		else
		return false;
	}
	
	void Enqueue(int a){
		if(!isFull()){
		if(front==-1){
			front=0;
		}
		rear=(rear+1)%5;
		arr[rear]=a;
		}
		else {
			cout<<"Queue is FULL!!!!!"<<endl;
		}
	}
	
	void Dequeue(){
		if(rear==front){
			rear=-1;
			front=-1;
		}
		else if(!isEmpty()){
		
			arr[front]=0;
			front=(front+1)%5;
		}
		else
		{
			cout<<"Queue is Empty"<<endl;
		}
	}
	
	void showqueue(){
		for(int i=0; i<=4; i++)
		cout<<"\t"<<arr[i]<<endl;
	}
};

int main(){
	
	cout<<"\n\tROLL NO : 20011598-041"<<endl;
	cout<<"\t----------------------"<<endl;
	Queue Q;
	
	Q.Enqueue(5);
	Q.Enqueue(10);
	Q.Enqueue(15);
	Q.Enqueue(20);
	Q.Enqueue(25);
	cout<<"________________________________"<<endl;
	cout<<"CIRCULAR QUEUE AFTER ENQUEUE :-"<<endl;
	Q.showqueue();
	Q.Dequeue();
	Q.Dequeue();
	Q.Dequeue();
    cout<<"________________________________"<<endl;
	cout<<"CIRCULAR QUEUE AFTER DEQUEUE :-"<<endl;
	Q.showqueue();

	Q.Enqueue(30);
	Q.Enqueue(35);
	cout<<"_______________________________________"<<endl;
	cout<<"CIRCULAR QUEUE AFTER ANOTHER ENQUEUE :-"<<endl;
	Q.showqueue();
}*/

/*#include<iostream>
#include<math.h>


using namespace std;

class Queue{
	
	public :
		
		int arr1[10];
		char arr2[5];
		
		
	private :
	int front;
	int rear;
	
	public :
	
	Queue(){
		front=-1;
		rear=-1;
	}	
	
	bool isFull(){
		if(rear==9)
		return true;
		else
		return false;
	}
	
	bool isEmpty(){
		if(front==-1 && rear==-1)
		return true;
		else
		return false;
	}
	
	void Enqueue1(int a){
		if(!isFull()){
			rear++;
			arr1[rear]=a;
		}
		else {
			cout<<"Queue is FULL!!!!!"<<endl;
		}
	}
	
	void Enqueue2(char a){
		if(!isFull()){
			rear++;
			arr2[rear]=a;
		}
		else {
			cout<<"Queue is FULL!!!!!"<<endl;
		}
	}
	int Dequeue1(){
		int b;
		if(!isEmpty() && front<=rear){
			
			front++;
			b=arr1[front];
			return b;
		}
		else
		{
			cout<<"Queue is Empty"<<endl;
		}
	}
	
	char Dequeue2(){
		if(!isEmpty() && front<=rear){
			char x;
			front++;
			x=arr2[front];
			return x;
		}
		else
		{
			cout<<"Queue is Empty"<<endl;
		}
	}
	void showqueue1(){
		for(int i=0; i<=rear; i++)
		cout<<"\t"<<arr1[i]<<endl;
	}
	void showqueue2(){
		for(int i=0; i<=4; i++)
		cout<<"\t"<<arr2[i]<<endl;
	}
};

int main(){
	
	cout<<"\n\tROLL NO : 20011598-041"<<endl;
	cout<<"\t----------------------"<<endl;
	
	
	Queue Q1,Q2,Q3;
	int num;
	cout<<"________________"<<endl;
	cout<<"ENTER 10 NUMBERS"<<endl;
	for(int b=0; b<=9; b++){
	
	cout<<"\t";cin>>num;
	Q1.Enqueue1(num);
}
	cout<<"__________________"<<endl;
	cout<<"NUMBERS'S QUEUE :-"<<endl;
    Q1.showqueue1();
	Q2.Enqueue2('+');
	Q2.Enqueue2('-');
	Q2.Enqueue2('*');
	Q2.Enqueue2('/');
	Q2.Enqueue2('^');
	
	cout<<"____________________"<<endl;
	cout<<"OPERATORS'S QUEUE :-"<<endl;
	Q2.showqueue2();

	int temp1,temp2,result;
	char temp3;
	
	for(int d=0; d<=4; d++){
	
	temp1=Q1.Dequeue1();
	temp2=Q1.Dequeue1();
	temp3=Q2.Dequeue2();
	if(temp3=='+'){
		result=temp1+temp2;
		Q3.Enqueue1(result);
	}
	else if(temp3=='-'){
		result=temp1-temp2;
		Q3.Enqueue1(result);
	}
	else if(temp3=='*'){
		result=temp1*temp2;
		Q3.Enqueue1(result);
	}
	else if(temp3=='/'){
		result=temp1/temp2;
		Q3.Enqueue1(result);
	}
	else if(temp3=='^'){
		result=pow(temp1,temp2);
		Q3.Enqueue1(result);
	}
	else {
		cout<<"ERROR"<<endl;
	}
}
   cout<<"__________________"<<endl;
   cout<<"ANSWERS'S QUEUE :-"<<endl;
	Q3.showqueue1();
}*/


