




'''
function fn(i):
1.  if i > 3:
2.    return

3.  print(i)
4.  fn(i + 1)
5.  print(f"End of call where i = {i}")
6.  return

fn(1)

'''

def function(i):

    # This will act as a break point for the recusion loops. 
    # Whenever the counter reaches the 3 the recursion loop will break. 
    if ( i > 3):
        return 

    print(" loop : ", i)

    function(i + 1)

    print(f"End of call where i = {i}")

    return    

function(1)


'''



'''