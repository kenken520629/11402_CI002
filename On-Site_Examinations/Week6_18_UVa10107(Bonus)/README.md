這題在`排序`的部分一直TLE，最後只能跑去詢問AI，AI說可以用upper_bound或lower_bound的方式找位置，找到之後insert進去<Br>
簡單來說就是把sort改成以下兩行
```cpp
auto it = lower_bound(v.begin(),v.end(),n);
v.insert(it,n);
```
