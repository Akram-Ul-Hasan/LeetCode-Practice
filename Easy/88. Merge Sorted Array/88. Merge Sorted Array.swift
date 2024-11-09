class Solution {
    func merge(_ nums1: inout [Int], _ m: Int, _ nums2: [Int], _ n: Int) {
        var pos = m+n-1
        var m = m-1
        var n = n-1

        while n >= 0 {
            if m < 0 || nums1[m] < nums2[n] {
                nums1[pos] = nums2[n]
                n -= 1
            } else {
                nums1[pos] = nums1[m]
                m -= 1
            }
            pos -= 1
        }
    }
}