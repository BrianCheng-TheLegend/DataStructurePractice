    #include<iostream>
    #include<string>

    // operator overloading is kind of difficult to read 
    // if have other operation we usually wont use operator overloading

    struct Vector2
    {
        float x,y;
        Vector2(float x,float y)
            :x(x),y(y) {}

        Vector2 Add(const Vector2& other) const
        {
            return Vector2(x+other.x,y+other.y);
            //return operator+(other);
            //return *this+other;
            //but what is "this"
            //"this" pointer to the current obeject
        }
        Vector2 operator+(const Vector2& other) const
        {
        return Add(other); 
        }

        Vector2 Mulitply(const Vector2& other) const
        {
            return Vector2(x*other.x,y*other.y);
        }
        Vector2 operator*(const Vector2& other) const
        {
        return Mulitply(other); 
        }

    };

    std::ostream& operator<<(std::ostream& stream,const Vector2& other){
        stream<<other.x<<", "<<other.y;
        return stream;
    }


    int main(){
        Vector2 position(4.0f,4.0f);
        Vector2 speed(0.5f,0.5f);
        Vector2 powerup(0.5f,0.5f);

        //this way of writing is a little hard to read 
        Vector2 result1=position.Add(speed.Mulitply(powerup));
        Vector2 result2=position+speed*powerup;

        std::cout<<result2<<std::endl;

        std::cin.get();
    } 