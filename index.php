<?php
include_once("scripts/head.inc"); 
include("templates/header.php");
include("templates/navigation.php");
$disallowed_paths = array('header', 'footer'); 

if (filter_input(INPUT_GET,  "opt") == "acasa" )
{
    include_once("templates/acasa.php");
}
else if (filter_input(INPUT_GET,  "opt") == "scari" )
{
    include_once("templates/scari.php");
}
else if (filter_input(INPUT_GET,  "opt") == "parchet" )
{
    include_once("templates/parchet.php");
}
else if (filter_input(INPUT_GET,  "opt") == "montaj" )
{
    include_once("templates/montaj.php");
}
else if (filter_input(INPUT_GET,  "opt") == "galerie" )
{
    include_once("templates/galerie.php");
}
else if (filter_input(INPUT_GET,  "opt") == "colectia-prime" )
{
    include_once("templates/colectia-prime.php");
}
else if (filter_input(INPUT_GET,  "opt") == "colectia-caracter" )
{
    include_once("templates/colectia-caracter.php");
}
else if (filter_input(INPUT_GET,  "opt") == "colectia-rustic" )
{
    include_once("templates/colectia-rustic.php");
}
else if (filter_input(INPUT_GET,  "opt") == "contact" )
{
    include_once("templates/contact.php");
}
else
{
include_once("templates/acasa.php");
}

include("templates/footer.htm");
?>