#!/usr/bin/perl -w
open(A, "<fileA");
open(B, "fileC");
my(%hashA, %hashB);

while(){
    chmop;
    $hashA{$_}='a';
}

while(){
    chmop;
    $hashB{$_}='b';
}

foreach (keys %hashB)
{
    unless (exists $hashA{$_}){
	print C $_;
    }
}
