import math

#constants

v = 200

h = 206.25

t_h = 900

m = 5.085

#function 1

a_r = pow(v,2)/(2*(h-t_h))

print("target acceleration: "+str(a_r))

#function 2

f = abs(m*(a_r+9.81))

print("required force (N): "+str(f))

#function 3

cda = 2*f/(1.225*pow(v,2))

print("coefficient of drag times area: "+str(cda))

#function 4

theta = 6625429.76*pow(cda,3) - 342145.9*pow(cda,2)+ 7840.6*cda-22.6

print(theta)
