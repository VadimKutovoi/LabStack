template <class T>
class TStack{
	int MaxSize, Size;
	T*Mas;
public:
	TStack(int _MaxSize = 100);
	TStack(const TStack &T);
    ~TStack();

	&TStack operator=(const TStack &T);

	T Pop();
	T Top();
	void Push();

	int IsFull();
	int IsEmpty();
};