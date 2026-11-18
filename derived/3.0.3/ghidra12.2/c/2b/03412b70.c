
int FUN_03412b70(long param_1,short *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  if (*PTR_DAT_04c4b988 != '\0' || *param_2 != -2) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      if ((*(int *)(param_1 + 8 + (long)iVar2 * 0x1a8 + 0x1a0) == 0) &&
         (lVar1 = param_1 + 8 + (long)iVar2 * 0x1a8, (*(byte *)(lVar1 + 0x18) >> 1 & 1) == 0)) {
        FUN_03412d40(lVar1,PTR_PTR_04bb2238,param_2,param_3);
        return iVar3;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar2 != 0x10e);
  }
  return -1;
}

