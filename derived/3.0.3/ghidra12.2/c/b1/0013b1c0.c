
/* WARNING: Type propagation algorithm not settling */

uint FUN_0013b1c0(long param_1,long param_2,char param_3,uint param_4,uint param_5,byte *param_6,
                 uint param_7,uint param_8,short param_9,uint *param_10,uint *param_11,int *param_12
                 )

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_74;
  
  if (param_5 <= param_4 - 1) {
    *param_10 = 0;
    *param_11 = 0;
    return 0xffff;
  }
  lVar1 = param_1 + ((ulong)*(byte *)(param_1 + 0x20) << 0x18 |
                     (ulong)*(byte *)(param_1 + 0x21) << 0x10 |
                     (ulong)*(byte *)(param_1 + 0x22) << 8 | (ulong)*(byte *)(param_1 + 0x23));
  lVar11 = param_1 + ((ulong)*(byte *)(param_1 + 0x24) << 0x18 |
                      (ulong)*(byte *)(param_1 + 0x25) << 0x10 |
                      (ulong)*(byte *)(param_1 + 0x26) << 8 | (ulong)*(byte *)(param_1 + 0x27));
  *param_12 = 0;
  if (param_3 == '\x01') {
    uVar16 = param_7 & 0xffff;
    param_7 = param_8;
    if (uVar16 != 0) {
      iVar12 = 0;
      uVar13 = 0;
      do {
        if ((*param_6 & 0xfc) == 0xd8) {
          uVar14 = 1;
          if (*(short *)(param_6 + 2) != 0) {
            uVar14 = 2;
          }
        }
        else {
          uVar14 = 1;
        }
        if (param_5 < param_4) {
          return 0xffff;
        }
        sVar8 = (short)param_7;
        bVar7 = false;
        uVar15 = param_4;
        uVar10 = param_5;
LAB_0013b2bc:
        do {
          while( true ) {
            uVar9 = uVar15 + (uVar10 - uVar15 >> 1);
            uVar6 = uVar9 - 1;
            pbVar2 = (byte *)(lVar1 + (ulong)(uVar6 * 10));
            if (sVar8 < (short)(*pbVar2 >> 1 & 0x3f)) break;
LAB_0013b324:
            uVar15 = uVar9 + 1;
            if (uVar10 < uVar15) goto LAB_0013b398;
          }
          bVar4 = *param_6;
          pbVar2 = (byte *)(lVar11 + (long)sVar8 * 2 +
                           ((ulong)pbVar2[1] << 0x10 | (ulong)pbVar2[2] << 8 | (ulong)pbVar2[3]));
          bVar5 = *pbVar2;
          if (bVar4 == bVar5) {
            bVar4 = param_6[1];
            bVar5 = pbVar2[1];
          }
          if ((int)((uint)bVar4 - (uint)bVar5) < 0) {
joined_r0x0013b384:
            uVar10 = uVar6;
            if (uVar6 < uVar15) break;
            goto LAB_0013b2bc;
          }
          if ((uint)bVar4 != (uint)bVar5) goto LAB_0013b324;
          if (uVar14 < 2) {
LAB_0013b374:
            bVar7 = true;
            param_4 = uVar9;
            goto joined_r0x0013b384;
          }
          bVar4 = param_6[2];
          bVar5 = pbVar2[2];
          if (bVar4 == bVar5) {
            bVar4 = param_6[3];
            bVar5 = pbVar2[3];
          }
          if (-1 < (int)((uint)bVar4 - (uint)bVar5)) {
            if ((uint)bVar4 != (uint)bVar5) goto LAB_0013b324;
            goto LAB_0013b374;
          }
          uVar10 = uVar6;
        } while (uVar15 <= uVar6);
LAB_0013b398:
        if (!bVar7) {
          return 0xffff;
        }
        if (param_5 < param_4) {
          return 0xffff;
        }
        bVar7 = false;
        uVar15 = param_4;
        uVar10 = param_5;
        do {
          while( true ) {
            uVar9 = uVar15 + (uVar10 - uVar15 >> 1);
            uVar6 = uVar9 - 1;
            pbVar2 = (byte *)(lVar1 + (ulong)(uVar6 * 10));
            if (sVar8 < (short)(*pbVar2 >> 1 & 0x3f)) break;
joined_r0x0013b4a4:
            uVar10 = uVar6;
            if (uVar6 < uVar15) goto LAB_0013b4a8;
          }
          bVar4 = *param_6;
          pbVar2 = (byte *)(lVar11 + (long)sVar8 * 2 +
                           ((ulong)pbVar2[1] << 0x10 | (ulong)pbVar2[2] << 8 | (ulong)pbVar2[3]));
          bVar5 = *pbVar2;
          if (bVar4 == bVar5) {
            bVar4 = param_6[1];
            bVar5 = pbVar2[1];
          }
          if ((int)((uint)bVar4 - (uint)bVar5) < 0) goto joined_r0x0013b4a4;
          if ((uint)bVar4 == (uint)bVar5) {
            if (1 < uVar14) {
              bVar4 = param_6[2];
              bVar5 = pbVar2[2];
              if (bVar4 == bVar5) {
                bVar4 = param_6[3];
                bVar5 = pbVar2[3];
              }
              if ((int)((uint)bVar4 - (uint)bVar5) < 0) goto joined_r0x0013b4a4;
              if ((uint)bVar4 != (uint)bVar5) goto joined_r0x0013b42c;
            }
            bVar7 = true;
            param_5 = uVar9;
          }
joined_r0x0013b42c:
          uVar15 = uVar9 + 1;
        } while (uVar15 <= uVar10);
LAB_0013b4a8:
        if (!bVar7) {
          return 0xffff;
        }
        param_6 = param_6 + (ulong)(ushort)uVar14 * 2;
        param_7 = uVar14 + param_7;
        uVar13 = uVar13 + uVar14 & 0xffff;
        iVar12 = iVar12 + 1;
        *param_12 = iVar12;
      } while (uVar13 < uVar16);
    }
LAB_0013b778:
    lVar1 = param_1 + ((ulong)*(byte *)(param_1 + 0x28) << 0x18 |
                       (ulong)*(byte *)(param_1 + 0x29) << 0x10 |
                       (ulong)*(byte *)(param_1 + 0x2a) << 8 | (ulong)*(byte *)(param_1 + 0x2b));
    if (param_9 == 1) {
      if (param_2 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = param_2 + ((ulong)*(byte *)(param_1 + 0x10) << 0x18 |
                            (ulong)*(byte *)(param_1 + 0x11) << 0x10 |
                            (ulong)*(byte *)(param_1 + 0x12) << 8 | (ulong)*(byte *)(param_1 + 0x13)
                           ) + 0x3c;
      }
      if ((int)param_5 < (int)param_4) {
        return 0xffff;
      }
      if (lVar11 == 0) {
        iVar12 = param_4 - 1;
        uVar16 = param_4 * 2 - 1;
        while (*(byte *)(lVar1 + (ulong)uVar16) < 0x40) {
          iVar12 = iVar12 + 1;
          uVar16 = uVar16 + 2;
          if ((int)param_5 <= iVar12) {
            return 0xffff;
          }
        }
      }
      else {
        uVar13 = param_4 * 2 - 1;
        uVar16 = param_4 - 1;
        while ((((uint)(int)*(char *)(lVar11 + (ulong)uVar16) >> 6 & 1) != 0 ||
               ((-1 < *(char *)(lVar11 + (ulong)uVar16) && (*(byte *)(lVar1 + (ulong)uVar13) < 0x40)
                )))) {
          uVar16 = uVar16 + 1;
          uVar13 = uVar13 + 2;
          if ((int)param_5 <= (int)uVar16) {
            return 0xffff;
          }
        }
      }
    }
    else if (param_9 != -1) {
      if ((int)param_5 < (int)param_4) {
        return 0xffff;
      }
      iVar12 = param_4 - 1;
      uVar16 = param_4 * 2 - 2;
      while ((*(byte *)(lVar1 + (ulong)uVar16) >> 6 & 1) == 0) {
        iVar12 = iVar12 + 1;
        uVar16 = uVar16 + 2;
        if ((int)param_5 <= iVar12) {
          return 0xffff;
        }
      }
    }
    *param_10 = param_4;
    *param_11 = param_5;
    return param_7;
  }
  if (param_4 <= param_5) {
    uVar16 = 0;
    bVar7 = false;
    local_74 = param_4;
    uVar13 = param_5;
    uVar14 = param_5;
LAB_0013b570:
    do {
      while( true ) {
        uVar15 = param_4 + (uVar13 - param_4 >> 1);
        uVar10 = uVar15 - 1;
        pbVar2 = (byte *)(lVar1 + (ulong)(uVar10 * 10));
        pbVar3 = (byte *)(lVar11 + ((ulong)pbVar2[1] << 0x10 | (ulong)pbVar2[2] << 8 |
                                   (ulong)pbVar2[3]));
        bVar4 = *param_6;
        bVar5 = *pbVar3;
        if (bVar4 == bVar5) {
          bVar4 = param_6[1];
          bVar5 = pbVar3[1];
        }
        uVar6 = *pbVar2 >> 1 & 0x3f;
        uVar9 = (uint)bVar4 - (uint)bVar5;
        if (uVar9 != 0) break;
        if (uVar6 < (param_7 & 0xffff)) {
          uVar9 = FUN_001006e0(param_6,pbVar3,uVar6 << 1);
          if ((uVar9 & 0xffff) == 0) {
            uVar9 = 1;
          }
        }
        else {
          uVar9 = FUN_001006e0(param_6,pbVar3,param_7 << 1);
          if ((uVar9 & 0xffff) == 0) goto LAB_0013b5d4;
        }
LAB_0013b640:
        if (-1 < (short)uVar9) {
          param_4 = uVar15 + 1;
          uVar10 = uVar13;
        }
        uVar13 = uVar10;
        if (uVar10 < param_4) goto LAB_0013b674;
      }
      if ((uVar9 & 0xffff) != 0) goto LAB_0013b640;
LAB_0013b5d4:
      if (uVar6 == (param_7 & 0xffff)) {
        uVar9 = uVar13;
        uVar13 = uVar15;
        if (uVar15 <= uVar16) {
          uVar9 = uVar14;
          uVar13 = uVar16;
        }
        uVar16 = uVar13;
        bVar7 = true;
        local_74 = uVar15;
        uVar13 = uVar10;
        uVar14 = uVar9;
        if (uVar10 < param_4) break;
        goto LAB_0013b570;
      }
      bVar7 = true;
      uVar13 = uVar10;
    } while (param_4 <= uVar10);
LAB_0013b674:
    if (uVar16 != 0) {
      if (uVar14 < uVar16) {
        return 0xffff;
      }
      param_5 = 0;
      do {
        while( true ) {
          uVar13 = uVar16 + (uVar14 - uVar16 >> 1);
          uVar15 = uVar13 - 1;
          pbVar2 = (byte *)(lVar1 + (ulong)(uVar15 * 10));
          pbVar3 = (byte *)(lVar11 + (short)param_8 +
                           ((ulong)pbVar2[1] << 0x10 | (ulong)pbVar2[2] << 8 | (ulong)pbVar2[3]));
          bVar4 = *param_6;
          bVar5 = *pbVar3;
          if (bVar4 == bVar5) {
            bVar4 = param_6[1];
            bVar5 = pbVar3[1];
          }
          uVar9 = *pbVar2 >> 1 & 0x3f;
          uVar10 = (uint)bVar4 - (uint)bVar5;
          if (uVar10 != 0) break;
          if (uVar9 < (param_7 & 0xffff)) {
            uVar10 = FUN_001006e0(param_6,pbVar3,uVar9 << 1);
            if ((uVar10 & 0xffff) == 0) {
              uVar10 = 1;
            }
          }
          else {
            uVar10 = FUN_001006e0(param_6,pbVar3,param_7 << 1);
            if ((uVar10 & 0xffff) == 0) goto LAB_0013b6f4;
          }
LAB_0013b744:
          if (-1 < (short)uVar10) {
            uVar16 = uVar13 + 1;
            uVar15 = uVar14;
          }
          uVar14 = uVar15;
          if (uVar15 < uVar16) goto LAB_0013b75c;
        }
        if ((uVar10 & 0xffff) != 0) goto LAB_0013b744;
LAB_0013b6f4:
        if (uVar9 == (param_7 & 0xffff)) {
          uVar16 = uVar13 + 1;
          param_5 = uVar13;
          uVar15 = uVar14;
        }
        uVar14 = uVar15;
      } while (uVar16 <= uVar15);
LAB_0013b75c:
      param_4 = local_74;
      if (param_5 == 0) {
        return 0xffff;
      }
      goto LAB_0013b778;
    }
    if (bVar7) {
      return 0xfffe;
    }
  }
  if (((param_5 < param_4) ||
      (pbVar2 = (byte *)(lVar1 + (ulong)(param_4 * 10 - 10)),
      (*pbVar2 >> 1 & 0x3f) < (param_7 & 0xffff))) ||
     (sVar8 = FUN_001006e0(param_6,lVar11 + ((ulong)pbVar2[1] << 0x10 | (ulong)pbVar2[2] << 8 |
                                            (ulong)pbVar2[3]),param_7 << 1), sVar8 != 0)) {
    return 0xffff;
  }
  return 0xfffe;
}

