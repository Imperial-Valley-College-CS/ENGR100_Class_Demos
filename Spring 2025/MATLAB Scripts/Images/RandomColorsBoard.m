clear all
close all
clc

%dimensions of each matrix
row = 10;
col = 10;

%Three 2D matrices (initialized to zero)
justZeros = zeros(row,col);

%3D matrix containing red,gre, and blu
img = cat(3,justZeros,justZeros,justZeros);

for k = 1:size(img,3)   %size of third dimension
    for i = 1:row       %traverses each row
        for j = 1:col   %traverses each column
            img(i,j,k) = uint8(255*rand);   %generate a random number 0-255
        end
    end
end

%extract red layer from img
red = img(:,:,1);   
%create 3D matrix red only (zero green, zero blue)
red_layer = cat(3,red,justZeros,justZeros);

figure
imshow(uint8(red_layer))
figure
imshow(uint8(img))