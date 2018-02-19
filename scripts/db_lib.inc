<?php
/**
 * Description of db_lib
 *
 * @author Elaine
 */
 
 
class db_lib {  
 	/*** mysql hostname ***/
	private $hostname = "localhost";
	/*** mysql username ***/
	private $username = "root";
	/*** mysql password ***/
	private $password = "usbw";
	// can only be accessed from class or inherited classes
    protected $dbh = ""; 
	public $db_msg = "";
	public $items = "";	
		// for the login method
	private $loggedIN = "N";
	private $uname = "";
	private $pword = "";

	
     function __construct() 
     {
 	  try 
	  {
	      $this->dbh = new 
	      PDO("mysql:host=localhost;port=3307;dbname=flooring_db", $this->username, $this->password);
          $this->db_msg = 'Connected to The Database';
	  }
	  catch(PDOException $e)
	  {
	      $this->dbh = -1;
	      $this->db_msg = $e->getMessage();
	  }
	}
}	

class parchet_data extends db_lib
    {
	    function get_title_ro()
		{
		    $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '2' AND lang_ID = '1'";
			$this->title_parchet_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_parchet_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_parchet_ro;
	    }
		function get_title_en()
		{
		    $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '2' AND lang_ID = '2'";
			$this->title_parchet_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_parchet_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_parchet_en;
	    }
		function get_top_text_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '2' AND lang_ID = '1'";
			$this->top_parchet_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->top_parchet_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->top_parchet_ro;
		}
		function get_top_text_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '2' AND lang_ID = '2'";
			$this->top_parchet_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->top_parchet_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->top_parchet_en;
		}
		function get_tech_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '2' AND lang_ID = '1'";
			$this->tech_parchet_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_parchet_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_parchet_ro;
		}
		function get_tech_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '2' AND lang_ID = '2'";
			$this->tech_parchet_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_parchet_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_parchet_en;
		}
		function get_LList_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '2' AND lang_ID = '1'";
			$this->Llist_parchet_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Llist_parchet_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Llist_parchet_ro;
		}
		function get_LList_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '2' AND lang_ID = '2'";
			$this->Llist_parchet_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Llist_parchet_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Llist_parchet_en;
		}
		function get_RList_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '2' AND lang_ID = '1'";
			$this->Rlist_parchet_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Rlist_parchet_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Rlist_parchet_ro;
		}
		function get_RList_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '2' AND lang_ID = '2'";
			$this->Rlist_parchet_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Rlist_parchet_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Rlist_parchet_en;
		}
		function get_extra_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Extra' AND Article_ID = '2' AND lang_ID = '1'";
			$this->extra_parchet_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->extra_parchet_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->extra_parchet_ro;
		}
		function get_extra_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Extra' AND Article_ID = '2' AND lang_ID = '2'";
			$this->extra_parchet_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->extra_parchet_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->extra_parchet_en;
		}
		// functions to return the 3 collection titles
		function get_prime_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '6' AND lang_ID = '1'";
			$this->prime_title_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->prime_title_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->prime_title_ro;
		}
		function get_prime_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '6' AND lang_ID = '2'";
			$this->prime_title_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->prime_title_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->prime_title_en;
		}
		function get_character_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '7' AND lang_ID = '1'";
			$this->character_title_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->character_title_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->character_title_ro;
		}
		function get_character_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '7' AND lang_ID = '2'";
			$this->character_title_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->character_title_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->character_title_en;
		}
		function get_rustic_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '8' AND lang_ID = '1'";
			$this->rustic_title_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->rustic_title_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->rustic_title_ro;
		}
		function get_rustic_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '7' AND lang_ID = '2'";
			$this->character_title_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->rustic_title_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->rustic_title_en;
		}
	}
//Scari Article
class scari_data extends db_lib
	{
	    //the main title
	    function get_stitle_ro()
	   {
	          $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '4' AND lang_ID = '1'";
	          $this->title_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_ro;
	    }
		 function get_stitle_en()
	   {
	          $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '4' AND lang_ID = '2'";
	          $this->title_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_en;
	    }
		//top text in Scari
		function get_tops_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '4' AND lang_ID = '1'";
			   $this->tops_text_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tops_text_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tops_text_ro;
	    }
	    	function get_tops_en()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '4' AND lang_ID = '2'";
			   $this->tops_text_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tops_text_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tops_text_en;
		}
		//the Tehnical details 
		function get_tech_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '4' AND lang_ID = '1'";
			   $this->tech_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_ro;
		}
	    function get_tech_en()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '4' AND lang_ID = '2'";
			   $this->tech_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_en;
		}
		// the left list
		function get_leftlist_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '4' AND lang_ID = '1'";
			   $this->listleft_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->listleft_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->listleft_ro;
		}
		function get_leftlist_en()
		{
		      $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '4' AND lang_ID = '2'";
			$this->listleft_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->listleft_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->listleft_en;
		}
		// the right list
		function get_rightlist_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '4' AND lang_ID = '1'";
			   $this->listright_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->listright_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->listright_ro;
		}
		function get_rightlist_en()
		{
		      $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '4' AND lang_ID = '2'";
			$this->listright_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->listright_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->listright_en;
		}
	}
// the galerie page
class galerie_data extends db_lib
    {
        function get_gtitle_ro()
	   {
	          $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '5' AND lang_ID = '1'";
	          $this->title_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_ro;
	    }
		 function get_gtitle_en()
	   {
	          $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '5' AND lang_ID = '2'";
	          $this->title_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_en;
	    }
		//top text in Galerie
		function get_topg_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '5' AND lang_ID = '1'";
			   $this->topg_text_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->topg_text_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->topg_text_ro;
	    }
	    	function get_topg_en()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '5' AND lang_ID = '2'";
			   $this->topg_text_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->topg_text_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->topg_text_en;
		}

    }
// the montaj page
class montaj_data extends db_lib
    {
	// get the top text in Montaj
	    function get_topm_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '3' AND lang_ID = '1'";
			   $this->topm_text_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->topm_text_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->topm_text_ro;
	    }
	    	function get_topm_en()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '3' AND lang_ID = '2'";
			   $this->topm_text_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->topm_text_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->topm_text_en;
		}
		// the tech 
		function get_tech_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '3' AND lang_ID = '1'";
			   $this->tech_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_ro;
		}
	    function get_tech_en()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '3' AND lang_ID = '2'";
			   $this->tech_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_en;
		}
		// get the 4 lists
		function get_list1_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'List 1' AND Article_ID = '3' AND lang_ID = '1'";
			   $this->list1_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->list1_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->list1_ro;
		}
		function get_list1_en()
		{
		      $sql = "SELECT * FROM `section` WHERE Section_Position = 'List 1' AND Article_ID = '3' AND lang_ID = '2'";
			$this->list1_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->list1_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->list1_en;
		}
		//list 2
		function get_list2_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'List 2' AND Article_ID = '3' AND lang_ID = '1'";
			   $this->list2_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->list2_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->list2_ro;
		}
		function get_list2_en()
		{
		      $sql = "SELECT * FROM `section` WHERE Section_Position = 'List 2' AND Article_ID = '3' AND lang_ID = '2'";
			$this->list2_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->list2_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->list2_en;
		}
		//list 3
		function get_list3_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'List 3' AND Article_ID = '3' AND lang_ID = '1'";
			   $this->list3_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->list3_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->list3_ro;
		}
		function get_list3_en()
		{
		      $sql = "SELECT * FROM `section` WHERE Section_Position = 'List 3' AND Article_ID = '3' AND lang_ID = '2'";
			$this->list3_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->list3_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->list3_en;
		}
		// list 4
		function get_list4_ro()
		{
		       $sql = "SELECT * FROM `section` WHERE Section_Position = 'List 4' AND Article_ID = '3' AND lang_ID = '1'";
			   $this->list4_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->list4_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->list4_ro;
		}
		function get_list4_en()
		{
		      $sql = "SELECT * FROM `section` WHERE Section_Position = 'List 4' AND Article_ID = '3' AND lang_ID = '2'";
			$this->list4_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->list4_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->list4_en;
		}

	}
// Prime Collection article
class prime_data extends db_lib
{
// get the title
    function get_title_ro()
		{
		    $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '6' AND lang_ID = '1'";
			$this->title_prime_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_prime_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_prime_ro;
	    }
		function get_title_en()
		{
		    $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '6' AND lang_ID = '2'";
			$this->title_prime_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_prime_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_prime_en;
	    }
		function get_top_text_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '6' AND lang_ID = '1'";
			$this->top_prime_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->top_prime_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->top_prime_ro;
		}
		function get_top_text_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '6' AND lang_ID = '2'";
			$this->top_prime_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->top_prime_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->top_prime_en;
		}
		function get_tech_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '6' AND lang_ID = '1'";
			$this->tech_prime_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_prime_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_prime_ro;
		}
		function get_tech_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '6' AND lang_ID = '2'";
			$this->tech_prime_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_prime_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_prime_en;
		}
		function get_LList_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '6' AND lang_ID = '1'";
			$this->Llist_prime_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Llist_prime_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Llist_prime_ro;
		}
		function get_LList_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '6' AND lang_ID = '2'";
			$this->Llist_prime_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Llist_prime_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Llist_prime_en;
		}
		function get_RList_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '6' AND lang_ID = '1'";
			$this->Rlist_prime_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Rlist_prime_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Rlist_prime_ro;
		}
		function get_RList_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '6' AND lang_ID = '2'";
			$this->Rlist_prime_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Rlist_prime_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Rlist_prime_en;
	    }
}

// The character collection
class caracter_data extends db_lib
{
// get the title
    function get_title_ro()
		{
		    $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '7' AND lang_ID = '1'";
			$this->title_caracter_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_caracter_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_caracter_ro;
	    }
		function get_title_en()
		{
		    $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '7' AND lang_ID = '2'";
			$this->title_caracter_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_caracter_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_caracter_en;
	    }
		function get_top_text_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '7' AND lang_ID = '1'";
			$this->top_caracter_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->top_caracter_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->top_caracter_ro;
		}
		function get_top_text_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '7' AND lang_ID = '2'";
			$this->top_caracter_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->top_caracter_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->top_caracter_en;
		}
		function get_tech_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '7' AND lang_ID = '1'";
			$this->tech_caracter_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_caracter_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_caracter_ro;
		}
		function get_tech_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '7' AND lang_ID = '2'";
			$this->tech_caracter_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_caracter_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_caracter_en;
		}
		function get_LList_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '7' AND lang_ID = '1'";
			$this->Llist_caracter_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Llist_caracter_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Llist_caracter_ro;
		}
		function get_LList_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '7' AND lang_ID = '2'";
			$this->Llist_caracter_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Llist_caracter_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Llist_caracter_en;
		}
		function get_RList_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '7' AND lang_ID = '1'";
			$this->Rlist_caracter_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Rlist_caracter_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Rlist_caracter_ro;
		}
		function get_RList_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '7' AND lang_ID = '2'";
			$this->Rlist_caracter_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Rlist_caracter_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Rlist_caracter_en;
	    }
}
// the Rustic collection
class rustic_data extends db_lib
{
// get the title
    function get_title_ro()
		{
		    $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '8' AND lang_ID = '1'";
			$this->title_rustic_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_rustic_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_rustic_ro;
	    }
		function get_title_en()
		{
		    $sql = "SELECT * FROM `section` WHERE Section_Position = 'Title' AND Article_ID = '8' AND lang_ID = '2'";
			$this->title_rustic_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->title_rustic_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->title_rustic_en;
	    }
		function get_top_text_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '8' AND lang_ID = '1'";
			$this->top_rustic_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->top_rustic_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->top_rustic_ro;
		}
		function get_top_text_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Top' AND Article_ID = '8' AND lang_ID = '2'";
			$this->top_rustic_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->top_rustic_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->top_rustic_en;
		}
		function get_tech_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '8' AND lang_ID = '1'";
			$this->tech_rustic_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_rustic_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_rustic_ro;
		}
		function get_tech_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'Tech' AND Article_ID = '8' AND lang_ID = '2'";
			$this->tech_rustic_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->tech_rustic_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->tech_rustic_en;
		}
		function get_LList_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '8' AND lang_ID = '1'";
			$this->Llist_rustic_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Llist_rustic_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Llist_rustic_ro;
		}
		function get_LList_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Left' AND Article_ID = '8' AND lang_ID = '2'";
			$this->Llist_rustic_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Llist_rustic_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Llist_rustic_en;
		}
		function get_RList_ro()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '8' AND lang_ID = '1'";
			$this->Rlist_rustic_ro = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Rlist_rustic_ro .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Rlist_rustic_ro;
		}
		function get_RList_en()
		{
            $sql = "SELECT * FROM `section` WHERE Section_Position = 'List Right' AND Article_ID = '8' AND lang_ID = '2'";
			$this->Rlist_rustic_en = "";
	          foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->Rlist_rustic_en .= $row['Section_Text'] . '<br/>';
	           }
	           return $this->Rlist_rustic_en;
	    }
}

// The home page
class acasa_data extends db_lib
{
    function get_introt_ro()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '9' AND lang_ID = '1'";
		 $this->intro_ro = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->intro_ro .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->intro_ro;
	}
	function get_introt_en()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '9' AND lang_ID = '2'";
		 $this->intro_en = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->intro_en .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->intro_en;
	}
	//the parchet intro
	 function get_introp_ro()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '2' AND lang_ID = '1'";
		 $this->introp_ro = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->introp_ro .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->introp_ro;
	}
	function get_introp_en()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '2' AND lang_ID = '2'";
		 $this->introp_en = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->introp_en .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->introp_en;
	}
	//the montaj intro
		 function get_introm_ro()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '3' AND lang_ID = '1'";
		 $this->introm_ro = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->introm_ro .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->introm_ro;
	}
	function get_introm_en()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '3' AND lang_ID = '2'";
		 $this->introm_en = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->introm_en .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->introm_en;
	}
	// the plinta si scari intro
		 function get_intros_ro()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '4' AND lang_ID = '1'";
		 $this->intros_ro = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->intros_ro .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->intros_ro;
	}
	function get_intros_en()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '4' AND lang_ID = '2'";
		 $this->intros_en = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->intros_en .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->intros_en;
	}
	// the galery intro
	function get_introg_ro()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '5' AND lang_ID = '1'";
		 $this->introg_ro = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->introg_ro .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->introg_ro;
	}
	function get_introg_en()
	{
	     $sql = "SELECT * FROM `section` WHERE Section_Position = 'Intro' AND Article_ID = '5' AND lang_ID = '2'";
		 $this->introg_en = "";
	     foreach ($this->dbh->query($sql) as $row)
	          {
	               $this->introg_en .= $row['Section_Text'] . '<br/>';
	           }
	     return $this->introg_en;
	}
}
	?>