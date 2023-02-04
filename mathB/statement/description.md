給定 $a, b, c, d$，試求所有 $x$ 滿足 $ax^3 + bx^2 + cx + d \equiv 0 \pmod{10007}$

提示：
1. $a \equiv b \pmod{m}$ 定義為 $m | a - b$。

2. $ax^3 + bx^2 + cx + d$ 在 $a \ne 0$ 時的公式解是
$$
x_1=-\frac{b}{3 a}+ \sqrt[3]{\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a}+\sqrt{{\left(\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a}\right)^2+ \left(\frac{c}{3a}-\frac{b^2}{9a^2}\right)^3}}}+\sqrt[3]{\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a}-\sqrt{\left(\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a}\right)^2+ \left(\frac{c}{3a}-\frac{b^2}{9a^2}\right)^3}}
$$
$$
x_2=-\frac{b}{3 a}+\frac{-1+ \sqrt{3}\,\rm{{i}}}{2} \sqrt[3]{\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a} +\sqrt{\left(\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a}\right)^2+ \left(\frac{c}{3a}-\frac{b^2}{9a^2}\right)^3}}+\frac{-1- \sqrt{3}\,\rm{{i}}}{2} \sqrt[3]{\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a} -\sqrt{\left(\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a}\right)^2+ \left(\frac{c}{3a}-\frac{b^2}{9a^2}\right)^3}}
$$
$$
x_3=-\frac{b}{3 a}+\frac{-1- \sqrt{3}\,\rm{{i}}}{2} \sqrt[3]{\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a} +\sqrt{\left(\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a}\right)^2+ \left(\frac{c}{3a}-\frac{b^2}{9a^2}\right)^3}}+\frac{-1+ \sqrt{3}\,\rm{{i}}}{2} \sqrt[3]{\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a} -\sqrt{\left(\frac{bc}{6a^2}-\frac{b^3}{27a^3}-\frac{d}{2a}\right)^2+ \left(\frac{c}{3a}-\frac{b^2}{9a^2}\right)^3}}
$$
