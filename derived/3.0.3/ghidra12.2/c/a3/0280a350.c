
int FUN_0280a350(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  if (((int)*param_2 < 0) || (0x78 < (int)*param_2)) {
    return -1;
  }
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*param_2 == (uint)*(byte *)(param_1 + iVar2)) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 != 0x100);
  return -1;
}

