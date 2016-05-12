<?php
header("Pragma: no-cache");

function wyswietl()
{
	$file= @fopen("licznik.dat", "c+");
	fscanf($file, "%d", $count);
	rewind($file);
	fclose($file);
	echo $count;
}
function dodaj()
{
	$file= @fopen("licznik.dat", "c+");
	fscanf($file, "%d", $count);
	$count++;
	rewind($file);
	fputs($file, $count);
	fclose($file);
}
?>

<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
</head>

<body>
<form action="" method="post">
	<input type="submit" value="KLIKNIJ!" name="klik"><br>

<?php
    if (isset($_POST["klik"]) AND isset($_COOKIE["klikanie"])) {
		wyswietl();
		echo "\rMożesz kliknąć jeszcze raz gdy miną 24h od ostatniego kliku.";
	}
	elseif (isset($_POST["klik"])) {
		setcookie("klikanie", $_POST["klik"], time() + 86400, "/");  
		dodaj();
		wyswietl();
	}
?>
</form>
</body>
</html>