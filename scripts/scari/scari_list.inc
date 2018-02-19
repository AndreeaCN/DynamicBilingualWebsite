<?php
echo "<ul>";
echo "<li>";
$item1 =  new scari_data();
$item1->get_list_left_1();
echo $item1->item1;
echo "</li>";

echo "<li>";
$item2 =  new scari_data();
$item2->get_list_left_2();
echo $item2->item2;
echo "</li>";

echo "<li>";
$item3 =  new scari_data();
$item3->get_list_left_3();
echo $item3->item3;
echo "</li>";

echo "<li>";
$item4 =  new scari_data();
$item4->get_list_left_4();
echo $item4->item4;
echo "</li>";

echo "</ul>";

?>