
void FUN_02f0ca60(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x210);
  if (*(uint *)(lVar4 + 0x48) < 7 && (1 << (ulong)(*(uint *)(lVar4 + 0x48) & 0x1f) & 0x58U) != 0) {
    iVar2 = *(int *)(lVar4 + 0x48);
    if (iVar2 == 6 || iVar2 == 4) {
      uVar3 = 5;
    }
    else {
      if (iVar2 != 3) goto LAB_02f0cb24;
      lVar5 = *(long *)(lVar4 + 0x58);
      FUN_038e2f80(lVar5 + 0x110);
      plVar1 = (long *)(*(int *)(lVar5 + 0x74) + lVar4);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(lVar5 + 0x70) = *(int *)(lVar5 + 0x70) + -1;
      FUN_038e3040(lVar5 + 0x110);
      uVar3 = 2;
      *(undefined8 *)(lVar4 + 0x58) = 0;
    }
    *(undefined4 *)(lVar4 + 0x48) = uVar3;
  }
LAB_02f0cb24:
  if (*(long *)(param_1 + 0x58) != param_1 + 0x50) {
    lVar5 = (long)*(int *)(param_1 + 100);
    lVar4 = *(long *)(param_1 + 0x58) - lVar5;
    do {
      if (*(uint *)(lVar4 + 0xa8) < 7 && (1 << (ulong)(*(uint *)(lVar4 + 0xa8) & 0x1f) & 0x58U) != 0
         ) {
        FUN_03868c7c(param_1,lVar4);
      }
      lVar4 = *(long *)(lVar4 + lVar5 + 8) - lVar5;
    } while (lVar4 != (param_1 + 0x50) - lVar5);
  }
  return;
}

