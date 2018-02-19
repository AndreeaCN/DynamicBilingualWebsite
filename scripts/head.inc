<?php	
    session_start();
 	include_once("Scripts/db_lib.inc"); 
	$dbh = new db_lib ();
	header('Cache-control: private'); // IE 6 FIX
	
if(filter_input(INPUT_GET,"lang")&& filter_input(INPUT_GET,"lang2"))
{
$lang = filter_input(INPUT_GET,"lang");
$lang2 = filter_input(INPUT_GET,"lang2");

// register the session and set the cookie
$_SESSION['lang'] = $lang;
$_SESSION['lang2'] = $lang2;

setcookie("lang", $lang, time() + (3600 * 24 * 30));
setcookie("lang2", $lang2, time() + (3600 * 24 * 30));
}
else if(filter_input(INPUT_GET,"lang")&& filter_input(INPUT_GET,"lang2"))
{
$lang = $_SESSION['lang'];
$lang2 = $_SESSION['lang2'];
}
else if(isSet($_COOKIE['lang'])&& isSet($_COOKIE['lang2']))
{
$lang = $_COOKIE['lang'];
$lang2 = $_COOKIE['lang2'];
}
else
{
$lang = 'ro';
$lang2 = 'ro';
}
switch ($lang2) {
    case 'en':
    $lang_file = 'lang.en.php';
    break;

    case 'ro':
    $lang_file = 'lang.ro.php';
    break;

    default:
    $lang_file = 'lang.ro.php';        
}

include_once 'languages/'.$lang_file;

?>
