這題我不知道原來queue的宣告可以一次宣告1005個queue，在這題每個queue當作每個team<Br>
接著又需要另一個mainq來把這些team串起來，流程大致是:
用map標記資料在哪個teamid
### ENQUEUE時
- 如果該team裡面有成員則push到team裡，沒有則push其teamid到mainq，因為前面說過mainq是為了串接各組team，所以只需要teamid就夠了
### DEQUEUE時
宣告一個vector for outpput，從`mainq.front()`進到queue(team)裡面開始pop到vector，如果要推的team裡面已經是空的，則mainq.pop()