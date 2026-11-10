
undefined8 FUN_0013a440(byte *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  short sVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  undefined1 auStack_180 [16];
  long local_170;
  uint local_140;
  undefined1 local_119;
  undefined1 auStack_100 [112];
  undefined1 auStack_90 [10];
  ushort local_86;
  ushort local_84;
  short local_7e;
  short local_7c;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  local_74 = 0;
  lVar16 = *(long *)(param_1 + (param_4 & 0xffff) * 0x50 + 0x6f518);
  if (lVar16 != 0) {
    lVar14 = *(long *)(param_1 + (param_4 & 0xffff) * 0x50 + 0x6f510);
    uVar15 = *(uint *)(lVar14 + 8);
    if ((*(long *)(param_2 + 0x10) == lVar14) && (lVar11 = *(long *)(param_2 + 0x18), lVar11 != 0))
    {
      bVar3 = *(byte *)(param_2 + 0x67) >> 4;
      if (6 < bVar3) {
        return 0;
      }
      lVar16 = lVar11;
      if ((1 << (ulong)bVar3 & 99U) == 0) {
        if (bVar3 != 2) {
          return 0;
        }
        lVar11 = lVar14 + ((ulong)*(byte *)(lVar14 + 0x2c) << 0x18 |
                           (ulong)*(byte *)(lVar14 + 0x2d) << 0x10 |
                           (ulong)*(byte *)(lVar14 + 0x2e) << 8 | (ulong)*(byte *)(lVar14 + 0x2f)) +
                 (ulong)(*(int *)(param_2 + 0x40) * 4 - 4);
        uVar15 = (uint)*(byte *)(lVar11 + 1) << 0x10 | (uint)*(byte *)(lVar11 + 2) << 8 |
                 (uint)*(byte *)(lVar11 + 3);
      }
      else {
        uVar15 = *(uint *)(param_2 + 0x40);
      }
joined_r0x0013a75c:
      if (uVar15 == 0) {
        return 0;
      }
      if (lVar16 == 0) {
        return 0;
      }
      uVar17 = (*(uint *)(lVar16 + 0x70) & 0xff00ff00) >> 8 |
               (*(uint *)(lVar16 + 0x70) & 0xff00ff) << 8;
      if ((uVar17 >> 0x10 | uVar17 << 0x10) < uVar15) {
        return 0x948c;
      }
      lVar11 = lVar16 + ((ulong)*(byte *)(lVar14 + 0x10) << 0x18 |
                         (ulong)*(byte *)(lVar14 + 0x11) << 0x10 |
                         (ulong)*(byte *)(lVar14 + 0x12) << 8 | (ulong)*(byte *)(lVar14 + 0x13)) +
               0x3c;
      uVar12 = (ulong)(uVar15 - 1);
      uVar17 = *(byte *)(lVar11 + uVar12) & 0x3f;
      if (uVar17 == 0x3f) {
        *(undefined1 *)(lVar11 + uVar12) = 0xbf;
      }
      else {
        uVar1 = ((uint)*param_1 * 0x25) % 0xfb + 1;
        uVar8 = uVar1 & 0xff;
        *param_1 = (byte)uVar1;
        if (uVar17 <= uVar8 + (uVar8 / 0x3f + (uVar8 - uVar8 / 0x3f >> 1) >> 5) * -0x3f) {
          uVar17 = uVar17 + 1;
        }
        bVar3 = (byte)uVar17;
        if (uVar17 < 5) {
          if ((*(byte *)(lVar14 + ((ulong)*(byte *)(lVar14 + 0x28) << 0x18 |
                                   (ulong)*(byte *)(lVar14 + 0x29) << 0x10 |
                                   (ulong)*(byte *)(lVar14 + 0x2a) << 8 |
                                  (ulong)*(byte *)(lVar14 + 0x2b)) + ((ulong)((uVar15 - 1) * 2) | 1)
                        ) < 0x40) || ((*(byte *)(lVar11 + uVar12) >> 6 & 1) != 0)) {
            *(byte *)(lVar11 + uVar12) = *(byte *)(lVar11 + uVar12) & 0xc0 | bVar3;
            return 0;
          }
          *(byte *)(lVar11 + uVar12) = bVar3 | 0x80;
          return 0;
        }
        *(byte *)(lVar11 + uVar12) = bVar3 | 0x80;
        if (uVar17 < 0x3f) {
          return 0;
        }
      }
      *(byte *)(lVar16 + 0x18) = *(byte *)(lVar16 + 0x18) | 0x80;
      return 0;
    }
    iVar13 = (uint)*(byte *)(param_3 + 0x15c) - (uint)*(byte *)(param_3 + 0x15f);
    lVar11 = param_3 + 0xc;
    sVar9 = FUN_0013a8b0(lVar14,lVar11,iVar13,&local_64,&local_68);
    if (-1 < sVar9) {
      uVar10 = *(undefined8 *)(param_1 + (param_4 & 0xffff) * 0x50 + 0x6f518);
      uVar15 = (uVar15 & 0xff00ff00) >> 8 | (uVar15 & 0xff00ff) << 8;
      uVar17 = uVar15 >> 0x10 | uVar15 << 0x10;
      if (uVar17 == 0x50001) {
        sVar9 = FUN_0013aa00(lVar14,uVar10,0,local_64,local_68,lVar11,iVar13,0,0xffff,&local_6c,
                             &local_70,&local_74);
        uVar1 = local_70;
        uVar15 = local_6c;
      }
      else {
        sVar9 = FUN_0013b1c0(lVar14,uVar10,0,local_64,local_68,lVar11,iVar13,0,0xffff,&local_6c,
                             &local_70,&local_74);
        uVar1 = local_70;
        uVar15 = local_6c;
      }
      if (-1 < sVar9) {
        bVar3 = *(byte *)(lVar14 + 0x20);
        bVar4 = *(byte *)(lVar14 + 0x21);
        bVar5 = *(byte *)(lVar14 + 0x22);
        bVar6 = *(byte *)(lVar14 + 0x23);
        bVar7 = *(byte *)(param_3 + 0x15d);
        if (bVar7 == 0) {
          bVar7 = *(byte *)(param_3 + 0x15c);
        }
        if (uVar15 <= uVar1) {
          iVar13 = 10;
          if (uVar17 == 0x50001) {
            iVar13 = 6;
          }
          uVar17 = iVar13 * (uVar15 - 1);
          uVar8 = (uint)bVar7 - (uint)*(byte *)(param_3 + 0x15f);
          do {
            FUN_00138fe0(lVar14,lVar14 + ((ulong)bVar3 << 0x18 | (ulong)bVar4 << 0x10 |
                                          (ulong)bVar5 << 8 | (ulong)bVar6) + (ulong)uVar17,
                         auStack_90,0,uVar15);
            uVar2 = (uint)local_84;
            if (local_86 != 0) {
              uVar2 = (uint)local_86;
            }
            if (uVar2 == (uVar8 & 0xffff)) {
              local_119 = 0;
              local_170 = lVar14;
              local_140 = uVar15;
              sVar9 = FUN_001392e0(auStack_180,auStack_100,0x70);
              if ((((-1 < sVar9) &&
                   (sVar9 = FUN_00100470(param_3 + 0x7c,auStack_100,uVar8), sVar9 == 0)) &&
                  (*(short *)(param_3 + 4) == local_7e)) && (*(short *)(param_3 + 8) == local_7c))
              goto joined_r0x0013a75c;
            }
            uVar15 = uVar15 + 1;
            uVar17 = uVar17 + iVar13;
          } while (uVar15 <= uVar1);
        }
      }
    }
  }
  return 0;
}

