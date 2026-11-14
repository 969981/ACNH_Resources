
void FUN_01d4d8c0(long param_1,uint param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x3e4) == 1) {
    if ((param_2 & 1) == 0) {
      uVar1 = DAT_0536d298 & 0xfffffffe;
    }
    else {
      uVar1 = DAT_0536d298 | 1;
    }
    if (DAT_0536d298 != uVar1) {
      DAT_0536d298 = uVar1;
      DAT_0536d29c = 1;
      return;
    }
  }
  else {
    if ((param_2 & 1) == 0) {
      uVar1 = DAT_0536d298 & 0xfffffffe;
    }
    else {
      uVar1 = DAT_0536d298 | 1;
    }
    if (DAT_0536d298 != uVar1) {
      DAT_0536d298 = uVar1;
      return;
    }
  }
  return;
}

