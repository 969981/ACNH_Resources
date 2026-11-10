
undefined8
FUN_00112fa0(char param_1,byte *param_2,byte *param_3,uint param_4,byte *param_5,int param_6,
            byte *param_7,byte *param_8,ushort param_9,ushort param_10,byte *param_11,
            ushort param_12,ushort param_13,long param_14,ulong *param_15,ulong *param_16,
            uint *param_17)

{
  uint uVar1;
  byte *pbVar2;
  short sVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  ushort uVar9;
  short sVar10;
  bool bVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ushort uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar15 = param_6 << 1;
  uVar7 = 0x20 - param_9;
  bVar8 = false;
  uVar18 = 0xffffffffL >> ((ulong)uVar7 & 0x3f);
  uVar19 = 1;
  *param_16 = 0;
  *(undefined2 *)((long)param_15 + 0x1c) = 0;
LAB_0011301c:
LAB_00113020:
  uVar21 = (uint)param_10;
  pbVar12 = param_2;
  if ((uVar15 & 0xffff) != 0) {
    if (param_12 != 0) {
      if (param_13 == 1) {
        return 0xffff;
      }
      bVar4 = *param_5;
      bVar5 = param_5[1];
      uVar20 = (uint)param_12;
      if (param_13 == 2) {
        if ((short)param_12 < 0) {
          return 0xffff;
        }
        iVar16 = 0;
        do {
          uVar14 = (int)(short)uVar20 + (int)(short)iVar16;
          pbVar12 = (byte *)(param_14 + ((long)(int)uVar14 & 0xfffffffffffffffeU));
          bVar6 = *pbVar12;
          if (bVar4 == bVar6) {
            bVar6 = pbVar12[1];
            if (bVar5 == bVar6) goto LAB_001132b4;
            bVar11 = bVar6 <= bVar5;
          }
          else {
            bVar11 = bVar6 <= bVar4;
          }
          uVar22 = (uVar14 >> 1) - 1;
          if (bVar11) {
            iVar16 = (uVar14 >> 1) + 1;
            uVar22 = uVar20;
          }
          uVar20 = uVar22;
          if ((short)uVar22 < (short)iVar16) {
            return 0xffff;
          }
        } while( true );
      }
      if ((short)param_12 < 0) {
        return 0xffff;
      }
      uVar9 = CONCAT11(bVar4,bVar5);
      iVar16 = 0;
      while( true ) {
        sVar3 = (short)iVar16;
        uVar14 = (int)(short)uVar20 + (int)sVar3;
        iVar16 = (int)uVar14 >> 1;
        uVar17 = (ushort)*(byte *)(param_14 + (int)(iVar16 * (uint)param_13));
        if (uVar9 == uVar17) break;
        sVar10 = (short)(uVar14 >> 1);
        if (uVar17 <= uVar9) {
          sVar3 = sVar10 + 1;
        }
        iVar16 = (int)sVar3;
        sVar3 = sVar10 + -1;
        if (uVar17 <= uVar9) {
          sVar3 = (short)uVar20;
        }
        uVar20 = (uint)sVar3;
        if ((int)uVar20 < iVar16) {
          return 0xffff;
        }
      }
      goto LAB_001132b8;
    }
    uVar20 = (uint)*param_5;
    lVar13 = 1;
    goto joined_r0x001130c4;
  }
  goto LAB_001133a0;
LAB_001132b4:
  iVar16 = (int)uVar14 >> 1;
LAB_001132b8:
  uVar20 = (uint)(short)((short)iVar16 + 1);
  if ((int)uVar20 < 0) {
    return 0xffff;
  }
  lVar13 = 2;
joined_r0x001130c4:
  pbVar12 = param_3;
  if (param_3 < param_11) {
    uVar20 = uVar20 & 0xff;
    if (param_7 == param_8) {
      do {
        bVar4 = *pbVar12;
        uVar14 = (uint)(char)bVar4;
        bVar11 = (uVar14 & 0x10) != 0;
        uVar19 = 1;
        if (bVar11) {
          uVar19 = (uVar14 & 0xf) + 2;
        }
        iVar16 = 4;
        if (bVar11) {
          iVar16 = 8;
        }
        uVar22 = (uVar21 & ((int)(char)bVar4 << 0x1a) >> 0x1f) +
                 ((uint)param_9 & ((int)(char)bVar4 << 0x19) >> 0x1f) + iVar16;
        uVar1 = uVar22 + param_4 * 8;
        uVar1 = (ushort)(CONCAT11(pbVar12[((ulong)uVar1 & 0xfff8) >> 3],
                                  (pbVar12 + (((ulong)uVar1 & 0xfff8) >> 3))[1]) >>
                        (ulong)(8 - (uVar1 & 7) & 0x1f)) & 0xff;
        if (uVar1 == uVar20) break;
        if ((param_4 & 0xffff) != 0) {
          return 0xffff;
        }
        if ((int)uVar14 < 0) {
          return 0xffff;
        }
        if (uVar20 <= uVar1) {
          return 0xffff;
        }
        pbVar12 = pbVar12 + (byte)((uVar19 << 3 | 7) + (uVar22 & 0xffff) >> 3);
        if (pbVar12 == param_7) {
          return 0xffff;
        }
        param_4 = 0;
      } while (pbVar12 < param_11);
    }
    else {
      do {
        while( true ) {
          bVar4 = *param_3;
          uVar14 = (uint)(char)bVar4;
          bVar11 = (uVar14 & 0x10) != 0;
          uVar19 = 1;
          if (bVar11) {
            uVar19 = (uVar14 & 0xf) + 2;
          }
          iVar16 = 4;
          if (bVar11) {
            iVar16 = 8;
          }
          uVar22 = (uVar21 & ((int)(char)bVar4 << 0x1a) >> 0x1f) +
                   ((uint)param_9 & ((int)(char)bVar4 << 0x19) >> 0x1f) + iVar16;
          uVar1 = uVar22 + param_4 * 8;
          uVar1 = (ushort)(CONCAT11(param_3[((ulong)uVar1 & 0xfff8) >> 3],
                                    (param_3 + (((ulong)uVar1 & 0xfff8) >> 3))[1]) >>
                          (ulong)(8 - (uVar1 & 7) & 0x1f)) & 0xff;
          pbVar12 = param_3;
          if (uVar1 == uVar20) goto LAB_001132d0;
          if ((((param_4 & 0xffff) != 0) || ((int)uVar14 < 0)) || (uVar20 <= uVar1)) break;
          pbVar12 = param_3 + (byte)((uVar19 << 3 | 7) + (uVar22 & 0xffff) >> 3);
          if (pbVar12 == param_8) {
            return 0xffff;
          }
          param_4 = 0;
          param_3 = pbVar12;
          if (param_11 <= pbVar12) goto LAB_001132d0;
        }
        if ((param_4 & 0xffff) != 0) {
          return 0xffff;
        }
        if (param_3 != param_8) {
          return 0xffff;
        }
        if (bVar8) {
          return 0xffff;
        }
        if (uVar1 <= uVar20) {
          return 0xffff;
        }
        param_4 = 0;
        bVar8 = true;
        param_3 = param_7;
      } while (param_7 < param_11);
      pbVar12 = param_7;
    }
  }
LAB_001132d0:
  param_4 = param_4 + 1;
  param_5 = param_5 + lVar13;
  uVar15 = uVar15 - (int)lVar13;
  param_3 = pbVar12;
  if (uVar19 <= (param_4 & 0xffff)) goto LAB_001132f4;
  if ((uVar15 & 0xffff) == 0) {
    if (param_1 != '\x01') {
      return 0xfffe;
    }
    *param_15 = (ulong)pbVar12;
    param_15[1] = (ulong)pbVar12;
    *(short *)((long)param_15 + 0x1c) = (short)param_4;
LAB_001133a0:
    if (*param_16 == 0) {
      *param_16 = (ulong)param_3;
    }
    if (pbVar12 == (byte *)0x0) {
      return 0xfffe;
    }
    uVar19 = (uint)*pbVar12;
    if ((*pbVar12 >> 5 & 1) != 0) goto LAB_0011341c;
    if (param_1 == '\x01') {
      while ((uVar19 >> 6 & 1) != 0) {
        uVar15 = 4;
        if ((uVar19 & 0x10) != 0) {
          uVar15 = 8;
        }
        pbVar2 = pbVar12 + (uVar15 >> 3);
        pbVar12 = pbVar12 + (((ulong)*pbVar2 << 0x18 | (ulong)pbVar2[1] << 0x10 |
                              (ulong)pbVar2[2] << 8 | (ulong)pbVar2[3]) >>
                             ((ulong)(uVar7 - (uVar15 & 4)) & 0x3f) & uVar18 & 0xffffffff);
        uVar19 = (uint)*pbVar12;
        if ((*pbVar12 >> 5 & 1) != 0) {
LAB_0011341c:
          iVar16 = 4;
          if ((uVar19 & 0x10) != 0) {
            iVar16 = 8;
          }
          uVar19 = iVar16 + ((uint)param_9 & (int)(uVar19 << 0x19) >> 0x1f);
          uVar15 = (*(uint *)(pbVar12 + ((ulong)(uVar19 >> 3) & 0x1fff)) & 0xff00ff00) >> 8 |
                   (*(uint *)(pbVar12 + ((ulong)(uVar19 >> 3) & 0x1fff)) & 0xff00ff) << 8;
          *param_17 = (uVar15 >> 0x10 | uVar15 << 0x10) >>
                      (ulong)((0x20 - uVar21) - (uVar19 & 7) & 0x1f) &
                      0xffffffffU >> (ulong)(-uVar21 & 0x1f);
          return 1;
        }
      }
    }
    return 0xfffe;
  }
  goto LAB_00113020;
LAB_001132f4:
  *param_15 = (ulong)pbVar12;
  if ((uVar15 & 0xffff) == 0) {
    *param_16 = (ulong)pbVar12;
    bVar4 = *pbVar12;
  }
  else {
    bVar4 = *pbVar12;
    if ((bVar4 >> 6 & 1) == 0) {
      return 0xffff;
    }
  }
  if ((bVar4 >> 6 & 1) != 0) {
    uVar21 = 4;
    if ((bVar4 & 0x10) != 0) {
      uVar21 = 8;
    }
    pbVar2 = pbVar12 + (uVar21 >> 3);
    param_3 = pbVar12 + (((ulong)*pbVar2 << 0x18 | (ulong)pbVar2[1] << 0x10 | (ulong)pbVar2[2] << 8
                         | (ulong)pbVar2[3]) >> ((ulong)(uVar7 - (uVar21 & 4)) & 0x3f) & uVar18);
  }
  param_4 = 0;
  param_15[1] = (ulong)param_3;
  param_2 = pbVar12;
  goto LAB_0011301c;
}

