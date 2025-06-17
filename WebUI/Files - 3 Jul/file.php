<html>
<body>
<?php


    $fp=fopen('trial.txt','r');
    $counter = (int) fread($fp,10);
    $counter+=1;

    echo "<h1> You are visitor no. $counter</h1>";
    fclose($fp);

    $fp=fopen('trial.txt','w');
    fwrite($fp,$counter);
    fclose($fp);

?>
</body>
</html>
