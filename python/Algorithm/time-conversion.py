def timeConversion(str_):
    format = str_[-2:]
    hour = str_[0:2]

    if (format == 'AM' and hour == "12"):
        str_ = "00" + str_[2:len(str_)-2]
    elif ((format == 'PM' and hour == "12") or format == 'AM'):
        str_ =  str_[0:len(str_)-2]
    elif (format == 'PM'):
        str_ =  str(int(hour) + 12) + str_[2:len(str_)-2]

    return str_
    

if __name__ == '__main__':
    s = input()
    print(timeConversion(s))


#07:05:45PM
#12:01:00AM
#12:01:00PM

