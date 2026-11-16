
void FUN_028fabd0(long param_1)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  
  uVar12 = nn::os::GetSystemTick();
  uVar4 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  uVar12 = 0;
  uVar3 = uVar4 ^ uVar4 * 0x800;
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  uVar4 = uVar5 ^ uVar5 * 0x800;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  uVar3 = uVar3 >> 8 ^ uVar5 >> 0x13 ^ uVar3 ^ uVar5;
  uVar13 = (ulong)(uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar4 ^ uVar3) * 0x1b;
  lVar14 = (ulong)((uVar3 >> 0x10) + 0x7f1cd4ef) << (uVar13 >> 0x20) + 3;
  iVar1 = (int)((ulong)lVar14 >> 0x20) + (int)lVar14;
  *(short *)(param_1 + 0x304) = (short)(uVar3 >> 0x10);
  *(char *)(param_1 + 0x306) = (char)(uVar13 >> 0x20);
  *(int *)(param_1 + 0x300) = iVar1;
  uVar9 = DAT_0558600a;
  uVar8 = DAT_05586008;
  *(char *)(param_1 + 0x307) =
       (char)iVar1 + (char)((uint)iVar1 >> 0x10) + (char)((uint)iVar1 >> 0x18) +
       (char)((uint)iVar1 >> 8) + -0x2d;
  uVar11 = DAT_0558600c;
  uVar10 = DAT_0558600b;
  *(undefined2 *)(param_1 + 0x308) = uVar8;
  *(undefined1 *)(param_1 + 0x30a) = uVar9;
  *(undefined1 *)(param_1 + 0x30b) = uVar10;
  *(undefined4 *)(param_1 + 0x30c) = uVar11;
  do {
    uVar13 = (ulong)uVar12;
    uVar12 = uVar12 + 1;
    puVar2 = (undefined2 *)(param_1 + ((long)(uVar13 << 0x20) >> 0x1d));
    *puVar2 = uVar8;
    *(undefined1 *)(puVar2 + 1) = uVar9;
    *(undefined1 *)((long)puVar2 + 3) = uVar10;
    *(undefined4 *)(puVar2 + 2) = uVar11;
  } while (uVar12 != 0x40);
  uVar13 = 0;
  do {
    lVar14 = uVar13 << 0x20;
    uVar6 = uVar13 << 2;
    uVar7 = uVar13 >> 0x1f;
    uVar12 = (int)uVar13 + 2;
    uVar13 = (ulong)uVar12;
    *(undefined4 *)(param_1 + 0x200 + (-uVar7 & 0xfffffffc00000000 | uVar6)) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x200 + (lVar14 + 0x100000000 >> 0x1e)) = 0xffffffff;
  } while (uVar12 != 0x40);
  return;
}

