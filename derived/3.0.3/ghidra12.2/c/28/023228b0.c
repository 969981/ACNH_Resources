
uint FUN_023228b0(uint *param_1)

{
  uint uVar1;
  
  if ((param_1[2] & 1) == 0) {
    uVar1 = *param_1 & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

