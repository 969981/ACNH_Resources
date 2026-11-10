
int FUN_00222ffc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1 - (param_1[2] + param_1[1]);
  if (param_2 != 0) {
    if (param_2 == 1) {
      uVar2 = FUN_00222118(1);
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = (iVar3 - 0x20U) / uVar2;
      }
      return uVar1 * uVar2 + 0x20;
    }
    iVar3 = 0;
  }
  return iVar3;
}

