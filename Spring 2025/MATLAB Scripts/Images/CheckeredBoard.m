clear all
close all
clc

row = 50;
col = 50;
A = zeros(row,col);   %creates 2D matrix full of zeros

%loop through matrix A to change every other number to 255
for i = 1:2:row  %set odd rows 
    for j = 2:2:col
        A(i,j) = 255;
    end
end

for i = 2:2:row  %set even rows 
    for j = 1:2:col
        A(i,j) = 255;
    end
end

B = uint8(A);
imshow(B)
truesize(gcf,[100 100]) %scales image up