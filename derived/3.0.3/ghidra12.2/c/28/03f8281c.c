
void FUN_03f8281c(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  uVar9 = *param_2;
  if (*(char *)(param_1 + 0x34e0d0) == '\0' && *(char *)(param_1 + 0x34e0cc) == '\0') {
    uVar4 = *(ushort *)(param_1 + 0x34e0ea);
    iVar10 = *(short *)(param_1 + ((ulong)(uVar9 >> 0x10) & 0xff) * 0x20 +
                        ((ulong)(uVar9 >> 0xc) & 0xf) * 2 + 0x3861b8) * 2;
    iVar2 = iVar10 + 0xc00;
    if ((uVar9 & 0x40fe00) != 0x4000) {
      iVar2 = iVar10;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar2 + *(int *)(param_1 + 0x34e0bc);
    uVar9 = FUN_03f5914c((int)param_1,uVar9);
    *(undefined1 *)(param_1 + 0x34e0b8) = (char)(uVar9 >> 8);
    uVar12 = (uint)uVar4;
    if (*(char *)(param_1 + 0x34e0c8) == '\0') {
      uVar11 = (uVar9 & 0xffff) + uVar12 + (uint)*(byte *)(param_1 + 0x34e0cb);
      bVar8 = (uVar11 & 0x30000) != 0;
    }
    else {
      uVar11 = (uVar9 & 0xf) + (uint)*(byte *)(param_1 + 0x34e0cb) + (uVar12 & 0xf);
      uVar1 = (uVar9 & 0xf0) + (uVar12 & 0xf0) >> 4;
      if (9 < uVar11) {
        uVar1 = uVar1 + 1;
        uVar11 = uVar11 + 6 & 0xf;
      }
      uVar5 = uVar1 + 6 & 0xf;
      if (uVar1 < 10) {
        uVar5 = uVar1;
      }
      uVar6 = (uVar9 & 0xf00) + (uVar12 & 0xf00) >> 8;
      if (9 < uVar1) {
        uVar6 = uVar6 + 1;
      }
      uVar1 = uVar6 + 6 & 0xf;
      if (uVar6 < 10) {
        uVar1 = uVar6;
      }
      uVar7 = (uVar9 & 0xf000) + uVar12 >> 0xc;
      if (9 < uVar6) {
        uVar7 = uVar7 + 1;
      }
      uVar6 = uVar7 + 6 & 0xf;
      if (uVar7 < 10) {
        uVar6 = uVar7;
      }
      uVar11 = uVar11 + uVar5 * 0x10 + uVar1 * 0x100 + uVar6 * 0x1000;
      bVar8 = 9 < uVar7;
    }
    *(bool *)(param_1 + 0x34e0cb) = bVar8;
    *(byte *)(param_1 + 0x34e0ca) = (byte)(uVar11 >> 0xf) & 1;
    *(short *)(param_1 + 0x34e0ea) = (short)uVar11;
    *(byte *)(param_1 + 0x34e0ce) =
         (byte)(((uVar11 ^ uVar9 & 0xffff) & (uVar9 ^ uVar12 ^ 0xffffffff)) >> 0xf) & 1;
    *(bool *)(param_1 + 0x34e0c9) = (uVar11 & 0xffff) == 0;
    *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  }
  else {
    bVar3 = *(byte *)(param_1 + 0x34e0ea);
    iVar10 = (int)*(short *)(param_1 + ((ulong)(uVar9 >> 0x10) & 0xff) * 0x20 +
                             ((ulong)(uVar9 >> 0xc) & 0xf) * 2 + 0x3861b8);
    iVar2 = iVar10 + 0x600;
    if ((uVar9 >> 0x10 & 0x40) != 0 || (uVar9 & 0xfe00) != 0x4000) {
      iVar2 = iVar10;
    }
    *(int *)(param_1 + 0x34e0bc) = iVar2 + *(int *)(param_1 + 0x34e0bc);
    uVar9 = FUN_03f4bda8();
    *(undefined1 *)(param_1 + 0x34e0b8) = (char)uVar9;
    uVar12 = (uint)bVar3;
    if (*(char *)(param_1 + 0x34e0c8) == '\0') {
      uVar11 = uVar12 + (uVar9 & 0xff) + (uint)*(byte *)(param_1 + 0x34e0cb);
      bVar8 = 0xff < uVar11;
    }
    else {
      uVar1 = (uVar9 & 0xf) + (uVar12 & 0xf) + (uint)*(byte *)(param_1 + 0x34e0cb);
      uVar11 = uVar1 + 6 & 0xf;
      if (uVar1 < 10) {
        uVar11 = uVar1;
      }
      uVar5 = (uVar9 & 0xf0) + uVar12 >> 4;
      if (9 < uVar1) {
        uVar5 = uVar5 + 1;
      }
      bVar8 = 9 < uVar5;
      uVar1 = uVar5 + 6 & 0xf;
      if (uVar5 < 10) {
        uVar1 = uVar5;
      }
      uVar11 = uVar11 + uVar1 * 0x10;
    }
    *(bool *)(param_1 + 0x34e0cb) = bVar8;
    *(char *)(param_1 + 0x34e0ea) = (char)uVar11;
    *(bool *)(param_1 + 0x34e0ce) = 0x7f < ((uVar11 ^ uVar9) & (uVar9 ^ uVar12 ^ 0xffffffff) & 0xff)
    ;
    *(char *)(param_1 + 0x34e0ca) = (char)((uVar11 & 0xff) >> 7);
    *(bool *)(param_1 + 0x34e0c9) = (uVar11 & 0xff) == 0;
    *(undefined1 *)(param_1 + 0x34e0d1) = 1;
  }
  return;
}

