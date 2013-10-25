x = 1;
while((x * 0.5 + 1) != 1.0) 
  x =x*0.5;
endwhile
disp('wyliczony epsilon')
disp(x)
disp('epsilon octave')
disp(eps)
x = 1;
while(x*0.5 > 0)
  x = x*0.5;
endwhile
if(x > 0)
disp('wyliczony min')
disp(x)
endif
disp('min octave')
disp(realmin)