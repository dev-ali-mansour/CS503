class die {
public:
    die();

//Default constructor: Sets the default number rolled by a die to 1
    int roll();

//Function to roll a die.It uses a random number generator to randomly generate a number
//between1and6,and stores thenumberin the instance variable num and returns thenumber
    int getNum() const;
//Afunctiontoreturnthenumber on thetop faceof thedie(thevalueof theinstance variable num)
private:
    int num;
};