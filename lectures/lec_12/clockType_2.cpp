class clockType {
private:
    int hr;
    int min;
    int sec;
public:
    void setTime(int, int, int);

    void printTime() const;

    void incrementSeconds();

    void incrementMinutes();

    void incrementHours();
};

int main() {
    return 0;
}