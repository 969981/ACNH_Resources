
void FUN_0289de30(long param_1)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  uVar11 = 0;
  uVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar4 = PTR_DAT_04bb37e0[2];
  uVar5 = PTR_DAT_04bb37e0[3];
  uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  do {
    uVar10 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar2 = (undefined2 *)(param_1 + ((long)(uVar10 << 0x20) >> 0x1d));
    *puVar2 = uVar6;
    *(undefined1 *)(puVar2 + 1) = uVar4;
    *(undefined1 *)((long)puVar2 + 3) = uVar5;
    *(undefined4 *)(puVar2 + 2) = uVar3;
  } while (uVar11 != 0x40);
  uVar11 = 0;
  do {
    uVar10 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar2 = (undefined2 *)(param_1 + 0x200 + ((long)(uVar10 << 0x20) >> 0x1d));
    *puVar2 = uVar6;
    *(undefined1 *)(puVar2 + 1) = uVar4;
    *(undefined1 *)((long)puVar2 + 3) = uVar5;
    *(undefined4 *)(puVar2 + 2) = uVar3;
  } while (uVar11 != 0x40);
  uVar11 = 0;
  do {
    uVar10 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar2 = (undefined2 *)(param_1 + 0x400 + ((long)(uVar10 << 0x20) >> 0x1d));
    *puVar2 = uVar6;
    *(undefined1 *)(puVar2 + 1) = uVar4;
    *(undefined1 *)((long)puVar2 + 3) = uVar5;
    *(undefined4 *)(puVar2 + 2) = uVar3;
  } while (uVar11 != 0x40);
  uVar11 = 0;
  do {
    uVar10 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar2 = (undefined2 *)(param_1 + 0x600 + ((long)(uVar10 << 0x20) >> 0x1d));
    *puVar2 = uVar6;
    *(undefined1 *)(puVar2 + 1) = uVar4;
    *(undefined1 *)((long)puVar2 + 3) = uVar5;
    *(undefined4 *)(puVar2 + 2) = uVar3;
  } while (uVar11 != 0x40);
  uVar11 = 0;
  do {
    uVar10 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar2 = (undefined2 *)(param_1 + 0x800 + ((long)(uVar10 << 0x20) >> 0x1d));
    *puVar2 = uVar6;
    *(undefined1 *)(puVar2 + 1) = uVar4;
    *(undefined1 *)((long)puVar2 + 3) = uVar5;
    *(undefined4 *)(puVar2 + 2) = uVar3;
  } while (uVar11 != 0x40);
  uVar11 = 0;
  do {
    uVar10 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar2 = (undefined2 *)(param_1 + 0xa00 + ((long)(uVar10 << 0x20) >> 0x1d));
    *puVar2 = uVar6;
    *(undefined1 *)(puVar2 + 1) = uVar4;
    *(undefined1 *)((long)puVar2 + 3) = uVar5;
    *(undefined4 *)(puVar2 + 2) = uVar3;
  } while (uVar11 != 0x40);
  uVar11 = 0;
  do {
    uVar10 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    puVar2 = (undefined2 *)(param_1 + 0xc00 + ((long)(uVar10 << 0x20) >> 0x1d));
    *puVar2 = uVar6;
    *(undefined1 *)(puVar2 + 1) = uVar4;
    *(undefined1 *)((long)puVar2 + 3) = uVar5;
    *(undefined4 *)(puVar2 + 2) = uVar3;
  } while (uVar11 != 0x40);
  uVar10 = 0;
  do {
    lVar12 = uVar10 << 0x20;
    uVar7 = uVar10 << 2;
    uVar8 = uVar10 >> 0x1f;
    uVar11 = (int)uVar10 + 2;
    uVar10 = (ulong)uVar11;
    *(undefined4 *)(param_1 + 0xe00 + (-uVar8 & 0xfffffffc00000000 | uVar7)) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xe00 + (lVar12 + 0x100000000 >> 0x1e)) = 0xffffffff;
  } while (uVar11 != 0x40);
  uVar10 = 0;
  do {
    lVar12 = uVar10 << 0x20;
    uVar7 = uVar10 << 2;
    uVar8 = uVar10 >> 0x1f;
    uVar11 = (int)uVar10 + 2;
    uVar10 = (ulong)uVar11;
    *(undefined4 *)(param_1 + 0xf00 + (-uVar8 & 0xfffffffc00000000 | uVar7)) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf00 + (lVar12 + 0x100000000 >> 0x1e)) = 0xffffffff;
  } while (uVar11 != 0x40);
  uVar10 = 0;
  do {
    lVar12 = uVar10 << 0x20;
    uVar7 = uVar10 << 2;
    uVar8 = uVar10 >> 0x1f;
    uVar11 = (int)uVar10 + 2;
    uVar10 = (ulong)uVar11;
    *(undefined4 *)(param_1 + 0x1000 + (-uVar8 & 0xfffffffc00000000 | uVar7)) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1000 + (lVar12 + 0x100000000 >> 0x1e)) = 0xffffffff;
  } while (uVar11 != 0x40);
  uVar10 = 0;
  do {
    lVar12 = uVar10 << 0x20;
    uVar7 = uVar10 << 2;
    uVar8 = uVar10 >> 0x1f;
    uVar11 = (int)uVar10 + 2;
    uVar10 = (ulong)uVar11;
    *(undefined4 *)(param_1 + 0x1100 + (-uVar8 & 0xfffffffc00000000 | uVar7)) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1100 + (lVar12 + 0x100000000 >> 0x1e)) = 0xffffffff;
  } while (uVar11 != 0x40);
  uVar10 = 0;
  do {
    lVar12 = uVar10 << 0x20;
    uVar7 = uVar10 << 2;
    uVar8 = uVar10 >> 0x1f;
    uVar11 = (int)uVar10 + 2;
    uVar10 = (ulong)uVar11;
    *(undefined4 *)(param_1 + 0x1200 + (-uVar8 & 0xfffffffc00000000 | uVar7)) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1200 + (lVar12 + 0x100000000 >> 0x1e)) = 0xffffffff;
  } while (uVar11 != 0x40);
  uVar10 = 0;
  do {
    lVar12 = uVar10 << 0x20;
    uVar7 = uVar10 << 2;
    uVar8 = uVar10 >> 0x1f;
    uVar11 = (int)uVar10 + 2;
    uVar10 = (ulong)uVar11;
    *(undefined4 *)(param_1 + 0x1300 + (-uVar8 & 0xfffffffc00000000 | uVar7)) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1300 + (lVar12 + 0x100000000 >> 0x1e)) = 0xffffffff;
  } while (uVar11 != 0x40);
  uVar10 = 0;
  do {
    lVar12 = uVar10 << 0x20;
    uVar7 = uVar10 << 2;
    uVar8 = uVar10 >> 0x1f;
    uVar11 = (int)uVar10 + 2;
    uVar10 = (ulong)uVar11;
    *(undefined4 *)(param_1 + 0x1400 + (-uVar8 & 0xfffffffc00000000 | uVar7)) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x1400 + (lVar12 + 0x100000000 >> 0x1e)) = 0xffffffff;
  } while (uVar11 != 0x40);
  iVar9 = 0;
  do {
    *(undefined1 *)(param_1 + 0x1500 + (long)iVar9) = 0;
    iVar1 = iVar9 + 1;
    iVar9 = iVar9 + 2;
    *(undefined1 *)(param_1 + 0x1500 + (long)iVar1) = 0;
  } while (iVar9 != 0x40);
  iVar9 = 0;
  do {
    *(undefined1 *)(param_1 + 0x1540 + (long)iVar9) = 0;
    iVar1 = iVar9 + 1;
    iVar9 = iVar9 + 2;
    *(undefined1 *)(param_1 + 0x1540 + (long)iVar1) = 0;
  } while (iVar9 != 0x40);
  iVar9 = 0;
  do {
    *(undefined1 *)(param_1 + 0x1580 + (long)iVar9) = 0;
    iVar1 = iVar9 + 1;
    iVar9 = iVar9 + 2;
    *(undefined1 *)(param_1 + 0x1580 + (long)iVar1) = 0;
  } while (iVar9 != 0x40);
  iVar9 = 0;
  do {
    *(undefined1 *)(param_1 + 0x15c0 + (long)iVar9) = 0;
    iVar1 = iVar9 + 1;
    iVar9 = iVar9 + 2;
    *(undefined1 *)(param_1 + 0x15c0 + (long)iVar1) = 0;
  } while (iVar9 != 0x40);
  iVar9 = 0;
  do {
    *(undefined1 *)(param_1 + 0x1600 + (long)iVar9) = 0;
    iVar1 = iVar9 + 1;
    iVar9 = iVar9 + 2;
    *(undefined1 *)(param_1 + 0x1600 + (long)iVar1) = 0;
  } while (iVar9 != 0x40);
  iVar9 = 0;
  do {
    *(undefined1 *)(param_1 + 0x1640 + (long)iVar9) = 0;
    iVar1 = iVar9 + 1;
    iVar9 = iVar9 + 2;
    *(undefined1 *)(param_1 + 0x1640 + (long)iVar1) = 0;
  } while (iVar9 != 0x40);
  iVar9 = 0;
  do {
    *(undefined1 *)(param_1 + 0x1680 + (long)iVar9) = 0;
    iVar1 = iVar9 + 1;
    iVar9 = iVar9 + 2;
    *(undefined1 *)(param_1 + 0x1680 + (long)iVar1) = 0;
  } while (iVar9 != 0x40);
  return;
}

