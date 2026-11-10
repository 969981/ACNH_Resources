
int FUN_002b2830(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    while (lVar1 = (**(code **)(*param_1 + 0x48))(param_1,iVar3), lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x48))(param_1,iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = (uint)*(ushort *)(lVar1 + 0x1a) + iVar2;
      if (iVar3 == 0x20) {
        return iVar2;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x20);
  return iVar2;
}

