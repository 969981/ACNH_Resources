
int FUN_0049c410(long *param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = FUN_0049c130();
  lVar5 = *(long *)(*(long *)(*param_1 + 0x40) + (long)iVar2 * 8);
  if (lVar5 != 0) {
    *(undefined8 *)(*(long *)(*param_1 + 0x40) + (long)iVar2 * 8) = 0;
    lVar4 = *param_1;
    iVar3 = *(int *)(lVar4 + 0x58);
    if (iVar3 <= *(int *)(lVar4 + 100)) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 << 1;
      }
      FUN_0049cf80(lVar4 + 0x50,iVar3);
    }
    iVar3 = *(int *)(lVar4 + 0x60);
    if (iVar3 == *(int *)(lVar4 + 0x58)) {
      iVar3 = 0;
      *(undefined4 *)(lVar4 + 0x60) = 0;
    }
    plVar1 = (long *)(*(long *)(lVar4 + 0x50) + (long)iVar3 * 0x10);
    *plVar1 = lVar5;
    *(int *)(plVar1 + 1) = iVar2;
    *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
    *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + 1;
  }
  return iVar2;
}

