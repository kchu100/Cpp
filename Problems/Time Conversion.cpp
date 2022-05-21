//Convert 12:00AM/PM to military 24:00 format
string timeConversion(string s) 
{
    int h = stoi(s.substr(0, 2));
    string hour;
    string minute = s.substr(3, 2);
    string second = s.substr(6, 2);
    string ampm = s.substr(8, 2);
    
    if(ampm == "PM")
    {
        if(h < 12)
            h += 12;
    }
    else //if(ampm == "AM")
    {
        if(h == 12)
            h = 0;
    }
    
    if(h < 10)
        hour = "0" + to_string(h);
    else
        hour = to_string(h);
    
    return hour + ':' + minute + ':' + second;
}
