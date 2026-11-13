
void FUN_012e7a90(uint *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar4 = PTR_DAT_04bb37e0;
  if ((*(long *)(param_1 + 2) != 0) && (uVar3 = *param_1, 0 < (int)uVar3)) {
    lVar5 = 0;
    do {
      puVar1 = (undefined2 *)(*(long *)(param_1 + 2) + lVar5);
      lVar5 = lVar5 + 8;
      *puVar1 = *(undefined2 *)puVar4;
      *(undefined *)(puVar1 + 1) = puVar4[2];
      *(undefined *)((long)puVar1 + 3) = puVar4[3];
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar4 + 4);
    } while ((ulong)uVar3 * 8 != lVar5);
  }
  puVar4 = PTR_DAT_04bb37e0;
  if ((*(long *)(param_1 + 6) != 0) && (uVar3 = param_1[4], 0 < (int)uVar3)) {
    lVar5 = 0;
    do {
      puVar1 = (undefined2 *)(*(long *)(param_1 + 6) + lVar5);
      lVar5 = lVar5 + 8;
      *puVar1 = *(undefined2 *)puVar4;
      *(undefined *)(puVar1 + 1) = puVar4[2];
      *(undefined *)((long)puVar1 + 3) = puVar4[3];
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar4 + 4);
    } while ((ulong)uVar3 * 8 != lVar5);
  }
  if (*(void **)(param_1 + 10) != (void *)0x0) {
    uVar3 = param_1[0xc];
    iVar2 = uVar3 + 0x1e;
    if (0 < (int)uVar3) {
      iVar2 = uVar3 - 1;
    }
    uVar3 = (iVar2 >> 5) + 1;
    memset(*(void **)(param_1 + 10),0,
           -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
  }
  if (*(void **)(param_1 + 0x12) != (void *)0x0) {
    uVar3 = param_1[0x14];
    iVar2 = uVar3 + 0x1e;
    if (0 < (int)uVar3) {
      iVar2 = uVar3 - 1;
    }
    uVar3 = (iVar2 >> 5) + 1;
    memset(*(void **)(param_1 + 0x12),0,
           -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}

