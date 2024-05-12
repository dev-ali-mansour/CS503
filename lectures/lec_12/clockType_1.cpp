class clockType {
public:
    void setTime(int, int, int);

    void printTime() const;

    void incrementSeconds();

    void incrementMinutes();

    void incrementHours();

private: //u must write private
    int hr;
    int min;
    int sec;
};