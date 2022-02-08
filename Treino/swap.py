def swap_case(s):
    newstring =''
    for a in s :
        if (a.isupper()) == True: 
            newstring+=(a.lower())
        
        elif (a.islower()) == True: 
            newstring+=(a.upper()) 
                        
        else :
            newstring+= a
        
            
    return newstring

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)