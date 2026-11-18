
void FUN_034978d8(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = *(long **)(param_1 + 0x1ce08);
  if ((plVar2 != (long *)0x0) &&
     (*(uint *)(plVar2 + 0x15) < 7 && (1 << (ulong)(*(uint *)(plVar2 + 0x15) & 0x1f) & 0x58U) != 0))
  {
    (**(code **)(*plVar2 + 0xb8))();
    FUN_03868c7c(param_1,*(long *)(param_1 + 0x1ce08));
  }
  lVar4 = *(long *)(param_1 + 0x228);
  if (*(int *)(lVar4 + 0x48) - 3U < 5) {
    iVar1 = *(int *)(lVar4 + 0x48);
    if (iVar1 == 6 || iVar1 == 4) {
      uVar3 = 5;
    }
    else {
      if (iVar1 != 3) {
        return;
      }
      lVar5 = *(long *)(lVar4 + 0x58);
      FUN_038e2f80(lVar5 + 0x110);
      plVar2 = (long *)(*(int *)(lVar5 + 0x74) + lVar4);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(lVar5 + 0x70) = *(int *)(lVar5 + 0x70) + -1;
      FUN_038e3040(lVar5 + 0x110);
      uVar3 = 2;
      *(undefined8 *)(lVar4 + 0x58) = 0;
    }
    *(undefined4 *)(lVar4 + 0x48) = uVar3;
  }
  return;
}

