
/* WARNING: Removing unreachable block (ram,0x00122724) */
/* WARNING: Removing unreachable block (ram,0x00120100) */
/* WARNING: Removing unreachable block (ram,0x00121a6c) */
/* WARNING: Removing unreachable block (ram,0x00121908) */
/* WARNING: Removing unreachable block (ram,0x00121f88) */
/* WARNING: Removing unreachable block (ram,0x00120ef0) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0011f890(long param_1,long *param_2,short *param_3,char param_4,ulong param_5)

{
  undefined1 *puVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  bool bVar11;
  char cVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint *puVar24;
  ushort uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  byte bVar32;
  undefined1 uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  uint uVar38;
  uint *puVar39;
  uint uVar40;
  uint uVar41;
  ulong uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  long lVar47;
  byte *pbVar48;
  ulong uVar49;
  int *piVar50;
  uint local_144;
  ulong local_140;
  uint local_134;
  ulong local_120;
  uint local_118;
  uint local_100;
  long local_f8;
  undefined8 *local_e0;
  char local_d8;
  undefined7 uStack_d7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(byte *)(param_2 + 10) < 7) {
    pbVar48 = (byte *)(param_1 + 0x6d648);
    lVar21 = *(long *)(param_3 + 4);
    lVar47 = *(long *)(lVar21 + 8);
    uVar42 = param_5 & 0xffffffff;
    switch(*(byte *)(param_2 + 10)) {
    case 0:
      if (((*(char *)((long)param_2 + 0x51) == '\0') && (*(ushort *)((long)param_2 + 0x4c) != 0)) &&
         (*(ushort *)((long)param_2 + 0x4c) <=
          (ushort)(CONCAT11(*(undefined1 *)(lVar47 + 0x16),*(undefined1 *)(lVar47 + 0x17)) >> 1))) {
        if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
          sVar13 = FUN_00122730(param_1,param_2,param_3,uVar42);
          if (sVar13 < 1) {
            return (ulong)(uint)(int)sVar13;
          }
          lVar21 = *(long *)(param_3 + 4);
          lVar47 = *(long *)(lVar21 + 8);
        }
        lVar37 = *(long *)(lVar21 + 0x28);
        uVar34 = (*(uint *)(lVar47 + 0x20) & 0xff00ff00) >> 8 |
                 (*(uint *)(lVar47 + 0x20) & 0xff00ff) << 8;
        uVar34 = uVar34 >> 0x10 | uVar34 << 0x10;
        lVar29 = *(long *)(lVar21 + 0x60);
        iVar15 = *(int *)(lVar21 + 0x70);
        iVar18 = *(int *)(param_3 + 0x1c);
        iVar17 = FUN_0010dbc0(lVar21,5,uVar34,1,&local_d8);
        if (-1 < iVar17) {
          cVar12 = *(char *)CONCAT71(uStack_d7,local_d8);
          uVar44 = *(uint *)(*(long *)(param_3 + 4) + 8);
          iVar17 = 10;
          if (iVar15 == 0x40050001) {
            iVar17 = 6;
          }
          uVar44 = (uVar44 & 0xff00ff00) >> 8 | (uVar44 & 0xff00ff) << 8;
          uVar16 = 6;
          if ((uVar44 >> 0x10 | uVar44 << 0x10) != 0x40050001) {
            uVar16 = 10;
          }
          iVar14 = FUN_0010dbc0(*(long *)(param_3 + 4),5,uVar34 + (iVar18 - 1U) * iVar17,uVar16,
                                &local_d8);
          if (-1 < iVar14) {
            uVar36 = *(uint *)(param_3 + 0x1c);
            uVar43 = iVar18 - 1U;
            uVar44 = uVar36;
            if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
LAB_0011fa3c:
              if (uVar44 <= *(uint *)(param_3 + 0x20)) {
                bVar32 = *(byte *)(lVar47 + 0x4a);
                bVar4 = *(byte *)(lVar47 + 0x4e);
                lVar21 = 8;
                if (iVar15 == 0x40050001) {
                  lVar21 = 4;
                }
                lVar30 = 9;
                if (iVar15 == 0x40050001) {
                  lVar30 = 5;
                }
                iVar15 = uVar34 + iVar17 * uVar44;
                do {
                  if ((*(byte *)(lVar29 + (ulong)(uVar43 << 1)) >> 6 & 1) != 0) {
                    if (*param_2 == 0) {
                      uVar25 = 0;
LAB_0011fb08:
                      if (param_2[1] == 0) goto LAB_0011fafc;
LAB_0011fb10:
                      bVar3 = *(byte *)(lVar47 + 0x4f);
                      uVar34 = (uint)bVar3;
                      if (bVar3 != 0) {
                        uVar34 = 0x10 - bVar3;
                        uVar34 = (uint)(ushort)(CONCAT11(*(undefined1 *)
                                                          (CONCAT71(uStack_d7,local_d8) + lVar21),
                                                         *(undefined1 *)
                                                          (CONCAT71(uStack_d7,local_d8) + lVar30))
                                               >> (ulong)(uVar34 - *(byte *)(lVar47 + 0x4b) & 0x1f))
                                 & 0xffffU >> (ulong)(uVar34 & 0x1f);
                      }
                      puVar1 = (undefined1 *)
                               (lVar37 + (ulong)(((int)(short)((ushort)*(byte *)(lVar47 + 0x48) << 8
                                                              ) | (uint)*(byte *)(lVar47 + 0x49)) *
                                                 (uint)bVar32 + uVar34 * bVar4));
                      uVar33 = *puVar1;
                      if (bVar4 != 2) goto LAB_0011fbac;
                      sVar13 = FUN_001139a0(param_2,uVar25,CONCAT11(uVar33,puVar1[1]));
                    }
                    else {
                      bVar3 = *(byte *)(lVar47 + 0x4b);
                      uVar42 = (ulong)bVar3;
                      if (bVar3 != 0) {
                        uVar42 = (ulong)(ushort)(CONCAT11(*(undefined1 *)
                                                           (CONCAT71(uStack_d7,local_d8) + lVar21),
                                                          *(undefined1 *)
                                                           (CONCAT71(uStack_d7,local_d8) + lVar30))
                                                >> (ulong)(0x10 - bVar3 & 0x1f));
                      }
                      pbVar48 = (byte *)(lVar37 + uVar42 * bVar32);
                      bVar3 = *pbVar48;
                      uVar25 = (ushort)bVar3;
                      if (bVar32 != 2) goto LAB_0011fb08;
                      uVar25 = CONCAT11(bVar3,pbVar48[1]);
                      if (param_2[1] != 0) goto LAB_0011fb10;
LAB_0011fafc:
                      uVar33 = 0;
LAB_0011fbac:
                      sVar13 = FUN_001139a0(param_2,uVar25,uVar33);
                    }
                    if (sVar13 != 0) {
                      *(undefined1 *)((long)param_3 + 0x5f) = 2;
                      *(uint *)(param_3 + 0x1c) = uVar44;
                      uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar44);
                      *(undefined1 *)(param_3 + 0x2f) = 0x10;
                      *(undefined4 *)(param_3 + 0x2c) = uVar16;
                      iVar18 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) *
                               (*(byte *)(lVar29 + (ulong)(uVar43 << 1)) & 0x3f);
                      sVar7 = param_3[2] +
                              ((short)((ulong)((long)iVar18 * 0x51eb851f) >> 0x25) -
                              (short)(iVar18 >> 0x1f));
                      *param_3 = sVar7;
                      sVar13 = param_3[0x35];
                      if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
                        sVar13 = sVar7;
                      }
                      *param_3 = sVar13;
                      if (*(long *)(param_1 + 0x6f4b8) != 0) {
                        local_d0 = *(undefined8 *)param_3;
                        uStack_c8 = *(undefined8 *)(param_3 + 4);
                        local_c0 = *(undefined8 *)(param_3 + 8);
                        uStack_b8 = *(undefined8 *)(param_3 + 0xc);
                        local_b0 = *(undefined8 *)(param_3 + 0x10);
                        uStack_a8 = *(undefined8 *)(param_3 + 0x14);
                        local_a0 = *(undefined8 *)(param_3 + 0x18);
                        local_98 = *(undefined8 *)(param_3 + 0x1c);
                        local_90 = *(undefined8 *)(param_3 + 0x20);
                        uStack_88 = *(undefined8 *)(param_3 + 0x24);
                        local_80 = *(undefined8 *)(param_3 + 0x28);
                        local_78 = *(undefined8 *)(param_3 + 0x2c);
                        local_70 = *(undefined8 *)(param_3 + 0x30);
                        uStack_68 = *(undefined8 *)(param_3 + 0x34);
                        sVar13 = FUN_0012ab00(param_1,&local_d0);
                        if (sVar13 == 0) goto LAB_0011fc90;
                      }
                      if (param_4 != '\x01') {
                        return 1;
                      }
                      local_f8 = param_2[6];
                      uVar42 = (ulong)*(ushort *)((long)param_2 + 0x4c);
                      if (*(short *)(local_f8 + uVar42 * 2) == 0) {
                        return 1;
                      }
                      lVar21 = *(long *)(param_3 + 4);
                      lVar47 = *(long *)(lVar21 + 8);
                      uVar34 = (*(uint *)(lVar47 + 0x5c) & 0xff00ff00) >> 8 |
                               (*(uint *)(lVar47 + 0x5c) & 0xff00ff) << 8;
                      uVar34 = uVar34 >> 0x10 | uVar34 << 0x10;
                      if (uVar34 != 0) {
                        uVar44 = *(uint *)(param_3 + 0x1c);
                        uVar25 = FUN_001003e0();
                        if (uVar25 != 0) {
                          lVar37 = *(long *)(lVar21 + 0x50);
                          local_134 = 0;
                          iVar18 = *(int *)(lVar21 + 0x70);
                          lVar29 = *(long *)(lVar21 + 0x18);
                          uVar22 = 1;
                          uVar36 = *(uint *)(lVar47 + 0x20);
                          uVar43 = *(uint *)(lVar47 + 0x24);
                          param_3[0x2a] = 0;
                          param_3[0x2b] = 0;
                          param_3[0x26] = 0;
                          param_3[0x27] = 0;
                          param_3[0x28] = 0;
                          param_3[0x29] = 0;
                          param_3[0x22] = 0;
                          param_3[0x23] = 0;
                          param_3[0x24] = 0;
                          param_3[0x25] = 0;
                          uVar36 = (uVar36 & 0xff00ff00) >> 8 | (uVar36 & 0xff00ff) << 8;
                          uVar36 = uVar36 >> 0x10 | uVar36 << 0x10;
                          uVar43 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8;
                          uVar43 = uVar43 >> 0x10 | uVar43 << 0x10;
                          iVar15 = 10;
                          if (iVar18 == 0x40050001) {
                            iVar15 = 6;
                          }
                          goto LAB_001213e8;
                        }
                      }
                      return 1;
                    }
LAB_0011fc90:
                    if (cVar12 < '\0') break;
                  }
                  uVar34 = *(uint *)(*(long *)(param_3 + 4) + 8);
                  uVar34 = (uVar34 & 0xff00ff00) >> 8 | (uVar34 & 0xff00ff) << 8;
                  uVar16 = 6;
                  if ((uVar34 >> 0x10 | uVar34 << 0x10) != 0x40050001) {
                    uVar16 = 10;
                  }
                  iVar18 = FUN_0010dbc0(*(long *)(param_3 + 4),5,iVar15,uVar16,&local_d8);
                  if (iVar18 < 0) break;
                  uVar34 = uVar44 + 1;
                  iVar15 = iVar15 + iVar17;
                  uVar43 = uVar44;
                  uVar44 = uVar34;
                } while (uVar34 <= *(uint *)(param_3 + 0x20));
              }
            }
            else if (uVar36 != *(uint *)(param_3 + 0x20)) {
              uVar44 = *(uint *)(*(long *)(param_3 + 4) + 8);
              uVar44 = (uVar44 & 0xff00ff00) >> 8 | (uVar44 & 0xff00ff) << 8;
              uVar16 = 6;
              if ((uVar44 >> 0x10 | uVar44 << 0x10) != 0x40050001) {
                uVar16 = 10;
              }
              iVar18 = FUN_0010dbc0(*(long *)(param_3 + 4),5,uVar34 + uVar36 * iVar17,uVar16,
                                    &local_d8);
              if (-1 < iVar18) {
                uVar44 = uVar36 + 1;
                uVar43 = uVar36;
                goto LAB_0011fa3c;
              }
            }
          }
        }
        uVar33 = 3;
        uVar22 = 0;
        *(undefined1 *)((long)param_3 + 0x5f) = 3;
        goto LAB_00120028;
      }
      break;
    case 1:
      if (((*(char *)((long)param_2 + 0x51) != '\x02') && (*(ushort *)((long)param_2 + 0x4c) != 0))
         && (*(ushort *)((long)param_2 + 0x4c) <=
             (ushort)(CONCAT11(*(undefined1 *)(lVar47 + 0x16),*(undefined1 *)(lVar47 + 0x17)) >> 1))
         ) {
        param_5 = param_5 & 0xffff;
        lVar21 = *(long *)(param_2[5] + param_5 * 0x50 + 0x40);
        if (((lVar21 == 0) || (*(char *)((long)param_2 + 0x51) != '\0')) ||
           ((*(ushort *)(param_2[5] + 0x658) & 3) == 0)) {
          bVar32 = *(byte *)((long)param_3 + 0x5f);
          if ((bVar32 & 0xf) == 1) {
            sVar13 = FUN_00122730(param_1,param_2,param_3,uVar42);
            if (sVar13 < 1) {
              return (ulong)(uint)(int)sVar13;
            }
            bVar32 = *(byte *)((long)param_3 + 0x5f);
          }
          uVar34 = *(uint *)(param_3 + 0x1c);
          local_e0 = (undefined8 *)((ulong)local_e0 & 0xffffffffffffff00);
          if ((bVar32 & 0xf) == 1) goto LAB_001200e8;
          lVar21 = *(long *)(param_3 + 4);
          iVar15 = *(int *)(lVar21 + 0x70);
          if (*(long *)(param_3 + 8) == 0) {
            lVar47 = 0;
            lVar37 = *(long *)(lVar21 + 0x60);
            cVar12 = *(char *)((long)param_2 + 0x51);
          }
          else {
            lVar47 = *(long *)(lVar21 + 8);
            lVar47 = *(long *)(param_3 + 8) +
                     ((ulong)*(byte *)(lVar47 + 0x10) << 0x18 |
                      (ulong)*(byte *)(lVar47 + 0x11) << 0x10 | (ulong)*(byte *)(lVar47 + 0x12) << 8
                     | (ulong)*(byte *)(lVar47 + 0x13)) + 0x3c;
            lVar37 = *(long *)(lVar21 + 0x60);
            cVar12 = *(char *)((long)param_2 + 0x51);
          }
          if (cVar12 == '\0') {
            iVar18 = FUN_0012a7e0(param_1,uVar34,*(byte *)(lVar37 + (ulong)(uVar34 * 2 - 1)) & 0x3f,
                                  param_3,&local_e0,uVar42);
            uVar44 = *(uint *)(param_3 + 0x20);
            if (uVar34 < uVar44) {
              uVar34 = uVar34 + 1;
            }
            else {
              uVar34 = *(uint *)(param_3 + 0x1e);
            }
            uVar25 = (ushort)*pbVar48;
            if ((ushort)*pbVar48 <= *(ushort *)((long)param_2 + 0x4e)) {
              uVar25 = *(ushort *)((long)param_2 + 0x4e);
            }
            if (uVar34 <= uVar44) {
              puVar1 = (undefined1 *)(param_1 + param_5 + 0x6f4fc);
              bVar11 = false;
              uVar36 = 0;
              local_118 = -10000;
LAB_0012094c:
              if (lVar47 == 0) {
                do {
                  if (*(char *)((long)param_2 + 0x53) < '\0') {
                    if (0x3f < *(byte *)(lVar37 + (ulong)(uVar34 * 2 - 1))) goto LAB_00120c70;
                  }
                  else if (uVar25 == 1) {
                    if ((*(byte *)(lVar37 + (ulong)(uVar34 * 2 - 1)) & 0xc0) == 0x40)
                    goto LAB_00120b70;
                  }
                  else if (uVar25 == 2) {
                    if (-1 < (char)(*(char *)(lVar37 + (ulong)(uVar34 * 2 - 1)) + -0x40))
                    goto LAB_00120b70;
                  }
                  else if ((2 < uVar25) && (0x3f < *(byte *)(lVar37 + (ulong)(uVar34 * 2 - 1)))) {
LAB_00120b70:
                    lVar21 = *(long *)(param_3 + 4);
                    bVar32 = *pbVar48;
                    bVar4 = *(byte *)(param_1 + 0x6d649);
                    if (iVar15 == 0x40050001) {
                      if (((bVar32 == 0) && (bVar4 == 0x37)) ||
                         ((uVar43 = *(uint *)(*(long *)(lVar21 + 8) + 0x20),
                          uVar43 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8,
                          iVar17 = FUN_0010dbc0(lVar21,5,(uVar43 >> 0x10 | uVar43 << 0x10) +
                                                         uVar34 * 6 + -6,4,&local_d8), -1 < iVar17
                          && (bVar3 = *(byte *)CONCAT71(uStack_d7,local_d8) & 0x7f,
                             bVar3 <= bVar4 && bVar32 <= bVar3)))) goto LAB_00120c70;
                    }
                    else {
                      cVar12 = FUN_0012ac20(lVar21,uVar34,bVar32,bVar4);
                      if (cVar12 != '\0') goto LAB_00120c70;
                    }
                  }
                  uVar34 = uVar34 + 1;
                  if ((!bVar11) && (uVar44 < uVar34)) {
                    uVar44 = *(uint *)(param_3 + 0x1c);
                    uVar34 = *(uint *)(param_3 + 0x1e);
                    bVar11 = true;
                  }
                  if (uVar44 < uVar34) goto LAB_00120e58;
                } while( true );
              }
              do {
                cVar12 = *(char *)(lVar47 + (ulong)(uVar34 - 1));
                if (*(char *)((long)param_2 + 0x53) < '\0') {
                  if ((((uint)(int)cVar12 >> 6 & 1) == 0) &&
                     ((cVar12 < 0 || (0x3f < *(byte *)(lVar37 + (ulong)(uVar34 * 2 - 1))))))
                  goto LAB_00120c70;
                }
                else if (((uint)(int)cVar12 >> 6 & 1) == 0) {
                  if (-1 < cVar12) {
                    if (uVar25 != 2) {
                      if (uVar25 == 1) {
                        if ((*(byte *)(lVar37 + (ulong)(uVar34 * 2 - 1)) & 0xc0) == 0x40)
                        goto LAB_001209ec;
                      }
                      else if ((2 < uVar25) && (0x3f < *(byte *)(lVar37 + (ulong)(uVar34 * 2 - 1))))
                      goto LAB_001209ec;
                      goto LAB_00120ac4;
                    }
                    if ((char)(*(char *)(lVar37 + (ulong)(uVar34 * 2 - 1)) + -0x40) < '\0')
                    goto LAB_00120ac4;
                  }
LAB_001209ec:
                  lVar21 = *(long *)(param_3 + 4);
                  bVar32 = *pbVar48;
                  bVar4 = *(byte *)(param_1 + 0x6d649);
                  if (iVar15 == 0x40050001) {
                    if (((bVar32 == 0) && (bVar4 == 0x37)) ||
                       ((uVar43 = *(uint *)(*(long *)(lVar21 + 8) + 0x20),
                        uVar43 = (uVar43 & 0xff00ff00) >> 8 | (uVar43 & 0xff00ff) << 8,
                        iVar17 = FUN_0010dbc0(lVar21,5,(uVar43 >> 0x10 | uVar43 << 0x10) +
                                                       uVar34 * 6 + -6,4,&local_d8), -1 < iVar17 &&
                        (bVar3 = *(byte *)CONCAT71(uStack_d7,local_d8) & 0x7f,
                        bVar3 <= bVar4 && bVar32 <= bVar3)))) goto LAB_00120c70;
                  }
                  else {
                    cVar12 = FUN_0012ac20(lVar21,uVar34,bVar32,bVar4);
                    if (cVar12 != '\0') goto LAB_00120c70;
                  }
                }
LAB_00120ac4:
                uVar34 = uVar34 + 1;
                if ((!bVar11) && (uVar44 < uVar34)) {
                  uVar44 = *(uint *)(param_3 + 0x1c);
                  uVar34 = *(uint *)(param_3 + 0x1e);
                  bVar11 = true;
                }
                if (uVar44 < uVar34) goto LAB_00120e58;
              } while( true );
            }
          }
          else {
            uVar44 = *(uint *)(param_3 + 0x20);
            if (uVar34 + 1 <= uVar44) {
              if (*(char *)((long)param_2 + 0x53) < '\0') {
                uVar36 = uVar34 << 1 | 1;
                if (lVar47 == 0) {
                  do {
                    if (0x3f < *(byte *)(lVar37 + (ulong)uVar36)) goto LAB_0012195c;
                    uVar43 = uVar34 + 2;
                    uVar34 = uVar34 + 1;
                    uVar36 = uVar36 + 2;
                  } while (uVar43 <= uVar44);
                }
                else {
                  do {
                    if ((((uint)(int)*(char *)(lVar47 + (ulong)uVar34) >> 6 & 1) == 0) &&
                       ((*(char *)(lVar47 + (ulong)uVar34) < 0 ||
                        (0x3f < *(byte *)(lVar37 + (ulong)uVar36))))) goto LAB_0012195c;
                    uVar43 = uVar34 + 2;
                    uVar34 = uVar34 + 1;
                    uVar36 = uVar36 + 2;
                  } while (uVar43 <= uVar44);
                }
              }
              else {
                uVar25 = *(ushort *)((long)param_2 + 0x4e);
                if (lVar47 == 0) {
                  if (uVar25 != 1) {
                    uVar36 = uVar34 << 1 | 1;
                    do {
                      if (uVar25 == 2) {
                        if (-1 < (char)(*(char *)(lVar37 + (ulong)uVar36) + -0x40))
                        goto LAB_0012195c;
                      }
                      else if ((2 < uVar25) && (0x3f < *(byte *)(lVar37 + (ulong)uVar36)))
                      goto LAB_0012195c;
                      uVar43 = uVar34 + 2;
                      uVar34 = uVar34 + 1;
                      uVar36 = uVar36 + 2;
                    } while (uVar43 <= uVar44);
                  }
                  else {
                    uVar36 = uVar34 << 1 | 1;
                    do {
                      if ((*(byte *)(lVar37 + (ulong)uVar36) & 0xc0) == 0x40) goto LAB_0012195c;
                      uVar43 = uVar34 + 2;
                      uVar34 = uVar34 + 1;
                      uVar36 = uVar36 + 2;
                    } while (uVar43 <= uVar44);
                  }
                }
                else if (uVar25 != 1) {
                  uVar36 = uVar34 << 1 | 1;
                  do {
                    if (((uint)(int)*(char *)(lVar47 + (ulong)uVar34) >> 6 & 1) == 0) {
                      if (*(char *)(lVar47 + (ulong)uVar34) < 0) goto LAB_0012195c;
                      if (uVar25 == 2) {
                        if (-1 < (char)(*(char *)(lVar37 + (ulong)uVar36) + -0x40))
                        goto LAB_0012195c;
                      }
                      else if ((2 < uVar25) && (0x3f < *(byte *)(lVar37 + (ulong)uVar36)))
                      goto LAB_0012195c;
                    }
                    uVar43 = uVar34 + 2;
                    uVar34 = uVar34 + 1;
                    uVar36 = uVar36 + 2;
                  } while (uVar43 <= uVar44);
                }
                else {
                  uVar36 = uVar34 << 1 | 1;
                  do {
                    if ((((uint)(int)*(char *)(lVar47 + (ulong)uVar34) >> 6 & 1) == 0) &&
                       ((*(char *)(lVar47 + (ulong)uVar34) < 0 ||
                        ((*(byte *)(lVar37 + (ulong)uVar36) & 0xc0) == 0x40)))) goto LAB_0012195c;
                    uVar43 = uVar34 + 2;
                    uVar34 = uVar34 + 1;
                    uVar36 = uVar36 + 2;
                  } while (uVar43 <= uVar44);
                }
              }
            }
          }
LAB_00121fc8:
          uVar22 = 0;
          *(undefined1 *)((long)param_3 + 0x5f) = 3;
        }
        else {
          if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
            uVar22 = FUN_00122f70(param_1,param_2,param_3,uVar42);
            if (((uint)uVar22 & 0xffff) == 0xaca0) {
              lVar21 = *(long *)(param_2[5] + param_5 * 0x50 + 0x40);
              *(byte *)(lVar21 + 0x2050) = *(byte *)(lVar21 + 0x2050) | 1;
              uVar22 = FUN_00122f70(param_1,param_2,param_3,uVar42);
            }
            if ((short)uVar22 < 1) {
              return uVar22;
            }
            lVar21 = *(long *)(param_2[5] + param_5 * 0x50 + 0x40);
            uVar25 = *(ushort *)((long)param_2 + 0x4e);
            if (*(char *)((long)param_2 + 0x51) != '\0') goto LAB_00121fc8;
          }
          else {
            uVar25 = *(ushort *)((long)param_2 + 0x4e);
          }
          local_d8 = '\0';
          uVar26 = (ulong)uVar25;
          if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
LAB_001200e8:
            param_3[0x2f] = 0x210;
            return 1;
          }
          pbVar48 = (byte *)(lVar21 + 0x2050);
          lVar47 = *(long *)(*(long *)(param_3 + 4) + 0x60);
          if (*(long *)(param_3 + 8) == 0) {
            lVar37 = 0;
            bVar32 = *pbVar48;
          }
          else {
            lVar37 = *(long *)(*(long *)(param_3 + 4) + 8);
            lVar37 = *(long *)(param_3 + 8) +
                     ((ulong)*(byte *)(lVar37 + 0x10) << 0x18 |
                      (ulong)*(byte *)(lVar37 + 0x11) << 0x10 | (ulong)*(byte *)(lVar37 + 0x12) << 8
                     | (ulong)*(byte *)(lVar37 + 0x13)) + 0x3c;
            bVar32 = *pbVar48;
          }
          if ((bVar32 >> 1 & 1) == 0) {
            lVar37 = lVar21 + uVar26 * 2;
            uVar25 = *(ushort *)(lVar37 + 0x1fe0);
            uVar22 = 0xada0;
            if ((uVar25 < 0x100) && (uVar5 = *(ushort *)(lVar37 + 0x1fde), uVar5 < 0xff)) {
              uVar44 = (uint)uVar25;
              uVar36 = (uint)uVar5;
              uVar34 = uVar44 - uVar36;
              if ((uVar34 & 0xffff) != 0) {
                uVar43 = uVar36;
                if (uVar36 <= (ushort)param_3[0x2e]) {
                  uVar43 = (uint)(ushort)param_3[0x2e];
                }
                uVar22 = (ulong)uVar43;
                local_100 = FUN_0012c290(param_1,param_3,lVar21,uVar22,uVar26,uVar42,
                                         *(undefined1 *)((long)param_2 + 0x53));
                uVar45 = *(byte *)(lVar47 + (ulong)(*(int *)(param_3 + 0x1c) * 2 - 1)) & 0x3f;
                if (*(long *)(param_3 + 8) != 0) {
                  lVar47 = *(long *)(*(long *)(param_3 + 4) + 8);
                  uVar45 = (*(byte *)(*(long *)(param_3 + 8) +
                                      ((ulong)*(byte *)(lVar47 + 0x10) << 0x18 |
                                       (ulong)*(byte *)(lVar47 + 0x11) << 0x10 |
                                       (ulong)*(byte *)(lVar47 + 0x12) << 8 |
                                      (ulong)*(byte *)(lVar47 + 0x13)) +
                                      (ulong)(*(int *)(param_3 + 0x1c) - 1) + 0x3c) & 0x3f) + uVar45
                  ;
                  if (99 < uVar45) {
                    uVar45 = 100;
                  }
                }
                iVar15 = FUN_0012a960();
                if (iVar15 != 0) {
                  iVar15 = FUN_00113a80(param_1,iVar15);
                  iVar18 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
                  if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar18 != 0) {
                    iVar17 = iVar15 * 100;
                    iVar15 = 0;
                    if (iVar18 != 0) {
                      iVar15 = iVar17 / iVar18;
                    }
                  }
                  uVar45 = iVar15 + uVar45;
                }
                if ((int)local_100 < (int)uVar45) {
                  bVar11 = false;
                  uVar38 = (uint)((int)local_100 < -9999);
                  local_120 = uVar22;
                }
                else {
                  bVar32 = *(char *)(lVar21 + 0x2051) + 1;
                  *(byte *)(lVar21 + 0x2051) = bVar32;
                  if (bVar32 < 3) {
                    param_3[0x2f] = 0x210;
                    lVar21 = lVar21 + uVar22 * 0x20;
                    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(lVar21 + 0x10);
                    uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4),
                                          *(undefined4 *)(lVar21 + 0x10));
                    *(undefined4 *)(param_3 + 0x2c) = uVar16;
                    param_3[0x2e] = (short)uVar43;
                    return 1;
                  }
                  local_120 = 0;
                  uVar38 = 0;
                  *(undefined1 *)(lVar21 + 0x2051) = 0;
                  bVar11 = true;
                  local_100 = 0xffffd8f0;
                }
                uVar27 = uVar36;
                if ((uVar43 + 1 & 0xffff) < uVar44) {
                  uVar27 = uVar43 + 1;
                }
                uVar46 = (ulong)uVar27;
                if (uVar38 != (uVar34 & 0xffff)) {
                  lVar47 = param_1 + param_5 + 0x6f4fc;
                  if (bVar11) {
                    do {
                      uVar27 = (uint)uVar46;
                      uVar49 = uVar46 & 0xffff;
                      lVar37 = lVar21 + uVar49 * 0x20;
                      piVar50 = (int *)(lVar37 + 0x10);
                      iVar15 = *piVar50;
                      if (iVar15 == -1) {
                        uVar20 = 0xffffd8f0;
                        if (uVar45 == 0xffffd8f0) goto LAB_0012206c;
                      }
                      else {
                        uVar20 = FUN_0012a7e0(param_1,iVar15,
                                              *(byte *)(*(long *)(*(long *)(param_3 + 4) + 0x60) +
                                                       (ulong)(iVar15 * 2 - 1)) & 0x3f,param_3,
                                              lVar47,uVar42);
                        if (uVar20 == uVar45) {
LAB_0012206c:
                          if ((*(int *)(param_3 + 0x1e) != *(int *)(lVar37 + 0x14)) ||
                             (*(int *)(param_3 + 0x1c) != *piVar50)) goto LAB_00122390;
                          uVar20 = FUN_0012c290(param_1,param_3,lVar21,uVar46,uVar26,uVar42,
                                                *(undefined1 *)((long)param_2 + 0x53));
                        }
                      }
                      if (uVar20 == uVar45) goto LAB_00122390;
                      if ((int)uVar20 < -9999) {
                        uVar38 = uVar38 + 1;
                      }
                      uVar20 = uVar36;
                      if ((uVar27 + 1 & 0xffff) < uVar44) {
                        uVar20 = uVar27 + 1;
                      }
                      uVar46 = (ulong)uVar20;
                      if (uVar43 == (uVar20 & 0xffff)) {
                        param_3[0x2f] = 0x210;
                        uVar42 = uVar22;
                        goto LAB_001226e0;
                      }
                    } while ((uVar38 & 0xffff) != (uVar34 & 0xffff));
                  }
                  else {
                    do {
                      uVar27 = (uint)uVar46;
                      uVar49 = uVar46 & 0xffff;
                      lVar37 = lVar21 + uVar49 * 0x20;
                      piVar50 = (int *)(lVar37 + 0x10);
                      iVar15 = *piVar50;
                      if (iVar15 == -1) {
                        uVar20 = 0xffffd8f0;
                        if (uVar45 == 0xffffd8f0) goto LAB_001222dc;
                      }
                      else {
                        uVar20 = FUN_0012a7e0(param_1,iVar15,
                                              *(byte *)(*(long *)(*(long *)(param_3 + 4) + 0x60) +
                                                       (ulong)(iVar15 * 2 - 1)) & 0x3f,param_3,
                                              lVar47,uVar42);
                        if (uVar20 == uVar45) {
LAB_001222dc:
                          if ((*(int *)(param_3 + 0x1e) != *(int *)(lVar37 + 0x14)) ||
                             (*(int *)(param_3 + 0x1c) != *piVar50)) {
LAB_00122390:
                            param_3[0x2f] = 0x210;
                            lVar47 = lVar21 + uVar49 * 0x20;
                            *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar47 + 0x14);
                            *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar47 + 0x18);
                            *(int *)(param_3 + 0x1c) = *piVar50;
                            uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4),*piVar50);
                            param_3[0x2e] = (short)uVar27;
LAB_00122708:
                            *(undefined4 *)(param_3 + 0x2c) = uVar16;
                            *(undefined1 *)(lVar21 + 0x2051) = 1;
                            return 1;
                          }
                          uVar20 = FUN_0012c290(param_1,param_3,lVar21,uVar46,uVar26,uVar42,
                                                *(undefined1 *)((long)param_2 + 0x53));
                        }
                      }
                      if (uVar20 == uVar45) goto LAB_00122390;
                      if ((int)uVar20 < -9999) {
                        uVar38 = uVar38 + 1;
                      }
                      uVar35 = uVar27;
                      if ((int)uVar20 <= (int)local_100) {
                        uVar35 = (uint)local_120;
                      }
                      uVar22 = (ulong)uVar35;
                      if ((int)uVar20 <= (int)local_100) {
                        uVar20 = local_100;
                      }
                      uVar35 = uVar36;
                      if ((uVar27 + 1 & 0xffff) < uVar44) {
                        uVar35 = uVar27 + 1;
                      }
                      uVar46 = (ulong)uVar35;
                      if ((uVar43 == (uVar35 & 0xffff)) && (uVar20 != 0xffffd8f0)) {
                        iVar15 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar20;
                        sVar7 = param_3[2] +
                                ((short)((ulong)((long)iVar15 * 0x51eb851f) >> 0x25) -
                                (short)(iVar15 >> 0x1f));
                        *param_3 = sVar7;
                        sVar13 = param_3[0x35];
                        if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
                          sVar13 = sVar7;
                        }
                        *param_3 = sVar13;
                        param_3[0x2f] = 0x210;
                        uVar42 = uVar22 & 0xffff;
LAB_001226e0:
                        lVar47 = lVar21 + uVar42 * 0x20;
                        *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar47 + 0x14);
                        *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar47 + 0x18);
                        *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(lVar47 + 0x10);
                        uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4),
                                              *(undefined4 *)(lVar47 + 0x10));
                        param_3[0x2e] = (short)uVar22;
                        goto LAB_00122708;
                      }
                      local_120 = uVar22;
                      local_100 = uVar20;
                    } while ((uVar38 & 0xffff) != (uVar34 & 0xffff));
                  }
                }
              }
              goto LAB_00121fc8;
            }
          }
          else {
            *pbVar48 = bVar32 & 0xfd;
            if ((char)param_2[10] != '\x01') {
              return 1;
            }
            if (*(short *)((long)param_2 + 0x4c) == 0) {
              uVar44 = *(uint *)(param_3 + 0x20);
              if (*(uint *)(param_3 + 0x1c) < uVar44) {
                uVar36 = *(uint *)(param_3 + 0x1c) + 1;
              }
              else {
                uVar36 = *(uint *)(param_3 + 0x1e);
              }
              if (uVar44 < uVar36) {
                uVar34 = 0;
                iVar15 = -10000;
              }
              else {
                bVar11 = false;
                uVar34 = 0;
                puVar1 = (undefined1 *)(param_1 + param_5 + 0x6f4fc);
                iVar15 = -10000;
                uVar43 = uVar44;
                do {
                  if (-1 < *(char *)((long)param_2 + 0x53)) {
                    if (lVar37 == 0) {
                      uVar25 = *(ushort *)((long)param_2 + 0x4e);
                      do {
                        if (uVar25 == 1) {
                          if ((*(byte *)(lVar47 + (ulong)(uVar36 * 2 - 1)) & 0xc0) == 0x40)
                          goto LAB_00121d38;
                        }
                        else if (uVar25 == 2) {
                          if (-1 < (char)(*(char *)(lVar47 + (ulong)(uVar36 * 2 - 1)) + -0x40))
                          goto LAB_00121d38;
                        }
                        else if ((2 < uVar25) &&
                                (0x3f < *(byte *)(lVar47 + (ulong)(uVar36 * 2 - 1))))
                        goto LAB_00121d38;
                        uVar36 = uVar36 + 1;
                        if ((!bVar11) && (uVar43 < uVar36)) {
                          uVar43 = *(uint *)(param_3 + 0x1c);
                          uVar36 = *(uint *)(param_3 + 0x1e);
                          bVar11 = true;
                        }
                        if (uVar44 < uVar36) goto LAB_00121e7c;
                      } while( true );
                    }
                    do {
                      uVar45 = (uint)*(char *)(lVar37 + (ulong)(uVar36 - 1));
                      if ((uVar45 >> 6 & 1) == 0) {
                        if ((int)uVar45 < 0) goto LAB_00121d38;
                        uVar25 = *(ushort *)((long)param_2 + 0x4e);
                        if (uVar25 == 1) {
                          if ((*(byte *)(lVar47 + (ulong)(uVar36 * 2 - 1)) & 0xc0) == 0x40)
                          goto LAB_00121d38;
                        }
                        else if (uVar25 == 2) {
                          if (-1 < (char)(*(char *)(lVar47 + (ulong)(uVar36 * 2 - 1)) + -0x40))
                          goto LAB_00121d38;
                        }
                        else if ((2 < uVar25) &&
                                (0x3f < *(byte *)(lVar47 + (ulong)(uVar36 * 2 - 1))))
                        goto LAB_00121d38;
                      }
                      uVar36 = uVar36 + 1;
                      if ((!bVar11) && (uVar43 < uVar36)) {
                        uVar43 = *(uint *)(param_3 + 0x1c);
                        uVar36 = *(uint *)(param_3 + 0x1e);
                        bVar11 = true;
                      }
                      if (uVar44 < uVar36) goto LAB_00121e7c;
                    } while( true );
                  }
                  if (lVar37 == 0) {
                    while (*(byte *)(lVar47 + (ulong)(uVar36 * 2 - 1)) < 0x40) {
                      uVar36 = uVar36 + 1;
                      if ((!bVar11) && (uVar43 < uVar36)) {
                        uVar43 = *(uint *)(param_3 + 0x1c);
                        uVar36 = *(uint *)(param_3 + 0x1e);
                        bVar11 = true;
                      }
                      if (uVar44 < uVar36) goto LAB_00121e7c;
                    }
                  }
                  else {
                    while ((uVar45 = (uint)*(char *)(lVar37 + (ulong)(uVar36 - 1)),
                           (uVar45 >> 6 & 1) != 0 ||
                           ((-1 < (int)uVar45 &&
                            (*(byte *)(lVar47 + (ulong)(uVar36 * 2 - 1)) < 0x40))))) {
                      uVar36 = uVar36 + 1;
                      if ((!bVar11) && (uVar43 < uVar36)) {
                        uVar43 = *(uint *)(param_3 + 0x1c);
                        uVar36 = *(uint *)(param_3 + 0x1e);
                        bVar11 = true;
                      }
                      if (uVar44 < uVar36) goto LAB_00121e7c;
                    }
                  }
LAB_00121d38:
                  iVar18 = FUN_0012a7e0(param_1,uVar36,
                                        *(byte *)(lVar47 + (ulong)(uVar36 * 2 - 1)) & 0x3f,param_3,
                                        &local_d8,uVar42);
                  if (iVar15 < iVar18) {
                    if (*(long *)(param_1 + 0x6f4b8) != 0) {
                      uStack_c8 = *(undefined8 *)(param_3 + 4);
                      local_c0 = *(undefined8 *)(param_3 + 8);
                      uStack_b8 = *(undefined8 *)(param_3 + 0xc);
                      local_b0 = *(undefined8 *)(param_3 + 0x10);
                      uStack_a8 = *(undefined8 *)(param_3 + 0x14);
                      local_a0 = *(undefined8 *)(param_3 + 0x18);
                      local_90 = *(undefined8 *)(param_3 + 0x20);
                      uStack_88 = *(undefined8 *)(param_3 + 0x24);
                      local_80 = *(undefined8 *)(param_3 + 0x28);
                      local_78 = *(undefined8 *)(param_3 + 0x2c);
                      local_70 = *(undefined8 *)(param_3 + 0x30);
                      uStack_68 = *(undefined8 *)(param_3 + 0x34);
                      sVar7 = *param_3;
                      sVar13 = param_3[0x35];
                      if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
                        sVar13 = sVar7;
                      }
                      local_d0 = CONCAT62((int6)((ulong)*(undefined8 *)param_3 >> 0x10),sVar13);
                      local_98._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
                      local_98 = CONCAT44(local_98._4_4_,uVar36);
                      uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4),iVar18);
                      local_78 = CONCAT44(local_78._4_4_,uVar16);
                      sVar13 = FUN_0012ab00(param_1,&local_d0);
                      if (sVar13 == 0) goto LAB_00121e54;
                    }
                    if (local_d8 == '\x01') {
                      *puVar1 = 1;
                    }
                    else {
                      *puVar1 = 0;
                    }
                    iVar15 = iVar18;
                    uVar34 = uVar36;
                  }
LAB_00121e54:
                  uVar36 = uVar36 + 1;
                  if ((uVar43 < uVar36) && (!bVar11)) {
                    uVar43 = *(uint *)(param_3 + 0x1c);
                    uVar36 = *(uint *)(param_3 + 0x1e);
                    bVar11 = true;
                  }
                  uVar44 = *(uint *)(param_3 + 0x20);
                } while (uVar36 <= uVar44);
              }
LAB_00121e7c:
              iVar15 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * iVar15;
              sVar7 = param_3[2] +
                      ((short)((ulong)((long)iVar15 * 0x51eb851f) >> 0x25) - (short)(iVar15 >> 0x1f)
                      );
              *param_3 = sVar7;
              sVar13 = param_3[0x35];
              if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
                sVar13 = sVar7;
              }
              lVar21 = *(long *)(param_3 + 4);
              *param_3 = sVar13;
              *(uint *)(param_3 + 0x1c) = uVar34;
LAB_001219cc:
              uVar16 = FUN_0012a960(lVar21,uVar34);
              *(undefined4 *)(param_3 + 0x2c) = uVar16;
              return 1;
            }
            uVar25 = *(ushort *)((long)param_2 + 0x4e);
            lVar29 = lVar21 + (ulong)uVar25 * 2;
            uVar5 = *(ushort *)(lVar29 + 0x1fe0);
            uVar22 = 0xada0;
            if ((ulong)uVar5 < 0x100) {
              uVar6 = *(ushort *)(lVar29 + 0x1fde);
              uVar26 = (ulong)uVar6;
              if (uVar6 < 0xff) {
                uVar2 = (ushort)*(byte *)(param_1 + 0x6d648);
                if (*(byte *)(param_1 + 0x6d648) <= uVar25) {
                  uVar2 = uVar25;
                }
                local_140 = uVar26;
                if (uVar5 <= uVar6) {
                  local_144 = 0;
                  local_134 = -10000;
LAB_00121ee8:
                  lVar47 = lVar21 + (local_140 & 0xffff) * 0x20;
                  *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar47 + 0x14);
                  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar47 + 0x18);
                  iVar15 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * local_134;
                  sVar7 = param_3[2] +
                          ((short)((ulong)((long)iVar15 * 0x51eb851f) >> 0x25) -
                          (short)(iVar15 >> 0x1f));
                  *param_3 = sVar7;
                  sVar13 = param_3[0x35];
                  if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
                    sVar13 = sVar7;
                  }
                  *param_3 = sVar13;
                  *(uint *)(param_3 + 0x1c) = local_144;
                  uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4));
                  *(undefined4 *)(param_3 + 0x2c) = uVar16;
                  param_3[0x2e] = (short)local_140;
                  *(undefined1 *)(lVar21 + 0x2051) = 1;
                  return 1;
                }
                puVar1 = (undefined1 *)(param_1 + param_5 + 0x6f4fc);
                local_144 = 0;
                local_134 = -10000;
LAB_0012102c:
                lVar29 = lVar21 + uVar26 * 0x20;
                uVar34 = *(uint *)(lVar29 + 0x14);
                uVar44 = *(uint *)(lVar29 + 0x18);
                if (uVar34 <= uVar44) {
                  bVar11 = false;
                  uVar36 = 0;
                  iVar15 = -10000;
LAB_00121068:
                  uVar43 = uVar34 * 2 - 1;
                  do {
                    if (*(char *)((long)param_2 + 0x53) < '\0') {
                      if (lVar37 != 0) {
                        uVar45 = (uint)*(char *)(lVar37 + (ulong)(uVar34 - 1));
                        if ((uVar45 >> 6 & 1) != 0) goto LAB_0012120c;
                        if ((int)uVar45 < 0) goto LAB_00121100;
                      }
LAB_001210f0:
                      if (0x3f < *(byte *)(lVar47 + (ulong)uVar43)) {
LAB_00121100:
                        iVar18 = FUN_0012a7e0(param_1,uVar34,
                                              *(byte *)(lVar47 + (ulong)uVar43) & 0x3f,param_3,
                                              &local_d8,uVar42);
                        if (iVar18 <= iVar15) goto joined_r0x00121254;
                        if (*(long *)(param_1 + 0x6f4b8) == 0) goto LAB_00121220;
                        uStack_c8 = *(undefined8 *)(param_3 + 4);
                        local_c0 = *(undefined8 *)(param_3 + 8);
                        uStack_b8 = *(undefined8 *)(param_3 + 0xc);
                        local_b0 = *(undefined8 *)(param_3 + 0x10);
                        uStack_a8 = *(undefined8 *)(param_3 + 0x14);
                        local_a0 = *(undefined8 *)(param_3 + 0x18);
                        uStack_88 = *(undefined8 *)(param_3 + 0x24);
                        local_80 = *(undefined8 *)(param_3 + 0x28);
                        local_78 = *(undefined8 *)(param_3 + 0x2c);
                        local_70 = *(undefined8 *)(param_3 + 0x30);
                        uStack_68 = *(undefined8 *)(param_3 + 0x34);
                        local_90 = CONCAT44((int)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20),
                                            *(uint *)(lVar29 + 0x18));
                        sVar7 = *param_3;
                        sVar13 = param_3[0x35];
                        if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
                          sVar13 = sVar7;
                        }
                        local_d0 = CONCAT62((int6)((ulong)*(undefined8 *)param_3 >> 0x10),sVar13);
                        local_98 = CONCAT44(*(uint *)(lVar29 + 0x14),uVar34);
                        uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar34);
                        local_78._0_6_ = CONCAT24((short)uVar26,uVar16);
                        sVar13 = FUN_0012ab00(param_1,&local_d0);
                        if (sVar13 != 0) goto LAB_00121220;
                      }
                    }
                    else if (lVar37 == 0) {
LAB_0012108c:
                      if (uVar2 == 2) {
                        if (-1 < (char)(*(char *)(lVar47 + (ulong)uVar43) + -0x40))
                        goto LAB_00121100;
                      }
                      else if (uVar2 == 1) {
                        if ((*(byte *)(lVar47 + (ulong)uVar43) & 0xc0) == 0x40) goto LAB_00121100;
                      }
                      else if (2 < uVar2) goto LAB_001210f0;
                    }
                    else {
                      uVar45 = (uint)*(char *)(lVar37 + (ulong)(uVar34 - 1));
                      if ((uVar45 >> 6 & 1) == 0) {
                        if (-1 < (int)uVar45) goto LAB_0012108c;
                        goto LAB_00121100;
                      }
                    }
LAB_0012120c:
                    uVar34 = uVar34 + 1;
                    uVar43 = uVar43 + 2;
                    if (uVar44 < uVar34) goto LAB_00121258;
                  } while( true );
                }
                goto LAB_001212a0;
              }
            }
          }
        }
        if (0 < (short)uVar22) {
          return 1;
        }
LAB_001219e4:
        uVar33 = 3;
        goto LAB_00120028;
      }
      break;
    case 2:
      if (*(char *)((long)param_2 + 0x51) == '\0') {
        bVar32 = *(byte *)((long)param_3 + 0x5f);
        if ((bVar32 & 0xf) == 1) {
          sVar13 = FUN_00126b50(param_1,param_2,param_3,uVar42);
          if (sVar13 < 1) {
            return (ulong)(uint)(int)sVar13;
          }
          bVar32 = *(byte *)((long)param_3 + 0x5f);
        }
        if ((bVar32 & 0xf) == 1) goto LAB_0011fe24;
        if (*(char *)((long)param_2 + 0x51) == '\0') {
          lVar21 = *(long *)(*(long *)(param_3 + 4) + 0x50);
          pbVar48 = (byte *)(lVar21 + (ulong)(*(int *)(param_3 + 0x1c) * 4 - 4));
          uVar44 = *(uint *)(param_3 + 0x20);
          uVar34 = *pbVar48 & 0x3f;
          if (*(long *)(param_3 + 8) != 0) {
            lVar47 = *(long *)(*(long *)(param_3 + 4) + 8);
            uVar34 = (*(byte *)(*(long *)(param_3 + 8) +
                                ((ulong)*(byte *)(lVar47 + 0x10) << 0x18 |
                                 (ulong)*(byte *)(lVar47 + 0x11) << 0x10 |
                                 (ulong)*(byte *)(lVar47 + 0x12) << 8 |
                                (ulong)*(byte *)(lVar47 + 0x13)) +
                                (ulong)(((uint)pbVar48[1] << 0x10 | (uint)pbVar48[2] << 8 |
                                        (uint)pbVar48[3]) - 1) + 0x3c) & 0x3f) + uVar34;
            if (99 < uVar34) {
              uVar34 = 100;
            }
          }
          iVar15 = FUN_0012a960();
          if (iVar15 != 0) {
            iVar15 = FUN_00113a80(param_1,iVar15);
            iVar18 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
            if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar18 != 0) {
              iVar17 = iVar15 * 100;
              iVar15 = 0;
              if (iVar18 != 0) {
                iVar15 = iVar17 / iVar18;
              }
            }
            uVar34 = iVar15 + uVar34;
          }
          uVar36 = *(uint *)(param_3 + 0x1c);
          if (uVar36 < uVar44) {
            uVar43 = uVar36 + 1;
          }
          else {
            uVar43 = *(uint *)(param_3 + 0x1e);
          }
          if (uVar43 <= uVar44) {
            bVar11 = false;
            uVar38 = 0;
            uVar45 = 0xffffd8f0;
            do {
              pbVar48 = (byte *)(lVar21 + (ulong)(uVar43 * 4 - 4));
              if ((*pbVar48 >> 6 & 1) != 0) {
                uVar27 = *pbVar48 & 0x3f;
                if (*(long *)(param_3 + 8) != 0) {
                  lVar47 = *(long *)(*(long *)(param_3 + 4) + 8);
                  uVar27 = (*(byte *)(*(long *)(param_3 + 8) +
                                      ((ulong)*(byte *)(lVar47 + 0x10) << 0x18 |
                                       (ulong)*(byte *)(lVar47 + 0x11) << 0x10 |
                                       (ulong)*(byte *)(lVar47 + 0x12) << 8 |
                                      (ulong)*(byte *)(lVar47 + 0x13)) +
                                      (ulong)(((uint)pbVar48[1] << 0x10 | (uint)pbVar48[2] << 8 |
                                              (uint)pbVar48[3]) - 1) + 0x3c) & 0x3f) + uVar27;
                  if (99 < uVar27) {
                    uVar27 = 100;
                  }
                }
                iVar15 = FUN_0012a960();
                if (iVar15 != 0) {
                  iVar15 = FUN_00113a80(param_1,iVar15);
                  iVar18 = (uint)(ushort)param_3[3] - (uint)(ushort)param_3[2];
                  if ((uint)(ushort)param_3[2] <= (uint)(ushort)param_3[3] && iVar18 != 0) {
                    iVar17 = iVar15 * 100;
                    iVar15 = 0;
                    if (iVar18 != 0) {
                      iVar15 = iVar17 / iVar18;
                    }
                  }
                  uVar27 = iVar15 + uVar27;
                }
                uVar36 = *(uint *)(param_3 + 0x1c);
                if ((uVar27 == uVar34) && (uVar36 < uVar43)) {
                  param_3[0x2f] = 0x210;
                  *(uint *)(param_3 + 0x1c) = uVar43;
                  uVar23 = *(undefined8 *)(param_3 + 4);
                  uVar34 = (uint)pbVar48[1] << 0x10 | (uint)pbVar48[2] << 8 | (uint)pbVar48[3];
                  goto LAB_001208f4;
                }
                if ((int)uVar27 < (int)uVar34) {
                  if ((int)uVar45 < (int)uVar27) {
LAB_001203fc:
                    uVar45 = uVar27;
                    uVar38 = uVar43;
                  }
                  else if (uVar43 < uVar38) {
                    if (uVar45 == uVar27) goto LAB_001203fc;
                  }
                }
              }
              uVar43 = uVar43 + 1;
              if ((!bVar11) && (uVar44 < uVar43)) {
                uVar43 = *(uint *)(param_3 + 0x1e);
                bVar11 = true;
                uVar44 = uVar36;
              }
            } while (uVar43 <= uVar44);
            if (uVar38 != 0) {
              iVar15 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar45;
              sVar7 = param_3[2] +
                      ((short)((ulong)((long)iVar15 * 0x51eb851f) >> 0x25) - (short)(iVar15 >> 0x1f)
                      );
              *param_3 = sVar7;
              sVar13 = param_3[0x35];
              if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
                sVar13 = sVar7;
              }
              param_3[0x2f] = 0x210;
              lVar21 = lVar21 + (ulong)(uVar38 * 4 - 4);
              *param_3 = sVar13;
              *(uint *)(param_3 + 0x1c) = uVar38;
              goto LAB_00120498;
            }
          }
        }
        goto LAB_00120054;
      }
      break;
    case 3:
      if (((*(char *)((long)param_2 + 0x51) == '\0') && (*(ushort *)((long)param_2 + 0x4c) != 0)) &&
         (*(ushort *)((long)param_2 + 0x4c) <=
          (ushort)(CONCAT11(*(undefined1 *)(lVar47 + 0x1a),*(undefined1 *)(lVar47 + 0x1b)) >> 1))) {
        bVar11 = (*(byte *)((long)param_3 + 0x5f) & 0xf) == 1;
        if (*(long *)(param_3 + 0x10) == 0) goto joined_r0x0012007c;
joined_r0x0011fecc:
        if (bVar11) {
          sVar13 = FUN_00123c50(param_2,param_3);
          if (sVar13 < 1) {
            return (ulong)(uint)(int)sVar13;
          }
        }
        sVar13 = FUN_00123ee0(param_2,param_3);
joined_r0x00120018:
        uVar22 = (ulong)(uint)(int)sVar13;
        if (0 < sVar13) {
          return uVar22;
        }
        goto LAB_001219e4;
      }
      break;
    case 4:
      if ((*(ushort *)((long)param_2 + 0x4c) != 0) &&
         (*(ushort *)((long)param_2 + 0x4c) <=
          (ushort)(CONCAT11(*(undefined1 *)(lVar47 + 0x1a),*(undefined1 *)(lVar47 + 0x1b)) >> 1))) {
        lVar21 = param_2[5];
        param_5 = param_5 & 0xffff;
        lVar47 = *(long *)(lVar21 + param_5 * 0x50 + 0x40);
        if (*(long *)(param_3 + 0x10) == 0) {
          if (((lVar47 != 0) && ((*(byte *)(lVar21 + 0x658) >> 1 & 1) != 0)) &&
             (*(char *)((long)param_2 + 0x51) == '\0')) {
            if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
              uVar22 = FUN_001258e0(param_1,param_2,param_3,uVar42);
              if (((uint)uVar22 & 0xffff) == 0xaca0) {
                lVar21 = *(long *)(param_2[5] + param_5 * 0x50 + 0x40);
                *(byte *)(lVar21 + 0x2050) = *(byte *)(lVar21 + 0x2050) | 1;
                uVar22 = FUN_001258e0(param_1,param_2,param_3,uVar42);
              }
              if ((short)uVar22 < 1) {
                return uVar22;
              }
            }
            uVar42 = FUN_001262c0(param_1,param_2,param_3,uVar42);
            return uVar42;
          }
          goto LAB_00120070;
        }
        if (((lVar47 == 0) || ((*(byte *)(lVar21 + 0x658) >> 1 & 1) == 0)) ||
           (*(char *)((long)param_2 + 0x51) != '\0')) {
          bVar11 = (*(byte *)((long)param_3 + 0x5f) & 0xf) == 1;
          goto joined_r0x0011fecc;
        }
        if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
          uVar22 = FUN_001251b0(param_2,param_3,uVar42);
          if (((uint)uVar22 & 0xffff) == 0xaca0) {
            lVar21 = *(long *)(param_2[5] + param_5 * 0x50 + 0x40);
            *(byte *)(lVar21 + 0x2050) = *(byte *)(lVar21 + 0x2050) | 1;
            uVar22 = FUN_001251b0(param_2,param_3,uVar42);
          }
          if ((short)uVar22 < 1) {
            return uVar22;
          }
          if (*(char *)((long)param_2 + 0x51) != '\0') goto LAB_00120054;
          lVar47 = *(long *)(param_2[5] + param_5 * 0x50 + 0x40);
        }
        if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
LAB_0011fe24:
          param_3[0x2f] = 0x210;
          return 1;
        }
        if ((*(byte *)(lVar47 + 0x2050) >> 1 & 1) == 0) {
          lVar21 = lVar47 + (ulong)*(ushort *)((long)param_2 + 0x4e) * 2;
          uVar25 = *(ushort *)(lVar21 + 0x1fe0);
          if (0xff < uVar25) {
            return 0xada0;
          }
          uVar5 = *(ushort *)(lVar21 + 0x1fde);
          if (0xfe < uVar5) {
            return 0xada0;
          }
          uVar36 = (uint)uVar25;
          uVar34 = (uint)uVar5;
          uVar44 = uVar36 - uVar34;
          if ((uVar44 & 0xffff) != 0) {
            lVar21 = *(long *)(param_3 + 0x10);
            uVar43 = uVar34;
            if (uVar34 <= (ushort)param_3[0x2e]) {
              uVar43 = (uint)(ushort)param_3[0x2e];
            }
            uVar42 = (ulong)uVar43;
            lVar37 = lVar47 + uVar42 * 0x20;
            lVar21 = lVar21 + ((ulong)*(byte *)(lVar21 + 0x10) << 0x18 |
                               (ulong)*(byte *)(lVar21 + 0x11) << 0x10 |
                               (ulong)*(byte *)(lVar21 + 0x12) << 8 |
                              (ulong)*(byte *)(lVar21 + 0x13));
            puVar39 = (uint *)(lVar37 + 0x10);
            uVar45 = *puVar39;
            if (uVar45 + 1 < 2) {
LAB_00120770:
              uVar40 = 0xffffd8f0;
              uVar35 = 0xffffffff;
            }
            else {
              uVar38 = *(uint *)(lVar37 + 0x14);
              if (*(uint *)(lVar37 + 0x18) < uVar38) goto LAB_00120770;
              uVar27 = uVar38 * 4 - 4;
              uVar35 = 0;
              uVar20 = *(byte *)(lVar21 + (ulong)(uVar45 * 4 - 4)) & 0x3f;
              uVar41 = 0xffffd8f0;
              do {
                uVar40 = *(byte *)(lVar21 + (ulong)uVar27) & 0x3f;
                if ((uVar45 < uVar38) && (uVar40 == uVar20)) {
                  uVar35 = uVar38;
                  goto LAB_00120778;
                }
                uVar31 = uVar38;
                if (uVar20 <= uVar40 || (int)uVar40 <= (int)uVar41) {
                  uVar40 = uVar41;
                  uVar31 = uVar35;
                }
                uVar35 = uVar31;
                uVar38 = uVar38 + 1;
                uVar27 = uVar27 + 4;
                uVar41 = uVar40;
              } while (uVar38 <= *(uint *)(lVar37 + 0x18));
              if (uVar40 == 0xffffd8f0) goto LAB_00120770;
            }
LAB_00120778:
            *puVar39 = uVar35;
            uVar45 = *(byte *)(lVar21 + (ulong)(*(int *)(param_3 + 0x1c) * 4 - 4)) & 0x3f;
            if (uVar40 == uVar45) {
              pbVar48 = (byte *)(lVar47 + 0x2051);
              bVar32 = *pbVar48;
              *pbVar48 = bVar32 + 1;
              if ((byte)(bVar32 + 1) < 3) {
                param_3[0x2f] = 0x210;
                uVar34 = *puVar39;
                *(uint *)(param_3 + 0x1c) = uVar34;
                param_3[0x2e] = (short)uVar43;
                lVar21 = lVar21 + (ulong)(uVar34 * 4 - 4);
LAB_00120498:
                uVar23 = *(undefined8 *)(param_3 + 4);
                uVar34 = (uint)*(byte *)(lVar21 + 1) << 0x10 | (uint)*(byte *)(lVar21 + 2) << 8 |
                         (uint)*(byte *)(lVar21 + 3);
LAB_001208f4:
                uVar16 = FUN_0012a960(uVar23,uVar34);
                *(undefined4 *)(param_3 + 0x2c) = uVar16;
                return 1;
              }
              uVar42 = 0;
              uVar38 = 0;
              *pbVar48 = 0;
              bVar11 = true;
              uVar40 = 0xffffd8f0;
            }
            else {
              bVar11 = false;
              uVar38 = (uint)((int)uVar40 < -9999);
            }
            if ((uVar43 + 1 & 0xffff) < uVar36) {
              uVar34 = uVar43 + 1;
            }
            uVar22 = (ulong)uVar34;
            if (uVar38 != (uVar44 & 0xffff)) {
              if (bVar11) {
                do {
                  sVar13 = (short)uVar22;
                  uVar26 = uVar22 & 0xffff;
                  lVar29 = lVar47 + uVar26 * 0x20;
                  puVar24 = (uint *)(lVar29 + 0x10);
                  uVar34 = *puVar24;
                  if (uVar34 + 1 < 2) {
LAB_00122148:
                    uVar38 = uVar38 + 1;
                  }
                  else {
                    lVar30 = *(long *)(param_3 + 0x10);
                    lVar30 = lVar30 + ((ulong)*(byte *)(lVar30 + 0x10) << 0x18 |
                                       (ulong)*(byte *)(lVar30 + 0x11) << 0x10 |
                                       (ulong)*(byte *)(lVar30 + 0x12) << 8 |
                                      (ulong)*(byte *)(lVar30 + 0x13));
                    uVar36 = *(byte *)(lVar30 + (ulong)(uVar34 * 4 - 4)) & 0x3f;
                    if (((uVar36 == uVar45) &&
                        (uVar27 = *(uint *)(param_3 + 0x1e), uVar27 == *(uint *)(lVar29 + 0x14))) &&
                       (*(uint *)(param_3 + 0x1c) == uVar34)) {
                      if (uVar27 <= *(uint *)(lVar29 + 0x18)) {
                        uVar35 = 0;
                        uVar20 = uVar27 * 4 - 4;
                        uVar41 = 0xffffd8f0;
                        do {
                          uVar36 = *(byte *)(lVar30 + (ulong)uVar20) & 0x3f;
                          if ((uVar34 < uVar27) && (uVar36 == uVar45)) {
                            *puVar24 = uVar27;
                            goto LAB_00122254;
                          }
                          uVar40 = uVar27;
                          if (uVar45 <= uVar36 || (int)uVar36 <= (int)uVar41) {
                            uVar36 = uVar41;
                            uVar40 = uVar35;
                          }
                          uVar35 = uVar40;
                          uVar27 = uVar27 + 1;
                          uVar20 = uVar20 + 4;
                          uVar41 = uVar36;
                        } while (uVar27 <= *(uint *)(lVar29 + 0x18));
                        if (uVar36 != 0xffffd8f0) {
                          *puVar24 = uVar35;
                          if (uVar36 != uVar45) goto LAB_0012225c;
                          goto LAB_001225fc;
                        }
                      }
                      *puVar24 = 0xffffffff;
                      goto LAB_00122148;
                    }
LAB_00122254:
                    if (uVar36 == uVar45) goto LAB_001225fc;
LAB_0012225c:
                    if ((int)uVar36 < -9999) goto LAB_00122148;
                  }
                  uVar34 = (uint)uVar5;
                  if (((int)uVar22 + 1U & 0xffff) < (uint)uVar25) {
                    uVar34 = (int)uVar22 + 1;
                  }
                  uVar22 = (ulong)uVar34;
                  if (uVar43 == (uVar34 & 0xffff)) {
                    param_3[0x2f] = 0x210;
                    *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar37 + 0x14);
                    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar37 + 0x18);
                    uVar34 = *puVar39;
                    *(uint *)(param_3 + 0x1c) = uVar34;
                    param_3[0x2e] = (short)uVar43;
                    goto LAB_00122624;
                  }
                } while ((uVar38 & 0xffff) != (uVar44 & 0xffff));
              }
              else {
                do {
                  uVar20 = (uint)uVar22;
                  sVar13 = (short)uVar22;
                  uVar26 = uVar22 & 0xffff;
                  lVar37 = lVar47 + uVar26 * 0x20;
                  puVar24 = (uint *)(lVar37 + 0x10);
                  uVar27 = *puVar24;
                  uVar34 = 0xffffd8f0;
                  if (uVar27 + 1 < 2) {
LAB_001223f4:
                    uVar38 = uVar38 + 1;
                  }
                  else {
                    lVar29 = *(long *)(param_3 + 0x10);
                    lVar29 = lVar29 + ((ulong)*(byte *)(lVar29 + 0x10) << 0x18 |
                                       (ulong)*(byte *)(lVar29 + 0x11) << 0x10 |
                                       (ulong)*(byte *)(lVar29 + 0x12) << 8 |
                                      (ulong)*(byte *)(lVar29 + 0x13));
                    uVar34 = *(byte *)(lVar29 + (ulong)(uVar27 * 4 - 4)) & 0x3f;
                    if (((uVar34 == uVar45) &&
                        (uVar35 = *(uint *)(param_3 + 0x1e), uVar35 == *(uint *)(lVar37 + 0x14))) &&
                       (*(uint *)(param_3 + 0x1c) == uVar27)) {
                      if (uVar35 <= *(uint *)(lVar37 + 0x18)) {
                        uVar31 = 0;
                        uVar41 = uVar35 * 4 - 4;
                        uVar28 = 0xffffd8f0;
                        do {
                          uVar34 = *(byte *)(lVar29 + (ulong)uVar41) & 0x3f;
                          if ((uVar27 < uVar35) && (uVar34 == uVar45)) {
                            *puVar24 = uVar35;
                            goto LAB_00122518;
                          }
                          uVar10 = uVar35;
                          if (uVar45 <= uVar34 || (int)uVar34 <= (int)uVar28) {
                            uVar34 = uVar28;
                            uVar10 = uVar31;
                          }
                          uVar31 = uVar10;
                          uVar35 = uVar35 + 1;
                          uVar41 = uVar41 + 4;
                          uVar28 = uVar34;
                        } while (uVar35 <= *(uint *)(lVar37 + 0x18));
                        if (uVar34 != 0xffffd8f0) {
                          *puVar24 = uVar31;
                          if (uVar34 != uVar45) goto LAB_00122520;
                          goto LAB_001225fc;
                        }
                      }
                      uVar34 = 0xffffd8f0;
                      *puVar24 = 0xffffffff;
                      goto LAB_001223f4;
                    }
LAB_00122518:
                    if (uVar34 == uVar45) goto LAB_001225fc;
LAB_00122520:
                    if ((int)uVar34 < -9999) goto LAB_001223f4;
                  }
                  uVar27 = uVar20;
                  if ((int)uVar34 <= (int)uVar40) {
                    uVar27 = (uint)uVar42;
                    uVar34 = uVar40;
                  }
                  uVar40 = uVar34;
                  uVar42 = (ulong)uVar27;
                  uVar34 = uVar20 + 1 & 0xffff;
                  uVar35 = (uint)uVar5;
                  if (uVar34 <= uVar36 && uVar25 != uVar34) {
                    uVar35 = uVar20 + 1;
                  }
                  uVar22 = (ulong)uVar35;
                  if ((uVar43 == (uVar35 & 0xffff)) && (uVar40 != 0xffffd8f0)) {
                    iVar15 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * uVar40;
                    sVar7 = param_3[2] +
                            ((short)((ulong)((long)iVar15 * 0x51eb851f) >> 0x25) -
                            (short)(iVar15 >> 0x1f));
                    *param_3 = sVar7;
                    sVar13 = param_3[0x35];
                    if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
                      sVar13 = sVar7;
                    }
                    param_3[0x2f] = 0x210;
                    lVar37 = lVar47 + (uVar42 & 0xffff) * 0x20;
                    *param_3 = sVar13;
                    *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar37 + 0x14);
                    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar37 + 0x18);
                    uVar34 = *(uint *)(lVar37 + 0x10);
                    *(uint *)(param_3 + 0x1c) = uVar34;
                    param_3[0x2e] = (short)uVar27;
                    goto LAB_00122624;
                  }
                } while ((uVar38 & 0xffff) != (uVar44 & 0xffff));
              }
            }
          }
        }
LAB_00120054:
        uVar22 = 0;
        goto LAB_001219e4;
      }
      break;
    case 5:
      if (((*(char *)((long)param_2 + 0x51) == '\0') && (*(ushort *)((long)param_2 + 0x4c) != 0)) &&
         ((*(ushort *)((long)param_2 + 0x4c) <=
           (ushort)(CONCAT11(*(undefined1 *)(lVar47 + 0x1a),*(undefined1 *)(lVar47 + 0x1b)) >> 1) &&
          (*(long *)(param_3 + 0xc) != 0)))) {
LAB_00120070:
        bVar11 = (*(byte *)((long)param_3 + 0x5f) & 0xf) == 1;
joined_r0x0012007c:
        if (bVar11) {
          sVar13 = FUN_00124440(param_1,param_2,param_3);
          if (sVar13 < 1) {
            return (ulong)(uint)(int)sVar13;
          }
        }
        sVar13 = FUN_00124860(param_1,param_2,param_3);
        goto joined_r0x00120018;
      }
      break;
    case 6:
      if ((((*(char *)((long)param_2 + 0x51) != '\x02') && (*(ushort *)((long)param_2 + 0x4c) != 0))
          && (*(ushort *)((long)param_2 + 0x4c) <=
              (ushort)(CONCAT11(*(undefined1 *)(lVar47 + 0x1a),*(undefined1 *)(lVar47 + 0x1b)) >> 1)
             )) && (*(long *)(param_3 + 0xc) != 0)) {
        if (((*(long *)(param_2[5] + (param_5 & 0xffff) * 0x50 + 0x40) != 0) &&
            (*(char *)((long)param_2 + 0x51) == '\0')) &&
           ((*(ushort *)(param_2[5] + 0x658) & 3) != 0)) {
          if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
            uVar22 = FUN_001258e0(param_1,param_2,param_3,uVar42);
            if (((uint)uVar22 & 0xffff) == 0xaca0) {
              lVar21 = *(long *)(param_2[5] + (param_5 & 0xffff) * 0x50 + 0x40);
              *(byte *)(lVar21 + 0x2050) = *(byte *)(lVar21 + 0x2050) | 1;
              uVar22 = FUN_001258e0(param_1,param_2,param_3,uVar42);
            }
            if ((short)uVar22 < 1) {
              return uVar22;
            }
          }
          sVar13 = FUN_001262c0(param_1,param_2,param_3,uVar42);
          goto joined_r0x00120018;
        }
        if ((*(byte *)((long)param_3 + 0x5f) & 0xf) == 1) {
          sVar13 = FUN_00124440(param_1,param_2,param_3);
          if (sVar13 < 1) {
            return (ulong)(uint)(int)sVar13;
          }
        }
        sVar13 = FUN_00124860(param_1,param_2,param_3);
        uVar22 = (ulong)(uint)(int)sVar13;
        if (0 < sVar13) {
          return uVar22;
        }
        *(undefined1 *)((long)param_3 + 0x5f) = 3;
        goto LAB_001219e4;
      }
    }
  }
  uVar22 = 0;
  uVar33 = 4;
LAB_00120028:
  *(undefined1 *)((long)param_3 + 0x5f) = uVar33;
  return uVar22;
LAB_00120c70:
  iVar17 = FUN_0012a7e0(param_1,uVar34,*(byte *)(lVar37 + (ulong)(uVar34 * 2 - 1)) & 0x3f,param_3,
                        &local_e0,uVar42);
  if ((iVar17 == iVar18 && *(uint *)(param_3 + 0x1c) <= uVar34) &&
      (iVar17 != iVar18 || uVar34 != *(uint *)(param_3 + 0x1c))) {
    param_3[0x2f] = 0x210;
    *(uint *)(param_3 + 0x1c) = uVar34;
    uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar34);
    *(undefined4 *)(param_3 + 0x2c) = uVar16;
    *puVar1 = (char)local_e0 == '\x01';
    if (*(long *)(param_1 + 0x6f4b8) == 0) {
      return 1;
    }
    local_d0 = *(undefined8 *)param_3;
    uStack_c8 = *(undefined8 *)(param_3 + 4);
    local_c0 = *(undefined8 *)(param_3 + 8);
    uStack_b8 = *(undefined8 *)(param_3 + 0xc);
    local_b0 = *(undefined8 *)(param_3 + 0x10);
    uStack_a8 = *(undefined8 *)(param_3 + 0x14);
    local_a0 = *(undefined8 *)(param_3 + 0x18);
    local_98 = *(undefined8 *)(param_3 + 0x1c);
    local_90 = *(undefined8 *)(param_3 + 0x20);
    uStack_88 = *(undefined8 *)(param_3 + 0x24);
    local_80 = *(undefined8 *)(param_3 + 0x28);
    local_78 = *(undefined8 *)(param_3 + 0x2c);
    local_70 = *(undefined8 *)(param_3 + 0x30);
    uStack_68 = *(undefined8 *)(param_3 + 0x34);
    sVar13 = FUN_0012ab00(param_1,&local_d0);
    if (sVar13 != 0) {
      return 1;
    }
  }
  else if (iVar17 < iVar18) {
    if (iVar17 <= (int)local_118) {
      if (uVar36 <= uVar34) goto joined_r0x00120e2c;
      if (local_118 != iVar17) goto joined_r0x00120e2c;
    }
    if (*(long *)(param_1 + 0x6f4b8) != 0) {
      local_80 = *(undefined8 *)(param_3 + 0x28);
      local_70 = *(undefined8 *)(param_3 + 0x30);
      uStack_68 = *(undefined8 *)(param_3 + 0x34);
      local_a0 = *(undefined8 *)(param_3 + 0x18);
      local_90 = *(undefined8 *)(param_3 + 0x20);
      uStack_88 = *(undefined8 *)(param_3 + 0x24);
      local_d0 = *(undefined8 *)param_3;
      uStack_c8 = *(undefined8 *)(param_3 + 4);
      local_c0 = *(undefined8 *)(param_3 + 8);
      uStack_b8 = *(undefined8 *)(param_3 + 0xc);
      local_b0 = *(undefined8 *)(param_3 + 0x10);
      uStack_a8 = *(undefined8 *)(param_3 + 0x14);
      local_98._4_4_ = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
      local_98 = CONCAT44(local_98._4_4_,uVar34);
      local_78._0_6_ = (undefined6)*(undefined8 *)(param_3 + 0x2c);
      local_78 = CONCAT26(0x210,(undefined6)local_78);
      uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4),uVar34);
      local_78 = CONCAT44(local_78._4_4_,uVar16);
      sVar13 = FUN_0012ab00(param_1,&local_d0);
      if (sVar13 == 0) goto joined_r0x00120e2c;
    }
    local_118 = iVar17;
    uVar36 = uVar34;
    if ((char)local_e0 == '\x01') {
      *puVar1 = 1;
    }
    else {
      *puVar1 = 0;
    }
  }
joined_r0x00120e2c:
  if ((!bVar11) && (uVar44 < uVar34 + 1)) {
    uVar44 = *(uint *)(param_3 + 0x1c);
    uVar34 = *(uint *)(param_3 + 0x1e);
    bVar11 = true;
    if (uVar44 < uVar34) goto LAB_00120e58;
    goto LAB_0012094c;
  }
  uVar34 = uVar34 + 1;
  if (uVar44 < uVar34) goto LAB_00120e58;
  goto LAB_0012094c;
LAB_00120e58:
  if (uVar36 != 0) {
    iVar15 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) * local_118;
    sVar7 = param_3[2] +
            ((short)((ulong)((long)iVar15 * 0x51eb851f) >> 0x25) - (short)(iVar15 >> 0x1f));
    *param_3 = sVar7;
    sVar13 = param_3[0x35];
    if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
      sVar13 = sVar7;
    }
    *param_3 = sVar13;
    param_3[0x2f] = 0x210;
    *(uint *)(param_3 + 0x1c) = uVar36;
    uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4));
    *(undefined4 *)(param_3 + 0x2c) = uVar16;
    *puVar1 = (char)local_e0 == '\x01';
    return 1;
  }
  goto LAB_00121fc8;
LAB_0012195c:
  iVar15 = ((uint)(ushort)param_3[3] - (uint)(ushort)param_3[2]) *
           (*(byte *)(lVar37 + ((ulong)(uVar34 << 1) | 1)) & 0x3f);
  sVar7 = param_3[2] +
          ((short)((ulong)((long)iVar15 * 0x51eb851f) >> 0x25) - (short)(iVar15 >> 0x1f));
  *param_3 = sVar7;
  sVar13 = param_3[0x35];
  uVar34 = uVar34 + 1;
  if ((sVar13 <= sVar7) && (sVar13 = param_3[0x34], sVar7 <= param_3[0x34])) {
    sVar13 = sVar7;
  }
  *param_3 = sVar13;
  *(uint *)(param_3 + 0x1c) = uVar34;
  param_3[0x2f] = 0x210;
  goto LAB_001219cc;
LAB_00121220:
  bVar11 = local_d8 == '\x01';
  iVar15 = iVar18;
  uVar36 = uVar34;
joined_r0x00121254:
  uVar34 = uVar34 + 1;
  if (uVar44 < uVar34) goto LAB_00121258;
  goto LAB_00121068;
LAB_00121258:
  if (uVar36 == 0) {
LAB_001212a0:
    *(undefined4 *)(lVar29 + 0x10) = 0xffffffff;
  }
  else {
    *(uint *)(lVar29 + 0x10) = uVar36;
    if ((int)local_134 < iVar15) {
      if (bVar11) {
        *puVar1 = 1;
      }
      else {
        *puVar1 = 0;
      }
      local_140 = uVar26 & 0xffffffff;
      local_134 = iVar15;
      local_144 = uVar36;
    }
  }
  uVar26 = uVar26 + 1;
  if (uVar26 == uVar5) goto LAB_00121ee8;
  goto LAB_0012102c;
LAB_001213e8:
  uVar38 = (uint)(short)uVar42;
  iVar17 = (int)(short)((int)uVar42 << 1);
  uVar45 = 1;
  uVar27 = uVar34;
  do {
    iVar14 = uVar45 + (uVar27 - uVar45 >> 1);
    uVar35 = iVar14 - 1;
    uVar20 = uVar35 * 6;
    puVar1 = (undefined1 *)(lVar29 + (ulong)uVar20);
    uVar20 = (uint)CONCAT21(CONCAT11(*puVar1,puVar1[1]),
                            *(undefined1 *)(lVar29 + (ulong)(uVar20 + 2)));
    if (uVar20 == uVar44) {
      uVar27 = (uint)CONCAT12(puVar1[3],CONCAT11(puVar1[4],puVar1[5]));
      if (uVar27 != 0) goto LAB_001216ac;
      break;
    }
    uVar41 = (*(uint *)(lVar21 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar21 + 8) & 0xff00ff) << 8;
    uVar16 = 6;
    if ((uVar41 >> 0x10 | uVar41 << 0x10) != 0x40050001) {
      uVar16 = 10;
    }
    iVar19 = FUN_0010dbc0(lVar21,5,uVar36 + (uVar20 - 1) * iVar15,uVar16,&local_d8);
    if (iVar19 < 0) {
      return 0;
    }
    pbVar48 = (byte *)CONCAT71(uStack_d7,local_d8);
    uVar20 = (*pbVar48 & 0x7f) >> (iVar18 != 0x40050001);
    iVar19 = ((uint)pbVar48[1] << 0x10 | (uint)pbVar48[2] << 8 | (uint)pbVar48[3]) + uVar43;
    if ((int)uVar20 < (int)uVar38) {
      if (iVar18 == 0x40050001) {
        uVar16 = FUN_001280d0(lVar21,pbVar48,&local_d0,uVar20 & 0xff,0x70);
        local_e0 = &local_d0;
        sVar13 = FUN_001006e0(&local_d0,local_f8,uVar16);
      }
      else {
        iVar8 = (uVar20 & 0x7f) << 1;
        iVar19 = FUN_0010dbc0(lVar21,10,iVar19,iVar8,&local_e0);
        if (iVar19 < 0) {
          return 0;
        }
        sVar13 = FUN_001006e0(local_e0,local_f8,iVar8);
      }
      if (sVar13 == 0) {
        sVar13 = -1;
      }
    }
    else if (iVar18 == 0x40050001) {
      uVar16 = FUN_001280d0(lVar21,pbVar48,&local_d0,uVar20 & 0xff,0x70);
      local_e0 = &local_d0;
      sVar13 = FUN_001006e0(&local_d0,local_f8,uVar16);
    }
    else {
      iVar19 = FUN_0010dbc0(lVar21,10,iVar19,iVar17,&local_e0);
      if (iVar19 < 0) {
        return 0;
      }
      sVar13 = FUN_001006e0(local_e0,local_f8,iVar17);
    }
    if (sVar13 < 0) {
      uVar45 = iVar14 + 1;
      uVar35 = uVar27;
    }
    uVar27 = uVar35;
  } while (uVar45 <= uVar35);
  if ((int)uVar45 < (int)uVar34) {
    uVar27 = uVar45 * 6 - 6;
    while( true ) {
      uVar45 = uVar45 + 1;
      puVar1 = (undefined1 *)(lVar29 + (ulong)uVar27);
      uVar20 = (uint)CONCAT21(CONCAT11(*puVar1,puVar1[1]),
                              *(undefined1 *)(lVar29 + (ulong)(uVar27 + 2)));
      if (uVar20 == uVar44) break;
      uVar35 = (*(uint *)(lVar21 + 8) & 0xff00ff00) >> 8 | (*(uint *)(lVar21 + 8) & 0xff00ff) << 8;
      uVar16 = 6;
      if ((uVar35 >> 0x10 | uVar35 << 0x10) != 0x40050001) {
        uVar16 = 10;
      }
      iVar17 = FUN_0010dbc0(lVar21,5,uVar36 + (uVar20 - 1) * iVar15,uVar16,&local_d8);
      if (iVar17 < 0) {
        return 0;
      }
      if (((int)uVar34 <= (int)uVar45) ||
         (uVar27 = uVar27 + 6,
         (*(byte *)CONCAT71(uStack_d7,local_d8) & 0x7f) >> (iVar18 != 0x40050001) != uVar38))
      goto LAB_001225e0;
    }
    uVar27 = (uint)CONCAT12(puVar1[3],CONCAT11(puVar1[4],puVar1[5]));
    if (uVar27 != 0) {
LAB_001216ac:
      pbVar48 = (byte *)(lVar37 + (ulong)(uVar27 * 4 - 4));
      uVar44 = (uint)pbVar48[1] << 0x10 | (uint)pbVar48[2] << 8 | (uint)pbVar48[3];
      if (uVar44 != 0) {
        local_f8 = local_f8 + (long)(int)uVar38 * 2;
        local_118 = (uint)uVar25;
        local_144 = 0;
        local_140 = 0;
        uVar45 = 0;
        local_120._0_4_ = 0xffffd8f0;
LAB_00121700:
        uVar38 = uVar27 << 2;
        do {
          if ((char)*pbVar48 < '\0') {
            uVar20 = (*(uint *)(lVar21 + 8) & 0xff00ff00) >> 8 |
                     (*(uint *)(lVar21 + 8) & 0xff00ff) << 8;
            uVar16 = 6;
            if ((uVar20 >> 0x10 | uVar20 << 0x10) != 0x40050001) {
              uVar16 = 10;
            }
            iVar17 = FUN_0010dbc0(lVar21,5,uVar36 + (uVar44 - 1) * iVar15,uVar16,&local_d8);
            if (iVar17 < 0) {
              return 0;
            }
            pbVar9 = (byte *)CONCAT71(uStack_d7,local_d8);
            uVar20 = (*pbVar9 & 0x7f) >> (iVar18 != 0x40050001);
            if (uVar20 <= local_118) goto LAB_001217a8;
          }
          pbVar48 = (byte *)(lVar37 + (ulong)uVar38);
          uVar38 = uVar38 + 4;
          uVar27 = uVar27 + 1;
          uVar44 = (uint)pbVar48[1] << 0x10 | (uint)pbVar48[2] << 8 | (uint)pbVar48[3];
          if (uVar44 == 0) goto LAB_001218a4;
        } while( true );
      }
    }
  }
  goto LAB_001225e0;
LAB_001217a8:
  uVar42 = (ulong)(uVar20 & 0xff);
  if (iVar18 == 0x40050001) {
    FUN_001280d0(lVar21,pbVar9,&local_d0,uVar42,0x70);
    local_e0 = &local_d0;
  }
  else {
    iVar17 = FUN_0010dbc0(lVar21,10,
                          ((uint)pbVar9[1] << 0x10 | (uint)pbVar9[2] << 8 | (uint)pbVar9[3]) +
                          uVar43,(uVar20 & 0x7f) << 1,&local_e0);
    if (iVar17 < 0) {
      return 0;
    }
  }
  sVar13 = FUN_001006e0(local_f8,local_e0,(uVar20 & 0x7f) << 1);
  if (sVar13 != 0) goto LAB_0012187c;
  if (uVar20 <= (uint)local_140) {
    if ((uint)local_140 != uVar20) goto LAB_0012187c;
    if ((int)(*pbVar48 & 0x3f) <= (int)(uint)local_120) goto LAB_0012187c;
  }
  local_120._0_4_ = *pbVar48 & 0x3f;
  local_140 = (ulong)uVar20 & 0xffffffff000000ff;
  local_144 = uVar44;
  uVar45 = uVar27;
  if (local_118 == uVar20) goto LAB_001218b4;
LAB_0012187c:
  pbVar48 = (byte *)(lVar37 + (ulong)uVar38);
  uVar27 = uVar27 + 1;
  uVar44 = (uint)pbVar48[1] << 0x10 | (uint)pbVar48[2] << 8 | (uint)pbVar48[3];
  if (uVar44 == 0) goto LAB_001218a4;
  goto LAB_00121700;
LAB_001218a4:
  uVar27 = uVar45;
  uVar42 = local_140;
  uVar44 = local_144;
  if (local_144 == 0) {
LAB_001225e0:
    uVar26 = uVar22;
    if ((short)uVar22 < 2) {
      return uVar22;
    }
    goto LAB_001225f0;
  }
LAB_001218b4:
  uVar26 = uVar22 + 1;
  *(uint *)(param_3 + uVar22 * 2 + 0x20) = uVar27;
  uVar25 = FUN_001003e0(local_f8 + (long)(short)uVar42 * 2);
  if (uVar25 == 0) goto LAB_001225f0;
  local_134 = local_134 + 1;
  uVar22 = uVar26;
  if (4 < local_134) {
LAB_001225f0:
    *(char *)(param_3 + 0x2f) = (char)((int)uVar26 << 4);
    return uVar26;
  }
  goto LAB_001213e8;
LAB_001225fc:
  param_3[0x2f] = 0x210;
  lVar37 = lVar47 + uVar26 * 0x20;
  *(undefined4 *)(param_3 + 0x1e) = *(undefined4 *)(lVar37 + 0x14);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar37 + 0x18);
  uVar34 = *puVar24;
  *(uint *)(param_3 + 0x1c) = uVar34;
  param_3[0x2e] = sVar13;
LAB_00122624:
  lVar21 = lVar21 + (ulong)(uVar34 * 4 - 4);
  uVar16 = FUN_0012a960(*(undefined8 *)(param_3 + 4),
                        (uint)*(byte *)(lVar21 + 1) << 0x10 | (uint)*(byte *)(lVar21 + 2) << 8 |
                        (uint)*(byte *)(lVar21 + 3));
  *(undefined4 *)(param_3 + 0x2c) = uVar16;
  *(undefined1 *)(lVar47 + 0x2051) = 1;
  return 1;
}

