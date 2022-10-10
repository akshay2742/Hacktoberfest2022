const arr1 = [1, 3, 4, 5, 6, 8];
const arr2 = [4, 6, 8, 9, 11];
const mergeSortedArrays = (arr1 = [], arr2 = []) => {
   const res = [];
   let i = 0;
   let j = 0;
   while(i < arr1.length && j < arr2.length){
      if(arr1[i] < arr2[j]){
         res.push(arr1[i]);
         i++;
      }else{
         res.push(arr2[j]);
         j++;
      }
   };
   while(i < arr1.length){
      res.push(arr1[i]);
      i++;
   };
   while(j < arr2.length){
      res.push(arr2[j]);
      j++;
   };
   return res;
};
console.log(mergeSortedArrays(arr1, arr2));