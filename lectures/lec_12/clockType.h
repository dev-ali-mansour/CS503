class clockType {
public:
    void setTime(int hours, int minutes, int seconds);

    void getTime(int &hours, int &minutes, int &seconds) const;

    void printTime() const;

    void incrementSeconds();

    void incrementMinutes();

    void incrementHours();

    clockType(int hours, int minutes, int seconds);

    clockType();

private:
    int hr;
    int min;
    int sec;
};