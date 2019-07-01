<?php
$file = "buttonStatus.txt";
$handle = fopen($file,'w+');
if (isset($_POST['S1on']))
{
$onstring = "S1ON";
fwrite($handle,$onstring);
fclose($handle);
print "
<html>
<body>
<title>IOT Switch Control - Var_Guru</title>
<style type=text/css>
h1{
	padding-left: 300px;
}
h2{
	position: absolute;
	top: 100px;
	left: 450px;
}
</style>
<h1>IOT Switch Control - Var_Guru</h2>
<h2>S1 has been Turned ON </h2>
</body>
</html>
";
}
else if(isset($_POST['S1off']))
{
$offstring = "S1OFF";
fwrite($handle, $offstring);
fclose($handle);
print "
<html>
<body>
<title>IOT Switch Control - Var_Guru</title>
<style type=text/css>
h1{
	padding-left: 300px;
}
h2{
	position: absolute;
	top: 100px;
	left: 450px;
}
</style>
<h1>IOT Switch Control - Var_Guru</h2>
<h2>S1 has been Turned OFF </h2>
</body>
</html>
";
}
else if (isset($_POST['S2on']))
{
$onstring = "S2ON";
fwrite($handle,$onstring);
fclose($handle);
print "
<html>
<body>
<title>IOT Switch Control - Var_Guru</title>
<style type=text/css>
h1{
	padding-left: 300px;
}
h2{
	position: absolute;
	top: 100px;
	left: 450px;
}
</style>
<h1>IOT Switch Control - Var_Guru</h2>
<h2>S2 has been Turned ON </h2>
</body>
</html>
";
}
else if(isset($_POST['S2off']))
{
$offstring = "S2OFF";
fwrite($handle, $offstring);
fclose($handle);
print "
<html>
<body>
<title>IOT Switch Control - Var_Guru</title>
<style type=text/css>
h1{
	padding-left: 300px;
}
h2{
	position: absolute;
	top: 100px;
	left: 450px;
}
</style>
<h1>IOT Switch Control - Var_Guru</h2>
<h2>S2 has been Turned OFF </h2>
</body>
</html>
";
}

?>