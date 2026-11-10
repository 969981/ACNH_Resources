
undefined8 FUN_001284e0(byte *param_1,long param_2,long param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_184 [112];
  undefined4 local_114;
  uint local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [16];
  long local_f0;
  uint local_c0;
  undefined1 local_99;
  undefined1 auStack_80 [10];
  ushort local_76;
  ushort local_74;
  short local_6e;
  short local_6c;
  undefined8 local_68;
  
  local_114 = 0;
  lVar16 = *(long *)(param_1 + (param_4 & 0xffff) * 0x50 + 0x6f518);
  if (lVar16 != 0) {
    lVar12 = *(long *)(param_1 + (param_4 & 0xffff) * 0x50 + 0x6f510);
    iVar14 = *(int *)(lVar12 + 0x70);
    lVar15 = *(long *)(lVar12 + 8);
    if ((*(long *)(param_2 + 0x10) == lVar12) && (lVar9 = *(long *)(param_2 + 0x18), lVar9 != 0)) {
      bVar1 = *(byte *)(param_2 + 0x67) >> 4;
      if (6 < bVar1) {
        return 0;
      }
      lVar16 = lVar9;
      if ((1 << (ulong)bVar1 & 99U) == 0) {
        if (bVar1 != 2) {
          return 0;
        }
        lVar9 = *(long *)(lVar12 + 0x50) + (ulong)(*(int *)(param_2 + 0x40) * 4 - 4);
        uVar13 = (uint)*(byte *)(lVar9 + 1) << 0x10 | (uint)*(byte *)(lVar9 + 2) << 8 |
                 (uint)*(byte *)(lVar9 + 3);
      }
      else {
        uVar13 = *(uint *)(param_2 + 0x40);
      }
joined_r0x00128808:
      if (uVar13 == 0) {
        return 0;
      }
      if (lVar16 == 0) {
        return 0;
      }
      uVar2 = (*(uint *)(lVar16 + 0x70) & 0xff00ff00) >> 8 |
              (*(uint *)(lVar16 + 0x70) & 0xff00ff) << 8;
      if ((uVar2 >> 0x10 | uVar2 << 0x10) < uVar13) {
        return 0x94a5;
      }
      lVar15 = lVar16 + ((ulong)*(byte *)(lVar15 + 0x10) << 0x18 |
                         (ulong)*(byte *)(lVar15 + 0x11) << 0x10 |
                         (ulong)*(byte *)(lVar15 + 0x12) << 8 | (ulong)*(byte *)(lVar15 + 0x13)) +
               0x3c;
      uVar10 = (ulong)(uVar13 - 1);
      uVar2 = *(byte *)(lVar15 + uVar10) & 0x3f;
      if (uVar2 == 0x3f) {
        *(undefined1 *)(lVar15 + uVar10) = 0xbf;
      }
      else {
        uVar3 = ((uint)*param_1 * 0x25) % 0xfb + 1;
        uVar4 = uVar3 & 0xff;
        *param_1 = (byte)uVar3;
        if (uVar2 <= uVar4 + (uVar4 / 0x3f + (uVar4 - uVar4 / 0x3f >> 1) >> 5) * -0x3f) {
          uVar2 = uVar2 + 1;
        }
        bVar1 = (byte)uVar2;
        if (uVar2 < 5) {
          if ((*(byte *)(*(long *)(lVar12 + 0x60) + ((ulong)((uVar13 - 1) * 2) | 1)) < 0x40) ||
             ((*(byte *)(lVar15 + uVar10) >> 6 & 1) != 0)) {
            *(byte *)(lVar15 + uVar10) = *(byte *)(lVar15 + uVar10) & 0xc0 | bVar1;
            return 0;
          }
          *(byte *)(lVar15 + uVar10) = bVar1 | 0x80;
          return 0;
        }
        *(byte *)(lVar15 + uVar10) = bVar1 | 0x80;
        if (uVar2 < 0x3f) {
          return 0;
        }
      }
      *(byte *)(lVar16 + 0x18) = *(byte *)(lVar16 + 0x18) | 0x80;
      return 0;
    }
    iVar11 = (uint)*(byte *)(param_3 + 0x15c) - (uint)*(byte *)(param_3 + 0x15f);
    lVar9 = param_3 + 0xc;
    sVar5 = FUN_00128940(lVar12,lVar9,iVar11,&uStack_104,&local_108);
    if (-1 < sVar5) {
      uVar7 = *(undefined8 *)(param_1 + (param_4 & 0xffff) * 0x50 + 0x6f518);
      if (iVar14 == 0x40050001) {
        sVar5 = FUN_00128a70(lVar12,uVar7,0,uStack_104,local_108,lVar9,iVar11,0,0xffff,&local_10c,
                             &local_110,&local_114);
        uVar2 = local_110;
        uVar13 = local_10c;
      }
      else {
        sVar5 = FUN_00129300(lVar12,uVar7,0,uStack_104,local_108,lVar9,iVar11,0,0xffff,&local_10c,
                             &local_110,&local_114);
        uVar2 = local_110;
        uVar13 = local_10c;
      }
      if (-1 < sVar5) {
        bVar1 = *(byte *)(param_3 + 0x15d);
        if (bVar1 == 0) {
          bVar1 = *(byte *)(param_3 + 0x15c);
        }
        if (uVar13 <= uVar2) {
          uVar3 = (*(uint *)(lVar15 + 0x20) & 0xff00ff00) >> 8 |
                  (*(uint *)(lVar15 + 0x20) & 0xff00ff) << 8;
          iVar11 = 10;
          if (iVar14 == 0x40050001) {
            iVar11 = 6;
          }
          uVar4 = (uint)bVar1 - (uint)*(byte *)(param_3 + 0x15f);
          iVar14 = (uVar3 >> 0x10 | uVar3 << 0x10) + iVar11 * (uVar13 - 1);
          do {
            uVar3 = (*(uint *)(lVar12 + 8) & 0xff00ff00) >> 8 |
                    (*(uint *)(lVar12 + 8) & 0xff00ff) << 8;
            uVar8 = 6;
            if ((uVar3 >> 0x10 | uVar3 << 0x10) != 0x40050001) {
              uVar8 = 10;
            }
            iVar6 = FUN_0010dbc0(lVar12,5,iVar14,uVar8,&local_68);
            if (iVar6 < 0) {
              return 0;
            }
            FUN_001275b0(lVar12,local_68,auStack_80,0,uVar13);
            uVar3 = (uint)local_74;
            if (local_76 != 0) {
              uVar3 = (uint)local_76;
            }
            if (uVar3 == (uVar4 & 0xffff)) {
              local_99 = 0;
              local_f0 = lVar12;
              local_c0 = uVar13;
              sVar5 = FUN_00127850(auStack_100,auStack_184,0x70);
              if ((((-1 < sVar5) &&
                   (sVar5 = FUN_00100470(param_3 + 0x7c,auStack_184,uVar4), sVar5 == 0)) &&
                  (*(short *)(param_3 + 4) == local_6e)) && (*(short *)(param_3 + 8) == local_6c))
              goto joined_r0x00128808;
            }
            uVar13 = uVar13 + 1;
            iVar14 = iVar14 + iVar11;
          } while (uVar13 <= uVar2);
        }
      }
    }
  }
  return 0;
}

