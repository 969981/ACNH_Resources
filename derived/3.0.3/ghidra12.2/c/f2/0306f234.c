
void FUN_0306f234(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_16c2 [2];
  undefined1 auStack_16c0 [5792];
  
  if (*(int *)(param_1 + 0xa0) == -1) {
    FUN_007ef010(auStack_16c2,param_1 + 0x98);
    FUN_007e4920(auStack_16c0,auStack_16c2);
    uVar1 = FUN_007e4bb0(auStack_16c0);
    if ((uVar1 & 1) == 0) goto LAB_0306f2fc;
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar3 < iVar2) {
      puVar4 = *(undefined8 **)(param_1 + 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar4;
      }
      *(undefined4 *)puVar4 = 0;
      iVar3 = *(int *)(param_1 + 8);
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar3 < iVar2) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar3 * 8) = puVar4;
        iVar2 = *(int *)(param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar3;
      }
    }
    if (iVar2 <= iVar3) goto LAB_0306f340;
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar4;
    }
    *(undefined4 *)puVar4 = 7;
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar3 < iVar2) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar3 * 8) = puVar4;
      goto LAB_0306f334;
    }
    if (iVar2 <= iVar3) goto LAB_0306f38c;
  }
  else {
LAB_0306f2fc:
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar3 < iVar2) {
      puVar4 = *(undefined8 **)(param_1 + 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = *puVar4;
      }
      *(undefined4 *)puVar4 = 0;
      iVar3 = *(int *)(param_1 + 8);
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar3 < iVar2) {
        *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar3 * 8) = puVar4;
LAB_0306f334:
        iVar2 = *(int *)(param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 8) + 1;
        *(int *)(param_1 + 8) = iVar3;
      }
    }
LAB_0306f340:
    if (iVar2 <= iVar3) goto LAB_0306f38c;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = *puVar4;
  }
  *(undefined4 *)puVar4 = 3;
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar3 < iVar2) {
    *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar3 * 8) = puVar4;
    iVar2 = *(int *)(param_1 + 0xc);
    iVar3 = *(int *)(param_1 + 8) + 1;
    *(int *)(param_1 + 8) = iVar3;
  }
LAB_0306f38c:
  if (iVar3 < iVar2) {
    puVar4 = *(undefined8 **)(param_1 + 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = *puVar4;
    }
    *(undefined4 *)puVar4 = 6;
    if (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc)) {
      *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = puVar4;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return;
}

