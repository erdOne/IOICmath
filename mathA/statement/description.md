給定函數 $f : A \to A$，和自然數 $n$，我們定義 $f$ 的合成次方為
$$
f^{\circ n} : A \to A\\
x \mapsto \begin{cases} x & n = 0\\ f(f^{\circ n - 1}(x)) & \text{otherwise} \end{cases}
$$
現在考慮函數
$$
f : \mathbb{C} \to \mathbb{C}\\
x \mapsto x^\ast x
$$
其中 $x^\ast$ 是 $x$ 的複共軛。
給定 $n, x$, 請輸出 $\big\lfloor |f^{\circ n}(x)| \big\rfloor$ 除以 $10007$ 的餘數。


提示：
對於所有 $a$，$a^{10007} - a$ 是 $10007$ 的倍數。
