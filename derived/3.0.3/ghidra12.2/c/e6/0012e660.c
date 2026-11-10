
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0012e660(long param_1,undefined8 param_2,byte *param_3,void *param_4,undefined8 *param_5)

{
  ushort uVar1;
  char *pcVar2;
  ushort *puVar3;
  long *plVar4;
  uint *puVar5;
  short *psVar6;
  void *__src;
  undefined8 *puVar7;
  long lVar8;
  ushort uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ushort uVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  ushort uVar16;
  ushort uVar17;
  short sVar18;
  ushort uVar19;
  undefined2 uVar20;
  uint uVar21;
  long lVar22;
  undefined4 *puVar23;
  ulong uVar24;
  ulong uVar25;
  long *plVar26;
  long lVar27;
  char *pcVar28;
  uint uVar29;
  undefined1 uVar30;
  ushort uVar31;
  undefined4 uVar32;
  uint uVar33;
  byte *pbVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  ushort *puVar39;
  long lVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  int iVar45;
  byte *pbVar46;
  ulong uVar47;
  uint local_11c;
  undefined1 auStack_104 [4];
  void *local_100;
  undefined8 local_f8;
  undefined1 auStack_ec [4];
  long local_e8 [14];
  ushort local_78;
  undefined1 local_74;
  undefined2 local_68;
  
  if (param_1 == 0) {
    uVar47 = 0xae50;
  }
  else if ((*(long *)(param_1 + 0x6fb50) == 0) ||
          (pcVar2 = (char *)(param_1 + 0x6f4f8), *(long *)(param_1 + 0x6fb58) == 0)) {
    uVar47 = 0x8850;
  }
  else if (param_4 == (void *)0x0) {
    uVar47 = 0x8550;
  }
  else {
    puVar3 = (ushort *)(param_1 + 0x6d640);
    plVar4 = (long *)(param_1 + 0x6c640);
    puVar5 = (uint *)(param_1 + 0x61e28);
    if (param_3 == (byte *)0x0) {
      if (*(long *)(param_1 + 0x6d630) == 0) {
        if ((*(byte *)(param_1 + 0x6d640) >> 2 & 1) != 0) {
          return 0x9c50;
        }
        pbVar34 = (byte *)(param_1 + 0x6f558);
        lVar37 = 0x14;
        do {
          lVar36 = *(long *)(pbVar34 + -0x48);
          if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) &&
             (1 < *pbVar34 - 1)) {
            if (*pbVar34 == 3) {
              uVar33 = *(uint *)(lVar36 + 0x70);
            }
            else {
              uVar33 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                       (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
              uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
            }
            if ((uVar33 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
              *(undefined2 *)(lVar40 + 0x1fe0) = 0;
            }
          }
          pbVar34 = pbVar34 + 0x50;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        return 0x9c50;
      }
      local_11c = FUN_001003e0();
    }
    else {
      if (param_5 == (undefined8 *)0x0) {
        *(undefined2 *)(param_1 + 0x6d644) = 100;
        *(undefined4 *)(param_1 + 0x6d648) = 0x3700;
        *(undefined4 *)(param_1 + 0x6d640) = 0x1e0702;
      }
      else {
        if (300 < *(ushort *)((long)param_5 + 2)) {
          return 0xa950;
        }
        if (300 < *(ushort *)((long)param_5 + 4)) {
          return 0xa950;
        }
        if (*(ushort *)((long)param_5 + 4) < *(ushort *)((long)param_5 + 2)) {
          return 0xa950;
        }
        if (*(byte *)((long)param_5 + 9) < *(byte *)(param_5 + 1)) {
          return 0xb250;
        }
        if (0x37 < *(byte *)(param_5 + 1)) {
          return 0xb250;
        }
        if (0x37 < *(byte *)((long)param_5 + 9)) {
          return 0xb250;
        }
        if (0x37 < *(byte *)((long)param_5 + 10)) {
          return 0xc050;
        }
        uVar35 = *param_5;
        *(undefined4 *)(param_1 + 0x6d648) = *(undefined4 *)(param_5 + 1);
        *(undefined8 *)(param_1 + 0x6d640) = uVar35;
      }
      local_11c = FUN_001003e0(param_3);
      if (0x37 < (local_11c & 0xffff)) {
        return 0x8250;
      }
      if (*plVar4 != param_1 + 0x6f510) {
        plVar26 = (long *)(param_1 + 0x6f550);
        lVar37 = 0x14;
        do {
          if ((plVar26[-8] != 0) && (*plVar26 != 0)) {
            *(undefined1 *)(*plVar26 + 0x2050) = 0;
            *(undefined1 *)(*plVar26 + 0x2051) = 0;
            *(undefined2 *)(*plVar26 + 0x1fe0) = 0;
            *(undefined2 *)(*plVar26 + 0x1fe2) = 0;
          }
          plVar26 = plVar26 + 10;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
        *(undefined4 *)(param_1 + 0x6fb6c) = 0;
      }
      *plVar4 = param_1 + 0x6f510;
      FUN_0010d850(param_1 + 0x6cd18);
      *(byte **)(param_1 + 0x6cd48) = param_3;
      *(short *)(param_1 + 0x6cd64) = (short)local_11c;
      *(undefined8 *)(param_1 + 0x6cd58) = param_2;
      *(undefined1 *)(param_1 + 0x6cd69) = 0;
      *(undefined2 *)(param_1 + 0x6d63a) = 0;
      *(byte **)(param_1 + 0x6d630) = param_3;
      *(short *)(param_1 + 0x6f4a4) = (short)local_11c;
      *(undefined4 *)(param_1 + 0x6f4a0) = 0;
      *(undefined2 *)(param_1 + 0x6f4a6) = 0;
      *(ushort *)(param_1 + 0x6f4a8) = (ushort)*(byte *)(param_1 + 0x62751);
      *(undefined2 *)(param_1 + 0x6fb68) = 1;
      pbVar34 = (byte *)(param_1 + 0x6fb6c);
      sVar18 = FUN_001004d0(param_3);
      *(short *)(param_1 + 0x6cd66) = sVar18;
      if (sVar18 == 0) {
LAB_0012fda4:
        uVar16 = 0;
      }
      else {
        pbVar46 = pbVar34;
        uVar17 = 0;
        do {
          uVar16 = uVar17;
          sVar18 = FUN_00100530(param_3,pbVar46,1);
          if (sVar18 != 0) {
            if (uVar16 == 0) goto LAB_0012fda4;
            uVar16 = uVar16 + 1;
            goto LAB_0012fda8;
          }
          if ((*param_3 & 0xfc) == 0xd8) {
            lVar37 = 1;
            if (*(short *)(param_3 + 2) != 0) {
              lVar37 = 2;
            }
          }
          else {
            lVar37 = 1;
          }
          param_3 = param_3 + lVar37 * 2;
          if ((*pbVar46 & 0xfc) == 0xd8) {
            lVar37 = 1;
            if (*(short *)(pbVar46 + 2) != 0) {
              lVar37 = 2;
            }
          }
          else {
            lVar37 = 1;
          }
          pbVar46 = pbVar46 + lVar37 * 2;
          uVar17 = uVar16 + 1;
        } while ((ushort)(uVar16 + 1) < *(ushort *)(param_1 + 0x6cd66));
        uVar16 = uVar16 + 2;
      }
LAB_0012fda8:
      uVar19 = FUN_001004d0(pbVar34);
      uVar17 = *(ushort *)(param_1 + 0x6cd66);
      if (*(ushort *)(param_1 + 0x6cd66) <= uVar19) {
        uVar17 = uVar19;
      }
      uVar1 = uVar17 + 1;
      uVar47 = 0;
      do {
        lVar37 = param_1 + uVar47 * 0x50;
        plVar26 = (long *)(lVar37 + 0x6f510);
        lVar37 = *(long *)(lVar37 + 0x6f550);
        if (lVar37 != 0 && *plVar26 != 0) {
          pbVar46 = (byte *)(lVar37 + 0x2050);
          if ((*pbVar46 & 1) == 0) {
            if (uVar16 < uVar1) {
              memset((void *)(lVar37 + (ulong)uVar16 * 2 + 0x1fe0),0,
                     (ulong)(ushort)(uVar17 - uVar16) * 2 + 2);
            }
            if (1 < uVar1) {
              uVar31 = 1;
              do {
                lVar36 = lVar37 + (ulong)uVar31 * 2;
                uVar12 = *(ushort *)(lVar36 + 0x1fe0);
                if (uVar12 < *(ushort *)(lVar36 + 0x1fde) && uVar12 != 0) {
                  if ((*(byte *)(param_1 + 0x6d640) >> 2 & 1) != 0) {
                    return 0xad50;
                  }
                  pbVar34 = (byte *)(param_1 + 0x6f558);
                  lVar37 = 0x14;
                  do {
                    lVar36 = *(long *)(pbVar34 + -0x48);
                    if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) &&
                       (1 < *pbVar34 - 1)) {
                      if (*pbVar34 == 3) {
                        uVar33 = *(uint *)(lVar36 + 0x70);
                      }
                      else {
                        uVar33 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                                 (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
                        uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
                      }
                      if ((uVar33 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
                        *(undefined2 *)(lVar40 + 0x1fe0) = 0;
                      }
                    }
                    pbVar34 = pbVar34 + 0x50;
                    lVar37 = lVar37 + -1;
                  } while (lVar37 != 0);
                  return 0xad50;
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 < uVar1);
            }
          }
          else {
            if (uVar19 == 0) {
              uVar31 = 0;
            }
            else {
              uVar31 = 0;
              do {
                lVar36 = lVar37 + (ulong)uVar31 * 2;
                if (*(short *)(lVar36 + 0x1fe0) == *(short *)(lVar36 + 0x1fe2)) break;
                uVar31 = uVar31 + 1;
              } while (uVar31 < uVar19);
            }
            uVar12 = uVar16;
            if ((ushort)(uVar31 + 1) < uVar16) {
              uVar12 = uVar31 + 1;
            }
            if (uVar12 < uVar1) {
              uVar9 = ~uVar16;
              if ((ushort)~uVar16 <= (ushort)(-uVar31 - 2)) {
                uVar9 = -uVar31 - 2;
              }
              memset((void *)(lVar37 + (ulong)uVar12 * 2 + 0x1fe0),0,
                     (ulong)(ushort)(uVar1 + uVar9) * 2 + 2);
            }
            if (1 < uVar1) {
              uVar31 = 1;
              do {
                lVar36 = lVar37 + (ulong)uVar31 * 2;
                uVar12 = *(ushort *)(lVar36 + 0x1fe0);
                if (uVar12 < *(ushort *)(lVar36 + 0x1fde) && uVar12 != 0) {
                  if ((*(byte *)(param_1 + 0x6d640) >> 2 & 1) != 0) {
                    return 0xad50;
                  }
                  pbVar34 = (byte *)(param_1 + 0x6f558);
                  lVar37 = 0x14;
                  do {
                    lVar36 = *(long *)(pbVar34 + -0x48);
                    if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) &&
                       (1 < *pbVar34 - 1)) {
                      if (*pbVar34 == 3) {
                        uVar33 = *(uint *)(lVar36 + 0x70);
                      }
                      else {
                        uVar33 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                                 (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
                        uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
                      }
                      if ((uVar33 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
                        *(undefined2 *)(lVar40 + 0x1fe0) = 0;
                      }
                    }
                    pbVar34 = pbVar34 + 0x50;
                    lVar37 = lVar37 + -1;
                  } while (lVar37 != 0);
                  return 0xad50;
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 < uVar1);
            }
            *pbVar46 = *pbVar46 & 0xfe;
          }
          if (((*(byte *)(param_1 + 0x6d640) >> 2 & 1) == 0) &&
             (uVar33 = (uint)*(byte *)(param_1 + uVar47 * 0x50 + 0x6f558), 1 < uVar33 - 1)) {
            lVar36 = *plVar26;
            if (uVar33 == 3) {
              uVar33 = *(uint *)(lVar36 + 0x70);
            }
            else {
              uVar33 = *(uint *)(lVar36 + 8);
              uVar33 = (uVar33 & 0xff00ff00) >> 8 | (uVar33 & 0xff00ff) << 8;
              uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
            }
            if (uVar33 == 0x80020000) {
              *(undefined2 *)(lVar37 + 0x1fe0) = 0xffff;
            }
          }
        }
        uVar47 = uVar47 + 1;
      } while (uVar47 < 0x14);
      FUN_00100350(pbVar34,*(undefined8 *)(param_1 + 0x6cd48));
      FUN_00131aa0(param_1);
      FUN_00105ae0(param_1);
      if ((local_11c & 0xffff) == 0) {
        *(undefined4 *)(param_1 + 0x641e8) = 0;
        sVar18 = *(short *)(param_1 + 0x6f4a8);
        do {
          if (sVar18 < 1) {
            if (0 < *(short *)(param_1 + 0x702bc)) {
              uVar20 = FUN_0011f660(*(undefined8 *)(param_1 + 0x6fb58),3);
              *(undefined2 *)(param_1 + 0x6d638) = uVar20;
              *(undefined8 *)(param_1 + 0x6cd50) = *(undefined8 *)(param_1 + 0x6cd48);
              goto LAB_00130380;
            }
            *(undefined2 *)(param_1 + 0x6d63a) = 10;
            *(undefined4 *)(param_1 + 0x6f4a0) = 0xffff;
            if ((*(byte *)(param_1 + 0x6d640) >> 2 & 1) == 0) {
              pbVar34 = (byte *)(param_1 + 0x6f558);
              lVar37 = 0x14;
              do {
                lVar36 = *(long *)(pbVar34 + -0x48);
                if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) &&
                   (1 < *pbVar34 - 1)) {
                  if (*pbVar34 == 3) {
                    uVar33 = *(uint *)(lVar36 + 0x70);
                  }
                  else {
                    uVar33 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                             (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
                    uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
                  }
                  if ((uVar33 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
                    *(undefined2 *)(lVar40 + 0x1fe0) = 0;
                  }
                }
                pbVar34 = pbVar34 + 0x50;
                lVar37 = lVar37 + -1;
              } while (lVar37 != 0);
              return 0;
            }
            goto LAB_00130a18;
          }
          puVar23 = (undefined4 *)FUN_0012db90(param_1,(int)sVar18,0);
          sVar18 = *(short *)(param_1 + 0x6f4a8) + -1;
          *(short *)(param_1 + 0x6f4a8) = sVar18;
        } while (puVar23 == (undefined4 *)0x0);
        *(undefined2 *)(param_1 + 0x6d638) = *(undefined2 *)((long)puVar23 + 6);
        *(undefined4 **)(param_1 + 0x6cd48) = puVar23 + 3;
        *(ushort *)(param_1 + 0x6cd64) = (ushort)*(byte *)(puVar23 + 0x57);
        *(undefined4 **)(param_1 + 0x6cd50) = puVar23 + 0x1f;
        *(undefined4 *)(param_1 + 0x6cd60) = *puVar23;
LAB_00130380:
        *(undefined1 *)(param_1 + 0x6d63c) = 2;
        sVar18 = FUN_0011d6b0(param_1,0x37,1);
        uVar33 = (uint)sVar18;
        if ((int)uVar33 < 0) {
          if ((*(byte *)(param_1 + 0x6d640) >> 2 & 1) != 0) {
            return (ulong)uVar33;
          }
          pbVar34 = (byte *)(param_1 + 0x6f558);
          lVar37 = 0x14;
          do {
            lVar36 = *(long *)(pbVar34 + -0x48);
            if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) &&
               (1 < *pbVar34 - 1)) {
              if (*pbVar34 == 3) {
                uVar21 = *(uint *)(lVar36 + 0x70);
              }
              else {
                uVar21 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                         (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
              }
              if ((uVar21 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
                *(undefined2 *)(lVar40 + 0x1fe0) = 0;
              }
            }
            pbVar34 = pbVar34 + 0x50;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          return (ulong)uVar33;
        }
      }
      else {
        puVar23 = (undefined4 *)FUN_0012db90(param_1,0,0);
        if (puVar23 == (undefined4 *)0x0) {
          if (((*(ushort *)(param_1 + 0x6d640) >> 8 & 1) == 0) ||
             (*(short *)(param_1 + 0x702bc) < 1)) {
            *(undefined2 *)(param_1 + 0x6d638) = 0;
            *(ushort *)(param_1 + 0x6d640) = *(ushort *)(param_1 + 0x6d640) & 0xfeff;
          }
          else {
            uVar20 = FUN_0011f660(*(undefined8 *)(param_1 + 0x6fb58),3);
            *(undefined2 *)(param_1 + 0x6d638) = uVar20;
          }
        }
        else {
          *(undefined2 *)(param_1 + 0x6d638) = *(undefined2 *)((long)puVar23 + 6);
          *(undefined4 *)(param_1 + 0x6cd60) = *puVar23;
        }
        *(undefined1 *)(param_1 + 0x6d63c) = 1;
        sVar18 = FUN_0011d6b0(param_1,0x37,1);
        uVar33 = (uint)sVar18;
        if ((int)uVar33 < 0) {
          if ((*(byte *)(param_1 + 0x6d640) >> 2 & 1) != 0) {
            return (ulong)uVar33;
          }
          pbVar34 = (byte *)(param_1 + 0x6f558);
          lVar37 = 0x14;
          do {
            lVar36 = *(long *)(pbVar34 + -0x48);
            if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) &&
               (1 < *pbVar34 - 1)) {
              if (*pbVar34 == 3) {
                uVar21 = *(uint *)(lVar36 + 0x70);
              }
              else {
                uVar21 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                         (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
                uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
              }
              if ((uVar21 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
                *(undefined2 *)(lVar40 + 0x1fe0) = 0;
              }
            }
            pbVar34 = pbVar34 + 0x50;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          return (ulong)uVar33;
        }
      }
      *(undefined1 *)(param_1 + 0x6cd68) = *(undefined1 *)(param_1 + 0x6d63c);
      FUN_00130a70(param_1);
      if ((*(ushort *)(param_1 + 0x6d63a) - 1 < 4) && (*(short *)(param_1 + 0x6d644) == 0)) {
        FUN_00130a70(param_1);
        *(undefined2 *)(param_1 + 0x6f4a0) = 0;
      }
      if (((*(byte *)(param_1 + 0x6f4b2) >> 2 & 1) != 0) &&
         (uVar33 = *(uint *)(param_1 + 0x61e2c), uVar33 != 0)) {
        if ((*(char *)(param_1 + 0x6d648) == '\0') && (*(char *)(param_1 + 0x6d649) == '7')) {
          uVar47 = 0;
          pcVar28 = (char *)(param_1 + 0x60833);
          do {
            if ((*pcVar28 == '\0') && (pcVar28[-1] != '\0')) {
              if (*(ushort *)(param_1 + 0x6cd64) == (ushort)(byte)pcVar28[-3]) {
                *(undefined4 *)(param_1 + 0x61e2c) = 0;
                if (((uint)uVar47 & 0xff) < 0x28) {
                  uVar38 = 0x28;
                  do {
                    if (*pcVar28 != '\x01') {
                      pcVar28[-1] = '\0';
                    }
                    uVar38 = uVar38 - 1;
                    pcVar28 = pcVar28 + 0x90;
                  } while (uVar47 != uVar38);
                }
                goto LAB_0012e758;
              }
              break;
            }
            uVar47 = uVar47 + 1;
            pcVar28 = pcVar28 + 0x90;
          } while (uVar47 < 0x28);
        }
        uVar21 = 0;
        uVar29 = 0;
        lVar37 = 0x28;
        pcVar28 = (char *)(param_1 + 0x60832);
        do {
          while (cVar15 = *pcVar28, cVar15 == '\0') {
LAB_00130578:
            lVar37 = lVar37 + -1;
            pcVar28 = pcVar28 + 0x90;
            if (lVar37 == 0) goto LAB_00130584;
          }
          if (pcVar28[1] != '\x01') {
            uVar29 = uVar29 + 1;
            *pcVar28 = cVar15 + 'd';
            goto LAB_00130578;
          }
          *pcVar28 = cVar15 + -0x38;
          uVar21 = uVar21 + 1;
          lVar37 = lVar37 + -1;
          pcVar28 = pcVar28 + 0x90;
        } while (lVar37 != 0);
LAB_00130584:
        if (uVar33 != (uVar29 & 0xff)) {
          *(uint *)(param_1 + 0x61e2c) = uVar29 & 0xff;
        }
        if (*puVar5 != (uVar21 & 0xff)) {
          *puVar5 = uVar21 & 0xff;
        }
        uVar33 = 0;
        uVar47 = 0;
        uVar38 = 0;
        bVar44 = 100;
        bVar41 = 200;
        do {
          if (bVar41 == 0xff) {
            bVar43 = 0xff;
LAB_001306c8:
            bVar41 = bVar43;
            if (bVar44 == 0xff) goto LAB_00130630;
LAB_001306d4:
            if ((uVar33 == 0) ||
               (uVar25 = uVar38 & 0xff, *(byte *)(param_1 + uVar25 * 0x90 + 0x60832) != bVar44)) {
              bVar43 = 0xff;
              lVar37 = 1;
              pcVar28 = (char *)(param_1 + 0x608c3);
              do {
                while( true ) {
                  uVar21 = (uint)lVar37;
                  bVar42 = bVar43;
                  if (pcVar28[-0x90] == '\0') {
                    bVar42 = pcVar28[-0x91];
                    uVar29 = uVar21 - 1;
                    if (bVar42 <= bVar44 || bVar43 <= bVar42) {
                      uVar29 = (uint)uVar38;
                    }
                    uVar38 = (ulong)uVar29;
                    if (bVar42 <= bVar44 || bVar43 <= bVar42) {
                      bVar42 = bVar43;
                    }
                  }
                  bVar43 = bVar42;
                  if (*pcVar28 == '\0') break;
                  lVar37 = lVar37 + 2;
                  pcVar28 = pcVar28 + 0x120;
                  if (lVar37 == 0x29) goto LAB_00130780;
                }
                bVar42 = pcVar28[-1];
                if (bVar42 <= bVar44 || bVar43 <= bVar42) {
                  uVar21 = (uint)uVar38;
                }
                uVar38 = (ulong)uVar21;
                if (bVar42 <= bVar44 || bVar43 <= bVar42) {
                  bVar42 = bVar43;
                }
                bVar43 = bVar42;
                lVar37 = lVar37 + 2;
                pcVar28 = pcVar28 + 0x120;
              } while (lVar37 != 0x29);
LAB_00130780:
              if ((bVar43 & bVar41) != 0xff) goto LAB_00130790;
              break;
            }
            uVar24 = uVar25;
            if (bVar41 != 0xff) goto LAB_001307b0;
          }
          else {
            if ((uVar33 == 0) || (*(byte *)(param_1 + (uVar47 & 0xff) * 0x90 + 0x60832) != bVar41))
            {
              bVar43 = 0xff;
              lVar37 = 1;
              pcVar28 = (char *)(param_1 + 0x608c3);
              do {
                uVar21 = (uint)lVar37;
                bVar42 = bVar43;
                if (pcVar28[-0x90] == '\x01') {
                  bVar42 = pcVar28[-0x91];
                  uVar29 = uVar21 - 1;
                  if (bVar42 <= bVar41 || bVar43 <= bVar42) {
                    uVar29 = (uint)uVar47;
                  }
                  uVar47 = (ulong)uVar29;
                  if (bVar42 <= bVar41 || bVar43 <= bVar42) {
                    bVar42 = bVar43;
                  }
                }
                bVar43 = bVar42;
                if (*pcVar28 == '\x01') {
                  bVar43 = pcVar28[-1];
                  if (bVar43 <= bVar41 || bVar42 <= bVar43) {
                    uVar21 = (uint)uVar47;
                  }
                  uVar47 = (ulong)uVar21;
                  if (bVar43 <= bVar41 || bVar42 <= bVar43) {
                    bVar43 = bVar42;
                  }
                }
                lVar37 = lVar37 + 2;
                pcVar28 = pcVar28 + 0x120;
              } while (lVar37 != 0x29);
              goto LAB_001306c8;
            }
            if (bVar44 != 0xff) goto LAB_001306d4;
LAB_00130630:
            bVar43 = 0xff;
            if (bVar41 == 0xff) break;
LAB_00130790:
            bVar44 = bVar43;
            if (bVar41 == 0xff) {
              uVar25 = uVar38 & 0xff;
            }
            else if (bVar43 == 0xff) {
              uVar25 = uVar47 & 0xff;
              bVar44 = 0xff;
            }
            else {
              uVar24 = uVar38 & 0xff;
LAB_001307b0:
              uVar25 = uVar47 & 0xff;
              if (*(short *)(param_1 + 0x607a8 + (uVar47 & 0xff) * 0x90 + 8) <=
                  *(short *)(param_1 + 0x607a8 + uVar24 * 0x90 + 8)) {
                uVar25 = uVar24;
              }
            }
          }
          lVar37 = param_1 + uVar25 * 0x90;
          uVar33 = uVar33 + 1;
          *(undefined1 *)(lVar37 + 0x60833) = 1;
          *(char *)(lVar37 + 0x60832) = (char)uVar33;
        } while (uVar33 < 0x14);
        *puVar5 = uVar33;
        lVar37 = param_1 + 0x60833;
        lVar36 = 0x28;
        do {
          if (0x14 < *(byte *)(lVar37 + -1)) {
            *(undefined2 *)(lVar37 + -1) = 0;
          }
          lVar37 = lVar37 + 0x90;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
        *(undefined4 *)(param_1 + 0x61e2c) = 0;
      }
    }
LAB_0012e758:
    psVar6 = (short *)(param_1 + 0x6f4a0);
    __src = (void *)(param_1 + 0x6d760);
    puVar7 = (undefined8 *)(param_1 + 0x6cd18);
    lVar37 = param_1 + 0x6cd28;
    lVar36 = param_1 + 0x6cd30;
    lVar40 = param_1 + 0x6c648;
    lVar8 = param_1 + 0x6cd34;
    uVar33 = 1;
LAB_0012e7f8:
    do {
      sVar18 = 0;
      switch(*(undefined2 *)(param_1 + 0x6d63a)) {
      case 1:
        lVar27 = *(long *)(param_1 + 0x6f4e8);
        if (lVar27 != 0) {
          FUN_0011f730(*(undefined8 *)(*plVar4 + 0x648),*(undefined2 *)(param_1 + 0x6d638),0,lVar37)
          ;
          FUN_0011f7e0(*(undefined8 *)(*plVar4 + 0x648),lVar36,lVar8);
          *(undefined2 *)(param_1 + 0x6cd38) = *(undefined2 *)(param_1 + 0x6d638);
          FUN_001314d0(param_1,lVar40,*plVar4,1,*(undefined2 *)(param_1 + 0x6cd66),puVar3);
          *(long *)(param_1 + 0x6cd40) = lVar40;
          *(undefined4 *)(lVar27 + 0x15d8) = 0;
          if (*(char *)(param_1 + 0x62751) != '\0') {
            uVar21 = 1;
            while (lVar22 = FUN_0012db90(param_1,uVar21,1), lVar22 != 0) {
              *(undefined2 *)(param_1 + 0x6d638) = *(undefined2 *)(lVar22 + 6);
              *(long *)(param_1 + 0x6cd48) = lVar22 + 0xc;
              *(ushort *)(param_1 + 0x6cd64) = (ushort)*(byte *)(lVar22 + 0x15c);
              *(long *)(param_1 + 0x6cd50) = lVar22 + 0x7c;
              sVar18 = FUN_00109f40(param_1,puVar7,1,local_e8);
              uVar29 = (uint)sVar18;
              uVar47 = (ulong)uVar29;
              if ((int)uVar29 < 0) goto LAB_0012ec60;
              if (uVar29 != 0) {
                sVar18 = FUN_0010a610(param_1,puVar7,lVar27,1);
                uVar29 = (uint)sVar18;
                if ((int)uVar29 < 1) {
                  iVar45 = 0;
joined_r0x0012ec1c:
                  uVar47 = (ulong)uVar29;
                  if ((int)uVar29 < 0) goto LAB_0012ec60;
LAB_0012ebf0:
                  if (iVar45 == 0) goto LAB_0012ebf4;
                }
                else {
                  *(undefined1 *)(lVar27 + 0x80) = 0x42;
                  iVar45 = 1;
                  sVar18 = FUN_0010a610(param_1,puVar7,lVar27 + 0x178,1);
                  uVar29 = (uint)sVar18;
                  if ((int)uVar29 < 1) {
joined_r0x0012ebec:
                    uVar47 = (ulong)uVar29;
                    if (-1 < (int)uVar29) goto LAB_0012ebf0;
                    goto LAB_0012ec60;
                  }
                  *(undefined1 *)(lVar27 + 0x1f8) = 0x42;
                  sVar18 = FUN_0010a610(param_1,puVar7,lVar27 + 0x2f0,1);
                  uVar29 = (uint)sVar18;
                  if ((int)uVar29 < 1) {
                    iVar45 = 2;
                    goto joined_r0x0012ebec;
                  }
                  *(undefined1 *)(lVar27 + 0x370) = 0x42;
                  sVar18 = FUN_0010a610(param_1,puVar7,lVar27 + 0x468,1);
                  uVar29 = (uint)sVar18;
                  if ((int)uVar29 < 1) {
                    iVar45 = 3;
                    goto joined_r0x0012ec1c;
                  }
                  *(undefined1 *)(lVar27 + 0x4e8) = 0x42;
                  sVar18 = FUN_0010a610(param_1,puVar7,lVar27 + 0x5e0,1);
                  uVar29 = (uint)sVar18;
                  if ((int)uVar29 < 1) {
                    iVar45 = 4;
                    goto joined_r0x0012ebec;
                  }
                  *(undefined1 *)(lVar27 + 0x660) = 0x42;
                  sVar18 = FUN_0010a610(param_1,puVar7,lVar27 + 0x758,1);
                  uVar29 = (uint)sVar18;
                  if ((int)uVar29 < 1) {
                    iVar45 = 5;
                    goto joined_r0x0012ebec;
                  }
                  *(undefined1 *)(lVar27 + 0x7d8) = 0x42;
                  sVar18 = FUN_0010a610(param_1,puVar7,lVar27 + 0x8d0,1);
                  uVar29 = (uint)sVar18;
                  if ((int)uVar29 < 1) {
                    iVar45 = 6;
                    goto joined_r0x0012ebec;
                  }
                  *(undefined1 *)(lVar27 + 0x950) = 0x42;
                  sVar18 = FUN_0010a610(param_1,puVar7,lVar27 + 0xa48,1);
                  uVar29 = (uint)sVar18;
                  if ((int)uVar29 < 1) {
                    iVar45 = 7;
                    goto joined_r0x0012ebec;
                  }
                  *(undefined1 *)(lVar27 + 0xac8) = 0x42;
                  sVar18 = FUN_0010a610(param_1,puVar7,lVar27 + 0xbc0,1);
                  uVar29 = (uint)sVar18;
                  if ((int)uVar29 < 1) {
                    iVar45 = 8;
                    goto joined_r0x0012ebec;
                  }
                  *(undefined1 *)(lVar27 + 0xc40) = 0x42;
                  sVar18 = FUN_0010a610(param_1,puVar7,lVar27 + 0xd38,1);
                  uVar29 = (uint)sVar18;
                  if ((int)uVar29 < 1) {
                    iVar45 = 9;
                    goto joined_r0x0012ec1c;
                  }
                  *(undefined1 *)(lVar27 + 0xdb8) = 0x42;
                  iVar45 = 10;
                }
                uVar35 = *puVar7;
                uVar10 = *(undefined8 *)(param_1 + 0x6cd20);
                *(undefined8 *)(lVar27 + 0xec0) = *(undefined8 *)(param_1 + 0x6cd28);
                *(undefined8 *)(lVar27 + 0xeb8) = uVar10;
                *(undefined8 *)(lVar27 + 0xeb0) = uVar35;
                uVar35 = *(undefined8 *)(param_1 + 0x6cd30);
                uVar11 = *(undefined8 *)(param_1 + 0x6cd38);
                uVar10 = *(undefined8 *)(param_1 + 0x6cd40);
                *(undefined8 *)(lVar27 + 0xee0) = *(undefined8 *)(param_1 + 0x6cd48);
                *(undefined8 *)(lVar27 + 0xed8) = uVar10;
                *(undefined8 *)(lVar27 + 0xed0) = uVar11;
                *(undefined8 *)(lVar27 + 0xec8) = uVar35;
                uVar35 = *(undefined8 *)(param_1 + 0x6cd50);
                uVar11 = *(undefined8 *)(param_1 + 0x6cd58);
                uVar10 = *(undefined8 *)(param_1 + 0x6cd60);
                *(undefined8 *)(lVar27 + 0xf00) = *(undefined8 *)(param_1 + 0x6cd68);
                *(undefined8 *)(lVar27 + 0xef8) = uVar10;
                *(undefined8 *)(lVar27 + 0xef0) = uVar11;
                *(undefined8 *)(lVar27 + 0xee8) = uVar35;
                *(int *)(lVar27 + 0x15d8) = iVar45;
                break;
              }
LAB_0012ebf4:
              if ((2 < uVar21 + 1) ||
                 (bVar14 = *(byte *)(param_1 + 0x62751) <= uVar21, uVar21 = uVar21 + 1, bVar14))
              break;
            }
          }
          uVar17 = (ushort)*(byte *)(param_1 + 0x62751);
          *(ushort *)(param_1 + 0x6f4a8) = (ushort)*(byte *)(param_1 + 0x62751);
          do {
            if ((short)uVar17 < 1) goto LAB_0012f774;
            lVar27 = FUN_0012db90(param_1,(int)(short)uVar17,0);
            uVar17 = *(short *)(param_1 + 0x6f4a8) - 1;
            *(ushort *)(param_1 + 0x6f4a8) = uVar17;
          } while (lVar27 == 0);
          *(undefined2 *)(param_1 + 0x6d638) = *(undefined2 *)(lVar27 + 6);
          *(long *)(param_1 + 0x6cd48) = lVar27 + 0xc;
          *(ushort *)(param_1 + 0x6cd64) = (ushort)*(byte *)(lVar27 + 0x15c);
          *(long *)(param_1 + 0x6cd50) = lVar27 + 0x7c;
        }
        break;
      case 2:
        sVar18 = *(short *)(param_1 + 0x6f4a8);
joined_r0x0012ec7c:
        if (-1 < sVar18) {
          *pcVar2 = '\0';
          if (*psVar6 == 0) {
            FUN_0011f730(*(undefined8 *)(*plVar4 + 0x648),*(undefined2 *)(param_1 + 0x6d638),0,
                         lVar37);
            FUN_0011f7e0(*(undefined8 *)(*plVar4 + 0x648),lVar36,lVar8);
            *(undefined2 *)(param_1 + 0x6cd38) = *(undefined2 *)(param_1 + 0x6d638);
            FUN_001314d0(param_1,lVar40,*plVar4,2,*(undefined2 *)(param_1 + 0x6cd66),puVar3);
            *(long *)(param_1 + 0x6cd40) = lVar40;
            sVar18 = FUN_00109f40(param_1,puVar7,1,local_e8);
            uVar21 = (uint)sVar18;
            uVar47 = (ulong)uVar21;
            if ((int)uVar21 < 0) goto LAB_0012f788;
            if (uVar21 != 0) goto LAB_0012ecfc;
          }
          else {
LAB_0012ecfc:
            sVar18 = FUN_0010a610(param_1,puVar7,param_4,1);
            uVar21 = (uint)sVar18;
            uVar47 = (ulong)uVar21;
            if ((int)uVar21 < 0) goto LAB_0012f788;
            if (uVar21 != 0) {
              *psVar6 = *psVar6 + 1;
              *(undefined1 *)((long)param_4 + 0x80) = 0x42;
              if (*pcVar2 != '\x01') goto LAB_0012f788;
              uVar17 = (ushort)*(byte *)((long)param_4 + 0x81) << 8 | 0xc2;
              goto LAB_0012e918;
            }
          }
          uVar21 = (uint)*(ushort *)(param_1 + 0x6f4a8);
          if (*(ushort *)(param_1 + 0x6f4a8) == 0) {
            uVar21 = 0xffff;
            *(undefined2 *)(param_1 + 0x6f4a8) = 0xffff;
          }
          *psVar6 = 0;
          do {
            sVar18 = (short)uVar21;
            if (sVar18 < 1) goto joined_r0x0012ec7c;
            puVar23 = (undefined4 *)FUN_0012db90(param_1,(int)sVar18,0);
            sVar18 = *(short *)(param_1 + 0x6f4a8) + -1;
            uVar21 = (uint)sVar18;
            *(short *)(param_1 + 0x6f4a8) = sVar18;
          } while (puVar23 == (undefined4 *)0x0);
          uVar20 = *(undefined2 *)((long)puVar23 + 6);
          *(undefined4 **)(param_1 + 0x6cd48) = puVar23 + 3;
          *(undefined2 *)(param_1 + 0x6d638) = uVar20;
          *(ushort *)(param_1 + 0x6cd64) = (ushort)*(byte *)(puVar23 + 0x57);
          *(undefined4 **)(param_1 + 0x6cd50) = puVar23 + 0x1f;
          if ((int)uVar21 < 2) {
            *(undefined4 *)(param_1 + 0x6cd60) = *puVar23;
          }
          goto joined_r0x0012ec7c;
        }
        break;
      case 3:
      case 4:
        *pcVar2 = '\0';
        if (*psVar6 == 0) {
          FUN_0011f730(*(undefined8 *)(*plVar4 + 0x648),*(undefined2 *)(param_1 + 0x6d638),0,lVar37)
          ;
          FUN_0011f7e0(*(undefined8 *)(*plVar4 + 0x648),lVar36,lVar8);
          *(undefined2 *)(param_1 + 0x6cd38) = *(undefined2 *)(param_1 + 0x6d638);
          uVar17 = *(ushort *)(param_1 + 0x6cd66);
          if (*(ushort *)(param_1 + 0x6cd66) <= (ushort)*(byte *)(param_1 + 0x6d648)) {
            uVar17 = (ushort)*(byte *)(param_1 + 0x6d648);
          }
          FUN_001314d0(param_1,lVar40,*plVar4,*(undefined2 *)(param_1 + 0x6d63a),uVar17,puVar3);
          *(long *)(param_1 + 0x6cd40) = lVar40;
          sVar18 = FUN_00109f40(param_1,puVar7,1,local_e8);
          uVar47 = (ulong)(uint)(int)sVar18;
          FUN_00100350(*plVar4 + 0x65c,*(long *)(param_1 + 0x6cd40) + 0x65c);
          if (0 < sVar18) goto LAB_0012e8c4;
LAB_0012eed4:
          uVar21 = (uint)uVar47;
          goto joined_r0x0012f2e0;
        }
LAB_0012e8c4:
        sVar18 = FUN_0010a610(param_1,puVar7,param_4,1);
        uVar47 = (ulong)(uint)(int)sVar18;
        if (sVar18 < 1) goto LAB_0012eed4;
        *psVar6 = *psVar6 + 1;
        *(undefined1 *)((long)param_4 + 0x80) = 2;
        if (*pcVar2 == '\x01') {
          uVar17 = (ushort)*(byte *)((long)param_4 + 0x81) << 8 | 0x82;
LAB_0012e918:
          *(ushort *)((long)param_4 + 0x80) = uVar17;
          sVar18 = *psVar6;
          goto joined_r0x0012f68c;
        }
        goto LAB_0012f788;
      case 5:
        if (*psVar6 == 0) {
          FUN_001314d0(param_1,lVar40,*plVar4,5,*(undefined2 *)(param_1 + 0x6cd66),puVar3);
          if ((*(byte *)(param_1 + 0x6d641) & 0xc) == 0) {
            uVar17 = 0;
            bVar14 = false;
            uVar32 = 0x37;
          }
          else {
            bVar14 = (ushort)*(byte *)(param_1 + 0x6d64a) == *(ushort *)(param_1 + 0x6cd64);
            uVar17 = 0;
            if (!bVar14) {
              uVar17 = (ushort)*(byte *)(param_1 + 0x6d64a);
            }
            uVar32 = 0x37;
            if (bVar14) {
              uVar32 = 1;
            }
          }
          sVar18 = FUN_00101070(param_1,lVar40,*(undefined8 *)(param_1 + 0x6d630),uVar32,uVar17,
                                __src,0);
          uVar21 = (uint)sVar18;
          uVar47 = (ulong)uVar21;
          if (0 < (int)uVar21) {
            if ((*(byte *)(param_1 + 0x6d641) & 0xc) != 0) {
              if (((*(ushort *)(param_1 + 0x6d7e0) & 0xf000) == 0x3000) &&
                 (0x1f < *(byte *)(param_1 + 0x6d7c6))) {
                cVar15 = FUN_0011cbd0(param_1,__src,param_1 + 0x61ea0,0x70);
              }
              else {
                lVar27 = 0x192;
                if (1 < (byte)((*(byte *)(param_1 + 0x6d7c7) >> 4) - 5)) {
                  lVar27 = 400;
                }
                cVar15 = ((byte)*(undefined2 *)(param_1 + 0x6d7da) & 0x7f) +
                         ((byte)*(undefined2 *)((long)puVar3 + lVar27) & 0x7f);
              }
              *(char *)(param_1 + 0x6d64b) = cVar15;
            }
            uVar38 = uVar47 & 0xffff;
            bVar13 = false;
            uVar17 = 0;
            if (bVar14) {
              puVar39 = (ushort *)(param_1 + 0x6d7e0);
              do {
                while( true ) {
                  bVar14 = (*puVar39 & 0xf000) == 0x3000;
                  if (bVar13) {
                    bVar14 = bVar13;
                  }
                  bVar13 = bVar14;
                  uVar30 = 0x32;
                  if ((*puVar39 & 0x800) != 0) {
                    uVar30 = 0x12;
                  }
                  *(undefined1 *)puVar39 = uVar30;
                  if (1 < (byte)((*(byte *)((long)puVar39 + -0x19) >> 4) - 5)) break;
                  uVar17 = uVar17 + (byte)(((byte)puVar39[-3] & 0x7f) +
                                          *(char *)((long)puVar39 + -0xb));
                  puVar39 = puVar39 + 0x44;
                  uVar38 = uVar38 - 1;
                  if (uVar38 == 0) goto LAB_0012f290;
                }
                uVar17 = (puVar39[-3] & 0x7f) + (puVar39[-8] & 0x7f) + uVar17 & 0xff;
                puVar39 = puVar39 + 0x44;
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
            }
            else {
              puVar39 = (ushort *)(param_1 + 0x6d7e0);
              do {
                while( true ) {
                  bVar14 = (*puVar39 & 0xf000) == 0x3000;
                  if (bVar13) {
                    bVar14 = bVar13;
                  }
                  bVar13 = bVar14;
                  *(undefined1 *)puVar39 = 0x12;
                  if (1 < (byte)((*(byte *)((long)puVar39 + -0x19) >> 4) - 5)) break;
                  uVar17 = uVar17 + (byte)(((byte)puVar39[-3] & 0x7f) +
                                          *(char *)((long)puVar39 + -0xb));
                  puVar39 = puVar39 + 0x44;
                  uVar38 = uVar38 - 1;
                  if (uVar38 == 0) goto LAB_0012f290;
                }
                uVar17 = (puVar39[-3] & 0x7f) + (puVar39[-8] & 0x7f) + uVar17 & 0xff;
                puVar39 = puVar39 + 0x44;
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
            }
LAB_0012f290:
            if (0x37 < uVar17) {
              *(undefined1 *)(param_1 + 0x6d64b) = 0;
              break;
            }
            *psVar6 = *psVar6 + 1;
            if (bVar13) {
              *(ushort *)(param_1 + 0x6d7e0) = *(ushort *)(param_1 + 0x6d7e0) & 0xfff | 0x3000;
            }
            memcpy(param_4,__src,0x88);
            *(short *)(param_1 + 0x6f49a) = sVar18;
          }
          goto joined_r0x0012f2e0;
        }
        break;
      case 6:
        if (*psVar6 != 0) break;
        FUN_001314d0(param_1,lVar40,*plVar4,6,*(undefined2 *)(param_1 + 0x6cd66),puVar3);
        sVar18 = FUN_001059b0(param_1,lVar40,*(undefined8 *)(param_1 + 0x6d630),
                              (void *)(param_1 + 0x6d650),1);
        uVar47 = (ulong)(uint)(int)sVar18;
        if (sVar18 < 1) goto LAB_0012eed4;
        uVar21 = FUN_001003e0(*(undefined8 *)(param_1 + 0x6d630));
        lVar27 = 0x82;
        if (1 < (byte)((*(byte *)(param_1 + 0x6d6b7) >> 4) - 5)) {
          lVar27 = 0x80;
        }
        lVar27 = ((ulong)*(ushort *)(param_1 + 0x6d6ca) & 0x7f) +
                 ((ulong)*(ushort *)((long)puVar3 + lVar27) & 0x7f);
        uVar29 = (uint)lVar27;
        if ((uVar21 & 0xffff) < uVar29) {
LAB_0012f308:
          sVar18 = -1;
          goto switchD_0012e820_caseD_a;
        }
        *(short *)(param_1 + 0x6f4a0) = *(short *)(param_1 + 0x6f4a0) + 1;
        *(undefined1 *)(param_1 + 0x6d6d0) = 0x22;
        memcpy(param_4,(void *)(param_1 + 0x6d650),0x88);
        iVar45 = (uVar21 & 0xffff) - uVar29;
        if (iVar45 != 0) {
          if ((int)(iVar45 + (*(ushort *)(param_1 + 0x6d6cc) & 0x7f) +
                             (*(ushort *)(param_1 + 0x6d6c2) & 0x7f)) < 0x38) {
            if ((byte)((*(byte *)(param_1 + 0x6d6b7) >> 4) - 5) < 2) {
              uVar21 = iVar45 + (uint)*(byte *)(param_1 + 0x6d6c5) +
                       (*(ushort *)(param_1 + 0x6d6ca) & 0x7f);
            }
            else {
              uVar21 = iVar45 + (*(ushort *)(param_1 + 0x6d6ca) & 0x7f) +
                                (*(ushort *)(param_1 + 0x6d6c0) & 0x7f);
            }
            if ((uVar21 & 0xfff8) < 0x38) {
              *(undefined2 *)(param_1 + 0x6d758) = 0x22;
              FUN_0010d880(param_1 + 0x6d6d8);
              *(long *)(param_1 + 0x6d6d8) = *(long *)(param_1 + 0x6d630) + lVar27 * 2;
              uVar16 = (ushort)iVar45;
              *(ushort *)(param_1 + 0x6d748) =
                   *(ushort *)(param_1 + 0x6d748) & 0xff80 | uVar16 & 0x7f;
              *(ushort *)(param_1 + 0x6d74a) =
                   *(ushort *)(param_1 + 0x6d74a) & 0xff80 | uVar16 & 0x7f;
              sVar18 = FUN_0011f660(*(undefined8 *)(*plVar4 + 0x640),1);
              *(ushort *)(param_1 + 0x6d748) = uVar16 & 0x7f | sVar18 << 7;
              uVar17 = *(ushort *)(param_1 + 0x6d74a);
              uVar47 = 2;
              sVar18 = FUN_0011f660(*(undefined8 *)(*plVar4 + 0x640),2);
              *(ushort *)(param_1 + 0x6d74a) = uVar17 & 0x7f | sVar18 << 7;
              uVar20 = 0x8ad0;
              if (-0x8001 < (short)uVar16 * -1000) {
                uVar20 = (short)((uint)((short)uVar16 * -0x3e80000) >> 0x10);
              }
              *(undefined1 *)(param_1 + 0x6d74c) = 2;
              *(undefined2 *)(param_1 + 0x6d6e0) = uVar20;
              *(undefined2 *)(param_1 + 0x6f498) = 2;
LAB_0012ec60:
              sVar18 = *psVar6;
              goto joined_r0x0012f68c;
            }
          }
          goto LAB_0012f308;
        }
        if (((*puVar3 ^ 0xffff) & 0x21) != 0) break;
        uVar47 = 1;
        *(undefined2 *)(param_1 + 0x6f498) = 1;
        sVar18 = *psVar6;
        goto joined_r0x0012f68c;
      case 7:
        if (*psVar6 != 0) goto LAB_0012ef18;
        lVar27 = *plVar4;
        uVar20 = *(undefined2 *)(param_1 + 0x6cd66);
        uVar35 = 7;
LAB_0012ef70:
        FUN_001314d0(param_1,lVar40,lVar27,uVar35,uVar20,puVar3);
        local_68 = 0;
        FUN_0010d880(local_e8);
        uVar17 = local_78;
        local_e8[0] = *(long *)(param_1 + 0x6d630);
        local_74 = 0;
        uVar16 = FUN_001003e0();
        local_78 = uVar17 & 0xff80 | uVar16 & 0x7f;
        plVar26 = local_e8;
        goto LAB_0012efb0;
      case 8:
        if (*psVar6 == 0) {
          if (((*(ushort *)(param_1 + 0x6d7e0) & 0xf000) == 0x3000) &&
             (0x1f < *(byte *)(param_1 + 0x6d7c6))) {
            *psVar6 = 1;
            bVar44 = *(byte *)(param_1 + 0x6d64b);
            *(ushort *)(param_1 + 0x6f4aa) = (ushort)bVar44;
          }
          else {
            *(undefined2 *)((long)param_4 + 0x80) = 0;
            FUN_0010d880();
            lVar27 = (ulong)*(byte *)(param_1 + 0x6d64b) * 2;
            uVar20 = *(undefined2 *)(*(long *)(param_1 + 0x6d630) + lVar27);
            *(undefined2 *)(*(long *)(param_1 + 0x6d630) + lVar27) = 0;
            uVar17 = FUN_001004d0(*(undefined8 *)(param_1 + 0x6d630));
            if (uVar17 < *(byte *)(param_1 + 0x6d648)) {
              *(undefined2 *)
               (*(long *)(param_1 + 0x6d630) + (ulong)*(byte *)(param_1 + 0x6d64b) * 2) = uVar20;
              break;
            }
            memcpy(param_4,__src,0x88);
            uVar17 = (ushort)*(byte *)((long)param_4 + 0x81) << 8;
            lVar27 = *(long *)((long)param_4 + 0x10);
            *(ushort *)((long)param_4 + 0x80) = uVar17 | 0x92;
            if (lVar27 != 0) {
              if (*(byte *)((long)param_4 + 0x68) - 1 < 2) {
LAB_0012f118:
                uVar16 = 0x5000;
              }
              else {
                if (*(byte *)((long)param_4 + 0x68) == 3) {
                  uVar21 = *(uint *)(lVar27 + 0x70);
                }
                else {
                  uVar21 = (*(uint *)(lVar27 + 8) & 0xff00ff00) >> 8 |
                           (*(uint *)(lVar27 + 8) & 0xff00ff) << 8;
                  uVar21 = uVar21 >> 0x10 | uVar21 << 0x10;
                }
                uVar16 = 0x1000;
                if ((int)uVar21 < 0x20002) {
                  if (uVar21 == 0x80020000) {
                    uVar16 = 0x3000;
                  }
                  else if (uVar21 == 0x80030000) {
                    uVar16 = 0x4000;
                  }
                  else if (uVar21 == 3) goto LAB_0012f3c4;
                }
                else {
                  if (uVar21 - 0xe0000 < 2) goto LAB_0012f118;
                  if (uVar21 - 0x20002 < 2) {
LAB_0012f3c4:
                    uVar16 = 0x2000;
                  }
                }
              }
              *(ushort *)((long)param_4 + 0x80) = uVar17 & 0xf92 | 0x92 | uVar16;
            }
            *(undefined2 *)(*(long *)(param_1 + 0x6d630) + (ulong)*(byte *)(param_1 + 0x6d64b) * 2)
                 = uVar20;
            if ((*(char *)(param_1 + 0x6d64a) == '\0') || (*(ushort *)(param_1 + 0x6f49a) < 2)) {
              FUN_00131950(param_1,param_4,
                           (*(ushort *)((long)param_4 + 0x7a) & 0x7f) +
                           (*(ushort *)((long)param_4 + 0x70) & 0x7f),auStack_ec);
            }
            bVar44 = *(byte *)(param_1 + 0x6d64b);
            *(ushort *)(param_1 + 0x6f4aa) = (ushort)bVar44;
          }
          if (bVar44 != 0) goto LAB_0012f508;
        }
        else if (*(short *)(param_1 + 0x6f4aa) != 0) {
LAB_0012f508:
          uVar47 = 1;
LAB_0012f50c:
          do {
            while (*psVar6 != 0) {
              if (*psVar6 == 1) {
                FUN_001314d0(param_1,lVar40,*plVar4,8,*(undefined2 *)(param_1 + 0x6cd66),puVar3);
                local_68 = 0;
                FUN_0010d880(local_e8);
                local_e8[0] = *(long *)(param_1 + 0x6d630);
                local_74 = 0;
                lVar27 = (ulong)*(ushort *)(param_1 + 0x6f4aa) * 2;
                uVar20 = *(undefined2 *)(local_e8[0] + lVar27);
                *(undefined2 *)(local_e8[0] + lVar27) = 0;
                uVar16 = FUN_001004d0(local_e8[0]);
                uVar17 = local_78;
                if (*(byte *)(param_1 + 0x6d648) <= uVar16) {
                  uVar16 = FUN_001003e0(*(undefined8 *)(param_1 + 0x6d630));
                  local_78 = uVar17 & 0xff80 | uVar16 & 0x7f;
                  uVar47 = FUN_001018b0(param_1,lVar40,local_e8,param_4);
                  uVar47 = uVar47 & 0xffffffff;
                  *(undefined2 *)(local_e8[0] + (ulong)*(ushort *)(param_1 + 0x6f4aa) * 2) = uVar20;
                  break;
                }
                *(undefined2 *)(local_e8[0] + (ulong)*(ushort *)(param_1 + 0x6f4aa) * 2) = uVar20;
                goto LAB_0012f774;
              }
              uVar21 = FUN_001018b0(param_1,lVar40,0,param_4);
              uVar47 = (ulong)uVar21;
              if ((uVar21 & 0xffff) == 0) goto LAB_0012f5fc;
LAB_0012f5bc:
              sVar18 = (short)uVar47;
              if ((uVar21 & 0xffff) == 1) goto LAB_0012f668;
              if (sVar18 < 0) goto LAB_0012f788;
              if (*(short *)(param_1 + 0x6f4aa) == 0) goto LAB_0012f65c;
            }
            uVar21 = (uint)uVar47;
            if ((uVar47 & 0xffff) != 0) goto LAB_0012f5bc;
LAB_0012f5fc:
            sVar18 = (short)uVar47;
            if ((*(byte *)(param_1 + 0x6d641) >> 3 & 1) == 0) goto LAB_0012f774;
            *(undefined2 *)(param_1 + 0x6f4a0) = 1;
            uVar17 = *(ushort *)(param_1 + 0x6f4aa);
            if ((ulong)uVar17 < 2) {
              *(undefined2 *)(param_1 + 0x6f4aa) = 0;
              goto LAB_0012f774;
            }
            lVar27 = *(long *)(param_1 + 0x6d630) + (ulong)uVar17 * 2;
            if (((*(byte *)(lVar27 + -4) & 0xfc) != 0xd8) || (*(short *)(lVar27 + -2) == 0)) {
              *(ushort *)(param_1 + 0x6f4aa) = uVar17 - 1;
              if (uVar17 == 1) break;
              goto LAB_0012f50c;
            }
            *(ushort *)(param_1 + 0x6f4aa) = uVar17 - 2;
          } while (uVar17 != 2);
LAB_0012f65c:
          if (sVar18 < 1) break;
        }
LAB_0012f668:
        *psVar6 = *psVar6 + 1;
        uVar30 = 0x92;
        goto LAB_0012f678;
      case 9:
        if (*psVar6 == 0) {
          lVar27 = *plVar4;
          uVar20 = *(undefined2 *)(param_1 + 0x6cd66);
          uVar35 = 9;
          goto LAB_0012ef70;
        }
LAB_0012ef18:
        plVar26 = (long *)0x0;
LAB_0012efb0:
        uVar21 = FUN_001018b0(param_1,lVar40,plVar26,param_4);
        uVar47 = (ulong)uVar21;
        if ((short)uVar21 < 1) {
          uVar21 = uVar21 & 0xffff;
joined_r0x0012f2e0:
          if (uVar21 == 0) break;
          goto LAB_0012f788;
        }
        *psVar6 = *psVar6 + 1;
        uVar30 = 0x32;
LAB_0012f678:
        *(undefined1 *)((long)param_4 + 0x80) = uVar30;
        uVar47 = 1;
        sVar18 = *psVar6;
joined_r0x0012f68c:
        if (sVar18 == -1) goto LAB_0012f690;
        goto LAB_0012f794;
      case 10:
        goto switchD_0012e820_caseD_a;
      default:
        uVar47 = 0x8951;
        sVar18 = *psVar6;
        goto joined_r0x0012e940;
      }
LAB_0012f774:
      sVar18 = -1;
switchD_0012e820_caseD_a:
      *psVar6 = sVar18;
      FUN_00130a70(param_1);
      uVar47 = 0;
LAB_0012f788:
      sVar18 = *psVar6;
joined_r0x0012e940:
      if (sVar18 != -1) {
LAB_0012f794:
        if ((short)uVar47 < 1) {
          if ((*(byte *)puVar3 >> 2 & 1) != 0) {
            return uVar47;
          }
          pbVar34 = (byte *)(param_1 + 0x6f558);
          lVar37 = 0x14;
          do {
            lVar36 = *(long *)(pbVar34 + -0x48);
            if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) &&
               (1 < *pbVar34 - 1)) {
              if (*pbVar34 == 3) {
                uVar33 = *(uint *)(lVar36 + 0x70);
              }
              else {
                uVar33 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                         (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
                uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
              }
              if ((uVar33 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
                *(undefined2 *)(lVar40 + 0x1fe0) = 0;
              }
            }
            pbVar34 = pbVar34 + 0x50;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          return uVar47;
        }
        uVar17 = *(ushort *)((long)param_4 + 0x80) & 0xf0;
        if ((uVar17 == 0x30) || (uVar17 == 0x90)) {
LAB_0012fb04:
          *(short *)(param_1 + 0x6f4a2) = *(short *)(param_1 + 0x6f4a2) + 1;
          if (uVar33 < 0x4e21) {
            if ((*(char *)(param_1 + 0x6d63c) == '\x02') && (*(uint *)(param_1 + 0x641e8) < 0x32)) {
              memcpy((void *)(param_1 + (ulong)*(uint *)(param_1 + 0x641e8) * 0x88 + 0x62758),
                     param_4,0x88);
              *(int *)(param_1 + 0x641e8) = *(int *)(param_1 + 0x641e8) + 1;
            }
            if (*(ushort *)(param_1 + 0x6d63a) - 2 < 3) {
              lVar37 = *(long *)((long)param_4 + 0x10);
              if ((lVar37 != 0) && (1 < *(byte *)((long)param_4 + 0x68) - 1)) {
                if (*(byte *)((long)param_4 + 0x68) == 3) {
                  uVar33 = *(uint *)(lVar37 + 0x70);
                }
                else {
                  uVar33 = (*(uint *)(lVar37 + 8) & 0xff00ff00) >> 8 |
                           (*(uint *)(lVar37 + 8) & 0xff00ff) << 8;
                  uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
                }
                if ((uVar33 == 0x80020000) &&
                   (uVar17 = *(short *)(param_1 + 0x6f4a6) + 1,
                   *(ushort *)(param_1 + 0x6f4a6) = uVar17, *(ushort *)(param_1 + 0x6d642) <= uVar17
                   )) {
                  uVar47 = 0;
                  pbVar34 = (byte *)(param_1 + 0x6c690);
                  do {
                    lVar37 = *(long *)(pbVar34 + -0x48);
                    if ((lVar37 != 0) && (1 < *pbVar34 - 1)) {
                      if (*pbVar34 == 3) {
                        uVar33 = *(uint *)(lVar37 + 0x70);
                      }
                      else {
                        uVar33 = (*(uint *)(lVar37 + 8) & 0xff00ff00) >> 8 |
                                 (*(uint *)(lVar37 + 8) & 0xff00ff) << 8;
                        uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
                      }
                      if (uVar33 == 0x80020000) {
                        FUN_0010d8d0(puVar7,uVar47 & 0xffffffff);
                      }
                    }
                    uVar47 = uVar47 + 1;
                    pbVar34 = pbVar34 + 0x50;
                  } while (uVar47 != 0x14);
                }
              }
              if (*(ushort *)(param_1 + 0x6d644) <= *(ushort *)(param_1 + 0x6f4a2)) {
                FUN_00130a70(param_1);
                *psVar6 = 0;
              }
            }
            if (((param_5 != (undefined8 *)0x0) && ((*(byte *)(param_1 + 0x6d641) & 0xc) != 0)) &&
               (4 < *(ushort *)(param_1 + 0x6d63a))) {
              *(undefined1 *)((long)param_5 + 0xb) = *(undefined1 *)(param_1 + 0x6d64b);
            }
            if ((*(byte *)puVar3 >> 2 & 1) != 0) {
              return 1;
            }
            pbVar34 = (byte *)(param_1 + 0x6f558);
            lVar37 = 0x14;
            do {
              lVar36 = *(long *)(pbVar34 + -0x48);
              if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) &&
                 (1 < *pbVar34 - 1)) {
                if (*pbVar34 == 3) {
                  uVar33 = *(uint *)(lVar36 + 0x70);
                }
                else {
                  uVar33 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                           (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
                  uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
                }
                if ((uVar33 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
                  *(undefined2 *)(lVar40 + 0x1fe0) = 0;
                }
              }
              pbVar34 = pbVar34 + 0x50;
              lVar37 = lVar37 + -1;
            } while (lVar37 != 0);
            return 1;
          }
          break;
        }
        if (*(code **)(param_1 + 0x6f4c8) == (code *)0x0) {
LAB_0012f7e8:
          sVar18 = FUN_00131950(param_1,param_4,local_11c,auStack_104);
          if (sVar18 == 0) goto LAB_0012fb04;
          uVar21 = (uint)sVar18;
          if ((int)uVar21 < 0) {
            if ((*(byte *)puVar3 >> 2 & 1) == 0) {
              pbVar34 = (byte *)(param_1 + 0x6f558);
              lVar37 = 0x14;
              do {
                lVar36 = *(long *)(pbVar34 + -0x48);
                if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) &&
                   (1 < *pbVar34 - 1)) {
                  if (*pbVar34 == 3) {
                    uVar33 = *(uint *)(lVar36 + 0x70);
                  }
                  else {
                    uVar33 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                             (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
                    uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
                  }
                  if ((uVar33 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
                    *(undefined2 *)(lVar40 + 0x1fe0) = 0;
                  }
                }
                pbVar34 = pbVar34 + 0x50;
                lVar37 = lVar37 + -1;
              } while (lVar37 != 0);
            }
            uVar33 = 0;
            if ((uVar21 & 0x7f00) != 0x1400) {
              uVar33 = uVar21;
            }
            return (ulong)uVar33;
          }
        }
        else {
          local_f8 = *(undefined8 *)(param_1 + 0x6f4d0);
          local_100 = param_4;
          sVar18 = (**(code **)(param_1 + 0x6f4c8))(param_1,&local_100);
          if (sVar18 != 0) goto LAB_0012f7e8;
        }
        uVar33 = uVar33 + 1;
        if (20000 < uVar33) break;
        goto LAB_0012e7f8;
      }
LAB_0012f690:
      *psVar6 = 0;
      uVar33 = uVar33 + 1;
    } while (uVar33 < 0x4e21);
    if ((*(byte *)puVar3 >> 2 & 1) == 0) {
      pbVar34 = (byte *)(param_1 + 0x6f558);
      lVar37 = 0x14;
      do {
        lVar36 = *(long *)(pbVar34 + -0x48);
        if (((lVar36 != 0) && (lVar40 = *(long *)(pbVar34 + -8), lVar40 != 0)) && (1 < *pbVar34 - 1)
           ) {
          if (*pbVar34 == 3) {
            uVar33 = *(uint *)(lVar36 + 0x70);
          }
          else {
            uVar33 = (*(uint *)(lVar36 + 8) & 0xff00ff00) >> 8 |
                     (*(uint *)(lVar36 + 8) & 0xff00ff) << 8;
            uVar33 = uVar33 >> 0x10 | uVar33 << 0x10;
          }
          if ((uVar33 == 0x80020000) && (*(short *)(lVar40 + 0x1fe0) == -1)) {
            *(undefined2 *)(lVar40 + 0x1fe0) = 0;
          }
        }
        uVar47 = 0;
        pbVar34 = pbVar34 + 0x50;
        lVar37 = lVar37 + -1;
      } while (lVar37 != 0);
    }
    else {
LAB_00130a18:
      uVar47 = 0;
    }
  }
  return uVar47;
}

