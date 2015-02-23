Extension of project block_class

Block Class Wrap allows users to use any classes also in div wrapper/layers 
around block that was added using block Class project.

WHY? In a situation for styling a core theme and not wanting to do templates 
this would allow putting elements around the block so styles like a background 
for top and bottom edge could be applied to a block. Yes this can be done 
with templates also. Using divwrapboat, divlayerbow, and divlayerstern to 
have unique class in each div element.

Below the example the class1 and class2 are inputed in the block admin using 
the dependent project block_class.

<div class="divwrapboat class1 class2">
 <div class="divlayerbow class1 class2></div>
   ---- block content ---
 <div class="divlayerstern class1 class2 "></div>
</div>

Note it it does this for blocks using hook_block_view_alter() but unlike 
block_class this module extension may not support panels properly. IT is 
a very simple module and other than enabling it does not require configuration 
in itself. Note it will only apply the div tags around a block that has 
classes added using the project block_class.

If someone wants this project to be fancier, like able to edit 
the fixed first class of wrap, before and after div's suggest a patch ;)`
