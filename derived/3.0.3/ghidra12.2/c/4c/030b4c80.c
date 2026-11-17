
void FUN_030b4c80(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0x1b8);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0xc) = 0;
    puVar3 = *(undefined4 **)(lVar2 + 0xafc98);
    if (puVar3 != (undefined4 *)0x0) {
      uVar4 = 0;
      if (*(char *)(puVar3 + 1) != '\0') {
        uVar4 = 6;
      }
      *puVar3 = uVar4;
    }
  }
  lVar2 = *(long *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 0xafca0);
    while (0 < *(int *)(lVar2 + 0xafcc8)) {
      plVar5 = *(long **)(lVar2 + 0xafcc0);
      if (*plVar5 != 0) {
        *(long *)(*plVar5 + 8) = plVar5[1];
      }
      if ((long *)plVar5[1] != (long *)0x0) {
        *(long *)plVar5[1] = *plVar5;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      *(int *)(lVar2 + 0xafcc8) = *(int *)(lVar2 + 0xafcc8) + -1;
      if ((plVar5 == (long *)0x0) ||
         (lVar6 = (long)plVar5 - (long)*(int *)(lVar2 + 0xafccc), lVar6 == 0)) break;
      *(undefined1 *)(lVar6 + 0x14) = 0;
      plVar5 = (long *)(lVar6 + *(int *)(lVar2 + 0xafcb4));
      lVar6 = *plVar1;
      *plVar1 = (long)plVar5;
      *plVar5 = lVar6;
      plVar5[1] = (long)plVar1;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar5;
      }
      *(int *)(lVar2 + 0xafcb0) = *(int *)(lVar2 + 0xafcb0) + 1;
    }
    *(undefined8 *)(lVar2 + 0xafcd0) = 0;
    *(undefined8 *)(lVar2 + 0x14) = 0;
    *(undefined4 *)(lVar2 + 0xafcd8) = 0;
  }
  *(undefined1 *)(param_1 + 0x17b) = 1;
  return;
}

