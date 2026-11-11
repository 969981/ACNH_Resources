
void FUN_00387874(ushort *param_1,long param_2)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 != 0) {
    *(long *)(param_1 + 4) = param_2;
    uVar1 = uVar1 & 0xff00 | 0x90;
  }
  *param_1 = uVar1 & 0xe0ff;
  return;
}

