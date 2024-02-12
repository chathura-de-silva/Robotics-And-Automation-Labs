import numpy as np
import sys

def quaternion_multiply(q0, q1):
    """
    Multiplies two quaternions.

    Input
    :param q0: A 4 element array containing the first quaternion (q01, q11, q21, q31)
    :param q1: A 4 element array containing the second quaternion (q02, q12, q22, q32)

    Output
    :return: A 4 element array containing the final quaternion (q03,q13,q23,q33)

    """
    # Extract the values from q0
    w0 = q0[0]
    x0 = q0[1]
    y0 = q0[2]
    z0 = q0[3]

    # Extract the values from q1
    w1 = q1[0]
    x1 = q1[1]
    y1 = q1[2]
    z1 = q1[3]

    # Computer the product of the two quaternions, term by term
    q0q1_w = w0 * w1 - x0 * x1 - y0 * y1 - z0 * z1
    q0q1_x = w0 * x1 + x0 * w1 + y0 * z1 - z0 * y1
    q0q1_y = w0 * y1 - x0 * z1 + y0 * w1 + z0 * x1
    q0q1_z = w0 * z1 + x0 * y1 - y0 * x1 + z0 * w1

    # Create a 4 element array containing the final quaternion
    final_quaternion = np.array([q0q1_w, q0q1_x, q0q1_y, q0q1_z])

    # Return a 4 element array containing the final quaternion (q02,q12,q22,q32)
    return final_quaternion


def quaternion_inverse(q):
    "Gets a quarternion and returns its inverse."
    q = [number/(q[0]**2+q[1]**2+q[2]**2+q[3]**2) for number in q]   # q inverse = qs' conjugate * {1/(qs' magnitude)}. This lines makes q magnitude 1 so next step is only to get the conjugate.
    return [(-1)*q[0]]+q[1:4]


def get_quaternion(input_text):
    q = input(input_text) # Should be a space separated 4 numerical elements adds up to 1.
    q = q.split()
    if len(q) ==4:
        try:
            q = [float(number) for number in q] 
            return q
        except Exception as e:
            print("Invalid Input type!")
            print(e)
            sys.exit(1)
    elif q==-1:
        return 0
    else:
        print("Input should be 4 space separated numbers that adds up to 1.")
        sys.exit(1)


while True:
    q1 = get_quaternion("Enter the q1 : ")
    if q1 == "-1":
        print("Ending the program.")
        sys.exit(0)
    q2 = get_quaternion("Enter the q2 : ")
    print(f"q_r: {quaternion_multiply(q2,quaternion_inverse(q1))}")


            
