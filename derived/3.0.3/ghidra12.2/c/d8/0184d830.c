
uint FUN_0184d830(long param_1,undefined1 *param_2,long param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  uVar2 = FUN_01a19d20(*(undefined8 *)(param_4 + 8),param_3,*(undefined8 *)(param_4 + 0x20));
  if ((uVar2 & 1) == 0) {
    *param_2 = 0;
  }
  else if ((*(long *)(param_1 + 0x3d8) != 0) &&
          (*(char *)(*(long *)(param_1 + 0x3d8) + 0x294) != '\0')) {
    iVar1 = **(int **)(param_4 + 0x10);
    if (iVar1 != 0) {
      lVar3 = *(long *)(*(int **)(param_4 + 0x10) + 2);
      iVar4 = 0;
      do {
        if ((((*(char *)(lVar3 + (long)iVar4 * 0x38 + 0x34) != '\0') &&
             (lVar5 = lVar3 + (long)iVar4 * 0x38,
             *(int *)(lVar5 + 0x10) <= *(int *)(param_3 + 8) &&
             *(int *)(param_3 + 8) <= *(int *)(lVar5 + 0x20))) &&
            (*(int *)(lVar5 + 0x14) <= *(int *)(param_3 + 0xc))) &&
           (*(int *)(param_3 + 0xc) <= *(int *)(lVar5 + 0x24))) {
          *param_2 = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
    iVar1 = **(int **)(param_4 + 0x18);
    if (iVar1 != 0) {
      lVar3 = *(long *)(*(int **)(param_4 + 0x18) + 2);
      iVar4 = 0;
      do {
        if (((*(char *)(lVar3 + (long)iVar4 * 0x38 + 0x34) != '\0') &&
            (lVar5 = lVar3 + (long)iVar4 * 0x38,
            *(int *)(lVar5 + 0x10) <= *(int *)(param_3 + 8) &&
            *(int *)(param_3 + 8) <= *(int *)(lVar5 + 0x20))) &&
           ((*(int *)(lVar5 + 0x14) <= *(int *)(param_3 + 0xc) &&
            (*(int *)(param_3 + 0xc) <= *(int *)(lVar5 + 0x24))))) {
          *param_2 = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
    }
  }
  return uVar2 & 1;
}

