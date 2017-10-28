template <class T>
class TStack{
	int MaxSize, Size;
	T*Mas;
public:
	TStack(int _MaxSize = 100);
	~TStack();
};