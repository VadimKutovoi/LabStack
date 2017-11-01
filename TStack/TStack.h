using namespace std;

template <class T>
class TStack
{
	int MaxSize, Size;
	T*Mas;
public:
	TStack(int _MaxSize = 100);
	TStack(const TStack &T);
    ~TStack();
	
	int IsFull();
	int IsEmpty();
	
	T Pop();
	T Top();
	void Push(T a);
};
    
    template <class T>
	TStack<T>::TStack(int _MaxSize)
	{
		if(MaxSize < 0) throw MaxSize;

		MaxSize = _MaxSize;
		Size = 0;
		Mas = new T[MaxSize];
	}

    template <class T>
	TStack<T>::TStack(const TStack &T)
	{
		MaxSize = T.MaxSize;
		Size = T.Size;

		for(int i = 0; i < Size; i++){
			Mas[i] = T.Mas[i];
	     }
	}
	
	template <class T>
	TStack<T>::~TStack()
	{
		delete[] Mas;
	}
    
	template <class T>
	int TStack<T>::IsFull()
	{
		return (MaxSize == Size);
	}
	
	template <class T>
	int TStack<T>::IsEmpty()
	{
		if(Size == 0) return 1;
		else return 0;
	}
	
	template <class T>
	T TStack<T>::Pop() 
	{
		if(IsEmpty()) throw 0;
		Size--;
		
		return Mas[Size];
	}
	
	template <class T>
	T TStack<T>::Top()
	{
		if(IsEmpty()) throw 0;

		return Mas[Size];
	}
	
	template <class T>
	void TStack<T>::Push(T a)
	{
		if(IsFull()) throw Size;
        else{
			Mas[Size] = a;
			Size++;
		}
	}