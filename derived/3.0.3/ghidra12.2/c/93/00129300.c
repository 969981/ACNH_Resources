
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00129300(long param_1,long param_2,char param_3,uint param_4,uint param_5,byte *param_6,
                  uint param_7,uint param_8,short param_9,uint *param_10,uint *param_11,
                  int *param_12)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint local_8c;
  uint local_84;
  ulong local_80;
  uint local_78;
  byte *local_70;
  byte *local_68;
  
  if (param_5 <= param_4 - 1) {
    *param_10 = 0;
    *param_11 = 0;
    return 0xffff;
  }
  lVar15 = *(long *)(param_1 + 8);
  uVar13 = *(uint *)(lVar15 + 0x20);
  uVar14 = *(uint *)(lVar15 + 0x24);
  *param_12 = 0;
  uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
  uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
  uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
  uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
  uVar18 = (ulong)param_7;
  if (param_3 == '\x01') {
    if ((param_7 & 0xffff) == 0) {
      uVar18 = (ulong)param_8;
    }
    else {
      uVar16 = 0;
      uVar18 = (ulong)param_8;
      do {
        uVar17 = 1;
        if ((*param_6 & 0xfc) == 0xd8) {
          if (*(short *)(param_6 + 2) != 0) {
            uVar17 = 2;
          }
          local_80 = (ulong)uVar17;
        }
        else {
          local_80 = 1;
        }
        if (param_5 < param_4) {
          return 0xffff;
        }
        sVar6 = (short)uVar18;
        iVar8 = uVar14 + sVar6 * 2;
        uVar11 = (uint)local_80;
        bVar5 = false;
        local_78 = param_4;
        uVar17 = param_5;
LAB_001293f4:
        do {
          while( true ) {
            uVar2 = param_4 + (uVar17 - param_4 >> 1);
            uVar10 = uVar2 - 1;
            iVar7 = FUN_0010dbc0(param_1,5,uVar13 + uVar10 * 10,10,&local_68);
            if (iVar7 < 0) {
              return 0xffff;
            }
            pbVar1 = local_70;
            if (sVar6 < (short)(*local_68 >> 1 & 0x3f)) break;
LAB_0012948c:
            local_70 = pbVar1;
            param_4 = uVar2 + 1;
            if (uVar17 < param_4) goto LAB_00129518;
          }
          iVar7 = FUN_0010dbc0(param_1,10,
                               iVar8 + ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 |
                                       (uint)local_68[3]),uVar11 << 1,&local_70);
          if (iVar7 < 0) {
            return 0xffff;
          }
          bVar3 = *param_6;
          bVar4 = *local_70;
          if (bVar3 == bVar4) {
            bVar3 = param_6[1];
            bVar4 = local_70[1];
          }
          if ((int)((uint)bVar3 - (uint)bVar4) < 0) {
joined_r0x00129504:
            uVar17 = uVar10;
            if (uVar10 < param_4) break;
            goto LAB_001293f4;
          }
          pbVar1 = local_70;
          if ((uint)bVar3 != (uint)bVar4) goto LAB_0012948c;
          pbVar1 = local_70 + 2;
          if (uVar11 < 2) {
LAB_001294f0:
            local_70 = pbVar1;
            bVar5 = true;
            local_78 = uVar2;
            goto joined_r0x00129504;
          }
          bVar3 = param_6[2];
          bVar4 = *pbVar1;
          if (bVar3 == bVar4) {
            bVar3 = param_6[3];
            bVar4 = local_70[3];
          }
          if (-1 < (int)((uint)bVar3 - (uint)bVar4)) {
            if ((uint)bVar3 != (uint)bVar4) goto LAB_0012948c;
            pbVar1 = local_70 + 4;
            goto LAB_001294f0;
          }
          local_70 = pbVar1;
          uVar17 = uVar10;
        } while (param_4 <= uVar10);
LAB_00129518:
        if (!bVar5) {
          return 0xffff;
        }
        if (param_5 < local_78) {
          return 0xffff;
        }
        bVar5 = false;
        uVar17 = local_78;
        local_8c = param_5;
        do {
          while( true ) {
            uVar2 = uVar17 + (param_5 - uVar17 >> 1);
            uVar10 = uVar2 - 1;
            iVar7 = FUN_0010dbc0(param_1,5,uVar13 + uVar10 * 10,10,&local_68);
            if (iVar7 < 0) {
              return 0xffff;
            }
            pbVar1 = local_70;
            if (sVar6 < (short)(*local_68 >> 1 & 0x3f)) break;
joined_r0x00129670:
            local_70 = pbVar1;
            param_5 = uVar10;
            if (uVar10 < uVar17) goto LAB_00129674;
          }
          iVar7 = FUN_0010dbc0(param_1,10,
                               iVar8 + ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 |
                                       (uint)local_68[3]),uVar11 << 1,&local_70);
          if (iVar7 < 0) {
            return 0xffff;
          }
          bVar3 = *param_6;
          bVar4 = *local_70;
          if (bVar3 == bVar4) {
            bVar3 = param_6[1];
            bVar4 = local_70[1];
          }
          pbVar1 = local_70;
          if ((int)((uint)bVar3 - (uint)bVar4) < 0) goto joined_r0x00129670;
          if ((uint)bVar3 == (uint)bVar4) {
            pbVar1 = local_70 + 2;
            if (1 < uVar11) {
              bVar3 = param_6[2];
              bVar4 = *pbVar1;
              if (bVar3 == bVar4) {
                bVar3 = param_6[3];
                bVar4 = local_70[3];
              }
              if ((int)((uint)bVar3 - (uint)bVar4) < 0) goto joined_r0x00129670;
              if ((uint)bVar3 != (uint)bVar4) goto joined_r0x001295e0;
              pbVar1 = local_70 + 4;
            }
            local_70 = pbVar1;
            bVar5 = true;
            local_8c = uVar2;
            pbVar1 = local_70;
          }
joined_r0x001295e0:
          local_70 = pbVar1;
          uVar17 = uVar2 + 1;
        } while (uVar17 <= param_5);
LAB_00129674:
        if (!bVar5) {
          return 0xffff;
        }
        *param_12 = *param_12 + 1;
        param_6 = param_6 + local_80 * 2;
        uVar18 = (ulong)(uVar11 + (int)uVar18);
        uVar16 = uVar16 + uVar11 & 0xffff;
        param_4 = local_78;
        param_5 = local_8c;
      } while (uVar16 < (param_7 & 0xffff));
    }
LAB_00129a68:
    lVar12 = *(long *)(param_1 + 0x60);
    if (param_9 == 1) {
      if (param_2 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = param_2 + ((ulong)*(byte *)(lVar15 + 0x10) << 0x18 |
                            (ulong)*(byte *)(lVar15 + 0x11) << 0x10 |
                            (ulong)*(byte *)(lVar15 + 0x12) << 8 | (ulong)*(byte *)(lVar15 + 0x13))
                 + 0x3c;
      }
      if ((int)param_5 < (int)param_4) {
        return 0xffff;
      }
      if (lVar15 == 0) {
        iVar8 = param_4 - 1;
        uVar13 = param_4 * 2 - 1;
        while (*(byte *)(lVar12 + (ulong)uVar13) < 0x40) {
          iVar8 = iVar8 + 1;
          uVar13 = uVar13 + 2;
          if ((int)param_5 <= iVar8) {
            return 0xffff;
          }
        }
      }
      else {
        uVar14 = param_4 * 2 - 1;
        uVar13 = param_4 - 1;
        while ((((uint)(int)*(char *)(lVar15 + (ulong)uVar13) >> 6 & 1) != 0 ||
               ((-1 < *(char *)(lVar15 + (ulong)uVar13) &&
                (*(byte *)(lVar12 + (ulong)uVar14) < 0x40))))) {
          uVar13 = uVar13 + 1;
          uVar14 = uVar14 + 2;
          if ((int)param_5 <= (int)uVar13) {
            return 0xffff;
          }
        }
      }
    }
    else if (param_9 != -1) {
      if ((int)param_5 < (int)param_4) {
        return 0xffff;
      }
      iVar8 = param_4 - 1;
      uVar13 = param_4 * 2 - 2;
      while ((*(byte *)(lVar12 + (ulong)uVar13) >> 6 & 1) == 0) {
        iVar8 = iVar8 + 1;
        uVar13 = uVar13 + 2;
        if ((int)param_5 <= iVar8) {
          return 0xffff;
        }
      }
    }
    *param_10 = param_4;
    *param_11 = param_5;
    return uVar18;
  }
  if (param_4 <= param_5) {
    bVar5 = false;
    uVar17 = 0;
    local_84 = param_5;
    local_78 = param_4;
    uVar16 = param_5;
LAB_001297b4:
    do {
      while( true ) {
        uVar11 = param_4 + (uVar16 - param_4 >> 1);
        uVar2 = uVar11 - 1;
        iVar8 = FUN_0010dbc0(param_1,5,uVar13 + uVar2 * 10,10,&local_68);
        if (iVar8 < 0) {
          return 0xffff;
        }
        uVar10 = *local_68 >> 1 & 0x3f;
        iVar8 = FUN_0010dbc0(param_1,10,
                             ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 | (uint)local_68[3]
                             ) + uVar14,uVar10 << 1,&local_70);
        if (iVar8 < 0) {
          return 0xffff;
        }
        bVar3 = *param_6;
        bVar4 = *local_70;
        if (bVar3 == bVar4) {
          bVar3 = param_6[1];
          bVar4 = local_70[1];
        }
        uVar9 = (uint)bVar3 - (uint)bVar4;
        if (uVar9 != 0) break;
        if (uVar10 < (param_7 & 0xffff)) {
          uVar9 = FUN_001006e0(param_6,local_70,uVar10 << 1);
          if ((uVar9 & 0xffff) == 0) {
            uVar9 = 1;
          }
        }
        else {
          uVar9 = FUN_001006e0(param_6,local_70,param_7 << 1);
          if ((uVar9 & 0xffff) == 0) goto LAB_00129850;
        }
LAB_001298c0:
        if (-1 < (short)uVar9) {
          param_4 = uVar11 + 1;
          uVar2 = uVar16;
        }
        uVar16 = uVar2;
        if (uVar2 < param_4) goto LAB_001298f4;
      }
      if ((uVar9 & 0xffff) != 0) goto LAB_001298c0;
LAB_00129850:
      if (uVar10 == (param_7 & 0xffff)) {
        uVar10 = uVar11;
        if (uVar11 <= uVar17) {
          uVar16 = local_84;
          uVar10 = uVar17;
        }
        uVar17 = uVar10;
        bVar5 = true;
        local_84 = uVar16;
        local_78 = uVar11;
        uVar16 = uVar2;
        if (uVar2 < param_4) break;
        goto LAB_001297b4;
      }
      bVar5 = true;
      uVar16 = uVar2;
    } while (param_4 <= uVar2);
LAB_001298f4:
    if (uVar17 != 0) {
      if (local_84 < uVar17) {
        return 0xffff;
      }
      param_5 = 0;
      do {
        while( true ) {
          uVar16 = uVar17 + (local_84 - uVar17 >> 1);
          uVar11 = uVar16 - 1;
          iVar8 = FUN_0010dbc0(param_1,5,uVar11 * 10 + uVar13,10,&local_68);
          if (iVar8 < 0) {
            return 0xffff;
          }
          uVar2 = *local_68 >> 1 & 0x3f;
          iVar8 = FUN_0010dbc0(param_1,10,
                               uVar14 + (int)(short)param_8 +
                               ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 |
                               (uint)local_68[3]),uVar2 << 1,&local_70);
          if (iVar8 < 0) {
            return 0xffff;
          }
          bVar3 = *param_6;
          bVar4 = *local_70;
          if (bVar3 == bVar4) {
            bVar3 = param_6[1];
            bVar4 = local_70[1];
          }
          uVar10 = (uint)bVar3 - (uint)bVar4;
          if (uVar10 != 0) break;
          if (uVar2 < (param_7 & 0xffff)) {
            uVar10 = FUN_001006e0(param_6,local_70,uVar2 << 1);
            if ((uVar10 & 0xffff) == 0) {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = FUN_001006e0(param_6,local_70,param_7 << 1);
            if ((uVar10 & 0xffff) == 0) goto LAB_001299d0;
          }
LAB_00129a2c:
          if (-1 < (short)uVar10) {
            uVar17 = uVar16 + 1;
            uVar11 = local_84;
          }
          local_84 = uVar11;
          if (uVar11 < uVar17) goto LAB_00129a4c;
        }
        if ((uVar10 & 0xffff) != 0) goto LAB_00129a2c;
LAB_001299d0:
        if (uVar2 == (param_7 & 0xffff)) {
          uVar17 = uVar16 + 1;
          param_5 = uVar16;
          uVar11 = local_84;
        }
        local_84 = uVar11;
      } while (uVar17 <= uVar11);
LAB_00129a4c:
      param_4 = local_78;
      if (param_5 == 0) {
        return 0xffff;
      }
      goto LAB_00129a68;
    }
    if (bVar5) {
      return 0xfffe;
    }
  }
  if (((param_4 <= param_5) &&
      (iVar8 = FUN_0010dbc0(param_1,5,uVar13 + param_4 * 10 + -10,10,&local_68), -1 < iVar8)) &&
     ((param_7 & 0xffff) <= (*local_68 >> 1 & 0x3f))) {
    lVar15 = (uVar18 & 0xffff) << 1;
    iVar8 = FUN_0010dbc0(param_1,10,
                         ((uint)local_68[1] << 0x10 | (uint)local_68[2] << 8 | (uint)local_68[3]) +
                         uVar14,lVar15,&local_70);
    if ((-1 < iVar8) && (sVar6 = FUN_001006e0(param_6,local_70,lVar15), sVar6 == 0)) {
      return 0xfffe;
    }
  }
  return 0xffff;
}

