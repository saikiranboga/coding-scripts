#!/usr/bin/perl
chomp($nCases = <STDIN>);
while($nCases-- > 0)
{
    chomp($str = <STDIN>);
    $flag = 0;
    foreach(a..z)
    {
	if(!($str =~ /.*$_.*/i))
	{
	    $flag = 1;
	    print $_, "\n";
	    last;
	}
    }
    print "~\n" if($flag == 0);	  
}
