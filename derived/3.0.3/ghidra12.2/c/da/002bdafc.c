
void FUN_002bdafc(long param_1,int param_2)

{
  undefined1 uVar1;
  
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 1) goto LAB_002bdb1c;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x18) = uVar1;
LAB_002bdb1c:
  *(uint *)(param_1 + 0x638) = *(uint *)(param_1 + 0x638) | 2;
  return;
}

