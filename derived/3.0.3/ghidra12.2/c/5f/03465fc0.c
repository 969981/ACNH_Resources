
int FUN_03465fc0(long param_1,int *param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*param_2 != -1) {
    iVar4 = 0;
    iVar3 = 0;
    param_1 = param_1 + 8;
    do {
      lVar1 = param_1 + (long)iVar3 * 0x30;
      if (((*(ushort *)(lVar1 + 4) & 1) == 0) &&
         (*(int *)(param_1 + (long)iVar3 * 0x30 + 0x20) == *param_2)) {
        param_1 = param_1 + (long)iVar3 * 0x30;
        piVar2 = (int *)(param_1 + 0x28);
        *(undefined1 *)(param_1 + 0x24) = 1;
        if (*piVar2 != 0) {
          *piVar2 = 1;
        }
        FUN_015d7b58(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x140),lVar1,param_2,0,0);
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar4 != 0x40);
  }
  return -1;
}

