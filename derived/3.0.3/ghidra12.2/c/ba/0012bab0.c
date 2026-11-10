
uint FUN_0012bab0(long param_1,char param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7,uint *param_8,uint *param_9)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  undefined4 uVar19;
  long lVar20;
  uint uVar21;
  uint uVar22;
  uint local_134;
  uint local_110;
  uint local_ec;
  ulong local_e8;
  byte local_d8 [112];
  undefined8 local_68;
  
  lVar20 = *(long *)(param_1 + 0x20);
  lVar17 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(*(long *)(lVar17 + 8) + 0x20);
  uVar3 = *(uint *)(*(long *)(lVar17 + 8) + 0x24);
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  iVar13 = *(int *)(lVar17 + 0x70);
  lVar20 = lVar20 + ((ulong)*(byte *)(lVar20 + 0x10) << 0x18 |
                     (ulong)*(byte *)(lVar20 + 0x11) << 0x10 | (ulong)*(byte *)(lVar20 + 0x12) << 8
                    | (ulong)*(byte *)(lVar20 + 0x13));
  if (param_2 == '\x04') {
    if ((param_4 & 0xffff) != 0) {
      iVar18 = 6;
      if (iVar13 != 0x40050001) {
        iVar18 = 10;
      }
      local_134 = param_4;
      do {
        uVar22 = 1;
        if ((*param_3 & 0xfc) == 0xd8) {
          if (*(short *)(param_3 + 2) != 0) {
            uVar22 = 2;
          }
          local_e8 = (ulong)uVar22;
        }
        else {
          local_e8 = 1;
        }
        if (param_6 < param_5) {
          return 0xffff;
        }
        sVar12 = (short)param_7;
        bVar8 = false;
        uVar22 = param_6;
        local_ec = param_5;
        do {
          while( true ) {
            uVar21 = param_5 + (uVar22 - param_5 >> 1);
            uVar7 = uVar21 - 1;
            lVar17 = lVar20 + (ulong)(uVar7 * 4);
            uVar4 = *(uint *)(*(long *)(param_1 + 8) + 8);
            uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar19 = 6;
            if ((uVar4 >> 0x10 | uVar4 << 0x10) != 0x40050001) {
              uVar19 = 10;
            }
            iVar13 = FUN_0010dbc0(*(long *)(param_1 + 8),5,
                                  uVar2 + (((uint)*(byte *)(lVar17 + 1) << 0x10 |
                                            (uint)*(byte *)(lVar17 + 2) << 8 |
                                           (uint)*(byte *)(lVar17 + 3)) - 1) * iVar18,uVar19,
                                  &local_68);
            if (iVar13 < 0) {
              return 0xffff;
            }
            cVar10 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar3,local_d8);
            if ((int)cVar10 <= (int)sVar12) break;
            sVar11 = FUN_00100470(param_3,local_d8 + (long)sVar12 * 2,local_e8);
            if (sVar11 == 0) {
              bVar8 = true;
              uVar22 = uVar7;
              local_ec = uVar21;
              if (uVar7 < param_5) goto LAB_0012bca8;
            }
            else {
              if (-1 < sVar11) {
                param_5 = uVar21 + 1;
                uVar7 = uVar22;
              }
              uVar22 = uVar7;
              if (uVar7 < param_5) goto LAB_0012bca8;
            }
          }
          if (cVar10 < 0) {
            return 0xffff;
          }
          param_5 = uVar21 + 1;
        } while (param_5 <= uVar22);
LAB_0012bca8:
        if (!bVar8) {
          return 0xffff;
        }
        if (param_6 < local_ec) {
          return 0xffff;
        }
        bVar8 = false;
        uVar22 = local_ec;
        uVar21 = param_6;
        do {
          while( true ) {
            uVar7 = uVar22 + (uVar21 - uVar22 >> 1);
            uVar4 = uVar7 - 1;
            lVar17 = lVar20 + (ulong)(uVar4 * 4);
            uVar16 = *(uint *)(*(long *)(param_1 + 8) + 8);
            uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
            uVar19 = 6;
            if ((uVar16 >> 0x10 | uVar16 << 0x10) != 0x40050001) {
              uVar19 = 10;
            }
            iVar13 = FUN_0010dbc0(*(long *)(param_1 + 8),5,
                                  uVar2 + (((uint)*(byte *)(lVar17 + 1) << 0x10 |
                                            (uint)*(byte *)(lVar17 + 2) << 8 |
                                           (uint)*(byte *)(lVar17 + 3)) - 1) * iVar18,uVar19,
                                  &local_68);
            if (iVar13 < 0) {
              return 0xffff;
            }
            cVar10 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar3,local_d8);
            if ((int)cVar10 <= (int)sVar12) break;
            sVar11 = FUN_00100470(param_3,local_d8 + (long)sVar12 * 2,local_e8);
            if (sVar11 == 0) {
              uVar22 = uVar7 + 1;
              bVar8 = true;
              param_6 = uVar7;
              if (uVar21 < uVar22) goto LAB_0012bdc8;
            }
            else {
              if (-1 < sVar11) {
                uVar22 = uVar7 + 1;
                uVar4 = uVar21;
              }
              uVar21 = uVar4;
              if (uVar4 < uVar22) goto LAB_0012bdc8;
            }
          }
          if (cVar10 < 0) {
            return 0xffff;
          }
          uVar21 = uVar4;
        } while (uVar22 <= uVar4);
LAB_0012bdc8:
        if (!bVar8) {
          return 0xffff;
        }
        param_3 = param_3 + local_e8 * 2;
        local_134 = local_134 - (int)local_e8;
        param_7 = (int)local_e8 + param_7;
        param_5 = local_ec;
      } while ((local_134 & 0xffff) != 0);
    }
    goto LAB_0012c248;
  }
  if (param_5 <= param_6) {
    iVar18 = 6;
    if (iVar13 != 0x40050001) {
      iVar18 = 10;
    }
    uVar22 = 0;
    bVar8 = false;
    uVar21 = param_6;
    local_ec = param_5;
    local_110 = param_6;
    do {
      uVar7 = param_5 + (uVar21 - param_5 >> 1);
      uVar4 = uVar7 - 1;
      lVar1 = lVar20 + (ulong)(uVar4 * 4);
      uVar16 = (*(uint *)(lVar17 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar17 + 8) & 0xff00ff) << 8;
      uVar19 = 6;
      if ((uVar16 >> 0x10 | uVar16 << 0x10) != 0x40050001) {
        uVar19 = 10;
      }
      iVar14 = FUN_0010dbc0(lVar17,5,uVar2 + (((uint)*(byte *)(lVar1 + 1) << 0x10 |
                                               (uint)*(byte *)(lVar1 + 2) << 8 |
                                              (uint)*(byte *)(lVar1 + 3)) - 1) * iVar18,uVar19,
                            &local_68);
      if (iVar14 < 0) {
        return 0xffff;
      }
      cVar10 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar3,local_d8);
      uVar16 = (uint)cVar10;
      if ((int)uVar16 < 0) {
        return 0xffff;
      }
      bVar5 = *param_3;
      bVar6 = local_d8[0];
      if (bVar5 == local_d8[0]) {
        bVar5 = param_3[1];
        bVar6 = local_d8[1];
      }
      uVar15 = (uint)bVar5 - (uint)bVar6;
      if (uVar15 == 0) {
        if ((int)uVar16 < (int)(param_4 & 0xffff)) {
          uVar15 = FUN_00100470(param_3 + 2,(ulong)local_d8 | 2,uVar16 - 1);
          if ((uVar15 & 0xffff) == 0) {
            uVar15 = 1;
          }
        }
        else {
          uVar15 = FUN_00100470(param_3 + 2,(ulong)local_d8 | 2,param_4 - 1);
          if ((uVar15 & 0xffff) == 0) goto LAB_0012bfd4;
        }
LAB_0012c044:
        if (-1 < (short)uVar15) {
          param_5 = uVar7 + 1;
          uVar4 = uVar21;
        }
        uVar21 = uVar4;
        if (uVar4 < param_5) goto LAB_0012c070;
      }
      else {
        if ((uVar15 & 0xffff) != 0) goto LAB_0012c044;
LAB_0012bfd4:
        uVar15 = local_110;
        uVar9 = uVar22;
        if (uVar16 == (param_4 & 0xffff)) {
          local_ec = uVar7;
          uVar15 = uVar21;
          uVar9 = uVar7;
          if (uVar7 <= uVar22) {
            uVar15 = local_110;
            uVar9 = uVar22;
          }
        }
        uVar22 = uVar9;
        local_110 = uVar15;
        bVar8 = true;
        uVar21 = uVar4;
        if (uVar4 < param_5) goto LAB_0012c070;
      }
      lVar17 = *(long *)(param_1 + 8);
    } while( true );
  }
  goto LAB_0012be14;
LAB_0012c070:
  if (uVar22 != 0) {
    if (uVar22 == local_110) {
      *param_8 = local_ec;
      *param_9 = uVar22;
      return param_4;
    }
    if (local_110 < uVar22) {
      return 0xffff;
    }
    iVar18 = 6;
    if (iVar13 != 0x40050001) {
      iVar18 = 10;
    }
    param_6 = 0;
    do {
      while( true ) {
        uVar21 = uVar22 + (local_110 - uVar22 >> 1);
        uVar7 = uVar21 - 1;
        lVar17 = lVar20 + (ulong)(uVar7 * 4);
        uVar4 = *(uint *)(*(long *)(param_1 + 8) + 8);
        uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
        uVar19 = 6;
        if ((uVar4 >> 0x10 | uVar4 << 0x10) != 0x40050001) {
          uVar19 = 10;
        }
        iVar13 = FUN_0010dbc0(*(long *)(param_1 + 8),5,
                              uVar2 + (((uint)*(byte *)(lVar17 + 1) << 0x10 |
                                        (uint)*(byte *)(lVar17 + 2) << 8 |
                                       (uint)*(byte *)(lVar17 + 3)) - 1) * iVar18,uVar19,&local_68);
        if (iVar13 < 0) {
          return 0xffff;
        }
        cVar10 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar3,local_d8);
        uVar4 = (uint)cVar10;
        if ((int)uVar4 < 0) {
          return 0xffff;
        }
        bVar5 = *param_3;
        bVar6 = local_d8[0];
        if (bVar5 == local_d8[0]) {
          bVar5 = param_3[1];
          bVar6 = local_d8[1];
        }
        uVar16 = (uint)bVar5 - (uint)bVar6;
        if (uVar16 != 0) break;
        if ((int)uVar4 < (int)(param_4 & 0xffff)) {
          uVar16 = FUN_00100470(param_3 + 2,(ulong)local_d8 | 2,uVar4 - 1);
          if ((uVar16 & 0xffff) == 0) {
            uVar16 = 1;
          }
        }
        else {
          uVar16 = FUN_00100470(param_3 + 2,(ulong)local_d8 | 2,param_4 - 1);
          if ((uVar16 & 0xffff) == 0) goto LAB_0012c1b8;
        }
LAB_0012c218:
        if (-1 < (short)uVar16) {
          uVar22 = uVar21 + 1;
          uVar7 = local_110;
        }
        local_110 = uVar7;
        if (uVar7 < uVar22) goto LAB_0012c240;
      }
      if ((uVar16 & 0xffff) != 0) goto LAB_0012c218;
LAB_0012c1b8:
      if (uVar4 == (param_4 & 0xffff)) {
        uVar22 = uVar21 + 1;
        param_6 = uVar21;
        uVar7 = local_110;
      }
      local_110 = uVar7;
    } while (uVar22 <= uVar7);
LAB_0012c240:
    param_5 = local_ec;
    param_7 = param_4;
    if (param_6 == 0) {
      return 0xffff;
    }
LAB_0012c248:
    *param_8 = param_5;
    *param_9 = param_6;
    return param_7;
  }
  if (bVar8) {
    return 0xfffe;
  }
LAB_0012be14:
  if (param_5 <= param_6) {
    lVar20 = lVar20 + (ulong)(param_5 * 4 - 4);
    iVar18 = 6;
    if (iVar13 != 0x40050001) {
      iVar18 = 10;
    }
    uVar22 = *(uint *)(*(long *)(param_1 + 8) + 8);
    uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8;
    uVar19 = 6;
    if ((uVar22 >> 0x10 | uVar22 << 0x10) != 0x40050001) {
      uVar19 = 10;
    }
    iVar13 = FUN_0010dbc0(*(long *)(param_1 + 8),5,
                          uVar2 + (((uint)*(byte *)(lVar20 + 1) << 0x10 |
                                    (uint)*(byte *)(lVar20 + 2) << 8 | (uint)*(byte *)(lVar20 + 3))
                                  - 1) * iVar18,uVar19,&local_68);
    if (((-1 < iVar13) &&
        (cVar10 = FUN_00127c00(*(undefined8 *)(param_1 + 8),local_68,uVar3,local_d8),
        (int)(param_4 & 0xffff) <= (int)cVar10)) &&
       (sVar12 = FUN_00100470(param_3,local_d8,param_4), sVar12 == 0)) {
      return 0xfffe;
    }
  }
  return 0xffff;
}

