class die {
public:
    die();

    //Default constructor: Sets the default number rolled by a die to 1
    int roll();

    //Function to roll a die.It uses a random number generator to randomly generate a number
    //between1and6,and stores the number in the instance variable num and returns the number
    int getNum() const;
    //A function to return the number on the top face of the die(the value of the instance variable num)
private:
    int num;
};