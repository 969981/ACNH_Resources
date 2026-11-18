
int FUN_03465f00(long param_1,int *param_2)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if (*param_2 != -1) {
    iVar5 = 0;
    iVar3 = 0;
    param_1 = param_1 + 8;
    do {
      lVar2 = param_1 + (long)iVar3 * 0x30;
      if (((*(ushort *)(lVar2 + 4) & 1) == 0) &&
         (piVar4 = (int *)(param_1 + (long)iVar3 * 0x30 + 0x20), *piVar4 == -1)) {
        *piVar4 = *param_2;
        param_1 = param_1 + (long)iVar3 * 0x30;
        *(undefined1 *)(param_1 + 0x24) = 1;
        puVar1 = PTR_DAT_04bb2200;
        *(undefined4 *)(param_1 + 0x28) = 1;
        FUN_015d7b58(*(undefined8 *)(*(long *)puVar1 + 0x140),lVar2,param_2,0,0);
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar5 != 0x40);
  }
  return -1;
}

