# search

两道二分法的题目。因为时间复杂度要求是log n

#Search for a Range

给定一个升序数组和一个target，若可以找到target，返回第一个和最后一个的下标。

思路：用map将数组的数和对应个数存储起来。map[vector[i]]++。然后用二分法找，若找到了，用while循环移至第一个，取下标pushback，
     再加上该数的个数-1，即最后一个下标。
     

#Search in Rotated Sorted Array

给定一个数组，找出target的下标。数组形式：nums = [4,5,6,7,0,1,2], target = 0

思路。首先利用分治算法找出其中最小值。以最小值为分水岭，若target大于最右，只需在最小值以左分治；target小于最右，则在最小值以右分治。
