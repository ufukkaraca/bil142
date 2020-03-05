using namespace std;
 
class Shape //Bu classta bir degisiklik yapilmayacak
{	private:
		int centerX;
		int centerY;
    protected:
        int segment;
    public:
		//Bu fonksiyonlar cpp dosyasinda implement edilmistir, degistirmeyin
        void enterValues(void);
		int getPerimeter(void);
};

class Square:public Shape
{
    private:
    int centerX;
    int centerY;
	// Buraya eklenmesi gereken bir değer varsa ekleyin 
    protected:   
	// Buraya eklenmesi gereken bir değer varsa ekleyin	
    public:
		int getArea(void); //Bu fonksiyonu cpp dosyasinda implement edin
		int getPerimeter(void);
		// Buraya eklenmesi gereken bir fonksiyon varsa ekleyin ve cpp dosyasinda implement edin
};

class Rectangle:public Shape
{
    private:
    int centerX;
    int centerY;
	// Buraya eklenmesi gereken bir değer varsa ekleyin 
    protected:   
		int segment1;
		int segment2;
	// Buraya eklenmesi gereken bir değer varsa ekleyin
    public:
		int getArea(void);
		void enterValues(void);
		int getPerimeter(void);
		
		 //Bu fonksiyonu cpp dosyasinda implement edin
		
		// Buraya eklenmesi gereken bir fonksiyon varsa ekleyin ve cpp dosyasinda implement edin

};


class Circle:public Shape
{
    private:
	// Buraya eklenmesi gereken bir değer varsa ekleyin 
    protected:   
	// Buraya eklenmesi gereken bir değer varsa ekleyin     
    public:
		double getArea(void);
		double getPerimeter(void);
		
		 //Bu fonksiyonu cpp dosyasinda implement edin
		
		// Buraya eklenmesi gereken bir fonksiyon varsa ekleyin ve cpp dosyasinda implement edin

};