# 0 - 1 Knapsack Problem
## Medium 
<div class="problem-statement">
                <p style="color: rgb(56, 50, 46) !important;"></p><p><span style="font-size:18px">You are given weights and values of <strong style="color: rgb(56, 50, 46) !important;">N</strong> items, put these items in a knapsack of capacity <strong style="color: rgb(56, 50, 46) !important;">W</strong> to get the maximum total value in the knapsack. Note that we have only <strong style="color: rgb(56, 50, 46) !important;">one quantity of each item</strong>.<br style="color: rgb(56, 50, 46) !important;">
In other words, given two integer arrays <strong style="color: rgb(56, 50, 46) !important;">val[0..N-1]</strong> and <strong style="color: rgb(56, 50, 46) !important;">wt[0..N-1]</strong> which represent values and weights associated with <strong style="color: rgb(56, 50, 46) !important;">N</strong> items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of <strong style="color: rgb(56, 50, 46) !important;">val[]</strong> such that sum of the weights of this subset is smaller than or equal to <strong style="color: rgb(56, 50, 46) !important;">W.</strong> You cannot break an item, <strong>either pick the complete item or dont pick it (0-1 property)</strong>.</span></p>

<p style="color: rgb(56, 50, 46) !important;"><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre style=""><strong style="color: rgb(56, 50, 46) !important;"><span style="font-size: 18px; color: rgb(56, 50, 46) !important;">Input:
</span></strong><span style="font-size: 18px; color: rgb(56, 50, 46) !important;">N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
<strong>Output: </strong>3</span>
</pre>

<p style="color: rgb(56, 50, 46) !important;"><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre style=""><strong style="color: rgb(56, 50, 46) !important;"><span style="font-size: 18px; color: rgb(56, 50, 46) !important;">Input:
</span></strong><span style="font-size: 18px; color: rgb(56, 50, 46) !important;">N = 3
W = 3
values[] = {1,2,3}
weight[] = {4,5,6}
<strong style="">Output: </strong>0</span></pre>

<p style=""><span style="font-size:18px"><strong style="color: rgb(56, 50, 46) !important;">Your Task:</strong><br style="color: rgb(56, 50, 46) !important;">
Complete the function&nbsp;<strong style="color: rgb(56, 50, 46) !important;">knapSack()</strong>&nbsp;which takes maximum capacity W, weight array wt[], value array val[], and the number of items n as a parameter and returns the&nbsp;<strong style="color: rgb(56, 50, 46) !important;">maximum possible</strong>&nbsp;value you can get.</span></p>

<p style=""><span style="font-size: 18px; color: rgb(56, 50, 46) !important;"><strong>Expected Time Complexity:</strong>&nbsp;O(N*W).<br style="">
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N*W)</span></p>

<p style=""><span style="font-size: 18px; color: rgb(56, 50, 46) !important;"><strong>Constraints:</strong></span><br style="color: rgb(56, 50, 46) !important;">
<span style="font-size: 18px; color: rgb(56, 50, 46) !important;">1 ≤ N ≤ 1000</span><br style="color: rgb(56, 50, 46) !important;">
<span style="font-size: 18px; color: rgb(56, 50, 46) !important;">1 ≤ W ≤ 1000</span><br style="color: rgb(56, 50, 46) !important;">
<span style="font-size: 18px; color: rgb(56, 50, 46) !important;">1 ≤ wt[i] ≤ 1000</span><br style="color: rgb(56, 50, 46) !important;">
<span style="font-size: 18px; color: rgb(56, 50, 46) !important;">1 ≤ v[i] ≤ 1000</span></p>
 <p style="color: rgb(56, 50, 46) !important;"></p>
            </div>