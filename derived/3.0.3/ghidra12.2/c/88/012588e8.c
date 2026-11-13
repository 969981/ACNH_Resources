
void FUN_012588e8(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x60);
  if ((lVar4 != 0) && (*(void **)(lVar4 + 0x1b8) != (void *)0x0)) {
    iVar3 = *(int *)(lVar4 + 0x1c0);
    iVar2 = iVar3 + 0x1e;
    if (0 < iVar3) {
      iVar2 = iVar3 + -1;
    }
    uVar1 = (iVar2 >> 5) + 1;
    memset(*(void **)(lVar4 + 0x1b8),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  lVar4 = *(long *)(param_1 + 0x68);
  if ((lVar4 != 0) && (*(void **)(lVar4 + 0x1b8) != (void *)0x0)) {
    iVar3 = *(int *)(lVar4 + 0x1c0);
    iVar2 = iVar3 + 0x1e;
    if (0 < iVar3) {
      iVar2 = iVar3 + -1;
    }
    uVar1 = (iVar2 >> 5) + 1;
    memset(*(void **)(lVar4 + 0x1b8),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  lVar4 = *(long *)(param_1 + 0x70);
  if ((lVar4 != 0) && (*(void **)(lVar4 + 0x1b8) != (void *)0x0)) {
    iVar3 = *(int *)(lVar4 + 0x1c0);
    iVar2 = iVar3 + 0x1e;
    if (0 < iVar3) {
      iVar2 = iVar3 + -1;
    }
    uVar1 = (iVar2 >> 5) + 1;
    memset(*(void **)(lVar4 + 0x1b8),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  lVar4 = *(long *)(param_1 + 0x78);
  if ((lVar4 != 0) && (*(void **)(lVar4 + 0x1b8) != (void *)0x0)) {
    iVar3 = *(int *)(lVar4 + 0x1c0);
    iVar2 = iVar3 + 0x1e;
    if (0 < iVar3) {
      iVar2 = iVar3 + -1;
    }
    uVar1 = (iVar2 >> 5) + 1;
    memset(*(void **)(lVar4 + 0x1b8),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  lVar4 = *(long *)(param_1 + 0x80);
  if ((lVar4 != 0) && (*(void **)(lVar4 + 0x1b8) != (void *)0x0)) {
    iVar3 = *(int *)(lVar4 + 0x1c0);
    iVar2 = iVar3 + 0x1e;
    if (0 < iVar3) {
      iVar2 = iVar3 + -1;
    }
    uVar1 = (iVar2 >> 5) + 1;
    memset(*(void **)(lVar4 + 0x1b8),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  lVar4 = *(long *)(param_1 + 0x88);
  if ((lVar4 != 0) && (*(void **)(lVar4 + 0x1b8) != (void *)0x0)) {
    iVar3 = *(int *)(lVar4 + 0x1c0);
    iVar2 = iVar3 + 0x1e;
    if (0 < iVar3) {
      iVar2 = iVar3 + -1;
    }
    uVar1 = (iVar2 >> 5) + 1;
    memset(*(void **)(lVar4 + 0x1b8),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  lVar4 = *(long *)(param_1 + 0x90);
  if ((lVar4 != 0) && (*(void **)(lVar4 + 0x1b8) != (void *)0x0)) {
    iVar3 = *(int *)(lVar4 + 0x1c0);
    iVar2 = iVar3 + 0x1e;
    if (0 < iVar3) {
      iVar2 = iVar3 + -1;
    }
    uVar1 = (iVar2 >> 5) + 1;
    memset(*(void **)(lVar4 + 0x1b8),0,
           -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  }
  lVar4 = *(long *)(param_1 + 0x98);
  if ((lVar4 == 0) || (*(void **)(lVar4 + 0x1b8) == (void *)0x0)) {
    return;
  }
  iVar3 = *(int *)(lVar4 + 0x1c0);
  iVar2 = iVar3 + 0x1e;
  if (0 < iVar3) {
    iVar2 = iVar3 + -1;
  }
  uVar1 = (iVar2 >> 5) + 1;
  memset(*(void **)(lVar4 + 0x1b8),0,
         -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  return;
}

