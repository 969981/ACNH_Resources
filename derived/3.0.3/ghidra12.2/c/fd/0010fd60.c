
/* WARNING: Type propagation algorithm not settling */

int FUN_0010fd60(long param_1,short *param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  undefined1 uVar14;
  byte bVar15;
  byte bVar16;
  char cVar17;
  ushort uVar19;
  short sVar18;
  uint uVar20;
  ushort uVar21;
  bool bVar22;
  bool bVar23;
  short sVar24;
  short sVar25;
  undefined4 uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  char *pcVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  ulong uVar35;
  int iVar36;
  int iVar37;
  ushort uVar38;
  uint uVar39;
  ushort uVar40;
  ulong uVar41;
  ushort uVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  undefined8 *puVar46;
  ushort uVar47;
  long lVar48;
  ushort uVar49;
  long lVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  undefined4 *puVar53;
  ushort local_110 [2];
  ushort local_10c [2];
  undefined2 local_108 [4];
  undefined1 auStack_100 [112];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_64;
  
  lVar29 = *(long *)(param_2 + 4);
  puVar46 = *(undefined8 **)(*(long *)(param_1 + 0x28) + (param_3 & 0xffff) * 0x50 + 0x40);
  pbVar1 = (byte *)(puVar46 + 0x40a);
  uVar45 = (ulong)*(ushort *)(param_1 + 0x4e);
  lVar2 = lVar29 + ((ulong)*(byte *)(lVar29 + 0x2b) << 0x18 |
                    (ulong)*(byte *)(lVar29 + 0x2c) << 0x10 | (ulong)*(byte *)(lVar29 + 0x2d) << 8 |
                   (ulong)*(byte *)(lVar29 + 0x2e));
  if (uVar45 != 0) {
    bVar13 = *pbVar1;
    lVar43 = *(long *)(param_1 + 0x28) + 0x65c;
    uVar14 = *(undefined1 *)(lVar29 + 0x4d);
    lVar3 = lVar29 + ((ulong)*(byte *)(lVar29 + 0x48) << 0x18 |
                      (ulong)*(byte *)(lVar29 + 0x49) << 0x10 | (ulong)*(byte *)(lVar29 + 0x4a) << 8
                     | (ulong)*(byte *)(lVar29 + 0x4b));
    lVar4 = lVar3 + ((ulong)*(byte *)(lVar29 + 0x4e) << 0x18 |
                     (ulong)*(byte *)(lVar29 + 0x4f) << 0x10 | (ulong)*(byte *)(lVar29 + 0x50) << 8
                    | (ulong)*(byte *)(lVar29 + 0x51));
    lVar5 = lVar29 + ((ulong)*(byte *)(lVar29 + 0x42) << 0x18 |
                      (ulong)*(byte *)(lVar29 + 0x43) << 0x10 | (ulong)*(byte *)(lVar29 + 0x44) << 8
                     | (ulong)*(byte *)(lVar29 + 0x45));
    bVar15 = *(byte *)(lVar29 + 0x4c);
    bVar16 = *(byte *)(lVar29 + 0x46);
    cVar17 = *(char *)(lVar29 + 0x47);
    lVar29 = *(long *)(param_1 + 0x30);
    uVar41 = 0;
    bVar22 = false;
    bVar23 = false;
LAB_0010fea0:
    do {
      if (!bVar22) {
        if (((uVar41 != 0) && (*(short *)((long)puVar46 + uVar41 * 2 + 0x1fe0) == 0)) ||
           (*(short *)((long)puVar46 + (uVar41 + 1) * 2 + 0x1fe0) == 0)) {
          bVar22 = true;
          goto LAB_0010feec;
        }
        bVar22 = false;
        uVar38 = 0;
      }
      else {
LAB_0010feec:
        FUN_001005e0(local_108,lVar29,1);
        uVar26 = FUN_001003e0(local_108);
        sVar18 = (short)cVar17;
        uVar21 = (ushort)bVar16;
        uVar19 = (ushort)bVar15;
        if (uVar41 == 0) {
          *(undefined2 *)(puVar46 + 0x3fc) = 0;
          sVar25 = FUN_00112fa0(*(undefined1 *)(param_1 + 0x50),0,lVar4,0,local_108,uVar26,lVar3,
                                lVar4,uVar14,uVar19,lVar2,uVar21,sVar18,lVar5,&local_90,&local_70,
                                &local_64);
          if (sVar25 < 0) {
            uVar40 = 0;
          }
          else {
            puVar46[2] = local_80;
            puVar46[3] = uStack_78;
            *puVar46 = local_90;
            puVar46[1] = uStack_88;
            *(undefined4 *)((long)puVar46 + 0x14) = local_64;
            if (*(char *)(param_1 + 0x50) == '\x01') {
              sVar25 = FUN_00113480(local_108[0],local_70,lVar4,lVar2,uVar14,bVar15,local_64,
                                    *(undefined8 *)(param_2 + 4),puVar46 + 3);
              if (sVar25 < 0) {
                return (int)sVar25;
              }
            }
            uVar40 = 1;
          }
          uVar38 = uVar40;
          if ((((bVar13 & 1) == 0) && (*(long *)(param_1 + 0x40) != 0)) &&
             ((sVar25 = FUN_00113bf0(*(long *)(param_1 + 0x40),lVar43,local_10c,local_110),
              sVar25 == 1 && (uVar42 = local_10c[0], local_10c[0] <= local_110[0])))) {
            do {
              FUN_00100350(auStack_100,
                           *(undefined8 *)(*(long *)(param_1 + 0x40) + (ulong)uVar42 * 8 + 0x800));
              uVar26 = FUN_001003e0(auStack_100);
              sVar25 = FUN_00112fa0(*(undefined1 *)(param_1 + 0x50),0,lVar4,0,auStack_100,uVar26,
                                    lVar3,lVar4,uVar14,uVar19,lVar2,uVar21,sVar18,lVar5,&local_90,
                                    &local_70,&local_64);
              if (-1 < sVar25) {
                if (0xfe < uVar40) {
                  *(undefined2 *)((long)puVar46 + 0x1fe2) = 0;
                  return 0xac62;
                }
                puVar52 = puVar46 + (ulong)uVar40 * 4;
                puVar52[2] = local_80;
                puVar52[3] = uStack_78;
                *puVar52 = local_90;
                puVar52[1] = uStack_88;
                *(undefined4 *)((long)puVar52 + 0x14) = local_64;
                if (*(char *)(param_1 + 0x50) == '\x01') {
                  sVar25 = FUN_00113480(local_108[0],local_70,lVar4,lVar2,uVar14,bVar15,local_64,
                                        *(undefined8 *)(param_2 + 4),puVar52 + 3);
                  if (sVar25 < 0) {
                    return (int)sVar25;
                  }
                }
                uVar38 = uVar38 + 1;
                uVar40 = uVar40 + 1;
              }
              uVar42 = uVar42 + 1;
            } while (uVar42 <= local_110[0]);
          }
          *(ushort *)((long)puVar46 + 0x1fe2) = uVar40;
          uVar41 = 1;
          lVar29 = lVar29 + 2;
          lVar43 = lVar43 + 2;
          if (uVar45 < 2) break;
          goto LAB_0010fea0;
        }
        uVar40 = *(ushort *)((long)puVar46 + uVar41 * 2 + 0x1fe0);
        uVar38 = *(ushort *)((long)puVar46 + uVar41 * 2 + 0x1fde);
        uVar27 = (ulong)uVar38;
        if (uVar40 == uVar38) {
          *(ushort *)((long)puVar46 + (uVar41 + 1) * 2 + 0x1fe0) = uVar40;
          uVar38 = 0;
          bVar23 = true;
        }
        else {
          uVar42 = uVar40;
          if ((*pbVar1 & 1) != 0) {
            *(ushort *)((long)puVar46 + uVar41 * 2 + 0x1fe0) = uVar38;
            uVar42 = uVar38;
          }
          if (0xfe < uVar38) {
            return 0xad62;
          }
          if (0xff < (uVar42 | uVar40)) {
            return 0xad62;
          }
          if (uVar38 < uVar40) {
            uVar38 = 0;
            do {
              plVar6 = puVar46 + uVar27 * 4;
              if (*plVar6 != plVar6[1] || *(short *)((long)plVar6 + 0x1c) != 0) {
                puVar52 = &local_70;
                puVar53 = &local_64;
                puVar51 = &local_90;
                uVar47 = uVar19;
                lVar48 = lVar2;
                uVar49 = uVar21;
                sVar25 = sVar18;
                lVar50 = lVar5;
                sVar24 = FUN_00112fa0(*(undefined1 *)(param_1 + 0x50));
                if (-1 < sVar24) {
                  if (0xfe < uVar42) {
                    *(undefined2 *)((long)puVar46 + (ulong)((int)uVar41 + 1) * 2 + 0x1fe0) = 0;
                    return 0xac62;
                  }
                  puVar7 = puVar46 + (ulong)uVar42 * 4;
                  puVar7[2] = local_80;
                  puVar7[3] = uStack_78;
                  *puVar7 = local_90;
                  puVar7[1] = uStack_88;
                  *(undefined4 *)((long)puVar7 + 0x14) = local_64;
                  if (*(char *)(param_1 + 0x50) == '\x01') {
                    sVar25 = FUN_00113480(local_108[0],local_70,lVar4,lVar2,uVar14,bVar15,local_64,
                                          *(undefined8 *)(param_2 + 4),puVar7 + 3,uVar47,lVar48,
                                          uVar49,sVar25,lVar50,puVar51,puVar52,puVar53);
                    if (sVar25 < 0) {
                      return (int)sVar25;
                    }
                  }
                  uVar38 = uVar38 + 1;
                  uVar42 = uVar42 + 1;
                }
                if ((((bVar13 & 1) == 0) && (*(long *)(param_1 + 0x40) != 0)) &&
                   ((sVar25 = FUN_00113bf0(*(long *)(param_1 + 0x40),lVar43,local_10c,local_110),
                    sVar25 == 1 && (local_10c[0] <= local_110[0])))) {
                  uVar47 = local_10c[0];
                  do {
                    FUN_00100350(auStack_100,
                                 *(undefined8 *)
                                  (*(long *)(param_1 + 0x40) + (ulong)uVar47 * 8 + 0x800));
                    uVar26 = FUN_001003e0(auStack_100);
                    sVar25 = FUN_00112fa0(*(undefined1 *)(param_1 + 0x50),*plVar6,plVar6[1],
                                          *(undefined2 *)((long)plVar6 + 0x1c),auStack_100,uVar26,
                                          lVar3,lVar4,uVar14,uVar19,lVar2,uVar21,sVar18,lVar5,
                                          &local_90,&local_70,&local_64);
                    if (-1 < sVar25) {
                      if (0xfe < uVar42) {
                        *(undefined2 *)((long)puVar46 + (ulong)((int)uVar41 + 1) * 2 + 0x1fe0) = 0;
                        return 0xac62;
                      }
                      puVar52 = puVar46 + (ulong)uVar42 * 4;
                      puVar52[2] = local_80;
                      puVar52[3] = uStack_78;
                      *puVar52 = local_90;
                      puVar52[1] = uStack_88;
                      *(undefined4 *)((long)puVar52 + 0x14) = local_64;
                      if (*(char *)(param_1 + 0x50) == '\x01') {
                        sVar25 = FUN_00113480(local_108[0],local_70,lVar4,lVar2,uVar14,bVar15,
                                              local_64,*(undefined8 *)(param_2 + 4),puVar52 + 3);
                        if (sVar25 < 0) {
                          return (int)sVar25;
                        }
                      }
                      uVar38 = uVar38 + 1;
                      uVar42 = uVar42 + 1;
                    }
                    uVar47 = uVar47 + 1;
                  } while (uVar47 <= local_110[0]);
                }
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < uVar40);
          }
          else {
            uVar38 = 0;
          }
          *(ushort *)((long)puVar46 + (uVar41 + 1) * 2 + 0x1fe0) = uVar42;
        }
      }
      uVar41 = uVar41 + 1;
      lVar43 = lVar43 + 2;
      lVar29 = lVar29 + 2;
    } while (uVar41 < uVar45);
    if (uVar38 != 0) {
      if (bVar23) goto LAB_001105ac;
      goto LAB_00110490;
    }
    if (bVar23) goto LAB_001105ac;
  }
  if (*(short *)((long)puVar46 + uVar45 * 2 + 0x1fde) ==
      *(short *)((long)puVar46 + uVar45 * 2 + 0x1fe0)) {
LAB_001105ac:
    *(undefined1 *)((long)param_2 + 0x5f) = 3;
    return 0;
  }
LAB_00110490:
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  if (0xff < *(ushort *)((long)puVar46 + (ulong)*(ushort *)(param_1 + 0x4e) * 2 + 0x1fe0)) {
    return 0xad62;
  }
  uVar38 = *(ushort *)((long)puVar46 + (ulong)*(ushort *)(param_1 + 0x4e) * 2 + 0x1fde);
  if (0xfe < uVar38) {
    return 0xad62;
  }
  lVar29 = *(long *)(param_2 + 4);
  bVar13 = *(byte *)(lVar29 + 0x32);
  uVar12 = *(uint *)((long)puVar46 + (ulong)uVar38 * 0x20 + 0x14);
  pbVar8 = (byte *)(lVar29 + ((ulong)*(byte *)(lVar29 + 0x26) << 0x18 |
                              (ulong)*(byte *)(lVar29 + 0x27) << 0x10 |
                              (ulong)*(byte *)(lVar29 + 0x28) << 8 | (ulong)*(byte *)(lVar29 + 0x29)
                             ));
  pcVar31 = (char *)(lVar2 + (ulong)uVar12);
  uVar34 = (uint)*(byte *)(lVar29 + 0x33);
  if ((*(byte *)(lVar29 + 0x1c) & 3) != 0) {
    uVar34 = uVar34 + 1;
  }
  if (bVar13 == 0) {
    bVar15 = *pbVar8;
  }
  else {
    uVar28 = 0x10 - bVar13;
    bVar15 = pbVar8[(short)(CONCAT11(pcVar31[((ulong)uVar34 & 0xff) + 1 >> 3],
                                     (pcVar31 + (((ulong)uVar34 & 0xff) + 1 >> 3))[1]) >>
                            ((ulong)(uVar28 - (uVar34 + 1 & 7)) & 0x3f) &
                           (ushort)(0xffffL >> ((ulong)uVar28 & 0x3f)))];
  }
  uVar28 = (uint)bVar15;
  if (*(char *)(param_1 + 0x51) == '\0') {
    if (*(uint *)(puVar46 + (ulong)uVar38 * 4 + 3) < uVar12) {
      iVar37 = 0;
      uVar11 = 0;
    }
    else {
      uVar45 = (ulong)uVar34 & 0xff;
      uVar35 = uVar45 + 1 >> 3;
      uVar39 = 0x10 - *(byte *)(lVar29 + 0x2f);
      uVar30 = (uint)bVar13;
      uVar27 = (ulong)((0x10 - uVar30) - (uVar34 + 1 & 7));
      uVar45 = bVar13 + uVar45 + (ulong)*(byte *)(lVar29 + 0x30) + (ulong)*(byte *)(lVar29 + 0x31) +
               1;
      uVar41 = uVar45 + *(byte *)(lVar29 + 0x2f);
      uVar20 = uVar39 - ((uint)uVar45 & 7);
      uVar34 = 0xffff >> (ulong)(uVar39 & 0x1f);
      pcVar9 = (char *)(lVar2 + (ulong)*(uint *)(puVar46 + (ulong)uVar38 * 4 + 3));
      uVar39 = (uint)uVar41;
      uVar21 = (ushort)(0xffffL >> ((ulong)(0x10 - uVar30) & 0x3f));
      if ((char)*(byte *)(lVar29 + 0x1c) < '\0') {
        iVar32 = 0;
        uVar33 = 0;
        iVar36 = 0;
        do {
          while( true ) {
            uVar11 = uVar28;
            if (uVar28 <= (uint)(int)(short)uVar33) {
              uVar11 = uVar33;
            }
            iVar37 = iVar32;
            if (uVar28 <= (uint)(int)(short)uVar33) {
              iVar37 = iVar36;
            }
            if (*pcVar31 < '\0') {
              bVar13 = *(byte *)(lVar29 + 0x35);
              uVar44 = (ulong)(uVar39 + bVar13);
              uVar28 = 0xffffU >> (ulong)(0x10 - bVar13 & 0x1f) &
                       (uint)(ushort)(CONCAT11(pcVar31[uVar41 >> 3],(pcVar31 + (uVar41 >> 3))[1]) >>
                                     (ulong)((0x10 - (uVar39 & 7)) - (uint)bVar13 & 0x1f));
            }
            else {
              uVar28 = 0;
              uVar44 = uVar41;
            }
            uVar28 = uVar28 + ((ushort)(CONCAT11(pcVar31[uVar45 >> 3],(pcVar31 + (uVar45 >> 3))[1])
                                       >> (ulong)(uVar20 & 0x1f)) & uVar34) +
                     ((int)uVar44 + 7U >> 3 & 0xff) & 0xffff;
            iVar32 = uVar28 + iVar32;
            pcVar31 = pcVar31 + uVar28;
            uVar33 = uVar11;
            iVar36 = iVar37;
            if (uVar30 == 0) break;
            uVar28 = (uint)pbVar8[(short)(CONCAT11(pcVar31[uVar35],(pcVar31 + uVar35)[1]) >>
                                          (uVar27 & 0x3f) & uVar21)];
            if (pcVar9 < pcVar31) goto LAB_001107c8;
          }
          uVar28 = (uint)*pbVar8;
        } while (pcVar31 <= pcVar9);
      }
      else {
        iVar32 = 0;
        uVar33 = 0;
        iVar36 = 0;
        do {
          while( true ) {
            uVar11 = uVar28;
            if (uVar28 <= (uint)(int)(short)uVar33) {
              uVar11 = uVar33;
            }
            uVar10 = ((ushort)(CONCAT11(pcVar31[uVar45 >> 3],(pcVar31 + (uVar45 >> 3))[1]) >>
                              (ulong)(uVar20 & 0x1f)) & uVar34) + (uVar39 + 7 >> 3 & 0xff) & 0xffff;
            iVar37 = iVar32;
            if (uVar28 <= (uint)(int)(short)uVar33) {
              iVar37 = iVar36;
            }
            iVar32 = uVar10 + iVar32;
            pcVar31 = pcVar31 + uVar10;
            uVar33 = uVar11;
            iVar36 = iVar37;
            if (uVar30 == 0) break;
            uVar28 = (uint)pbVar8[(short)(CONCAT11(pcVar31[uVar35],(pcVar31 + uVar35)[1]) >>
                                          (uVar27 & 0x3f) & uVar21)];
            if (pcVar9 < pcVar31) goto LAB_001107c8;
          }
          uVar28 = (uint)*pbVar8;
        } while (pcVar31 <= pcVar9);
      }
    }
LAB_001107c8:
    uVar28 = uVar11;
    *(int *)(puVar46 + (ulong)uVar38 * 4 + 2) = iVar37;
    lVar29 = *(long *)(param_2 + 4);
    if ((short)uVar28 == 0) {
      iVar37 = 0;
    }
  }
  else {
    iVar37 = 0;
  }
  *(uint *)(param_2 + 0x1e) = uVar12;
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(puVar46 + (ulong)uVar38 * 4 + 3);
  uVar34 = (*(uint *)(lVar29 + 4) & 0xff00ff00) >> 8 | (*(uint *)(lVar29 + 4) & 0xff00ff) << 8;
  if ((uVar34 >> 0x10 | uVar34 << 0x10) != 0x30000) {
    iVar32 = ((uint)(ushort)param_2[3] - (uint)(ushort)param_2[2]) * uVar28;
    *param_2 = param_2[2] +
               ((short)((ulong)((long)iVar32 * 0x82082083) >> 0x25) - (short)(iVar32 >> 0x1f));
  }
  param_2[0x2e] = uVar38;
  *(int *)(param_2 + 0x1c) = iVar37;
  *(undefined1 *)((long)puVar46 + 0x2051) = 1;
  *pbVar1 = *pbVar1 | 2;
  return 1;
}

