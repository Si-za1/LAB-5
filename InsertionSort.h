#define l 10
using namespace std;

class Insertion_Sort{
	public:
		
		int element[l];
		Insertion_Sort();
		~Insertion_Sort();
		void Insert_Sort();	
		void final_display();	
		int get_element(int i);
};

Insertion_Sort::Insertion_Sort(){
		for(int i=0;i<l;i++){
		element[i]=0;
	}
}

Insertion_Sort::~Insertion_Sort(){
	
}


void Insertion_Sort::Insert_Sort(int element, l){
	 int j, temp;
  	for(int i=0;i<l;i++)
  	{
	    j=i;
	    while(j>0 && element[j]<element[j-1])
	    {
		temp=element[j];
		element[j-1]=temp;
		j--;
	    }   
	  }
}

void Insertion_Sort::final_display(){
	for(int i=0;i<l;i++){
		cout<<element[i]<<endl;
	}
}

int Insertion_Sort::get_element(int i){
	return element[i];
}
