class String
{
    unsigned int length;
    char* data;
    
    public:
        String();
        String(const char* init);
        unsigned int get_length();
        const char* c_str();
        ~String();
};