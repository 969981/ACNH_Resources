
void FUN_02d5ed58(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  FUN_03868c7c(param_1,*(undefined8 *)(param_1 + 0x16b0));
  FUN_03868c7c(param_1,*(undefined8 *)(param_1 + 0x1660));
  if ((*(long *)(param_1 + 0x16b8) != 0) &&
     (uVar2 = *(uint *)(*(long *)(param_1 + 0x16b8) + 0xa8),
     uVar2 < 7 && (1 << (ulong)(uVar2 & 0x1f) & 0x58U) != 0)) {
    FUN_03868c7c(param_1);
  }
  lVar5 = *(long *)(param_1 + 0x1680);
  if (*(int *)(lVar5 + 0x48) - 3U < 5) {
    iVar3 = *(int *)(lVar5 + 0x48);
    uVar4 = 5;
    if ((iVar3 != 6) && (iVar3 != 4)) {
      if (iVar3 != 3) {
        return;
      }
      lVar6 = *(long *)(lVar5 + 0x58);
      FUN_038e2f80(lVar6 + 0x110);
      plVar1 = (long *)(*(int *)(lVar6 + 0x74) + lVar5);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar6 + 0x70) = *(int *)(lVar6 + 0x70) + -1;
      FUN_038e3040(lVar6 + 0x110);
      uVar4 = 2;
      *(undefined8 *)(lVar5 + 0x58) = 0;
    }
    *(undefined4 *)(lVar5 + 0x48) = uVar4;
  }
  return;
}

