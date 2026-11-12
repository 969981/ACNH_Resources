
void FUN_00807620(long param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  byte abStack_1f4a [2048];
  undefined1 auStack_174a [2];
  short local_1748 [4];
  long local_1740;
  long lStack_1738;
  uint local_a8 [4];
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  
  FUN_007ef010(auStack_174a,param_3);
  FUN_007e4920(local_1748,auStack_174a);
  if (local_1748[0] == DAT_04cb6038) {
    return;
  }
  if (lStack_1738 == 0 && local_1740 == 0) {
    return;
  }
  uVar3 = FUN_007e73e0(local_1748,0);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_a8[0] = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,1);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_a8[1] = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,2);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_a8[2] = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,3);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_a8[3] = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,4);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_98 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,5);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_94 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,6);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_90 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,7);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_8c = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,8);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_88 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,9);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_84 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,10);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_80 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,0xb);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_7c = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,0xc);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_78 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = FUN_007e73e0(local_1748,0xd);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_74 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar4 = FUN_007e73e0(local_1748,0xe);
  local_6d = (undefined1)uVar4;
  local_70 = (undefined1)((uint)uVar4 >> 0x18);
  local_6f = (undefined1)((uint)uVar4 >> 0x10);
  local_6e = (undefined1)((uint)uVar4 >> 8);
  local_6c = 0xf5f5f5;
  iVar5 = FUN_007e6760(local_1748);
  iVar6 = FUN_007e6aa0(local_1748);
  iVar12 = iVar6 * iVar5;
  iVar11 = iVar12 + 2;
  if (-1 < iVar12 + 1) {
    iVar11 = iVar12 + 1;
  }
  if ((uint)(iVar11 >> 1) < 0x801) {
    pbVar13 = abStack_1f4a;
    bVar1 = 0 < iVar6;
    if (0 < iVar6) {
      uVar3 = 0;
      iVar11 = 0;
      do {
        if (0 < iVar5) {
          iVar12 = 0;
          uVar14 = uVar3;
          do {
            iVar7 = FUN_007e6e10(local_1748,iVar12,iVar11);
            uVar9 = uVar14 & 4;
            iVar12 = iVar12 + 1;
            uVar2 = uVar14 >> 3;
            uVar14 = uVar14 + 4;
            pbVar13[uVar2] =
                 pbVar13[uVar2] & ((byte)(0xf << (ulong)uVar9) ^ 0xff) |
                 (byte)(iVar7 << (ulong)uVar9);
          } while (iVar5 != iVar12);
        }
        iVar11 = iVar11 + 1;
        uVar3 = uVar3 + iVar5 * 4;
      } while (iVar11 != iVar6);
      pbVar13 = abStack_1f4a;
      uVar3 = 4;
      goto joined_r0x008078d8;
    }
    uVar3 = 4;
  }
  else {
    iVar5 = 0;
    iVar6 = 0;
    uVar3 = 0;
    pbVar13 = (byte *)0x0;
  }
  bVar1 = false;
joined_r0x008078d8:
  if (((param_1 != 0) && (bVar1)) && (0 < iVar5)) {
    uVar14 = 0;
    uVar8 = 0;
    iVar11 = 0;
    do {
      uVar9 = uVar14;
      iVar12 = iVar5;
      do {
        if (uVar8 < param_2) {
          if (pbVar13 == (byte *)0x0) {
            uVar10 = 0;
          }
          else {
            uVar10 = (ulong)((~(-1 << (ulong)uVar3) << (ulong)(uVar9 & 4) &
                             (uint)pbVar13[uVar9 >> 3]) >> (ulong)(uVar9 & 4));
          }
          *(uint *)(param_1 + uVar8 * 4) = local_a8[uVar10];
          uVar8 = uVar8 + 1;
        }
        uVar9 = uVar9 + uVar3;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      iVar11 = iVar11 + 1;
      uVar14 = uVar14 + iVar5 * uVar3;
    } while (iVar11 != iVar6);
  }
  return;
}

