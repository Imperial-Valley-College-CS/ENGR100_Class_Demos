clear
clc

[t1,y1] = genSine(0,1,100,5,2);
[t2,y2] = genSine(0,1,20,3,2);

figure
plot(t1,y1, '+-r')
hold on
plot(t2,y2, '*-k')
xlabel("Time - sec")
ylabel("Height - ft")
title("Sine Waves")
legend("100 Samples","20 Samples")