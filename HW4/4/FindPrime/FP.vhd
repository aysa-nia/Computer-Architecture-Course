----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:27:26 06/04/2022 
-- Design Name: 
-- Module Name:    FP - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity FP is
	port (input : in std_logic_vector(9 downto 0);
			start : in std_logic;
			ans : out std_logic_vector(9 downto 0));
end FP;

architecture Behavioral of FP is
    subtype number is std_logic_vector(9 downto 0);
    type newtype is array(0 to 1023) of number;
    constant numbers : newtype := (
       2 => "0000000010",3 => "0000000011",4 => "0000000011",5 => "0000000101",6 => "0000000101",7 => "0000000111",8 => "0000000111",9 => "0000000111",10 => "0000000111",11 => "0000001011",12 => "0000001011",13 => "0000001101",14 => "0000001101",15 => "0000001101",16 => "0000001101",17 => "0000010001",18 => "0000010001",19 => "0000010011",20 => "0000010011",21 => "0000010011",22 => "0000010011",23 => "0000010111",24 => "0000010111",25 => "0000010111",26 => "0000010111",27 => "0000010111",28 => "0000010111",29 => "0000011101",30 => "0000011101",31 => "0000011111",32 => "0000011111",33 => "0000011111",34 => "0000011111",35 => "0000011111",36 => "0000011111",37 => "0000100101",38 => "0000100101",39 => "0000100101",40 => "0000100101",41 => "0000101001",42 => "0000101001",43 => "0000101011",44 => "0000101011",45 => "0000101011",46 => "0000101011",47 => "0000101111",48 => "0000101111",49 => "0000101111",50 => "0000101111",51 => "0000101111",52 => "0000101111",53 => "0000110101",54 => "0000110101",55 => "0000110101",56 => "0000110101",57 => "0000110101",58 => "0000110101",59 => "0000111011",60 => "0000111011",61 => "0000111101",62 => "0000111101",63 => "0000111101",64 => "0000111101",65 => "0000111101",66 => "0000111101",67 => "0001000011",68 => "0001000011",69 => "0001000011",70 => "0001000011",71 => "0001000111",72 => "0001000111",73 => "0001001001",74 => "0001001001",75 => "0001001001",76 => "0001001001",77 => "0001001001",78 => "0001001001",79 => "0001001111",80 => "0001001111",81 => "0001001111",82 => "0001001111",83 => "0001010011",84 => "0001010011",85 => "0001010011",86 => "0001010011",87 => "0001010011",88 => "0001010011",89 => "0001011001",90 => "0001011001",91 => "0001011001",92 => "0001011001",93 => "0001011001",94 => "0001011001",95 => "0001011001",96 => "0001011001",97 => "0001100001",98 => "0001100001",99 => "0001100001",100 => "0001100001",101 => "0001100101",102 => "0001100101",103 => "0001100111",104 => "0001100111",105 => "0001100111",106 => "0001100111",107 => "0001101011",108 => "0001101011",109 => "0001101101",110 => "0001101101",111 => "0001101101",112 => "0001101101",113 => "0001110001",114 => "0001110001",115 => "0001110001",116 => "0001110001",117 => "0001110001",118 => "0001110001",119 => "0001110001",120 => "0001110001",121 => "0001110001",122 => "0001110001",123 => "0001110001",124 => "0001110001",125 => "0001110001",126 => "0001110001",127 => "0001111111",128 => "0001111111",129 => "0001111111",130 => "0001111111",131 => "0010000011",132 => "0010000011",133 => "0010000011",134 => "0010000011",135 => "0010000011",136 => "0010000011",137 => "0010001001",138 => "0010001001",139 => "0010001011",140 => "0010001011",141 => "0010001011",142 => "0010001011",143 => "0010001011",144 => "0010001011",145 => "0010001011",146 => "0010001011",147 => "0010001011",148 => "0010001011",149 => "0010010101",150 => "0010010101",151 => "0010010111",152 => "0010010111",153 => "0010010111",154 => "0010010111",155 => "0010010111",156 => "0010010111",157 => "0010011101",158 => "0010011101",159 => "0010011101",160 => "0010011101",161 => "0010011101",162 => "0010011101",163 => "0010100011",164 => "0010100011",165 => "0010100011",166 => "0010100011",167 => "0010100111",168 => "0010100111",169 => "0010100111",170 => "0010100111",171 => "0010100111",172 => "0010100111",173 => "0010101101",174 => "0010101101",175 => "0010101101",176 => "0010101101",177 => "0010101101",178 => "0010101101",179 => "0010110011",180 => "0010110011",181 => "0010110101",182 => "0010110101",183 => "0010110101",184 => "0010110101",185 => "0010110101",186 => "0010110101",187 => "0010110101",188 => "0010110101",189 => "0010110101",190 => "0010110101",191 => "0010111111",192 => "0010111111",193 => "0011000001",194 => "0011000001",195 => "0011000001",196 => "0011000001",197 => "0011000101",198 => "0011000101",199 => "0011000111",200 => "0011000111",201 => "0011000111",202 => "0011000111",203 => "0011000111",204 => "0011000111",205 => "0011000111",206 => "0011000111",207 => "0011000111",208 => "0011000111",209 => "0011000111",210 => "0011000111",211 => "0011010011",212 => "0011010011",213 => "0011010011",214 => "0011010011",215 => "0011010011",216 => "0011010011",217 => "0011010011",218 => "0011010011",219 => "0011010011",220 => "0011010011",221 => "0011010011",222 => "0011010011",223 => "0011011111",224 => "0011011111",225 => "0011011111",226 => "0011011111",227 => "0011100011",228 => "0011100011",229 => "0011100101",230 => "0011100101",231 => "0011100101",232 => "0011100101",233 => "0011101001",234 => "0011101001",235 => "0011101001",236 => "0011101001",237 => "0011101001",238 => "0011101001",239 => "0011101111",240 => "0011101111",241 => "0011110001",242 => "0011110001",243 => "0011110001",244 => "0011110001",245 => "0011110001",246 => "0011110001",247 => "0011110001",248 => "0011110001",249 => "0011110001",250 => "0011110001",251 => "0011111011",252 => "0011111011",253 => "0011111011",254 => "0011111011",255 => "0011111011",256 => "0011111011",257 => "0100000001",258 => "0100000001",259 => "0100000001",260 => "0100000001",261 => "0100000001",262 => "0100000001",263 => "0100000111",264 => "0100000111",265 => "0100000111",266 => "0100000111",267 => "0100000111",268 => "0100000111",269 => "0100001101",270 => "0100001101",271 => "0100001111",272 => "0100001111",273 => "0100001111",274 => "0100001111",275 => "0100001111",276 => "0100001111",277 => "0100010101",278 => "0100010101",279 => "0100010101",280 => "0100010101",281 => "0100011001",282 => "0100011001",283 => "0100011011",284 => "0100011011",285 => "0100011011",286 => "0100011011",287 => "0100011011",288 => "0100011011",289 => "0100011011",290 => "0100011011",291 => "0100011011",292 => "0100011011",293 => "0100100101",294 => "0100100101",295 => "0100100101",296 => "0100100101",297 => "0100100101",298 => "0100100101",299 => "0100100101",300 => "0100100101",301 => "0100100101",302 => "0100100101",303 => "0100100101",304 => "0100100101",305 => "0100100101",306 => "0100100101",307 => "0100110011",308 => "0100110011",309 => "0100110011",310 => "0100110011",311 => "0100110111",312 => "0100110111",313 => "0100111001",314 => "0100111001",315 => "0100111001",316 => "0100111001",317 => "0100111101",318 => "0100111101",319 => "0100111101",320 => "0100111101",321 => "0100111101",322 => "0100111101",323 => "0100111101",324 => "0100111101",325 => "0100111101",326 => "0100111101",327 => "0100111101",328 => "0100111101",329 => "0100111101",330 => "0100111101",331 => "0101001011",332 => "0101001011",333 => "0101001011",334 => "0101001011",335 => "0101001011",336 => "0101001011",337 => "0101010001",338 => "0101010001",339 => "0101010001",340 => "0101010001",341 => "0101010001",342 => "0101010001",343 => "0101010001",344 => "0101010001",345 => "0101010001",346 => "0101010001",347 => "0101011011",348 => "0101011011",349 => "0101011101",350 => "0101011101",351 => "0101011101",352 => "0101011101",353 => "0101100001",354 => "0101100001",355 => "0101100001",356 => "0101100001",357 => "0101100001",358 => "0101100001",359 => "0101100111",360 => "0101100111",361 => "0101100111",362 => "0101100111",363 => "0101100111",364 => "0101100111",365 => "0101100111",366 => "0101100111",367 => "0101101111",368 => "0101101111",369 => "0101101111",370 => "0101101111",371 => "0101101111",372 => "0101101111",373 => "0101110101",374 => "0101110101",375 => "0101110101",376 => "0101110101",377 => "0101110101",378 => "0101110101",379 => "0101111011",380 => "0101111011",381 => "0101111011",382 => "0101111011",383 => "0101111111",384 => "0101111111",385 => "0101111111",386 => "0101111111",387 => "0101111111",388 => "0101111111",389 => "0110000101",390 => "0110000101",391 => "0110000101",392 => "0110000101",393 => "0110000101",394 => "0110000101",395 => "0110000101",396 => "0110000101",397 => "0110001101",398 => "0110001101",399 => "0110001101",400 => "0110001101",401 => "0110010001",402 => "0110010001",403 => "0110010001",404 => "0110010001",405 => "0110010001",406 => "0110010001",407 => "0110010001",408 => "0110010001",409 => "0110011001",410 => "0110011001",411 => "0110011001",412 => "0110011001",413 => "0110011001",414 => "0110011001",415 => "0110011001",416 => "0110011001",417 => "0110011001",418 => "0110011001",419 => "0110100011",420 => "0110100011",421 => "0110100101",422 => "0110100101",423 => "0110100101",424 => "0110100101",425 => "0110100101",426 => "0110100101",427 => "0110100101",428 => "0110100101",429 => "0110100101",430 => "0110100101",431 => "0110101111",432 => "0110101111",433 => "0110110001",434 => "0110110001",435 => "0110110001",436 => "0110110001",437 => "0110110001",438 => "0110110001",439 => "0110110111",440 => "0110110111",441 => "0110110111",442 => "0110110111",443 => "0110111011",444 => "0110111011",445 => "0110111011",446 => "0110111011",447 => "0110111011",448 => "0110111011",449 => "0111000001",450 => "0111000001",451 => "0111000001",452 => "0111000001",453 => "0111000001",454 => "0111000001",455 => "0111000001",456 => "0111000001",457 => "0111001001",458 => "0111001001",459 => "0111001001",460 => "0111001001",461 => "0111001101",462 => "0111001101",463 => "0111001111",464 => "0111001111",465 => "0111001111",466 => "0111001111",467 => "0111010011",468 => "0111010011",469 => "0111010011",470 => "0111010011",471 => "0111010011",472 => "0111010011",473 => "0111010011",474 => "0111010011",475 => "0111010011",476 => "0111010011",477 => "0111010011",478 => "0111010011",479 => "0111011111",480 => "0111011111",481 => "0111011111",482 => "0111011111",483 => "0111011111",484 => "0111011111",485 => "0111011111",486 => "0111011111",487 => "0111100111",488 => "0111100111",489 => "0111100111",490 => "0111100111",491 => "0111101011",492 => "0111101011",493 => "0111101011",494 => "0111101011",495 => "0111101011",496 => "0111101011",497 => "0111101011",498 => "0111101011",499 => "0111110011",500 => "0111110011",501 => "0111110011",502 => "0111110011",503 => "0111110111",504 => "0111110111",505 => "0111110111",506 => "0111110111",507 => "0111110111",508 => "0111110111",509 => "0111111101",510 => "0111111101",511 => "0111111101",512 => "0111111101",513 => "0111111101",514 => "0111111101",515 => "0111111101",516 => "0111111101",517 => "0111111101",518 => "0111111101",519 => "0111111101",520 => "0111111101",521 => "1000001001",522 => "1000001001",523 => "1000001011",524 => "1000001011",525 => "1000001011",526 => "1000001011",527 => "1000001011",528 => "1000001011",529 => "1000001011",530 => "1000001011",531 => "1000001011",532 => "1000001011",533 => "1000001011",534 => "1000001011",535 => "1000001011",536 => "1000001011",537 => "1000001011",538 => "1000001011",539 => "1000001011",540 => "1000001011",541 => "1000011101",542 => "1000011101",543 => "1000011101",544 => "1000011101",545 => "1000011101",546 => "1000011101",547 => "1000100011",548 => "1000100011",549 => "1000100011",550 => "1000100011",551 => "1000100011",552 => "1000100011",553 => "1000100011",554 => "1000100011",555 => "1000100011",556 => "1000100011",557 => "1000101101",558 => "1000101101",559 => "1000101101",560 => "1000101101",561 => "1000101101",562 => "1000101101",563 => "1000110011",564 => "1000110011",565 => "1000110011",566 => "1000110011",567 => "1000110011",568 => "1000110011",569 => "1000111001",570 => "1000111001",571 => "1000111011",572 => "1000111011",573 => "1000111011",574 => "1000111011",575 => "1000111011",576 => "1000111011",577 => "1001000001",578 => "1001000001",579 => "1001000001",580 => "1001000001",581 => "1001000001",582 => "1001000001",583 => "1001000001",584 => "1001000001",585 => "1001000001",586 => "1001000001",587 => "1001001011",588 => "1001001011",589 => "1001001011",590 => "1001001011",591 => "1001001011",592 => "1001001011",593 => "1001010001",594 => "1001010001",595 => "1001010001",596 => "1001010001",597 => "1001010001",598 => "1001010001",599 => "1001010111",600 => "1001010111",601 => "1001011001",602 => "1001011001",603 => "1001011001",604 => "1001011001",605 => "1001011001",606 => "1001011001",607 => "1001011111",608 => "1001011111",609 => "1001011111",610 => "1001011111",611 => "1001011111",612 => "1001011111",613 => "1001100101",614 => "1001100101",615 => "1001100101",616 => "1001100101",617 => "1001101001",618 => "1001101001",619 => "1001101011",620 => "1001101011",621 => "1001101011",622 => "1001101011",623 => "1001101011",624 => "1001101011",625 => "1001101011",626 => "1001101011",627 => "1001101011",628 => "1001101011",629 => "1001101011",630 => "1001101011",631 => "1001110111",632 => "1001110111",633 => "1001110111",634 => "1001110111",635 => "1001110111",636 => "1001110111",637 => "1001110111",638 => "1001110111",639 => "1001110111",640 => "1001110111",641 => "1010000001",642 => "1010000001",643 => "1010000011",644 => "1010000011",645 => "1010000011",646 => "1010000011",647 => "1010000111",648 => "1010000111",649 => "1010000111",650 => "1010000111",651 => "1010000111",652 => "1010000111",653 => "1010001101",654 => "1010001101",655 => "1010001101",656 => "1010001101",657 => "1010001101",658 => "1010001101",659 => "1010010011",660 => "1010010011",661 => "1010010101",662 => "1010010101",663 => "1010010101",664 => "1010010101",665 => "1010010101",666 => "1010010101",667 => "1010010101",668 => "1010010101",669 => "1010010101",670 => "1010010101",671 => "1010010101",672 => "1010010101",673 => "1010100001",674 => "1010100001",675 => "1010100001",676 => "1010100001",677 => "1010100101",678 => "1010100101",679 => "1010100101",680 => "1010100101",681 => "1010100101",682 => "1010100101",683 => "1010101011",684 => "1010101011",685 => "1010101011",686 => "1010101011",687 => "1010101011",688 => "1010101011",689 => "1010101011",690 => "1010101011",691 => "1010110011",692 => "1010110011",693 => "1010110011",694 => "1010110011",695 => "1010110011",696 => "1010110011",697 => "1010110011",698 => "1010110011",699 => "1010110011",700 => "1010110011",701 => "1010111101",702 => "1010111101",703 => "1010111101",704 => "1010111101",705 => "1010111101",706 => "1010111101",707 => "1010111101",708 => "1010111101",709 => "1011000101",710 => "1011000101",711 => "1011000101",712 => "1011000101",713 => "1011000101",714 => "1011000101",715 => "1011000101",716 => "1011000101",717 => "1011000101",718 => "1011000101",719 => "1011001111",720 => "1011001111",721 => "1011001111",722 => "1011001111",723 => "1011001111",724 => "1011001111",725 => "1011001111",726 => "1011001111",727 => "1011010111",728 => "1011010111",729 => "1011010111",730 => "1011010111",731 => "1011010111",732 => "1011010111",733 => "1011011101",734 => "1011011101",735 => "1011011101",736 => "1011011101",737 => "1011011101",738 => "1011011101",739 => "1011100011",740 => "1011100011",741 => "1011100011",742 => "1011100011",743 => "1011100111",744 => "1011100111",745 => "1011100111",746 => "1011100111",747 => "1011100111",748 => "1011100111",749 => "1011100111",750 => "1011100111",751 => "1011101111",752 => "1011101111",753 => "1011101111",754 => "1011101111",755 => "1011101111",756 => "1011101111",757 => "1011110101",758 => "1011110101",759 => "1011110101",760 => "1011110101",761 => "1011111001",762 => "1011111001",763 => "1011111001",764 => "1011111001",765 => "1011111001",766 => "1011111001",767 => "1011111001",768 => "1011111001",769 => "1100000001",770 => "1100000001",771 => "1100000001",772 => "1100000001",773 => "1100000101",774 => "1100000101",775 => "1100000101",776 => "1100000101",777 => "1100000101",778 => "1100000101",779 => "1100000101",780 => "1100000101",781 => "1100000101",782 => "1100000101",783 => "1100000101",784 => "1100000101",785 => "1100000101",786 => "1100000101",787 => "1100010011",788 => "1100010011",789 => "1100010011",790 => "1100010011",791 => "1100010011",792 => "1100010011",793 => "1100010011",794 => "1100010011",795 => "1100010011",796 => "1100010011",797 => "1100011101",798 => "1100011101",799 => "1100011101",800 => "1100011101",801 => "1100011101",802 => "1100011101",803 => "1100011101",804 => "1100011101",805 => "1100011101",806 => "1100011101",807 => "1100011101",808 => "1100011101",809 => "1100101001",810 => "1100101001",811 => "1100101011",812 => "1100101011",813 => "1100101011",814 => "1100101011",815 => "1100101011",816 => "1100101011",817 => "1100101011",818 => "1100101011",819 => "1100101011",820 => "1100101011",821 => "1100110101",822 => "1100110101",823 => "1100110111",824 => "1100110111",825 => "1100110111",826 => "1100110111",827 => "1100111011",828 => "1100111011",829 => "1100111101",830 => "1100111101",831 => "1100111101",832 => "1100111101",833 => "1100111101",834 => "1100111101",835 => "1100111101",836 => "1100111101",837 => "1100111101",838 => "1100111101",839 => "1101000111",840 => "1101000111",841 => "1101000111",842 => "1101000111",843 => "1101000111",844 => "1101000111",845 => "1101000111",846 => "1101000111",847 => "1101000111",848 => "1101000111",849 => "1101000111",850 => "1101000111",851 => "1101000111",852 => "1101000111",853 => "1101010101",854 => "1101010101",855 => "1101010101",856 => "1101010101",857 => "1101011001",858 => "1101011001",859 => "1101011011",860 => "1101011011",861 => "1101011011",862 => "1101011011",863 => "1101011111",864 => "1101011111",865 => "1101011111",866 => "1101011111",867 => "1101011111",868 => "1101011111",869 => "1101011111",870 => "1101011111",871 => "1101011111",872 => "1101011111",873 => "1101011111",874 => "1101011111",875 => "1101011111",876 => "1101011111",877 => "1101101101",878 => "1101101101",879 => "1101101101",880 => "1101101101",881 => "1101110001",882 => "1101110001",883 => "1101110011",884 => "1101110011",885 => "1101110011",886 => "1101110011",887 => "1101110111",888 => "1101110111",889 => "1101110111",890 => "1101110111",891 => "1101110111",892 => "1101110111",893 => "1101110111",894 => "1101110111",895 => "1101110111",896 => "1101110111",897 => "1101110111",898 => "1101110111",899 => "1101110111",900 => "1101110111",901 => "1101110111",902 => "1101110111",903 => "1101110111",904 => "1101110111",905 => "1101110111",906 => "1101110111",907 => "1110001011",908 => "1110001011",909 => "1110001011",910 => "1110001011",911 => "1110001111",912 => "1110001111",913 => "1110001111",914 => "1110001111",915 => "1110001111",916 => "1110001111",917 => "1110001111",918 => "1110001111",919 => "1110010111",920 => "1110010111",921 => "1110010111",922 => "1110010111",923 => "1110010111",924 => "1110010111",925 => "1110010111",926 => "1110010111",927 => "1110010111",928 => "1110010111",929 => "1110100001",930 => "1110100001",931 => "1110100001",932 => "1110100001",933 => "1110100001",934 => "1110100001",935 => "1110100001",936 => "1110100001",937 => "1110101001",938 => "1110101001",939 => "1110101001",940 => "1110101001",941 => "1110101101",942 => "1110101101",943 => "1110101101",944 => "1110101101",945 => "1110101101",946 => "1110101101",947 => "1110110011",948 => "1110110011",949 => "1110110011",950 => "1110110011",951 => "1110110011",952 => "1110110011",953 => "1110111001",954 => "1110111001",955 => "1110111001",956 => "1110111001",957 => "1110111001",958 => "1110111001",959 => "1110111001",960 => "1110111001",961 => "1110111001",962 => "1110111001",963 => "1110111001",964 => "1110111001",965 => "1110111001",966 => "1110111001",967 => "1111000111",968 => "1111000111",969 => "1111000111",970 => "1111000111",971 => "1111001011",972 => "1111001011",973 => "1111001011",974 => "1111001011",975 => "1111001011",976 => "1111001011",977 => "1111010001",978 => "1111010001",979 => "1111010001",980 => "1111010001",981 => "1111010001",982 => "1111010001",983 => "1111010111",984 => "1111010111",985 => "1111010111",986 => "1111010111",987 => "1111010111",988 => "1111010111",989 => "1111010111",990 => "1111010111",991 => "1111011111",992 => "1111011111",993 => "1111011111",994 => "1111011111",995 => "1111011111",996 => "1111011111",997 => "1111100101",998 => "1111100101",999 => "1111100101",1000 => "1111100101",1001 => "1111100101",1002 => "1111100101",1003 => "1111100101",1004 => "1111100101",1005 => "1111100101",1006 => "1111100101",1007 => "1111100101",1008 => "1111100101",1009 => "1111110001",1010 => "1111110001",1011 => "1111110001",1012 => "1111110001",1013 => "1111110101",1014 => "1111110101",1015 => "1111110101",1016 => "1111110101",1017 => "1111110101",1018 => "1111110101",1019 => "1111111011",1020 => "1111111011",1021 => "1111111101",1022 => "1111111101",1023 => "1111111101",
       others => (others =>'0'));
begin
    process(input , start)
    
    begin
        if start = '1' then
            ans <= numbers(TO_INTEGER(unsigned(input)));
            
        end if;
        
    end process;

end Behavioral;
