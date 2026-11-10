
int FUN_0012c8c0(char *param_1,long param_2,long param_3,uint param_4)

{
  short *psVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  short *psVar12;
  long lVar13;
  short *psVar14;
  uint uVar15;
  ushort *puVar16;
  long lVar17;
  short *psVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_4a8 [28];
  ushort local_48c;
  undefined1 auStack_330 [352];
  uint local_1d0 [88];
  long local_70;
  long local_68;
  
  if (param_1 == (char *)0x0) {
    return 0xae40;
  }
  if ((*(long *)(param_1 + 0x6fb50) == 0) || (*(long *)(param_1 + 0x6fb58) == 0)) {
    return 0x8840;
  }
  if (1 < (param_4 & 0xff)) {
    return 0x9a40;
  }
  if (((param_2 != 0) && ((*(ushort *)(param_2 + 0x80) & 0xf) == 3)) ||
     ((param_3 != 0 && ((*(ushort *)(param_3 + 0x80) & 0xf) == 3)))) {
    return 0xa840;
  }
  *param_1 = *param_1 + '\x01';
  if ((param_4 & 0xff) == 0) {
    param_1[0x62750] = '\x04';
    param_1[0x62751] = '\0';
    param_1[0x64288] = '\0';
    param_1[0x64289] = '\0';
    param_1[0x6428a] = '\0';
    param_1[0x6428b] = '\0';
    param_1[0x64280] = '\0';
    param_1[0x64281] = '\0';
    param_1[0x64282] = '\0';
    param_1[0x64283] = '\0';
    param_1[0x64284] = '\0';
    param_1[0x64285] = '\0';
    param_1[0x64286] = '\0';
    param_1[0x64287] = '\0';
    param_1[0x64278] = '\0';
    param_1[0x64279] = '\0';
    param_1[0x6427a] = '\0';
    param_1[0x6427b] = '\0';
    param_1[0x6427c] = '\0';
    param_1[0x6427d] = '\0';
    param_1[0x6427e] = '\0';
    param_1[0x6427f] = '\0';
    param_1[0x64270] = '\0';
    param_1[0x64271] = '\0';
    param_1[0x64272] = '\0';
    param_1[0x64273] = '\0';
    param_1[0x64274] = '\0';
    param_1[0x64275] = '\0';
    param_1[0x64276] = '\0';
    param_1[0x64277] = '\0';
    param_1[0x64268] = '\0';
    param_1[0x64269] = '\0';
    param_1[0x6426a] = '\0';
    param_1[0x6426b] = '\0';
    param_1[0x6426c] = '\0';
    param_1[0x6426d] = '\0';
    param_1[0x6426e] = '\0';
    param_1[0x6426f] = '\0';
    param_1[0x64260] = '\0';
    param_1[0x64261] = '\0';
    param_1[0x64262] = '\0';
    param_1[0x64263] = '\0';
    param_1[0x64264] = '\0';
    param_1[0x64265] = '\0';
    param_1[0x64266] = '\0';
    param_1[0x64267] = '\0';
    param_1[0x64258] = '\0';
    param_1[0x64259] = '\0';
    param_1[0x6425a] = '\0';
    param_1[0x6425b] = '\0';
    param_1[0x6425c] = '\0';
    param_1[0x6425d] = '\0';
    param_1[0x6425e] = '\0';
    param_1[0x6425f] = '\0';
    param_1[0x64250] = '\0';
    param_1[0x64251] = '\0';
    param_1[0x64252] = '\0';
    param_1[0x64253] = '\0';
    param_1[0x64254] = '\0';
    param_1[0x64255] = '\0';
    param_1[0x64256] = '\0';
    param_1[0x64257] = '\0';
    param_1[0x64248] = '\0';
    param_1[0x64249] = '\0';
    param_1[0x6424a] = '\0';
    param_1[0x6424b] = '\0';
    param_1[0x6424c] = '\0';
    param_1[0x6424d] = '\0';
    param_1[0x6424e] = '\0';
    param_1[0x6424f] = '\0';
    param_1[0x64240] = '\0';
    param_1[0x64241] = '\0';
    param_1[0x64242] = '\0';
    param_1[0x64243] = '\0';
    param_1[0x64244] = '\0';
    param_1[0x64245] = '\0';
    param_1[0x64246] = '\0';
    param_1[0x64247] = '\0';
    param_1[0x64238] = '\0';
    param_1[0x64239] = '\0';
    param_1[0x6423a] = '\0';
    param_1[0x6423b] = '\0';
    param_1[0x6423c] = '\0';
    param_1[0x6423d] = '\0';
    param_1[0x6423e] = '\0';
    param_1[0x6423f] = '\0';
    param_1[0x64230] = '\0';
    param_1[0x64231] = '\0';
    param_1[0x64232] = '\0';
    param_1[0x64233] = '\0';
    param_1[0x64234] = '\0';
    param_1[0x64235] = '\0';
    param_1[0x64236] = '\0';
    param_1[0x64237] = '\0';
    param_1[0x64228] = '\0';
    param_1[0x64229] = '\0';
    param_1[0x6422a] = '\0';
    param_1[0x6422b] = '\0';
    param_1[0x6422c] = '\0';
    param_1[0x6422d] = '\0';
    param_1[0x6422e] = '\0';
    param_1[0x6422f] = '\0';
    param_1[0x64220] = '\0';
    param_1[0x64221] = '\0';
    param_1[0x64222] = '\0';
    param_1[0x64223] = '\0';
    param_1[0x64224] = '\0';
    param_1[0x64225] = '\0';
    param_1[0x64226] = '\0';
    param_1[0x64227] = '\0';
    param_1[0x64218] = '\0';
    param_1[0x64219] = '\0';
    param_1[0x6421a] = '\0';
    param_1[0x6421b] = '\0';
    param_1[0x6421c] = '\0';
    param_1[0x6421d] = '\0';
    param_1[0x6421e] = '\0';
    param_1[0x6421f] = '\0';
    param_1[0x64210] = '\0';
    param_1[0x64211] = '\0';
    param_1[0x64212] = '\0';
    param_1[0x64213] = '\0';
    param_1[0x64214] = '\0';
    param_1[0x64215] = '\0';
    param_1[0x64216] = '\0';
    param_1[0x64217] = '\0';
    param_1[0x64208] = '\0';
    param_1[0x64209] = '\0';
    param_1[0x6420a] = '\0';
    param_1[0x6420b] = '\0';
    param_1[0x6420c] = '\0';
    param_1[0x6420d] = '\0';
    param_1[0x6420e] = '\0';
    param_1[0x6420f] = '\0';
    param_1[0x64200] = '\0';
    param_1[0x64201] = '\0';
    param_1[0x64202] = '\0';
    param_1[0x64203] = '\0';
    param_1[0x64204] = '\0';
    param_1[0x64205] = '\0';
    param_1[0x64206] = '\0';
    param_1[0x64207] = '\0';
    param_1[0x641f8] = '\0';
    param_1[0x641f9] = '\0';
    param_1[0x641fa] = '\0';
    param_1[0x641fb] = '\0';
    param_1[0x641fc] = '\0';
    param_1[0x641fd] = '\0';
    param_1[0x641fe] = '\0';
    param_1[0x641ff] = '\0';
    param_1[0x641f0] = '\0';
    param_1[0x641f1] = '\0';
    param_1[0x641f2] = '\0';
    param_1[0x641f3] = '\0';
    param_1[0x641f4] = '\0';
    param_1[0x641f5] = '\0';
    param_1[0x641f6] = '\0';
    param_1[0x641f7] = '\0';
    param_1[0x641e8] = '\0';
    param_1[0x641e9] = '\0';
    param_1[0x641ea] = '\0';
    param_1[0x641eb] = '\0';
    param_1[0x641ec] = '\0';
    param_1[0x641ed] = '\0';
    param_1[0x641ee] = '\0';
    param_1[0x641ef] = '\0';
    if (*(long *)(param_1 + 0x6f4e8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x6f4e8) + 0x15d8) = 0;
    }
  }
  local_70 = param_3;
  local_68 = param_2;
  sVar7 = FUN_0010d700(param_1);
  if (sVar7 < 0) {
    return (int)sVar7;
  }
  if (param_2 != 0) {
    uVar5 = *(ushort *)(param_2 + 0x80);
    if ((uVar5 & 0xf) == 2) {
      if ((uVar5 & 0xf0) == 0x10) {
        uVar10 = 0;
      }
      else {
        if ((uVar5 & 0xf0) != 0x20) goto LAB_0012cb08;
        uVar10 = 1;
      }
      sVar7 = FUN_00131080(param_1,uVar10,&local_68);
      uVar6 = (uint)sVar7;
      uVar20 = (ulong)uVar6;
      if (0 < (int)uVar6) {
        uVar11 = uVar20 & 0xffff;
        lVar13 = 0x80;
        do {
          *(ushort *)(local_68 + lVar13) = *(ushort *)(local_68 + lVar13) & 0xfff0;
          *(ushort *)(local_68 + lVar13) = *(ushort *)(local_68 + lVar13) | 1;
          lVar13 = lVar13 + 0x88;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (uVar6 != 0) goto LAB_0012cb64;
    }
    else {
LAB_0012cb08:
      uVar20 = 1;
LAB_0012cb64:
      psVar1 = (short *)(param_1 + 0x702b8);
      uVar10 = 1;
      do {
        if (*(long *)(param_1 + 0x6f4f0) != 0) {
          FUN_0010d0f0(param_1,local_68,auStack_4a8);
          local_48c = (ushort)param_4 & 0xff;
          iVar9 = FUN_001327f0(param_1,auStack_4a8);
          if (iVar9 == 3) {
            *(byte *)(local_68 + 0x61) = *(byte *)(local_68 + 0x61) | 0x80;
          }
        }
        sVar7 = FUN_0012d2b0(param_1,local_1d0,local_68);
        if (sVar7 < 0) {
          return (int)sVar7;
        }
        bVar3 = (byte)local_1d0[0] | 0x20;
        if (*(short *)(param_1 + 0x702bc) < 1) {
          bVar3 = (byte)local_1d0[0] & 0xdf;
        }
        local_1d0[0] = CONCAT31(local_1d0[0]._1_3_,bVar3);
        memcpy(auStack_330,local_1d0,0x160);
        uVar8 = FUN_0011aab0(param_1,local_1d0,param_4,0,uVar10,1);
        if (((short)uVar8 < 0) && ((uVar8 & 0x7f00) != 0x1800)) {
          return (int)(short)uVar8;
        }
        sVar7 = FUN_0010d4c0(param_1,local_68,auStack_330,param_4,uVar10,1);
        if (sVar7 < 0) {
          return (int)sVar7;
        }
        psVar12 = *(short **)(param_1 + 0x702b0);
        uVar6 = (int)uVar20 - 1;
        uVar20 = (ulong)uVar6;
        psVar14 = psVar12 + 0x41;
        lVar13 = 0x20;
        puVar16 = (ushort *)(param_1 + 0x702ba);
        do {
          while( true ) {
            if ((psVar14[-1] == 0) || (-1 < (short)puVar16[-1])) {
              sVar7 = *psVar14;
            }
            else {
              iVar9 = (int)(short)puVar16[-1] + (int)psVar14[-1];
              puVar16[-1] = (ushort)iVar9 & (ushort)(iVar9 >> 0x1f);
              sVar7 = *psVar14;
            }
            if (sVar7 != 0) break;
LAB_0012cca8:
            psVar14 = psVar14 + 2;
            lVar13 = lVar13 + -2;
            puVar16 = puVar16 + 2;
            if (lVar13 == 0) goto LAB_0012ccec;
          }
          if (-1 < (short)*puVar16) goto LAB_0012cca8;
          iVar9 = (int)(short)*puVar16 + (int)sVar7;
          *puVar16 = (ushort)iVar9 & (ushort)(iVar9 >> 0x1f);
          psVar14 = psVar14 + 2;
          lVar13 = lVar13 + -2;
          puVar16 = puVar16 + 2;
        } while (lVar13 != 0);
LAB_0012ccec:
        lVar13 = 0;
        uVar15 = 0x80;
        lVar17 = 0x140;
        do {
          if ((local_1d0[0] & 0xff & uVar15) == 0) {
            if (psVar12[lVar13 + 0x60] != 0) {
              uVar8 = *(ushort *)(param_1 + lVar13 * 2 + 0x702b8);
              if (0 < (short)uVar8) {
                iVar9 = (int)(short)uVar8 + (int)psVar12[lVar13 + 0x60];
                *(ushort *)(param_1 + lVar13 * 2 + 0x702b8) =
                     (ushort)iVar9 & ((ushort)(iVar9 >> 0x1f) ^ 0xffff);
              }
            }
          }
          else {
            lVar19 = 0x20;
            psVar14 = psVar12;
            psVar18 = psVar1;
            do {
              sVar7 = *psVar18;
              if (lVar13 + lVar19 == 0x20) {
                if (sVar7 <= psVar12[lVar13 + 0x80]) {
                  sVar7 = psVar12[lVar13 + 0x80];
                }
              }
              iVar9 = (int)*(short *)((long)psVar14 + lVar17) + (int)sVar7;
              sVar7 = *psVar14;
              if (iVar9 <= sVar7) {
                iVar4 = (int)psVar14[0x20];
                if (psVar14[0x20] <= iVar9) {
                  iVar4 = iVar9;
                }
                sVar7 = (short)iVar4;
              }
              lVar19 = lVar19 + -1;
              psVar14 = psVar14 + 1;
              *psVar18 = sVar7;
              psVar18 = psVar18 + 1;
            } while (lVar19 != 0);
          }
          lVar13 = lVar13 + 1;
          uVar15 = uVar15 >> 1;
          lVar17 = lVar17 + 0x40;
        } while (lVar13 != 8);
        uVar15 = 0x80;
        lVar17 = 0x340;
        lVar13 = 8;
        do {
          if ((local_1d0[0] >> 8 & 0xff & uVar15) == 0) {
            if (psVar12[lVar13 + 0x60] != 0) {
              uVar8 = *(ushort *)(param_1 + lVar13 * 2 + 0x702b8);
              if (0 < (short)uVar8) {
                iVar9 = (int)(short)uVar8 + (int)psVar12[lVar13 + 0x60];
                *(ushort *)(param_1 + lVar13 * 2 + 0x702b8) =
                     (ushort)iVar9 & ((ushort)(iVar9 >> 0x1f) ^ 0xffff);
              }
            }
          }
          else {
            lVar19 = 0x20;
            psVar14 = psVar12;
            psVar18 = psVar1;
            do {
              sVar7 = *psVar18;
              if (lVar13 + lVar19 == 0x20) {
                if (sVar7 <= psVar12[lVar13 + 0x80]) {
                  sVar7 = psVar12[lVar13 + 0x80];
                }
              }
              iVar9 = (int)*(short *)((long)psVar14 + lVar17) + (int)sVar7;
              sVar7 = *psVar14;
              if (iVar9 <= sVar7) {
                iVar4 = (int)psVar14[0x20];
                if (psVar14[0x20] <= iVar9) {
                  iVar4 = iVar9;
                }
                sVar7 = (short)iVar4;
              }
              lVar19 = lVar19 + -1;
              psVar14 = psVar14 + 1;
              *psVar18 = sVar7;
              psVar18 = psVar18 + 1;
            } while (lVar19 != 0);
          }
          lVar13 = lVar13 + 1;
          uVar15 = uVar15 >> 1;
          lVar17 = lVar17 + 0x40;
        } while (lVar13 != 0x10);
        uVar15 = 0x80;
        lVar17 = 0x540;
        lVar13 = 0x10;
        do {
          if ((local_1d0[0] >> 0x10 & 0xff & uVar15) == 0) {
            if (psVar12[lVar13 + 0x60] != 0) {
              uVar8 = *(ushort *)(param_1 + lVar13 * 2 + 0x702b8);
              if (0 < (short)uVar8) {
                iVar9 = (int)(short)uVar8 + (int)psVar12[lVar13 + 0x60];
                *(ushort *)(param_1 + lVar13 * 2 + 0x702b8) =
                     (ushort)iVar9 & ((ushort)(iVar9 >> 0x1f) ^ 0xffff);
              }
            }
          }
          else {
            lVar19 = 0x20;
            psVar14 = psVar12;
            psVar18 = psVar1;
            do {
              sVar7 = *psVar18;
              if (lVar13 + lVar19 == 0x20) {
                if (sVar7 <= psVar12[lVar13 + 0x80]) {
                  sVar7 = psVar12[lVar13 + 0x80];
                }
              }
              iVar9 = (int)*(short *)((long)psVar14 + lVar17) + (int)sVar7;
              sVar7 = *psVar14;
              if (iVar9 <= sVar7) {
                iVar4 = (int)psVar14[0x20];
                if (psVar14[0x20] <= iVar9) {
                  iVar4 = iVar9;
                }
                sVar7 = (short)iVar4;
              }
              lVar19 = lVar19 + -1;
              psVar14 = psVar14 + 1;
              *psVar18 = sVar7;
              psVar18 = psVar18 + 1;
            } while (lVar19 != 0);
          }
          lVar13 = lVar13 + 1;
          uVar15 = uVar15 >> 1;
          lVar17 = lVar17 + 0x40;
        } while (lVar13 != 0x18);
        uVar15 = 0x80;
        lVar17 = 0x740;
        lVar13 = 0x18;
        do {
          if ((uVar15 & local_1d0[0] >> 0x18) == 0) {
            if (psVar12[lVar13 + 0x60] != 0) {
              uVar8 = *(ushort *)(param_1 + lVar13 * 2 + 0x702b8);
              if (0 < (short)uVar8) {
                iVar9 = (int)(short)uVar8 + (int)psVar12[lVar13 + 0x60];
                *(ushort *)(param_1 + lVar13 * 2 + 0x702b8) =
                     (ushort)iVar9 & ((ushort)(iVar9 >> 0x1f) ^ 0xffff);
              }
            }
          }
          else {
            lVar19 = 0x20;
            psVar14 = psVar12;
            psVar18 = psVar1;
            do {
              sVar7 = *psVar18;
              if (lVar13 + lVar19 == 0x20) {
                if (sVar7 <= psVar12[lVar13 + 0x80]) {
                  sVar7 = psVar12[lVar13 + 0x80];
                }
              }
              iVar9 = (int)*(short *)((long)psVar14 + lVar17) + (int)sVar7;
              sVar7 = *psVar14;
              if (iVar9 <= sVar7) {
                iVar4 = (int)psVar14[0x20];
                if (psVar14[0x20] <= iVar9) {
                  iVar4 = iVar9;
                }
                sVar7 = (short)iVar4;
              }
              lVar19 = lVar19 + -1;
              psVar14 = psVar14 + 1;
              *psVar18 = sVar7;
              psVar18 = psVar18 + 1;
            } while (lVar19 != 0);
          }
          lVar13 = lVar13 + 1;
          uVar15 = uVar15 >> 1;
          lVar17 = lVar17 + 0x40;
        } while (lVar13 != 0x20);
        param_1[0x702bc] = '\0';
        param_1[0x702bd] = '\0';
        uVar10 = 0;
        param_4 = 1;
        local_68 = local_68 + 0x88;
      } while ((uVar6 & 0xffff) != 0);
    }
    if ((uVar5 & 0xf) == 0) {
      sVar7 = FUN_0011d6b0(param_1,0x37,0);
      if (sVar7 < 0) {
        return (int)sVar7;
      }
    }
  }
  if (local_70 == 0) {
    param_1[0x62750] = '\x04';
    param_1[0x62751] = '\0';
    param_1[0x64288] = '\0';
    param_1[0x64289] = '\0';
    param_1[0x6428a] = '\0';
    param_1[0x6428b] = '\0';
    param_1[0x64280] = '\0';
    param_1[0x64281] = '\0';
    param_1[0x64282] = '\0';
    param_1[0x64283] = '\0';
    param_1[0x64284] = '\0';
    param_1[0x64285] = '\0';
    param_1[0x64286] = '\0';
    param_1[0x64287] = '\0';
    param_1[0x64278] = '\0';
    param_1[0x64279] = '\0';
    param_1[0x6427a] = '\0';
    param_1[0x6427b] = '\0';
    param_1[0x6427c] = '\0';
    param_1[0x6427d] = '\0';
    param_1[0x6427e] = '\0';
    param_1[0x6427f] = '\0';
    param_1[0x64270] = '\0';
    param_1[0x64271] = '\0';
    param_1[0x64272] = '\0';
    param_1[0x64273] = '\0';
    param_1[0x64274] = '\0';
    param_1[0x64275] = '\0';
    param_1[0x64276] = '\0';
    param_1[0x64277] = '\0';
    param_1[0x64268] = '\0';
    param_1[0x64269] = '\0';
    param_1[0x6426a] = '\0';
    param_1[0x6426b] = '\0';
    param_1[0x6426c] = '\0';
    param_1[0x6426d] = '\0';
    param_1[0x6426e] = '\0';
    param_1[0x6426f] = '\0';
    param_1[0x64260] = '\0';
    param_1[0x64261] = '\0';
    param_1[0x64262] = '\0';
    param_1[0x64263] = '\0';
    param_1[0x64264] = '\0';
    param_1[0x64265] = '\0';
    param_1[0x64266] = '\0';
    param_1[0x64267] = '\0';
    param_1[0x64258] = '\0';
    param_1[0x64259] = '\0';
    param_1[0x6425a] = '\0';
    param_1[0x6425b] = '\0';
    param_1[0x6425c] = '\0';
    param_1[0x6425d] = '\0';
    param_1[0x6425e] = '\0';
    param_1[0x6425f] = '\0';
    param_1[0x64250] = '\0';
    param_1[0x64251] = '\0';
    param_1[0x64252] = '\0';
    param_1[0x64253] = '\0';
    param_1[0x64254] = '\0';
    param_1[0x64255] = '\0';
    param_1[0x64256] = '\0';
    param_1[0x64257] = '\0';
    param_1[0x64248] = '\0';
    param_1[0x64249] = '\0';
    param_1[0x6424a] = '\0';
    param_1[0x6424b] = '\0';
    param_1[0x6424c] = '\0';
    param_1[0x6424d] = '\0';
    param_1[0x6424e] = '\0';
    param_1[0x6424f] = '\0';
    param_1[0x64240] = '\0';
    param_1[0x64241] = '\0';
    param_1[0x64242] = '\0';
    param_1[0x64243] = '\0';
    param_1[0x64244] = '\0';
    param_1[0x64245] = '\0';
    param_1[0x64246] = '\0';
    param_1[0x64247] = '\0';
    param_1[0x64238] = '\0';
    param_1[0x64239] = '\0';
    param_1[0x6423a] = '\0';
    param_1[0x6423b] = '\0';
    param_1[0x6423c] = '\0';
    param_1[0x6423d] = '\0';
    param_1[0x6423e] = '\0';
    param_1[0x6423f] = '\0';
    param_1[0x64230] = '\0';
    param_1[0x64231] = '\0';
    param_1[0x64232] = '\0';
    param_1[0x64233] = '\0';
    param_1[0x64234] = '\0';
    param_1[0x64235] = '\0';
    param_1[0x64236] = '\0';
    param_1[0x64237] = '\0';
    param_1[0x64228] = '\0';
    param_1[0x64229] = '\0';
    param_1[0x6422a] = '\0';
    param_1[0x6422b] = '\0';
    param_1[0x6422c] = '\0';
    param_1[0x6422d] = '\0';
    param_1[0x6422e] = '\0';
    param_1[0x6422f] = '\0';
    param_1[0x64220] = '\0';
    param_1[0x64221] = '\0';
    param_1[0x64222] = '\0';
    param_1[0x64223] = '\0';
    param_1[0x64224] = '\0';
    param_1[0x64225] = '\0';
    param_1[0x64226] = '\0';
    param_1[0x64227] = '\0';
    param_1[0x64218] = '\0';
    param_1[0x64219] = '\0';
    param_1[0x6421a] = '\0';
    param_1[0x6421b] = '\0';
    param_1[0x6421c] = '\0';
    param_1[0x6421d] = '\0';
    param_1[0x6421e] = '\0';
    param_1[0x6421f] = '\0';
    param_1[0x64210] = '\0';
    param_1[0x64211] = '\0';
    param_1[0x64212] = '\0';
    param_1[0x64213] = '\0';
    param_1[0x64214] = '\0';
    param_1[0x64215] = '\0';
    param_1[0x64216] = '\0';
    param_1[0x64217] = '\0';
    param_1[0x64208] = '\0';
    param_1[0x64209] = '\0';
    param_1[0x6420a] = '\0';
    param_1[0x6420b] = '\0';
    param_1[0x6420c] = '\0';
    param_1[0x6420d] = '\0';
    param_1[0x6420e] = '\0';
    param_1[0x6420f] = '\0';
    param_1[0x64200] = '\0';
    param_1[0x64201] = '\0';
    param_1[0x64202] = '\0';
    param_1[0x64203] = '\0';
    param_1[0x64204] = '\0';
    param_1[0x64205] = '\0';
    param_1[0x64206] = '\0';
    param_1[0x64207] = '\0';
    param_1[0x641f8] = '\0';
    param_1[0x641f9] = '\0';
    param_1[0x641fa] = '\0';
    param_1[0x641fb] = '\0';
    param_1[0x641fc] = '\0';
    param_1[0x641fd] = '\0';
    param_1[0x641fe] = '\0';
    param_1[0x641ff] = '\0';
    param_1[0x641f0] = '\0';
    param_1[0x641f1] = '\0';
    param_1[0x641f2] = '\0';
    param_1[0x641f3] = '\0';
    param_1[0x641f4] = '\0';
    param_1[0x641f5] = '\0';
    param_1[0x641f6] = '\0';
    param_1[0x641f7] = '\0';
    param_1[0x641e8] = '\0';
    param_1[0x641e9] = '\0';
    param_1[0x641ea] = '\0';
    param_1[0x641eb] = '\0';
    param_1[0x641ec] = '\0';
    param_1[0x641ed] = '\0';
    param_1[0x641ee] = '\0';
    param_1[0x641ef] = '\0';
    if (*(long *)(param_1 + 0x6f4e8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x6f4e8) + 0x15d8) = 0;
    }
    goto LAB_0012d29c;
  }
  if ((*(ushort *)(local_70 + 0x80) & 0xf) == 2) {
    uVar5 = *(ushort *)(local_70 + 0x80) & 0xf0;
    if (uVar5 == 0x10) {
      uVar10 = 0;
    }
    else {
      if (uVar5 != 0x20) goto LAB_0012d04c;
      uVar10 = 1;
    }
    sVar7 = FUN_00131080(param_1,uVar10,&local_70);
    uVar6 = (uint)sVar7;
    uVar20 = (ulong)uVar6;
    if (0 < (int)uVar6) {
      uVar11 = uVar20 & 0xffff;
      lVar13 = 0x80;
      do {
        *(ushort *)(local_70 + lVar13) = *(ushort *)(local_70 + lVar13) & 0xfff0;
        *(ushort *)(local_70 + lVar13) = *(ushort *)(local_70 + lVar13) | 1;
        lVar13 = lVar13 + 0x88;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (uVar6 == 0) goto LAB_0012d29c;
  }
  else {
LAB_0012d04c:
    uVar20 = 1;
  }
  pbVar2 = (byte *)(param_1 + 0x62750);
  do {
    if (local_70 == 0) {
      pbVar2[0] = 4;
      pbVar2[1] = 0;
      param_1[0x64288] = '\0';
      param_1[0x64289] = '\0';
      param_1[0x6428a] = '\0';
      param_1[0x6428b] = '\0';
      param_1[0x64278] = '\0';
      param_1[0x64279] = '\0';
      param_1[0x6427a] = '\0';
      param_1[0x6427b] = '\0';
      param_1[0x6427c] = '\0';
      param_1[0x6427d] = '\0';
      param_1[0x6427e] = '\0';
      param_1[0x6427f] = '\0';
      param_1[0x64280] = '\0';
      param_1[0x64281] = '\0';
      param_1[0x64282] = '\0';
      param_1[0x64283] = '\0';
      param_1[0x64284] = '\0';
      param_1[0x64285] = '\0';
      param_1[0x64286] = '\0';
      param_1[0x64287] = '\0';
      param_1[0x64268] = '\0';
      param_1[0x64269] = '\0';
      param_1[0x6426a] = '\0';
      param_1[0x6426b] = '\0';
      param_1[0x6426c] = '\0';
      param_1[0x6426d] = '\0';
      param_1[0x6426e] = '\0';
      param_1[0x6426f] = '\0';
      param_1[0x64270] = '\0';
      param_1[0x64271] = '\0';
      param_1[0x64272] = '\0';
      param_1[0x64273] = '\0';
      param_1[0x64274] = '\0';
      param_1[0x64275] = '\0';
      param_1[0x64276] = '\0';
      param_1[0x64277] = '\0';
      param_1[0x64258] = '\0';
      param_1[0x64259] = '\0';
      param_1[0x6425a] = '\0';
      param_1[0x6425b] = '\0';
      param_1[0x6425c] = '\0';
      param_1[0x6425d] = '\0';
      param_1[0x6425e] = '\0';
      param_1[0x6425f] = '\0';
      param_1[0x64260] = '\0';
      param_1[0x64261] = '\0';
      param_1[0x64262] = '\0';
      param_1[0x64263] = '\0';
      param_1[0x64264] = '\0';
      param_1[0x64265] = '\0';
      param_1[0x64266] = '\0';
      param_1[0x64267] = '\0';
      param_1[0x64248] = '\0';
      param_1[0x64249] = '\0';
      param_1[0x6424a] = '\0';
      param_1[0x6424b] = '\0';
      param_1[0x6424c] = '\0';
      param_1[0x6424d] = '\0';
      param_1[0x6424e] = '\0';
      param_1[0x6424f] = '\0';
      param_1[0x64250] = '\0';
      param_1[0x64251] = '\0';
      param_1[0x64252] = '\0';
      param_1[0x64253] = '\0';
      param_1[0x64254] = '\0';
      param_1[0x64255] = '\0';
      param_1[0x64256] = '\0';
      param_1[0x64257] = '\0';
      param_1[0x64238] = '\0';
      param_1[0x64239] = '\0';
      param_1[0x6423a] = '\0';
      param_1[0x6423b] = '\0';
      param_1[0x6423c] = '\0';
      param_1[0x6423d] = '\0';
      param_1[0x6423e] = '\0';
      param_1[0x6423f] = '\0';
      param_1[0x64240] = '\0';
      param_1[0x64241] = '\0';
      param_1[0x64242] = '\0';
      param_1[0x64243] = '\0';
      param_1[0x64244] = '\0';
      param_1[0x64245] = '\0';
      param_1[0x64246] = '\0';
      param_1[0x64247] = '\0';
      param_1[0x64228] = '\0';
      param_1[0x64229] = '\0';
      param_1[0x6422a] = '\0';
      param_1[0x6422b] = '\0';
      param_1[0x6422c] = '\0';
      param_1[0x6422d] = '\0';
      param_1[0x6422e] = '\0';
      param_1[0x6422f] = '\0';
      param_1[0x64230] = '\0';
      param_1[0x64231] = '\0';
      param_1[0x64232] = '\0';
      param_1[0x64233] = '\0';
      param_1[0x64234] = '\0';
      param_1[0x64235] = '\0';
      param_1[0x64236] = '\0';
      param_1[0x64237] = '\0';
      param_1[0x64218] = '\0';
      param_1[0x64219] = '\0';
      param_1[0x6421a] = '\0';
      param_1[0x6421b] = '\0';
      param_1[0x6421c] = '\0';
      param_1[0x6421d] = '\0';
      param_1[0x6421e] = '\0';
      param_1[0x6421f] = '\0';
      param_1[0x64220] = '\0';
      param_1[0x64221] = '\0';
      param_1[0x64222] = '\0';
      param_1[0x64223] = '\0';
      param_1[0x64224] = '\0';
      param_1[0x64225] = '\0';
      param_1[0x64226] = '\0';
      param_1[0x64227] = '\0';
      param_1[0x64208] = '\0';
      param_1[0x64209] = '\0';
      param_1[0x6420a] = '\0';
      param_1[0x6420b] = '\0';
      param_1[0x6420c] = '\0';
      param_1[0x6420d] = '\0';
      param_1[0x6420e] = '\0';
      param_1[0x6420f] = '\0';
      param_1[0x64210] = '\0';
      param_1[0x64211] = '\0';
      param_1[0x64212] = '\0';
      param_1[0x64213] = '\0';
      param_1[0x64214] = '\0';
      param_1[0x64215] = '\0';
      param_1[0x64216] = '\0';
      param_1[0x64217] = '\0';
      param_1[0x641f8] = '\0';
      param_1[0x641f9] = '\0';
      param_1[0x641fa] = '\0';
      param_1[0x641fb] = '\0';
      param_1[0x641fc] = '\0';
      param_1[0x641fd] = '\0';
      param_1[0x641fe] = '\0';
      param_1[0x641ff] = '\0';
      param_1[0x64200] = '\0';
      param_1[0x64201] = '\0';
      param_1[0x64202] = '\0';
      param_1[0x64203] = '\0';
      param_1[0x64204] = '\0';
      param_1[0x64205] = '\0';
      param_1[0x64206] = '\0';
      param_1[0x64207] = '\0';
      param_1[0x641e8] = '\0';
      param_1[0x641e9] = '\0';
      param_1[0x641ea] = '\0';
      param_1[0x641eb] = '\0';
      param_1[0x641ec] = '\0';
      param_1[0x641ed] = '\0';
      param_1[0x641ee] = '\0';
      param_1[0x641ef] = '\0';
      param_1[0x641f0] = '\0';
      param_1[0x641f1] = '\0';
      param_1[0x641f2] = '\0';
      param_1[0x641f3] = '\0';
      param_1[0x641f4] = '\0';
      param_1[0x641f5] = '\0';
      param_1[0x641f6] = '\0';
      param_1[0x641f7] = '\0';
      if (*(long *)(param_1 + 0x6f4e8) != 0) {
        *(undefined8 *)(*(long *)(param_1 + 0x6f4e8) + 0x15d8) = 0;
      }
    }
    else {
      bVar3 = 0;
      if ((byte)(*pbVar2 + 1) < 5) {
        bVar3 = *pbVar2 + 1;
      }
      *pbVar2 = bVar3;
      sVar7 = FUN_0012d2b0(param_1,param_1 + (ulong)bVar3 * 0x160 + 0x61f10);
      if (sVar7 < 0) {
        return (int)sVar7;
      }
      if ((byte)param_1[0x62751] < 5) {
        param_1[0x62751] = param_1[0x62751] + 1;
      }
    }
    uVar6 = (int)uVar20 - 1;
    uVar20 = (ulong)uVar6;
    local_70 = local_70 + 0x88;
  } while ((uVar6 & 0xffff) != 0);
LAB_0012d29c:
  FUN_0011bcc0(param_1);
  return 0;
}

