
void FUN_024beb18(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *param_1 & 0xffefffff;
  }
  else {
    uVar1 = *param_1 | 0x100000;
  }
  *param_1 = uVar1;
  return;
}

