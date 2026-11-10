
uint FUN_00128a70(long param_1,long param_2,char param_3,uint param_4,uint param_5,ushort *param_6,
                 uint param_7,uint param_8,short param_9,uint *param_10,uint *param_11,int *param_12
                 )

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  uint local_b8;
  uint local_b0;
  byte local_a8 [56];
  byte *local_70;
  byte *local_68;
  
  if (param_5 <= param_4 - 1) {
    *param_10 = 0;
    *param_11 = 0;
    return 0xffff;
  }
  lVar21 = *(long *)(param_1 + 8);
  uVar12 = *(uint *)(lVar21 + 0x20);
  uVar13 = *(uint *)(lVar21 + 0x24);
  uVar22 = param_7 & 0xffff;
  *param_12 = 0;
  if (uVar22 == 0) {
    uVar14 = 0;
    local_a8[0] = 0;
  }
  else {
    lVar15 = *(long *)(param_1 + 8);
    uVar11 = CONCAT11(*(undefined1 *)(lVar15 + 0x74),*(undefined1 *)(lVar15 + 0x75)) - 1;
    if (uVar11 != 0) {
      uVar1 = *(undefined1 *)(lVar15 + 0x76);
      uVar2 = *(undefined1 *)(lVar15 + 0x77);
      lVar15 = *(long *)(param_1 + 0x48);
      uVar14 = 0;
      sVar6 = 0;
      pbVar16 = local_a8;
LAB_00128afc:
      pbVar17 = pbVar16;
      if (((uVar14 & 0xffff) < 0x37) && (*param_6 != 0)) {
        if ((*param_6 & 0xfc) == 0xd8) {
          uVar18 = 1;
          if (param_6[1] != 0) {
            uVar18 = 2;
          }
          uVar19 = (ulong)uVar18;
        }
        else {
          uVar19 = 1;
        }
        uVar18 = 1;
        uVar10 = uVar11;
        do {
          while( true ) {
            uVar9 = uVar18 + uVar10 >> 1;
            pbVar17 = (byte *)(lVar15 + (ulong)(uVar9 * CONCAT11(uVar1,uVar2)));
            bVar3 = *pbVar17;
            uVar20 = (uint)(byte)*param_6;
            if (uVar20 == bVar3) {
              uVar20 = (uint)*(byte *)((long)param_6 + 1);
              bVar3 = pbVar17[1];
            }
            if ((int)(uVar20 - bVar3) < 1) break;
LAB_00128b74:
            uVar18 = uVar9 + 1;
            if (uVar10 < uVar18) {
              return 0xffff;
            }
          }
          if (-1 < (int)(uVar20 - bVar3)) {
            if ((uint)uVar19 < 2) goto LAB_00128bcc;
            bVar3 = (byte)param_6[1];
            bVar4 = pbVar17[uVar19];
            if (bVar3 == bVar4) {
              bVar3 = *(byte *)((long)param_6 + 3);
              bVar4 = (pbVar17 + uVar19)[1];
            }
            if (0 < (int)((uint)bVar3 - (uint)bVar4)) goto LAB_00128b74;
            if (-1 < (int)((uint)bVar3 - (uint)bVar4)) goto LAB_00128bcc;
          }
          uVar10 = uVar9 - 1;
          if (uVar10 < uVar18) {
            return 0xffff;
          }
        } while( true );
      }
      goto LAB_00128c18;
    }
    if (*param_6 != 0) {
      return 0xffff;
    }
    pbVar17 = local_a8;
    uVar14 = 0;
LAB_00128c18:
    *pbVar17 = 0;
  }
  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
  uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
  if (uVar22 != (int)(short)uVar14) {
    param_7 = uVar14;
  }
  uVar22 = param_4;
  if (param_3 == '\x01') {
    uVar14 = param_7 & 0xffff;
    param_7 = param_8;
    if (uVar14 != 0) {
      uVar11 = 0;
      pbVar16 = local_a8;
      do {
        if (param_5 < uVar22) {
          return 0xffff;
        }
        iVar8 = (int)(short)param_7;
        bVar5 = false;
        uVar18 = uVar22;
        uVar10 = param_5;
        do {
          while( true ) {
            uVar9 = uVar18 + (uVar10 - uVar18 >> 1);
            uVar20 = uVar9 - 1;
            iVar7 = FUN_0010dbc0(param_1,5,uVar12 + uVar20 * 6,6,&local_68);
            if (iVar7 < 0) {
              return 0xffff;
            }
            if ((int)(*local_68 & 0x7f) <= iVar8) break;
            iVar7 = FUN_0010dbc0(param_1,10,
                                 uVar13 + iVar8 +
                                 ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 |
                                 (uint)local_68[3]),1,&local_70);
            if (iVar7 < 0) {
              return 0xffff;
            }
            if ((int)((uint)*pbVar16 - (uint)*local_70) < 0) {
              uVar10 = uVar20;
              if (uVar20 < uVar18) goto LAB_00128d48;
            }
            else {
              if ((uint)*pbVar16 == (uint)*local_70) {
                bVar5 = true;
                uVar22 = uVar9;
              }
              else {
                uVar18 = uVar9 + 1;
                uVar20 = uVar10;
              }
              uVar10 = uVar20;
              if (uVar20 < uVar18) goto LAB_00128d48;
            }
          }
          uVar18 = uVar9 + 1;
        } while (uVar18 <= uVar10);
LAB_00128d48:
        if (!bVar5) {
          return 0xffff;
        }
        if (param_5 < uVar22) {
          return 0xffff;
        }
        bVar5 = false;
        local_b0 = param_5;
        uVar18 = uVar22;
        do {
          while( true ) {
            uVar10 = uVar18 + (param_5 - uVar18 >> 1);
            uVar9 = uVar10 - 1;
            iVar7 = FUN_0010dbc0(param_1,5,uVar12 + uVar9 * 6,6,&local_68);
            if (iVar7 < 0) {
              return 0xffff;
            }
            if ((int)(*local_68 & 0x7f) <= iVar8) break;
            iVar7 = FUN_0010dbc0(param_1,10,
                                 uVar13 + iVar8 +
                                 ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 |
                                 (uint)local_68[3]),1,&local_70);
            if (iVar7 < 0) {
              return 0xffff;
            }
            if ((int)((uint)*pbVar16 - (uint)*local_70) < 0) {
              param_5 = uVar9;
              if (uVar9 < uVar18) goto LAB_00128e30;
            }
            else {
              uVar18 = uVar10 + 1;
              if ((uint)*pbVar16 == (uint)*local_70) {
                bVar5 = true;
                local_b0 = uVar10;
              }
              if (param_5 < uVar18) goto LAB_00128e30;
            }
          }
          param_5 = uVar9;
        } while (uVar18 <= uVar9);
LAB_00128e30:
        if (!bVar5) {
          return 0xffff;
        }
        pbVar16 = pbVar16 + 1;
        *param_12 = *param_12 + 1;
        uVar11 = uVar11 + 1 & 0xffff;
        param_7 = param_7 + 1;
        param_5 = local_b0;
      } while (uVar11 < uVar14);
    }
LAB_00129198:
    lVar15 = *(long *)(param_1 + 0x60);
    if (param_9 == 1) {
      if (param_2 == 0) {
        lVar21 = 0;
      }
      else {
        lVar21 = param_2 + ((ulong)*(byte *)(lVar21 + 0x10) << 0x18 |
                            (ulong)*(byte *)(lVar21 + 0x11) << 0x10 |
                            (ulong)*(byte *)(lVar21 + 0x12) << 8 | (ulong)*(byte *)(lVar21 + 0x13))
                 + 0x3c;
      }
      if ((int)param_5 < (int)uVar22) {
        return 0xffff;
      }
      if (lVar21 == 0) {
        iVar8 = uVar22 - 1;
        uVar12 = uVar22 * 2 - 1;
        while (*(byte *)(lVar15 + (ulong)uVar12) < 0x40) {
          iVar8 = iVar8 + 1;
          uVar12 = uVar12 + 2;
          if ((int)param_5 <= iVar8) {
            return 0xffff;
          }
        }
      }
      else {
        uVar13 = uVar22 * 2 - 1;
        uVar12 = uVar22 - 1;
        while ((((uint)(int)*(char *)(lVar21 + (ulong)uVar12) >> 6 & 1) != 0 ||
               ((-1 < *(char *)(lVar21 + (ulong)uVar12) &&
                (*(byte *)(lVar15 + (ulong)uVar13) < 0x40))))) {
          uVar12 = uVar12 + 1;
          uVar13 = uVar13 + 2;
          if ((int)param_5 <= (int)uVar12) {
            return 0xffff;
          }
        }
      }
    }
    else if (param_9 != -1) {
      if ((int)param_5 < (int)uVar22) {
        return 0xffff;
      }
      iVar8 = uVar22 - 1;
      uVar12 = uVar22 * 2 - 2;
      while ((*(byte *)(lVar15 + (ulong)uVar12) >> 6 & 1) == 0) {
        iVar8 = iVar8 + 1;
        uVar12 = uVar12 + 2;
        if ((int)param_5 <= iVar8) {
          return 0xffff;
        }
      }
    }
    *param_10 = uVar22;
    *param_11 = param_5;
    return param_7;
  }
  if (param_4 <= param_5) {
    local_b0 = 0;
    bVar5 = false;
    local_b8 = param_5;
    uVar14 = param_5;
LAB_00128f38:
    do {
      while( true ) {
        uVar11 = param_4 + (uVar14 - param_4 >> 1);
        uVar18 = uVar11 - 1;
        iVar8 = FUN_0010dbc0(param_1,5,uVar12 + uVar18 * 6,6,&local_68);
        if (iVar8 < 0) {
          return 0xffff;
        }
        uVar10 = *local_68 & 0x7f;
        iVar8 = FUN_0010dbc0(param_1,10,
                             ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 | (uint)local_68[3]
                             ) + uVar13,uVar10,&local_70);
        if (iVar8 < 0) {
          return 0xffff;
        }
        uVar9 = (uint)local_a8[0] - (uint)*local_70;
        if (uVar9 != 0) break;
        if (uVar10 < (param_7 & 0xffff)) {
          uVar9 = FUN_001006e0(local_a8,local_70,uVar10);
          if ((uVar9 & 0xffff) == 0) {
            uVar9 = 1;
          }
        }
        else {
          uVar9 = FUN_001006e0(local_a8,local_70,param_7);
          if ((uVar9 & 0xffff) == 0) goto LAB_00128fc4;
        }
LAB_00129034:
        if (-1 < (short)uVar9) {
          param_4 = uVar11 + 1;
          uVar18 = uVar14;
        }
        uVar14 = uVar18;
        if (uVar18 < param_4) goto LAB_00129068;
      }
      if ((uVar9 & 0xffff) != 0) goto LAB_00129034;
LAB_00128fc4:
      if (uVar10 == (param_7 & 0xffff)) {
        uVar22 = uVar11;
        if (uVar11 <= local_b0) {
          uVar14 = local_b8;
          uVar22 = local_b0;
        }
        local_b0 = uVar22;
        bVar5 = true;
        uVar22 = uVar11;
        local_b8 = uVar14;
        uVar14 = uVar18;
        if (uVar18 < param_4) break;
        goto LAB_00128f38;
      }
      bVar5 = true;
      uVar14 = uVar18;
    } while (param_4 <= uVar18);
LAB_00129068:
    if (local_b0 != 0) {
      if (local_b8 < local_b0) {
        return 0xffff;
      }
      param_5 = 0;
      do {
        while( true ) {
          uVar14 = local_b0 + (local_b8 - local_b0 >> 1);
          uVar11 = uVar14 - 1;
          iVar8 = FUN_0010dbc0(param_1,5,uVar12 + uVar11 * 6,6,&local_68);
          if (iVar8 < 0) {
            return 0xffff;
          }
          uVar18 = *local_68 & 0x7f;
          iVar8 = FUN_0010dbc0(param_1,10,
                               uVar13 + (int)(short)param_8 +
                               ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 |
                               (uint)local_68[3]),uVar18,&local_70);
          if (iVar8 < 0) {
            return 0xffff;
          }
          uVar10 = (uint)local_a8[0] - (uint)*local_70;
          if (uVar10 != 0) break;
          if ((param_7 & 0xffff) <= uVar18) {
            uVar10 = FUN_001006e0(local_a8,local_70,param_7);
            break;
          }
          sVar6 = FUN_001006e0(local_a8,local_70,uVar18);
          if (sVar6 == 0) {
            sVar6 = 1;
          }
LAB_00129144:
          if (-1 < sVar6) {
            local_b0 = uVar14 + 1;
            uVar11 = local_b8;
          }
          local_b8 = uVar11;
          if (uVar11 < local_b0) goto LAB_00129188;
        }
        sVar6 = (short)uVar10;
        if ((uVar10 & 0xffff) != 0) goto LAB_00129144;
        if (uVar18 == (param_7 & 0xffff)) {
          local_b0 = uVar14 + 1;
          param_5 = uVar14;
        }
        else {
          local_b8 = uVar11;
        }
      } while (local_b0 <= local_b8);
LAB_00129188:
      if (param_5 == 0) {
        return 0xffff;
      }
      goto LAB_00129198;
    }
    if (bVar5) {
      return 0xfffe;
    }
  }
  if ((((param_5 < param_4) ||
       (iVar8 = FUN_0010dbc0(param_1,5,uVar12 + param_4 * 6 + -6,6,&local_68), iVar8 < 0)) ||
      ((*local_68 & 0x7f) < (param_7 & 0xffff))) ||
     ((iVar8 = FUN_0010dbc0(param_1,10,
                            ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 | (uint)local_68[3])
                            + uVar13,param_7 & 0xffff,&local_70), iVar8 < 0 ||
      (sVar6 = FUN_001006e0(local_a8,local_70,param_7), sVar6 != 0)))) {
    return 0xffff;
  }
  return 0xfffe;
LAB_00128bcc:
  param_6 = param_6 + uVar19;
  uVar14 = uVar14 + 1;
  if (1 < (uint)uVar19) {
    sVar6 = sVar6 + 1;
  }
  sVar6 = sVar6 + 1;
  pbVar17 = pbVar16 + 1;
  *pbVar16 = (byte)uVar9;
  pbVar16 = pbVar17;
  if ((int)uVar22 <= (int)sVar6) goto LAB_00128c18;
  goto LAB_00128afc;
}

