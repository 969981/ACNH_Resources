
void FUN_02813b54(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  int iVar12;
  long lVar13;
  
  uVar6 = 0;
  puVar1 = (uint *)(param_1 + 0x304f8);
  puVar10 = (uint *)(param_1 + 0x30500);
  uVar5 = *puVar10;
  uVar9 = (uint)*(byte *)(param_1 + 0x30507);
  if ((uVar9 != 0 ||
       (((ulong)uVar5 != 0 || *(ushort *)(param_1 + 0x30504) != 0) ||
       *(byte *)(param_1 + 0x30506) != 0)) &&
     (uVar9 == ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff))) {
    lVar7 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)(param_1 + 0x30506)) & 0x3f);
    uVar6 = (ulong)(((int)lVar7 - (uint)*(ushort *)(param_1 + 0x30504)) + -0x7f1cd4ef +
                   (int)((ulong)lVar7 >> 0x20));
  }
  uVar5 = *puVar1;
  uVar8 = 0;
  pbVar11 = (byte *)(param_1 + 0x304ff);
  if ((*pbVar11 != 0 ||
       (((ulong)uVar5 != 0 || *(ushort *)(param_1 + 0x304fc) != 0) ||
       *(byte *)(param_1 + 0x304fe) != 0)) &&
     ((uint)*pbVar11 == ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff)))
  {
    lVar7 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)(param_1 + 0x304fe)) & 0x3f);
    uVar8 = (ulong)(((int)lVar7 - (uint)*(ushort *)(param_1 + 0x304fc)) + -0x7f1cd4ef +
                   (int)((ulong)lVar7 >> 0x20));
  }
  lVar13 = (uVar6 + param_2) - uVar8;
  uVar5 = nn::os::GetSystemTick();
  uVar9 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = uVar9 ^ uVar9 * 0x800;
  uVar2 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
  uVar9 = uVar2 ^ uVar2 * 0x800;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
  uVar6 = (ulong)(uVar9 >> 8 ^ uVar5 >> 0x13 ^ uVar9 ^ uVar5) * 0x1b;
  lVar7 = (uVar6 >> 0x20) + 3;
  iVar12 = (int)lVar13;
  uVar3 = (undefined1)(uVar6 >> 0x20);
  uVar4 = (undefined2)(uVar5 >> 0x10);
  if (lVar13 < 0) {
    *(undefined2 *)(param_1 + 0x304fc) = uVar4;
    *(undefined1 *)(param_1 + 0x304fe) = uVar3;
    lVar7 = (ulong)(((uVar5 >> 0x10) - iVar12) + 0x7f1cd4ef) << lVar7;
    uVar5 = (int)((ulong)lVar7 >> 0x20) + (int)lVar7;
    *puVar1 = uVar5;
  }
  else {
    *(undefined1 *)(param_1 + 0x30506) = uVar3;
    *(undefined2 *)(param_1 + 0x30504) = uVar4;
    lVar7 = (ulong)(iVar12 + 0x7f1cd4ef + (uVar5 >> 0x10)) << lVar7;
    uVar5 = (int)((ulong)lVar7 >> 0x20) + (int)lVar7;
    *(uint *)(param_1 + 0x30500) = uVar5;
    puVar10 = puVar1;
    pbVar11 = (byte *)(param_1 + 0x30507);
  }
  *pbVar11 = ((char)uVar5 + (char)(uVar5 >> 0x10) + (char)(uVar5 >> 0x18) + (char)(uVar5 >> 8)) -
             0x2d;
  uVar5 = nn::os::GetSystemTick();
  uVar9 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uVar5 = uVar9 ^ uVar9 * 0x800;
  uVar2 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
  uVar9 = uVar2 ^ uVar2 * 0x800;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
  *(short *)(puVar10 + 1) = (short)(uVar5 >> 0x10);
  uVar6 = (ulong)(uVar9 >> 8 ^ uVar5 >> 0x13 ^ uVar9 ^ uVar5) * 0x1b;
  *(char *)((long)puVar10 + 6) = (char)(uVar6 >> 0x20);
  lVar7 = (ulong)((uVar5 >> 0x10) + 0x7f1cd4ef) << (uVar6 >> 0x20) + 3;
  uVar5 = (int)((ulong)lVar7 >> 0x20) + (int)lVar7;
  *puVar10 = uVar5;
  *(char *)((long)puVar10 + 7) =
       (char)uVar5 + (char)(uVar5 >> 0x10) + (char)(uVar5 >> 0x18) + (char)(uVar5 >> 8) + -0x2d;
  return;
}

