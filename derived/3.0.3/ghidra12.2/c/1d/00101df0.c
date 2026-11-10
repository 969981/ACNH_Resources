
/* WARNING: Type propagation algorithm not settling */

uint FUN_00101df0(long param_1,long *param_2,long *param_3)

{
  ushort *puVar1;
  long lVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined2 uVar12;
  ushort uVar13;
  short sVar14;
  short sVar15;
  long lVar16;
  long *plVar17;
  ushort uVar18;
  uint uVar19;
  long lVar20;
  ushort *puVar21;
  ulong uVar22;
  ushort *puVar23;
  int iVar24;
  long *plVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  short sVar29;
  int iVar30;
  short sVar31;
  byte *pbVar32;
  long *plVar33;
  uint uVar34;
  uint uVar35;
  byte *local_e8;
  undefined2 local_e0;
  byte local_81;
  ushort local_78;
  ushort local_76;
  undefined1 local_74;
  ushort local_6e;
  ushort local_6c;
  undefined2 local_68;
  
  puVar1 = (ushort *)(param_2 + 0x1248);
  lVar20 = *param_2;
  param_2[0x115c] = *(long *)(lVar20 + 0x640);
  lVar27 = 0;
  param_2[0x1236] = *(long *)(lVar20 + 0x640);
  do {
    while( true ) {
      lVar2 = (long)param_2 + lVar27 + 0x84a0;
      lVar16 = (long)param_2 + lVar27 + 0x8b70;
      plVar3 = (long *)(lVar20 + lVar27);
      FUN_0010d900(lVar2);
      FUN_0010d900(lVar16);
      lVar20 = *plVar3;
      if ((lVar20 == 0) || (*(ushort *)((long)plVar3 + 0x32) < *(ushort *)(plVar3 + 6)))
      goto LAB_00101e90;
      cVar6 = (char)plVar3[9];
      if (cVar6 == '\x01') goto LAB_00101fdc;
      if (cVar6 != '\x02') break;
LAB_00101fe0:
      FUN_0010d930(lVar16,plVar3,0);
      lVar20 = *param_2;
joined_r0x00101e9c:
      lVar27 = lVar27 + 0x50;
      if (lVar27 == 0x640) goto LAB_00101ffc;
    }
    if (cVar6 == '\x03') {
      uVar19 = *(uint *)(lVar20 + 0x70);
      if ((int)uVar19 < 0x20003) goto LAB_00101f0c;
LAB_00101ecc:
      if (0xe0000 < (int)uVar19) {
        if (1 < uVar19 + 0xbffb0000) {
          if (uVar19 == 0xe0001) goto LAB_00101fe0;
          if (uVar19 != 0x40000006) goto LAB_00101e90;
        }
        goto LAB_00101fdc;
      }
      if (uVar19 - 0x50000 < 2) goto LAB_00101fdc;
      if (uVar19 != 0x20003) {
        if (uVar19 == 0xe0000) goto LAB_00101fdc;
        goto LAB_00101e90;
      }
LAB_00101fc0:
      if (*(char *)(param_1 + 3) != '\x03') goto LAB_00101fdc;
LAB_00101e90:
      lVar20 = *param_2;
      goto joined_r0x00101e9c;
    }
    uVar19 = (*(uint *)(lVar20 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar20 + 8) & 0xff00ff) << 8;
    uVar19 = uVar19 >> 0x10 | uVar19 << 0x10;
    if (0x20002 < (int)uVar19) goto LAB_00101ecc;
LAB_00101f0c:
    if ((int)uVar19 < 0) {
      if (uVar19 == 0x80020000) goto LAB_00101fc0;
      if (uVar19 == 0x80030000) goto LAB_00101fdc;
      goto LAB_00101e90;
    }
    if (6 < uVar19) {
LAB_00101fd4:
      if (uVar19 != 0x20002) goto LAB_00101e90;
LAB_00101fdc:
      lVar16 = lVar2;
      goto LAB_00101fe0;
    }
    if ((1 << (ulong)(uVar19 & 0x1f) & 0x69U) != 0) goto LAB_00101fdc;
    if (uVar19 == 1) goto LAB_00101fe0;
    if (uVar19 != 2) goto LAB_00101fd4;
    if (*(char *)(param_1 + 3) != '\x03') goto LAB_00101e90;
    FUN_0010d930(lVar2,plVar3,2);
    lVar20 = *param_2;
    lVar27 = lVar27 + 0x50;
  } while (lVar27 != 0x640);
LAB_00101ffc:
  if (*(long *)(lVar20 + 0x640) == 0) {
    return 0x8805;
  }
  uVar12 = FUN_0011f660(*(long *)(lVar20 + 0x640),0xf);
  *(undefined2 *)((long)param_2 + 0x9242) = uVar12;
  uVar13 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),0);
  *puVar1 = uVar13;
  uVar12 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),0x10);
  *(undefined2 *)((long)param_2 + 0x9244) = uVar12;
  uVar12 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),1);
  *(undefined2 *)((long)param_2 + 0x9246) = uVar12;
  uVar12 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),2);
  *(undefined2 *)(param_2 + 0x1249) = uVar12;
  uVar12 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),0xe);
  *(undefined2 *)((long)param_2 + 0x924a) = uVar12;
  sVar14 = FUN_0011f660(*(undefined8 *)(*param_2 + 0x640),3);
  *(short *)((long)param_2 + 0x924c) = sVar14;
  if ((((*(short *)((long)param_2 + 0x9242) == 0) || (*puVar1 == 0)) ||
      (*(short *)((long)param_2 + 0x9244) == 0)) ||
     ((*(short *)((long)param_2 + 0x9246) == 0 || ((short)param_2[0x1249] == 0)))) {
    return 0x8705;
  }
  if (sVar14 == 0) {
    return 0x8705;
  }
  if (*(short *)((long)param_2 + 0x924a) == 0) {
    return 0x8705;
  }
  FUN_0011f7e0(*(undefined8 *)(*param_2 + 0x640));
  param_2[0x124b] = *param_3;
  uVar12 = FUN_001003e0(*param_3);
  *(undefined2 *)((long)param_2 + 0x9262) = uVar12;
  *(undefined2 *)((long)param_2 + 0x9264) = 0;
  if (*(ushort *)(param_3 + 3) < (ushort)*(byte *)((long)param_2 + 10)) {
    plVar3 = param_2 + 2;
    bVar9 = false;
    bVar10 = true;
    do {
      if (*(byte *)(param_2 + 0x29) < 2) {
        uVar13 = 0;
        uVar19 = 0xffff;
        bVar11 = false;
        do {
          if (*(ushort *)((long)param_2 + 0x9262) < uVar13) {
LAB_00103060:
            iVar24 = 2;
            cVar6 = *(char *)((long)param_2 + 9);
            goto joined_r0x0010306c;
          }
          if ((!bVar9) &&
             (*(ushort *)((long)param_2 + 0x9262) == *(ushort *)((long)param_2 + 0x144)))
          goto LAB_00103094;
          if ((ushort)*(byte *)((long)param_2 + 0x9266) < *(ushort *)((long)param_3 + 0x14)) {
LAB_0010305c:
            bVar9 = false;
            goto LAB_00103060;
          }
          uVar18 = uVar13 + 1;
          uVar8 = uVar18;
          if ((uVar19 & 0xffff) == 0) {
            cVar6 = (char)param_2[1];
joined_r0x00102224:
            if (cVar6 == '\x01') {
              if (*(short *)((long)param_2 + 0x9262) != *(short *)((long)param_2 + 0x144)) {
                return 0;
              }
              goto LAB_00103094;
            }
            uVar19 = (uint)*(ushort *)((long)param_3 + 0x14);
            uVar26 = (ulong)(short)param_2[0x124c];
            if ((long)uVar26 < 0x65) {
              param_2[uVar26 * 0x2a + 0x28] = 0;
              *(undefined4 *)((long)param_2 + uVar26 * 0x150 + 0x147) = 0;
              *(undefined2 *)(param_2 + uVar26 * 0x2a + 0x12) = 1;
              FUN_0010d880(param_2 + uVar26 * 0x2a + 2);
              *(undefined2 *)((long)param_2 + uVar26 * 0x150 + 300) = 0;
              param_2[uVar26 * 0x2a + 0x24] = 0;
              *(undefined4 *)(param_2 + uVar26 * 0x2a + 0x25) = 0;
              *(undefined2 *)(param_2 + uVar26 * 0x2a + 0x23) = 1;
              FUN_0010d880(param_2 + uVar26 * 0x2a + 0x13);
              *(undefined2 *)((long)param_2 + uVar26 * 0x150 + 0x13c) = 0;
              param_2[uVar26 * 0x2a + 0x26] = 0;
              *(undefined4 *)(param_2 + uVar26 * 0x2a + 0x27) = 0;
              uVar26 = (ulong)(short)param_2[0x124c];
              if (-1 < (short)param_2[0x124c]) goto LAB_001022a0;
              uVar35 = 0;
LAB_00102958:
              *(undefined2 *)(param_2 + 0x124c) = 0;
              sVar15 = (short)uVar35;
              *(undefined2 *)(param_2 + 0x124c) = 0;
            }
            else {
LAB_001022a0:
              uVar35 = 0;
              uVar34 = 0;
              do {
                sVar14 = (short)uVar34;
                lVar27 = (long)sVar14;
                if ((uVar34 & 0xffff) == ((uint)uVar26 & 0xffff)) {
                  uVar22 = 0;
                  plVar25 = param_2 + lVar27 * 0x2a;
                  cVar6 = *(char *)((long)plVar25 + 0x14a);
                }
                else {
                  uVar22 = (ulong)*(ushort *)((long)param_2 + lVar27 * 0x150 + 0x144);
                  plVar25 = param_2 + lVar27 * 0x2a;
                  cVar6 = *(char *)((long)plVar25 + 0x14a);
                }
                if ((cVar6 != '\x01') && ((uVar34 = (uint)uVar22, !bVar11 || (uVar34 != 0)))) {
                  if (uVar34 == *(ushort *)((long)param_2 + 0x9262)) {
                    bVar4 = *(byte *)((long)param_2 + lVar27 * 0x150 + 0x149);
                    if ((uint)bVar4 + (uint)*(byte *)(param_2 + lVar27 * 0x2a + 0x29) < 2) {
                      *(byte *)((long)param_2 + lVar27 * 0x150 + 0x149) = bVar4 + 1;
                    }
                  }
                  else {
                    pbVar32 = (byte *)(param_2[0x124b] + uVar22 * 2);
                    if ((*pbVar32 & 0xfc) == 0xd8) {
                      iVar24 = 1;
                      if (*(short *)(pbVar32 + 2) != 0) {
                        iVar24 = 2;
                      }
                    }
                    else {
                      iVar24 = 1;
                    }
                    lVar20 = (long)(short)uVar26;
                    plVar33 = param_2 + lVar20 * 0x2a + 2;
                    uVar13 = (ushort)iVar24;
                    if (uVar34 == 0) {
                      param_2[lVar20 * 0x2a + 0x28] = 0;
                      *(undefined4 *)((long)param_2 + lVar20 * 0x150 + 0x147) = 0;
                      *(undefined2 *)(param_2 + lVar20 * 0x2a + 0x12) = 1;
                      FUN_0010d880();
                      *(undefined2 *)((long)param_2 + lVar20 * 0x150 + 300) = 0;
                      param_2[lVar20 * 0x2a + 0x24] = 0;
                      *(undefined4 *)(param_2 + lVar20 * 0x2a + 0x25) = 0;
                      *(undefined2 *)(param_2 + lVar20 * 0x2a + 0x23) = 1;
                      FUN_0010d880(param_2 + lVar20 * 0x2a + 0x13);
                      *(undefined2 *)((long)param_2 + lVar20 * 0x150 + 0x13c) = 0;
                      param_2[lVar20 * 0x2a + 0x26] = 0;
                      *(undefined4 *)(param_2 + lVar20 * 0x2a + 0x27) = 0;
                      sVar15 = *(short *)((long)param_2 + 0x9246);
                      lVar27 = param_2[0x1249];
                      local_68 = 1;
                      FUN_0010d880(&local_e8);
                      local_68 = 0x801;
                      local_78 = uVar13 | sVar15 << 7;
                      local_76 = uVar13 | (short)lVar27 << 7;
                      local_e0 = 0x8ad0;
                      if (-0x8001 < iVar24 * -1000) {
                        local_e0 = (short)((uint)(iVar24 * -0x3e80000) >> 0x10);
                      }
                      local_74 = 2;
                      if (*(char *)(param_1 + 3) == '\x03') {
                        if ((local_81 & 0xf0) == 0x50) {
                          uVar34 = (uint)local_6c;
                        }
                        else {
                          uVar34 = (uint)local_6e;
                        }
                      }
                      else {
                        uVar34 = (uint)local_6c;
                      }
                      local_e8 = pbVar32;
                      if ((uint)*(byte *)((long)param_2 + 0x9266) <
                          *(ushort *)((long)param_2 + lVar20 * 0x150 + 0x146) + uVar19 +
                          (uVar34 & 0x7f) + iVar24) {
                        *(undefined2 *)((long)param_2 + 0x9264) = 1;
                        goto LAB_00102834;
                      }
                      sVar15 = FUN_00108620(param_1,param_2,plVar33,&local_e8,0);
                      if (sVar15 == 0) goto LAB_0010282c;
LAB_0010280c:
                      sVar15 = FUN_001087f0(param_2);
                      if (0 < sVar15) {
                        sVar14 = sVar14 + 1;
                        uVar35 = uVar35 + 1;
                      }
                    }
                    else {
                      memcpy(plVar33,plVar25 + 2,0x150);
                      uVar18 = 0;
                      if ((ulong)*(byte *)(param_2 + lVar20 * 0x2a + 0x29) != 0) {
                        lVar2 = (ulong)*(byte *)(param_2 + lVar20 * 0x2a + 0x29) * 0x88 +
                                lVar20 * 0x150;
                        lVar16 = lVar2 + -6;
                        if ((*(byte *)((long)param_2 + lVar2 + 2) & 0x7f) != 0) {
                          lVar16 = lVar2 + 4;
                        }
                        uVar18 = *(ushort *)((long)param_2 + lVar16) >> 7;
                      }
                      if (uVar18 == *(ushort *)(param_2 + 0x1249)) {
                        plVar17 = (long *)FUN_00108e80(param_1,param_2,plVar33,0);
                        if (plVar17 == (long *)0x0) {
                          return 0x9b06;
                        }
                        if ((*(char *)(param_1 + 3) == '\x03') &&
                           ((*(byte *)((long)plVar17 + 0x67) & 0xf0) != 0x50)) {
                          puVar21 = (ushort *)(plVar17 + 0xe);
                          puVar23 = (ushort *)((long)plVar17 + 0x7a);
                        }
                        else {
                          puVar21 = (ushort *)((long)plVar17 + 0x72);
                          puVar23 = (ushort *)((long)plVar17 + 0x7c);
                        }
                        if ((uint)*(byte *)((long)param_2 + 0x9266) <
                            uVar19 + iVar24 + (*puVar23 & 0x7f) + (*puVar21 & 0x7f) +
                            (uint)*(ushort *)((long)param_2 + lVar20 * 0x150 + 0x146)) {
                          *(undefined2 *)((long)param_2 + 0x9264) = 1;
                        }
                        else {
                          if ((((*(byte *)((long)plVar17 + 0x7a) & 0x7f) == 0) &&
                              (*(char *)((long)plVar17 + 0x74) == '\x02')) && (plVar17[2] == 0)) {
                            pbVar32 = (byte *)*plVar17;
                            if ((*(byte *)((long)plVar17 + 0x67) & 0xf0) == 0x50) {
                              uVar18 = (*(ushort *)((long)plVar17 + 0x7c) & 0x7f) +
                                       (*(ushort *)((long)plVar17 + 0x72) & 0x7f);
                            }
                            else {
                              uVar18 = *(ushort *)(plVar17 + 0xe) & 0x7f;
                            }
                            uVar18 = uVar18 + uVar13;
                            sVar15 = *(short *)((long)param_2 + 0x9246);
                            lVar2 = param_2[0x1249];
                            *(undefined2 *)(plVar17 + 0x10) = 1;
                            FUN_0010d880(plVar17);
                            *(undefined2 *)(plVar17 + 0x10) = 0x801;
                            *(ushort *)(plVar17 + 0xe) = uVar18 & 0x7f | sVar15 << 7;
                            *(ushort *)((long)plVar17 + 0x72) = uVar18 & 0x7f | (short)lVar2 << 7;
                            uVar12 = 0x8ad0;
                            if (-0x8001 < (short)uVar18 * -1000) {
                              uVar12 = (short)((uint)((short)uVar18 * -0x3e80000) >> 0x10);
                            }
                            *(undefined2 *)(plVar17 + 1) = uVar12;
                            *(undefined1 *)((long)plVar17 + 0x74) = 2;
                            *plVar17 = (long)pbVar32;
                            *(char *)((long)plVar25 + 0x14a) = '\x02';
                          }
                          sVar15 = FUN_00108620(param_1,param_2,plVar33,plVar17,0);
                          if (sVar15 != 0) goto LAB_00102804;
                        }
                      }
                      else {
LAB_00102804:
                        if (*(char *)((long)plVar25 + 0x14a) != '\0') goto LAB_0010280c;
                        if (*(char *)(param_1 + 3) == '\x03') {
                          uVar18 = *puVar1;
                        }
                        else {
                          uVar18 = *(ushort *)((long)param_2 + 0x9244);
                        }
                        uVar7 = uVar18 - 1;
                        uVar34 = uVar18 + 6;
                        if (-1 < (int)uVar7) {
                          uVar34 = uVar7;
                        }
                        if ((0x80U >> (ulong)(uVar7 & 7) &
                            (uint)*(byte *)(param_2[lVar27 * 0x2a + 0x2a] + (long)((int)uVar34 >> 3)
                                           )) != 0) {
                          sVar15 = *(short *)((long)param_2 + 0x9246);
                          lVar27 = param_2[0x1249];
                          local_68 = 1;
                          FUN_0010d880(&local_e8);
                          local_68 = 0x801;
                          local_78 = uVar13 | sVar15 << 7;
                          local_76 = uVar13 | (short)lVar27 << 7;
                          local_e0 = 0x8ad0;
                          if (-0x8001 < iVar24 * -1000) {
                            local_e0 = (short)((uint)(iVar24 * -0x3e80000) >> 0x10);
                          }
                          local_74 = 2;
                          if ((*(char *)(param_1 + 3) == '\x03') && ((local_81 & 0xf0) != 0x50)) {
                            uVar13 = local_6e;
                          }
                          else {
                            uVar13 = local_6c;
                          }
                          local_e8 = pbVar32;
                          if ((uint)*(byte *)((long)param_2 + 0x9266) <
                              *(ushort *)((long)param_2 + lVar20 * 0x150 + 0x146) + uVar19 +
                              (uVar13 & 0x7f) + iVar24) {
                            *(undefined2 *)((long)param_2 + 0x9264) = 1;
                            goto LAB_00102834;
                          }
                          sVar15 = FUN_00108620(param_1,param_2,plVar33,&local_e8,0);
                          if (sVar15 != 0) goto LAB_0010280c;
                        }
                      }
                    }
LAB_0010282c:
                  }
                }
LAB_00102834:
                uVar34 = (uint)(short)(sVar14 + 1);
                sVar14 = (short)param_2[0x124c];
                uVar26 = (ulong)sVar14;
              } while ((int)uVar34 <= (int)sVar14);
              if (sVar14 < 1) goto LAB_00102958;
              sVar14 = 0;
              sVar15 = 0;
              plVar33 = param_2;
              plVar25 = plVar3;
              do {
                if (*(char *)((long)plVar33 + 0x14a) != '\x02') {
                  if (plVar33 + 2 != plVar25) {
                    memcpy(plVar25,plVar33 + 2,0x150);
                    uVar26 = (ulong)*(ushort *)(param_2 + 0x124c);
                  }
                  plVar25 = plVar25 + 0x2a;
                  sVar14 = sVar14 + 1;
                }
                sVar15 = sVar15 + 1;
                plVar33 = plVar33 + 0x2a;
              } while (sVar15 < (short)uVar26);
              *(short *)(param_2 + 0x124c) = sVar14;
              sVar15 = (short)uVar35;
              if (sVar14 < 1) {
                *(undefined2 *)(param_2 + 0x124c) = 0;
              }
              else {
                bVar4 = *(byte *)(param_2 + 0x29);
                bVar5 = *(byte *)((long)param_2 + 0x149);
                sVar29 = 0;
                sVar31 = 0;
                plVar33 = param_2;
                plVar25 = plVar3;
                do {
                  if ((uint)bVar5 + (uint)bVar4 <=
                      (uint)*(byte *)((long)plVar33 + 0x149) + (uint)*(byte *)(plVar33 + 0x29)) {
                    if (plVar33 + 2 != plVar25) {
                      memcpy(plVar25,plVar33 + 2,0x150);
                      sVar14 = (short)param_2[0x124c];
                    }
                    plVar25 = plVar25 + 0x2a;
                    sVar29 = sVar29 + 1;
                  }
                  sVar31 = sVar31 + 1;
                  plVar33 = plVar33 + 0x2a;
                } while (sVar31 < sVar14);
                *(short *)(param_2 + 0x124c) = sVar29;
              }
            }
            if (sVar15 < 0) {
              return uVar35;
            }
            if (((*(byte *)((long)param_2 + 0x9264) & 1) != 0) && (*(char *)(param_1 + 3) == '\x03')
               ) goto LAB_00103094;
            if ((uVar35 & 0xffff) == 0) goto LAB_0010305c;
            sVar14 = FUN_00106da0(param_1,param_2,*(undefined2 *)((long)param_3 + 0x14));
            if (sVar14 < 0) {
              return (int)sVar14;
            }
            if (((*(byte *)((long)param_2 + 0x9264) & 1) != 0) && (*(char *)(param_1 + 3) == '\x03')
               ) goto LAB_00103094;
            if (1 < *(byte *)(param_2 + 0x29)) {
              bVar9 = false;
              iVar24 = 1;
              cVar6 = *(char *)((long)param_2 + 9);
              goto joined_r0x0010306c;
            }
            sVar14 = FUN_00106060(param_1,param_2,*(undefined2 *)((long)param_3 + 0x14));
            uVar35 = (uint)sVar14;
            if ((int)uVar35 < 0) {
              return uVar35;
            }
            if (((*(byte *)((long)param_2 + 0x9264) & 1) != 0) && (*(char *)(param_1 + 3) == '\x03')
               ) goto LAB_00103094;
            bVar11 = true;
            if (uVar35 != 0) goto LAB_001029f8;
            uVar19 = 0;
            uVar13 = uVar8;
          }
          else {
            sVar14 = FUN_00106060(param_1,param_2);
            uVar35 = (uint)sVar14;
            if ((int)uVar35 < 0) {
              return uVar35;
            }
            if ((((uVar35 == 1) && ((short)param_2[0x124c] == 1)) &&
                (*(short *)((long)param_2 + 0x146) == 0)) &&
               (uVar8 = uVar13, *(short *)((long)param_2 + 0x144) != 0)) {
              uVar8 = uVar18;
            }
            if (((*(byte *)((long)param_2 + 0x9264) & 1) != 0) && (*(char *)(param_1 + 3) == '\x03')
               ) goto LAB_00103094;
            if ((uVar35 == 0) ||
               ((!bVar10 &&
                ((uint)*(byte *)((long)param_2 + 0x149) + (uint)*(byte *)(param_2 + 0x29) < 2)))) {
              cVar6 = (char)param_2[1];
              goto joined_r0x00102224;
            }
LAB_001029f8:
            sVar14 = FUN_00106da0(param_1,param_2,*(undefined2 *)((long)param_3 + 0x14));
            uVar19 = (uint)sVar14;
            if ((int)uVar19 < 0) {
              return uVar19;
            }
            uVar19 = uVar19 + uVar35;
            uVar13 = uVar8;
            if (((*(byte *)((long)param_2 + 0x9264) & 1) != 0) && (*(char *)(param_1 + 3) == '\x03')
               ) goto LAB_00103094;
          }
          bVar9 = false;
          bVar10 = false;
        } while (*(byte *)(param_2 + 0x29) < 2);
        bVar10 = false;
LAB_00103094:
        iVar24 = 0;
        bVar9 = false;
        cVar6 = *(char *)((long)param_2 + 9);
      }
      else {
        iVar24 = 0;
        cVar6 = *(char *)((long)param_2 + 9);
      }
joined_r0x0010306c:
      if (cVar6 == '\x01') {
        return 0;
      }
      if (((*(byte *)((long)param_2 + 0x9264) & 1) != 0) && (*(char *)(param_1 + 3) == '\x03')) {
        bVar4 = *(byte *)((long)param_2 + 0x77) & 0xf0;
        lVar27 = 0x8c;
        if (bVar4 != 0x50) {
          lVar27 = 0x8a;
        }
        lVar20 = 0x82;
        if (bVar4 != 0x50) {
          lVar20 = 0x80;
        }
        if ((char)param_2[0x29] == '\x01') {
          if ((*(ushort *)((long)param_2 + 0x9246) == *(ushort *)(param_2 + 0x10) >> 7) &&
             (*(ushort *)(param_2 + 0x1249) == *(ushort *)((long)param_2 + 0x82) >> 7)) {
            lVar27 = 0x8c;
            if (bVar4 != 0x50) {
              lVar27 = 0x8a;
            }
            uVar13 = *(ushort *)((long)param_2 + 0x82);
            if (bVar4 != 0x50) {
              uVar13 = *(ushort *)(param_2 + 0x10);
            }
            if (0x18 < (ushort)((*(ushort *)((long)param_2 + lVar27) & 0x7f) + (uVar13 & 0x7f)))
            goto LAB_00103268;
          }
          if (((short)param_3[3] == 0) && ((*(byte *)((long)param_2 + 0x8a) & 0x7f) != 0)) {
            sVar14 = (short)param_2[0x124c];
            if (0 < (long)sVar14) {
              uVar35 = *puVar1 - 1;
              uVar19 = *puVar1 + 6;
              if (-1 < (int)uVar35) {
                uVar19 = uVar35;
              }
              lVar27 = 0;
              plVar25 = param_2;
              goto LAB_001032d8;
            }
            if (sVar14 < 1) goto LAB_00103344;
          }
        }
        else if (((char)param_2[0x29] == '\x02') &&
                ((uint)*(ushort *)((long)param_3 + 0x14) +
                 (*(ushort *)((long)param_2 + lVar27) & 0x7f) +
                 (*(ushort *)((long)param_2 + lVar20) & 0x7f) <=
                 (uint)*(byte *)((long)param_2 + 0x9266))) goto LAB_00103268;
        break;
      }
      if (iVar24 == 0) {
        uVar13 = *(ushort *)((long)param_2 + 0x9262);
        uVar18 = *(ushort *)((long)param_2 + 0x144);
        if (uVar18 < uVar13) goto LAB_00102b90;
        sVar14 = (short)param_2[0x124c];
        if (0 < sVar14) {
          if (uVar13 == uVar18) {
            uVar26 = 0;
            pbVar32 = (byte *)(param_2 + 0x29);
            do {
              if (*(char *)(param_1 + 3) == '\x03') {
                uVar13 = *puVar1;
              }
              else {
                uVar13 = *(ushort *)((long)param_2 + 0x9242);
              }
              uVar35 = uVar13 - 1;
              uVar19 = uVar13 + 6;
              if (-1 < (int)uVar35) {
                uVar19 = uVar35;
              }
              if ((0x80U >> (ulong)(uVar35 & 7) &
                  (uint)*(byte *)(*(long *)(pbVar32 + 8) + (long)((int)uVar19 >> 3))) != 0) {
                uVar13 = FUN_001077f0(param_1,param_2,param_3,pbVar32 + -0x138,*pbVar32);
                if (*pbVar32 <= uVar13) goto LAB_00103288;
                sVar14 = (short)param_2[0x124c];
              }
              uVar19 = (uint)(short)((short)uVar26 + 1);
              uVar26 = (ulong)uVar19;
              uVar13 = *(ushort *)((long)param_2 + 0x9262);
            } while (((int)uVar19 < (int)sVar14) &&
                    (pbVar32 = pbVar32 + 0x150,
                    uVar13 == *(ushort *)((long)param_2 + (uVar26 & 0xffff) * 0x150 + 0x144)));
          }
          uVar18 = *(ushort *)((long)param_2 + 0x144);
        }
        if ((uVar13 != uVar18) || (1 < *(byte *)(param_2 + 0x29))) goto LAB_00102b90;
        bVar9 = true;
      }
      else {
        if (iVar24 == 2) {
          if (*(char *)(param_1 + 3) == '\x03') {
            if ((short)param_3[3] == 0) goto LAB_00103268;
          }
          else {
            plVar3 = (long *)param_3[1];
            *(undefined2 *)(param_3 + 3) = 1;
            uVar13 = FUN_001003e0(*param_3);
            sVar14 = *(short *)((long)param_2 + 0x9246);
            lVar27 = param_2[0x1249];
            *(undefined2 *)(plVar3 + 0x10) = 1;
            FUN_0010d880(plVar3);
            *(undefined2 *)(plVar3 + 0x10) = 0x801;
            *(ushort *)(plVar3 + 0xe) = uVar13 & 0x7f | sVar14 << 7;
            *(ushort *)((long)plVar3 + 0x72) = uVar13 & 0x7f | (short)lVar27 << 7;
            uVar12 = 0x8ad0;
            if (-0x8001 < (short)uVar13 * -1000) {
              uVar12 = (short)((uint)((short)uVar13 * -0x3e80000) >> 0x10);
            }
            *(undefined2 *)(plVar3 + 1) = uVar12;
            *(undefined1 *)((long)plVar3 + 0x74) = 2;
            *plVar3 = *param_3;
            uVar12 = FUN_001003e0(*param_3);
            *(undefined2 *)((long)param_3 + 0x14) = uVar12;
          }
          break;
        }
LAB_00102b90:
        uVar19 = (uint)(short)param_2[0x124c];
        plVar25 = plVar3;
        if ((short)param_2[0x124c] < 1) {
          uVar35 = 0;
        }
        else {
          uVar35 = 0;
          plVar33 = param_2;
          do {
            plVar17 = plVar33 + 0x2a;
            if (*(char *)(param_1 + 3) == '\x03') {
              uVar13 = *puVar1;
            }
            else {
              uVar13 = *(ushort *)((long)param_2 + 0x9244);
            }
            uVar7 = uVar13 - 1;
            uVar34 = uVar13 + 6;
            if (-1 < (int)uVar7) {
              uVar34 = uVar7;
            }
            if (((0x80U >> (ulong)(uVar7 & 7) & (uint)*(byte *)(*plVar17 + (long)((int)uVar34 >> 3))
                 ) == 0) || (uVar26 = (ulong)*(byte *)(plVar33 + 0x29), uVar26 == 0)) {
LAB_00102c40:
              if (((ulong)*(byte *)(plVar33 + 0x29) != 0) &&
                 (*(short *)((long)plVar17 + (ulong)*(byte *)(plVar33 + 0x29) * 0x10 + -0x34) < 0))
              goto LAB_00102c54;
            }
            else {
              puVar21 = (ushort *)((long)plVar17 + uVar26 * 0x88 + -0x156);
              lVar27 = uVar26 * 0x88 + -0x14c;
              if ((*(byte *)((long)plVar17 + uVar26 * 0x88 + -0x161) & 0xf0) != 0x50) {
                puVar21 = (ushort *)(plVar17 + uVar26 * 0x11 + -0x2b);
                lVar27 = uVar26 * 0x88 + -0x14e;
              }
              if ((ushort)((*(ushort *)((long)plVar17 + lVar27) & 0x7f) + (*puVar21 & 0x7f)) == 0)
              goto LAB_00102c40;
LAB_00102c54:
              if ((uint)*(ushort *)((long)param_2 + 0x9262) <=
                  (uint)*(ushort *)((long)plVar33 + 0x144)) break;
              uVar34 = (uint)*(ushort *)((long)plVar33 + 0x146) +
                       (uint)*(ushort *)((long)param_3 + 0x14);
              if (*(char *)(param_1 + 3) == '\x03') {
                if (uVar34 <= *(byte *)((long)param_2 + 0x9266)) {
                  plVar25 = plVar33 + 2;
                  break;
                }
              }
              else if ((int)uVar34 <=
                       (int)(((uint)*(ushort *)((long)plVar33 + 0x144) -
                             (uint)*(ushort *)((long)param_2 + 0x9262)) +
                            (uint)*(byte *)((long)param_2 + 0x9266))) break;
              *(undefined1 *)((long)plVar33 + 0x14a) = 1;
              uVar19 = (uint)*(ushort *)(param_2 + 0x124c);
            }
            uVar35 = (uint)(short)((short)uVar35 + 1);
            plVar25 = plVar25 + 0x2a;
            plVar33 = plVar17;
          } while ((int)uVar35 < (int)(short)uVar19);
        }
        plVar33 = plVar3;
        if ((uVar35 & 0xffff) != (uVar19 & 0xffff)) {
          plVar33 = plVar25;
        }
        uVar19 = FUN_001077f0(param_1,param_2,param_3,plVar33,*(byte *)(plVar33 + 0x27) - 1);
        bVar4 = *(byte *)(plVar33 + 0x27);
        lVar27 = (ulong)bVar4 - 1;
        if ((uVar19 & 0xffff) < ((uint)lVar27 & 0xffff)) {
          return 0x9b02;
        }
        puVar21 = (ushort *)((long)plVar33 + lVar27 * 0x88 + 0x72);
        lVar20 = lVar27 * 0x88 + 0x7c;
        if ((*(byte *)((long)plVar33 + lVar27 * 0x88 + 0x67) & 0xf0) != 0x50) {
          puVar21 = (ushort *)(plVar33 + lVar27 * 0x11 + 0xe);
          lVar20 = lVar27 * 0x88 + 0x7a;
        }
        uVar13 = *(short *)((long)plVar33 + 0x134) -
                 ((*(ushort *)((long)plVar33 + lVar20) & 0x7f) + (*puVar21 & 0x7f));
        param_2[0x124b] = param_2[0x124b] + (ulong)uVar13 * 2;
        *(ushort *)((long)param_2 + 0x9262) = *(short *)((long)param_2 + 0x9262) - uVar13;
        uVar19 = (uint)(short)param_2[0x124c];
        if (0 < (short)param_2[0x124c]) {
          sVar14 = *(short *)((long)plVar33 + 0x11c);
          iVar24 = 0;
          do {
            sVar15 = (short)iVar24;
            lVar20 = (long)sVar15;
            plVar25 = param_2 + lVar20 * 0x2a + 2;
            if (*(byte *)(param_2 + lVar20 * 0x2a + 0x29) == bVar4) {
              lVar2 = lVar27 * 0x88 + lVar20 * 0x150;
              puVar21 = (ushort *)((long)param_2 + lVar2 + 0x82);
              lVar16 = lVar2 + 0x8c;
              if ((*(byte *)((long)param_2 + lVar2 + 0x77) & 0xf0) != 0x50) {
                puVar21 = (ushort *)(param_2 + lVar20 * 0x2a + lVar27 * 0x11 + 0x10);
                lVar16 = lVar2 + 0x8a;
              }
              if ((((uint)*(ushort *)((long)param_2 + lVar20 * 0x150 + 0x144) -
                    ((*(ushort *)((long)param_2 + lVar16) & 0x7f) + (*puVar21 & 0x7f)) !=
                    (uint)uVar13) || (*(char *)((long)param_2 + lVar20 * 0x150 + 0x14a) == '\x01'))
                 || (*(short *)((long)param_2 + lVar20 * 0x150 + 300) != sVar14)) goto LAB_00102f40;
              if (bVar4 == 1) goto LAB_00102f98;
              memcpy(plVar25,param_2 + lVar20 * 0x2a + lVar27 * 0x11 + 2,0x88);
              lVar2 = (param_2 + lVar20 * 0x2a + lVar27 * 2 + 0x24)[1];
              param_2[lVar20 * 0x2a + 0x24] = param_2[lVar20 * 0x2a + lVar27 * 2 + 0x24];
              param_2[lVar20 * 0x2a + 0x25] = lVar2;
              if (bVar4 != 0) {
                uVar26 = 1;
                plVar25 = param_2;
                plVar33 = param_2;
                do {
                  *(int *)(param_2 + lVar20 * 0x2a + 0x28) =
                       (1000 - (short)plVar25[lVar20 * 0x2a + 0x14]) +
                       (int)param_2[lVar20 * 0x2a + 0x28];
                  *(undefined2 *)(plVar25 + lVar20 * 0x2a + 0x23) = 1;
                  FUN_0010d880(plVar25 + lVar20 * 0x2a + 0x13);
                  *(undefined2 *)((long)plVar33 + lVar20 * 0x150 + 0x13c) = 0;
                  plVar33[lVar20 * 0x2a + 0x26] = 0;
                  *(undefined4 *)(plVar33 + lVar20 * 0x2a + 0x27) = 0;
                  uVar26 = uVar26 + 1;
                  plVar25 = plVar25 + 0x11;
                  plVar33 = plVar33 + 2;
                } while (uVar26 < *(byte *)(param_2 + lVar20 * 0x2a + 0x29));
              }
              *(int *)(param_2 + lVar20 * 0x2a + 0x28) = (short)param_2[lVar20 * 0x2a + 3] + -1000;
              if (*(char *)(param_1 + 3) == '\x03') {
                bVar5 = *(byte *)((long)param_2 + lVar20 * 0x150 + 0x77);
                puVar21 = (ushort *)((long)param_2 + lVar20 * 0x150 + 0x82);
                lVar2 = lVar20 * 0x150 + 0x8c;
                if ((bVar5 & 0xf0) != 0x50) {
                  puVar21 = (ushort *)(param_2 + lVar20 * 0x2a + 0x10);
                  lVar2 = lVar20 * 0x150 + 0x8a;
                }
                *(ushort *)((long)param_2 + lVar20 * 0x150 + 0x146) =
                     (*(ushort *)((long)param_2 + lVar2) & 0x7f) + (*puVar21 & 0x7f);
              }
              else {
                *(ushort *)((long)param_2 + lVar20 * 0x150 + 0x146) =
                     (*(ushort *)((long)param_2 + lVar20 * 0x150 + 0x8c) & 0x7f) +
                     (*(ushort *)((long)param_2 + lVar20 * 0x150 + 0x82) & 0x7f);
                bVar5 = *(byte *)((long)param_2 + lVar20 * 0x150 + 0x77);
              }
              puVar21 = (ushort *)((long)param_2 + lVar20 * 0x150 + 0x82);
              lVar2 = lVar20 * 0x150 + 0x8c;
              if ((bVar5 & 0xf0) != 0x50) {
                puVar21 = (ushort *)(param_2 + lVar20 * 0x2a + 0x10);
                lVar2 = lVar20 * 0x150 + 0x8a;
              }
              *(ushort *)((long)param_2 + lVar20 * 0x150 + 0x144) =
                   (*(ushort *)((long)param_2 + lVar2) & 0x7f) + (*puVar21 & 0x7f);
              *(byte *)(param_2 + lVar20 * 0x2a + 0x29) = 1;
              *(undefined1 *)((long)param_2 + lVar20 * 0x150 + 0x149) = 0;
              uVar19 = (uint)*(ushort *)(param_2 + 0x124c);
            }
            else {
LAB_00102f40:
              iVar30 = iVar24 + 1;
              if ((short)iVar30 < (short)uVar19) {
                iVar28 = iVar30 - (short)iVar30;
                do {
                  if (iVar28 != 0) {
                    plVar25 = plVar25 + 0x2a;
                  }
                  memcpy(plVar25,plVar25 + 0x2a,0x150);
                  iVar30 = (int)(short)((short)iVar30 + 1);
                  uVar19 = (uint)(short)param_2[0x124c];
                  iVar28 = iVar28 + -1;
                } while (iVar30 < (int)uVar19);
              }
              uVar19 = uVar19 - 1;
              *(short *)(param_2 + 0x124c) = (short)uVar19;
              iVar24 = iVar24 + -1;
LAB_00102f98:
              sVar15 = (short)iVar24;
            }
            iVar24 = (int)(short)(sVar15 + 1);
          } while ((iVar24 < 0x65) && (iVar24 < (short)uVar19));
        }
      }
      if ((ushort)*(byte *)((long)param_2 + 10) <= *(ushort *)(param_3 + 3)) break;
    } while( true );
  }
  goto LAB_00103288;
  while( true ) {
    lVar27 = lVar27 + 1;
    plVar25 = plVar25 + 0x2a;
    if (sVar14 <= lVar27) break;
LAB_001032d8:
    if ((0x80U >> (ulong)(uVar35 & 7) &
        (uint)*(byte *)(plVar25[0x2a] + ((long)((ulong)uVar19 << 0x20) >> 0x23))) != 0) {
      FUN_001077f0(param_1,param_2,param_3,plVar25 + 2,1);
      sVar14 = (short)param_2[0x124c];
      break;
    }
  }
  if ((short)lVar27 < sVar14) goto LAB_00103288;
LAB_00103344:
  if ((*(ushort *)((long)param_2 + 0x82) & 0x7f) == 0) {
LAB_001033d0:
    *(undefined2 *)(param_2 + 0x11) = 0;
    sVar15 = *(short *)((long)param_2 + 0x8a);
    sVar14 = *(short *)((long)param_2 + 0x82);
    if (1 < (byte)((*(byte *)((long)param_2 + 0x77) >> 4) - 5)) {
      sVar14 = (short)param_2[0x10];
    }
    *(undefined4 *)((long)param_2 + 0x8a) = 0;
    *(ushort *)(param_2 + 0x10) = sVar15 + sVar14 & 0x7fU | *(short *)((long)param_2 + 0x9246) << 7;
    *(ushort *)((long)param_2 + 0x82) =
         *(short *)((long)param_2 + 0x8c) + *(short *)((long)param_2 + 0x82) & 0x7fU |
         (short)param_2[0x1249] << 7;
  }
  else {
    uVar18 = *(ushort *)((long)param_2 + 0x82) >> 7;
    uVar13 = *puVar1;
    local_e8 = (byte *)0x0;
    if ((((uVar18 == 0) || (*(long *)(*param_2 + 0x640) == 0)) || (uVar13 == 0)) ||
       (((*(ushort *)((long)param_2 + 0x924e) < uVar13 || (*(ushort *)(param_2 + 0x124a) < uVar18))
        || (FUN_0011f730(*(long *)(*param_2 + 0x640),uVar18,0,&local_e8),
           (0x80U >> (ulong)(uVar13 - 1 & 7) & (uint)local_e8[(ulong)(uVar13 - 1 >> 3) & 0x1fff]) ==
           0)))) goto LAB_001033d0;
    *(undefined2 *)((long)param_2 + 0x8c) = 0;
    *(undefined4 *)(param_2 + 0x11) = 0;
  }
LAB_00103268:
  FUN_001077f0(param_1,param_2,param_3,plVar3,1);
LAB_00103288:
  return (uint)*(ushort *)(param_3 + 3);
}

