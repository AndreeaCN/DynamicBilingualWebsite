<?php
echo "<p>";
$top_intro =  new acasa_data();
if($lang == 'en')
{
$top_intro->get_introt_en();
echo $top_intro->intro_en;
}
else if($lang == 'ro'){
$top_intro->get_introt_ro();
echo $top_intro->intro_ro;
}
else{
$top_intro->get_introt_ro();
echo $top_intro->intro_ro;
}
echo "</p>";
?>