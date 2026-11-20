
void FUN_03f703c0(long param_1)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  
  puVar1 = (ushort *)(param_1 + 0x34e0b4);
  uVar5 = *(ushort *)(param_1 + 0x34e0e4);
  iVar11 = (int)*(short *)(param_1 + 0x3861b8 +
                           ((ulong)*(ushort *)(param_1 + 0x34e0b6) & 0xff) * 0x20 +
                          (ulong)(*puVar1 >> 0xc) * 2);
  iVar3 = iVar11 + 0x600;
  if ((*puVar1 & 0xfe00) != 0x4000 || (*(ushort *)(param_1 + 0x34e0b6) & 0x40) != 0) {
    iVar3 = iVar11;
  }
  *(int *)(param_1 + 0x34e0bc) = *(int *)(param_1 + 0x34e0bc) + *(int *)(param_1 + 0x34e0f0) + iVar3
  ;
  bVar6 = FUN_03f4bda8();
  *(byte *)(param_1 + 0x34e0b8) = bVar6;
  *puVar1 = *puVar1 + 1;
  bVar10 = *(byte *)(param_1 + 0x34e0e6);
  uVar12 = (ulong)bVar10;
  uVar2 = (uint)uVar5 + (uint)bVar6 + (uint)*(ushort *)(param_1 + 0x34e0e0);
  iVar11 = *(short *)(param_1 + 0x3861b8 + ((ulong)(uVar2 >> 0xb) & 0x1e)) * 2;
  iVar3 = iVar11 + 0xc00;
  if ((uVar2 & 0xfe00) != 0x4000) {
    iVar3 = iVar11;
  }
  *(int *)(param_1 + 0x34e0bc) = iVar3 + *(int *)(param_1 + 0x34e0bc);
  uVar8 = FUN_03f5914c(param_1,uVar2 & 0xffff);
  uVar9 = uVar8 & 0xffff;
  *(char *)(param_1 + 0x34e0b8) = (char)(uVar8 >> 8);
  if (*(char *)(param_1 + 0x34e0d0) == '\0' && *(char *)(param_1 + 0x34e0cc) == '\0') {
    uVar5 = *(ushort *)(param_1 + 0x34e0ea);
    iVar11 = *(short *)(param_1 + uVar12 * 0x20 + (uVar9 >> 0xb & 0x1e) + 0x3861b8) * 2;
    iVar3 = iVar11 + 0xc00;
    if (((uVar9 | uVar12 << 0x10) & 0x40fe00) != 0x4000) {
      iVar3 = iVar11;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar3 + *(int *)(param_1 + 0x34e0bc);
    uVar7 = FUN_03f5914c(param_1);
    bVar6 = (byte)(uVar7 >> 8);
    uVar2 = uVar7 & 0xffff | (uint)uVar5;
    *(ushort *)(param_1 + 0x34e0ea) = (ushort)uVar7 | uVar5;
    bVar10 = (byte)(uVar2 >> 0xf);
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x34e0ea);
    iVar11 = (int)*(short *)(param_1 + uVar12 * 0x20 + (uVar9 >> 0xb & 0x1e) + 0x3861b8);
    iVar3 = iVar11 + 0x600;
    if (((uint)uVar9 & 0xfe00) != 0x4000 || (bVar10 & 0x40) != 0) {
      iVar3 = iVar11;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar3 + *(int *)(param_1 + 0x34e0bc);
    bVar6 = FUN_03f4bda8(param_1,uVar12);
    bVar10 = bVar6 | bVar4;
    uVar2 = (uint)bVar10;
    *(byte *)(param_1 + 0x34e0ea) = bVar6 | bVar4;
    bVar10 = bVar10 >> 7;
  }
  *(bool *)(param_1 + 0x34e0c9) = uVar2 == 0;
  *(byte *)(param_1 + 0x34e0b8) = bVar6;
  *(byte *)(param_1 + 0x34e0ca) = bVar10;
  *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  return;
}

