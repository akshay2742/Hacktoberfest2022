import java.util.Arrays

fun main(args: Array<String>) {
    val array1 = intArrayOf(1, 2, 3)
    val array2 = intArrayOf(4, 5, 6)

    val length = array1.size + array2.size

    val result = IntArray(length)
    var pos = 0
    for (element in array1) {
        result[pos] = element
        pos++
    }

    for (element in array2) {
        result[pos] = element
        pos++
    }

    println(Arrays.toString(result))
}
