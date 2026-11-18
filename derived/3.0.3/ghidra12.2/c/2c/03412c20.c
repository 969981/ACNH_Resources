
int FUN_03412c20(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  if (**(char **)(param_2 + 8) != '\0' || *(short *)PTR_DAT_04bb37e0 != -2) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      if ((*(int *)(param_1 + 8 + (long)iVar2 * 0x1a8 + 0x1a0) == 0) &&
         (lVar1 = param_1 + 8 + (long)iVar2 * 0x1a8, (*(byte *)(lVar1 + 0x18) >> 1 & 1) == 0)) {
        FUN_03412d40(lVar1,param_2,&DAT_05586008,param_3);
        return iVar3;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar2 != 0x10e);
  }
  return -1;
}

