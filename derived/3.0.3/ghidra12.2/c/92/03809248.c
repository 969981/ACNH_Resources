
undefined8 FUN_03809248(long param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0x1c0);
  iVar3 = *(int *)(param_1 + 0x1b8);
  if (iVar2 < iVar3) {
    *(int *)(param_1 + 0x1c0) = iVar2 + 1;
    if (*(long *)(param_1 + 0x1b0) != 0) {
      iVar2 = *(int *)(param_1 + 0x1bc) + iVar2;
      iVar1 = 0;
      if (iVar3 <= iVar2) {
        iVar1 = iVar3;
      }
      lVar4 = *(long *)(param_1 + 0x1b0) + (long)(iVar2 - iVar1) * 0x18;
      *(undefined1 *)(lVar4 + 8) = *param_2;
      *(undefined1 *)(lVar4 + 9) = param_2[1];
      *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(lVar4 + 0x14) = *(undefined4 *)(param_2 + 0xc);
      return 1;
    }
  }
  return 0;
}

