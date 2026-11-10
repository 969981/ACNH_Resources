
void FUN_00189e00(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0x1105;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  *param_1 = iVar1;
  uVar2 = 1;
  param_1[0x270] = 1;
  do {
    param_1[uVar2] = param_1[uVar2 - 1] * 0x10dcd;
    uVar2 = param_1[0x270] + 1;
    param_1[0x270] = uVar2;
  } while (uVar2 < 0x270);
  return;
}

