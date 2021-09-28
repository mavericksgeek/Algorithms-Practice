class Sln {
public:
    int numUniqueEmails(vector<string>& emails) {
        std::size_t found_dot = 0;
        std :: size_t found_a = 0;
        string s1, s2;
        
        for(int i = 0; i < emails.size(); i++)
        {
            found_dot = emails[i].find("+");
            
            if(found_dot != std::string::npos)
            {
                s1 = emails[i].substr(0,found_dot);
                found_a = emails[i].find("@");
                s2 = emails[i].substr(found_a);
                emails[i] = s1 + s2;
                s1.clear();
                s2.clear();
                }
                found_a = emails[i].find("@");
                s1 = emails[i].substr(0, found_a);
                s2 = emails[i].substr(found_a);
                s1.erase(remove(s1.begin(), s1.end(), '.'), s1.end());
                emails[i] = s1 +s2;
                s1.clear();
                s2.clear();
        }
        std::sort(emails.begin(), emails.end());
        emails.erase(std::unique(emails.begin(), emails.end()), emails.end());
        return emails.size();
    }
};
