
bool FUN_01f119a4(long *param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(*param_1 + 0x4b8))();
  if ((uVar3 & 1) != 0) {
    iVar1 = *(int *)((long)param_1 + 0x77f4);
    if ((iVar1 != 0x3c) && (iVar2 = (int)param_1[0xef6], iVar2 != 0x3c)) {
      if (iVar1 == 0x3d) {
        return false;
      }
      if (iVar2 == 0x3d) {
        return false;
      }
      if (iVar1 == 0x42) {
        return false;
      }
      if (iVar2 == 0x42) {
        return false;
      }
      return iVar1 != 0x43 && iVar2 != 0x43;
    }
  }
  return false;
}

