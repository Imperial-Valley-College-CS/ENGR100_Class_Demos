function [t, y] = genSine(t1, t2, numPoints, amp, freq)

    dt = (t2-t1)/numPoints;     %time interval between points
    t = t1:dt:t2;               %generate time vector
    y = amp*sin(2*pi*freq*t);   %generate sine wave

end