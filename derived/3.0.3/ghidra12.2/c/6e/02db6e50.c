
void FUN_02db6e50(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x210);
  if (*(int *)(lVar5 + 0x48) - 3U < 5) {
    iVar3 = *(int *)(lVar5 + 0x48);
    if (iVar3 == 6 || iVar3 == 4) {
      uVar4 = 5;
    }
    else {
      if (iVar3 != 3) goto LAB_02db6ef8;
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
LAB_02db6ef8:
  plVar1 = (long *)(param_1 + 0x218);
  plVar2 = plVar1 + *(uint *)(param_1 + 0x244);
  if (4 < *(uint *)(param_1 + 0x244)) {
    plVar2 = plVar1;
  }
  if ((*(uint *)(*plVar2 + 0x48) < 7) &&
     ((1 << (ulong)(*(uint *)(*plVar2 + 0x48) & 0x1f) & 0x58U) != 0)) {
    plVar2 = plVar1 + *(uint *)(param_1 + 0x244);
    if (4 < *(uint *)(param_1 + 0x244)) {
      plVar2 = plVar1;
    }
    lVar5 = *plVar2;
    iVar3 = *(int *)(lVar5 + 0x48);
    if (iVar3 == 6 || iVar3 == 4) {
      uVar4 = 5;
    }
    else {
      if (iVar3 != 3) goto LAB_02db6fc8;
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
LAB_02db6fc8:
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  return;
}

