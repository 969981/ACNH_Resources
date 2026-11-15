
void FUN_02121b40(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  
  *(ushort *)(param_1 + 0x1528) = *(ushort *)(param_1 + 0x1528) | 5;
  lVar2 = FUN_02121bec();
  if (lVar2 != 0) {
    FUN_01f7273c(lVar2,1);
  }
  plVar3 = (long *)FUN_02121dc8(param_1);
  if (plVar3 != (long *)0x0) {
    FUN_02121fb0(param_1);
    (**(code **)(*plVar3 + 0x408))(plVar3);
  }
  iVar1 = *(int *)(param_1 + 0x1e8);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      plVar3 = (long *)FUN_02122bdc(param_1,iVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x408))();
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return;
}

