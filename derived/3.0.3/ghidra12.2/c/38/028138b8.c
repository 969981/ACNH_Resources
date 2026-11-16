
void FUN_028138b8(long param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  
  uVar5 = 0;
  puVar9 = (uint *)(param_1 + 0x304f8);
  uVar4 = *puVar9;
  uVar8 = (uint)*(byte *)(param_1 + 0x304ff);
  if ((uVar8 != 0 ||
       (((ulong)uVar4 != 0 || *(ushort *)(param_1 + 0x304fc) != 0) ||
       *(byte *)(param_1 + 0x304fe) != 0)) &&
     (uVar8 == ((uVar4 + (uVar4 >> 0x10) + (uVar4 >> 0x18) + (uVar4 >> 8)) - 0x2d & 0xff))) {
    lVar6 = (ulong)uVar4 << ((ulong)(0x1d - *(byte *)(param_1 + 0x304fe)) & 0x3f);
    uVar5 = (ulong)(((int)lVar6 - (uint)*(ushort *)(param_1 + 0x304fc)) + -0x7f1cd4ef +
                   (int)((ulong)lVar6 >> 0x20));
  }
  uVar7 = 0;
  uVar4 = *(uint *)(param_1 + 0x30500);
  pbVar10 = (byte *)(param_1 + 0x30507);
  if ((*pbVar10 != 0 ||
       (((ulong)uVar4 != 0 || *(ushort *)(param_1 + 0x30504) != 0) ||
       *(byte *)(param_1 + 0x30506) != 0)) &&
     ((uint)*pbVar10 == ((uVar4 + (uVar4 >> 0x10) + (uVar4 >> 0x18) + (uVar4 >> 8)) - 0x2d & 0xff)))
  {
    lVar6 = (ulong)uVar4 << ((ulong)(0x1d - *(byte *)(param_1 + 0x30506)) & 0x3f);
    uVar7 = (ulong)(((int)lVar6 - (uint)*(ushort *)(param_1 + 0x30504)) + -0x7f1cd4ef +
                   (int)((ulong)lVar6 >> 0x20));
  }
  lVar12 = (uVar5 + param_2) - uVar7;
  uVar4 = nn::os::GetSystemTick();
  uVar8 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = uVar8 ^ uVar8 * 0x800;
  uVar1 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  uVar8 = uVar1 ^ uVar1 * 0x800;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  uVar4 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
  uVar5 = (ulong)(uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4) * 0x1b;
  lVar6 = (uVar5 >> 0x20) + 3;
  iVar11 = (int)lVar12;
  uVar2 = (undefined1)(uVar5 >> 0x20);
  uVar3 = (undefined2)(uVar4 >> 0x10);
  if (lVar12 < 0) {
    *(undefined2 *)(param_1 + 0x30504) = uVar3;
    *(undefined1 *)(param_1 + 0x30506) = uVar2;
    lVar6 = (ulong)(((uVar4 >> 0x10) - iVar11) + 0x7f1cd4ef) << lVar6;
    uVar4 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
    *(uint *)(param_1 + 0x30500) = uVar4;
  }
  else {
    *(undefined1 *)(param_1 + 0x304fe) = uVar2;
    *(undefined2 *)(param_1 + 0x304fc) = uVar3;
    lVar6 = (ulong)(iVar11 + 0x7f1cd4ef + (uVar4 >> 0x10)) << lVar6;
    uVar4 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
    *puVar9 = uVar4;
    puVar9 = (uint *)(param_1 + 0x30500);
    pbVar10 = (byte *)(param_1 + 0x304ff);
  }
  *pbVar10 = ((char)uVar4 + (char)(uVar4 >> 0x10) + (char)(uVar4 >> 0x18) + (char)(uVar4 >> 8)) -
             0x2d;
  uVar4 = nn::os::GetSystemTick();
  uVar8 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = uVar8 ^ uVar8 * 0x800;
  uVar1 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
  uVar8 = uVar1 ^ uVar1 * 0x800;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  uVar4 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
  *(short *)(puVar9 + 1) = (short)(uVar4 >> 0x10);
  uVar5 = (ulong)(uVar8 >> 8 ^ uVar4 >> 0x13 ^ uVar8 ^ uVar4) * 0x1b;
  *(char *)((long)puVar9 + 6) = (char)(uVar5 >> 0x20);
  lVar6 = (ulong)((uVar4 >> 0x10) + 0x7f1cd4ef) << (uVar5 >> 0x20) + 3;
  uVar4 = (int)((ulong)lVar6 >> 0x20) + (int)lVar6;
  *puVar9 = uVar4;
  *(char *)((long)puVar9 + 7) =
       (char)uVar4 + (char)(uVar4 >> 0x10) + (char)(uVar4 >> 0x18) + (char)(uVar4 >> 8) + -0x2d;
  return;
}

