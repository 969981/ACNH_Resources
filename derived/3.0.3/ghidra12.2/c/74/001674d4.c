
void FUN_001674d4(long param_1)

{
  undefined4 uVar1;
  
  if ((int)*(uint *)(param_1 + 4) < 1) {
    uVar1 = 1;
  }
  else {
    if (*(uint *)(param_1 + 4) < 0x101) {
      return;
    }
    uVar1 = 0x100;
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}

