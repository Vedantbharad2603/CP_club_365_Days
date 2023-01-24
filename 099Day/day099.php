<!-- 0x99Day of 0x365Days challenge
VEDANT BHARAD
24-1-2023 -->
<?php
// your code goes here
function myFun($x) 
{
    $ans = 1;
    for ($loop = 2; $loop*$loop <= $x; $loop++) {
        $counter = 0;
        while($x % $loop == 0) {
            $x /= $loop;
            $counter++;
        }
        if ($counter > 0) {
            $ans=$ans*$loop;
        }
    }
    if ($x > 1) {
        $ans *= $x;
    }
    print($ans."\n");
}
$t = (int)readline();
while($t!=0) {
    $x = (int)readline();
    myFun($x);
    $t--;
}
?>
