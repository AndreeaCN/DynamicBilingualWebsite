<?php
$tech_text =  new caracter_data();
if($lang == 'en')
{
$tech_text->get_tech_en();
echo $tech_text->tech_caracter_en;
}
else if($lang == 'ro'){
$tech_text->get_tech_ro();
echo $tech_text->tech_caracter_ro;
}
else{
$tech_text->get_tech_ro();
echo $tech_text->tech_caracter_ro;
}?>