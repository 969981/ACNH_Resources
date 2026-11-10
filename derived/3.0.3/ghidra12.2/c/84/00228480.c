
void FUN_00228480(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
  *param_1 = uVar1 >> 0x10 | uVar1 << 0x10;
  return;
}

