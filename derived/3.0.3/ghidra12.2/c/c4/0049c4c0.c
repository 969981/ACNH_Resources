
void FUN_0049c4c0(long *param_1,int param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x40) + (long)param_2 * 8);
  if (lVar3 != 0) {
    *(undefined8 *)(*(long *)(*param_1 + 0x40) + (long)param_2 * 8) = 0;
    lVar4 = *param_1;
    iVar2 = *(int *)(lVar4 + 0x58);
    if (iVar2 <= *(int *)(lVar4 + 100)) {
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 << 1;
      }
      FUN_0049cf80(lVar4 + 0x50,iVar2);
    }
    iVar2 = *(int *)(lVar4 + 0x60);
    if (iVar2 == *(int *)(lVar4 + 0x58)) {
      iVar2 = 0;
      *(undefined4 *)(lVar4 + 0x60) = 0;
    }
    plVar1 = (long *)(*(long *)(lVar4 + 0x50) + (long)iVar2 * 0x10);
    *plVar1 = lVar3;
    *(int *)(plVar1 + 1) = param_2;
    *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
    *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + 1;
  }
  return;
}

