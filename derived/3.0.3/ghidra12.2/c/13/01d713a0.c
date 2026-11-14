
void FUN_01d713a0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar4 = 0;
    do {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x30) + lVar4 * 8);
      lVar4 = lVar4 + 1;
      *puVar8 = 0;
      *(undefined1 *)(puVar8 + 0xd8) = 0;
      *(undefined1 *)(puVar8 + 0xd9) = 0;
      *(undefined1 *)(puVar8 + 0x16c) = 0;
      *(undefined1 *)(puVar8 + 0x30e) = 0;
    } while (lVar4 < *(int *)(param_1 + 0x28));
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar1) {
    uVar5 = (ulong)uVar1 & 3;
    if (uVar1 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        lVar4 = uVar7 * 8;
        uVar7 = uVar7 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar4) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar4 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar4 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar4 + 0x18) = 0;
      } while (((ulong)uVar1 & 0xfffffffc) != uVar7);
    }
    if ((uVar1 & 3) != 0) {
      lVar4 = uVar7 << 3;
      do {
        uVar5 = uVar5 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar4) = 0;
        lVar4 = lVar4 + 8;
      } while (uVar5 != 0);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (0 < (int)uVar1) {
    uVar5 = (ulong)uVar1 & 3;
    if (uVar1 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      do {
        lVar4 = uVar7 * 8;
        uVar7 = uVar7 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar4) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar4 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar4 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar4 + 0x18) = 0;
      } while (((ulong)uVar1 & 0xfffffffc) != uVar7);
    }
    if ((uVar1 & 3) != 0) {
      lVar4 = uVar7 << 3;
      do {
        uVar5 = uVar5 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar4) = 0;
        lVar4 = lVar4 + 8;
      } while (uVar5 != 0);
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x80);
    iVar3 = iVar2 + 0x1e;
    if (0 < iVar2) {
      iVar3 = iVar2 + -1;
    }
    uVar1 = (iVar3 >> 5) + 1;
    memset(*(void **)(param_1 + 0x78),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    iVar2 = *(int *)(param_1 + 0x90);
    iVar3 = iVar2 + 0x1e;
    if (0 < iVar2) {
      iVar3 = iVar2 + -1;
    }
    uVar1 = (iVar3 >> 5) + 1;
    memset(*(void **)(param_1 + 0x88),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  iVar3 = **(int **)(param_1 + 0x40);
  lVar4 = (long)iVar3;
  if (iVar3 != 0) {
    lVar6 = *(long *)(*(int **)(param_1 + 0x40) + 2);
    do {
      lVar4 = lVar4 + -1;
      plVar9 = *(long **)(lVar6 + lVar4 * 8);
      if (*plVar9 == 0) {
        return;
      }
      *plVar9 = 0;
      *(undefined1 *)(plVar9 + 0xd8) = 0;
      *(undefined1 *)(plVar9 + 0xd9) = 0;
      *(undefined1 *)(plVar9 + 0x16c) = 0;
      *(undefined1 *)(plVar9 + 0x30e) = 0;
    } while (lVar4 != 0);
  }
  return;
}

