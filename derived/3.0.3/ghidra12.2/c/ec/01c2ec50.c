
void FUN_01c2ec50(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  char cVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int *piVar18;
  uint *puVar19;
  uint uVar20;
  ulong uVar21;
  uint *puVar22;
  undefined *local_78;
  char *local_70;
  uint local_64;
  
  if (param_2 == 0) {
    return;
  }
  if (7 < *param_4) {
    return;
  }
  iVar10 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar10 < -0x83ceb3d) {
    if (iVar10 < -0x15fdefdb) {
      if (iVar10 == -0x477aafe0) {
        local_64 = 5;
        goto LAB_01c2edb8;
      }
      if (iVar10 == -0x2099c902) {
        local_64 = 9;
        goto LAB_01c2edb8;
      }
    }
    else {
      if (iVar10 == -0x15fdefdb) {
        local_64 = 7;
        goto LAB_01c2edb8;
      }
      if (iVar10 == -0xe632453) {
        local_64 = 3;
        goto LAB_01c2edb8;
      }
    }
  }
  else if (iVar10 < 0x3b3bf38a) {
    if (iVar10 == -0x83ceb3d) {
      local_64 = 4;
      goto LAB_01c2edb8;
    }
    if (iVar10 == -0x169521c) {
      local_64 = 1;
      goto LAB_01c2edb8;
    }
  }
  else {
    if (iVar10 == 0x3b3bf38a) {
      local_64 = 6;
      goto LAB_01c2edb8;
    }
    if (iVar10 == 0x3fce6459) {
      local_64 = 2;
      goto LAB_01c2edb8;
    }
    if (iVar10 == 0x6148bcad) {
      local_64 = 0;
      goto LAB_01c2edb8;
    }
  }
  local_64 = (uint)(iVar10 == 0x17f77b87) << 3;
LAB_01c2edb8:
  lVar1 = param_2 + 0x10;
  uVar21 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
LAB_01c2ee18:
  do {
    uVar9 = *(uint *)(param_1 + 0x9d0);
    if ((int)uVar9 < 1) {
      uVar17 = 0;
      if (*(long *)(param_1 + 0x8c0) != 0) {
        puVar22 = *(uint **)(*(long *)(param_1 + 0x8c0) + 8);
        uVar17 = 0;
        if (puVar22 != (uint *)0x0) {
          uVar17 = (ulong)*puVar22;
        }
      }
      if (uVar17 <= uVar21) {
LAB_01c3022c:
        FUN_01c30270(param_1,param_2 + 0xa0,param_2 + 0xd8,param_2 + 0x110,param_2 + 4);
        return;
      }
      if (0 < (int)uVar9) goto LAB_01c2ee54;
      if ((((*(long *)(param_1 + 0x8c0) != 0) &&
           (puVar22 = *(uint **)(*(long *)(param_1 + 0x8c0) + 8), puVar22 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x8d8) <= uVar21 ||
           (*(char *)(*(long *)(param_1 + 0x8e0) + uVar21) != '\0')))) &&
         (((uVar21 < *puVar22 && (puVar22[1] != 0)) && ((ushort)puVar22[2] != 0)))) {
        iVar10 = 0xc;
        if (*(char *)((long)puVar22 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar22 = (uint *)((ulong)(puVar22[1] * (int)uVar21 + (uint)(ushort)puVar22[2] * 8 + iVar10)
                          + (long)puVar22);
        goto joined_r0x01c2efbc;
      }
    }
    else {
      if (uVar9 <= uVar21) goto LAB_01c3022c;
LAB_01c2ee54:
      if (uVar21 < uVar9) {
        uVar17 = uVar21 & 0xffffffff;
        if (*(uint *)(param_1 + 0x9c0) <= uVar21) {
          uVar17 = 0;
        }
        puVar22 = *(uint **)(*(long *)(param_1 + 0x9c8) + uVar17 * 8);
joined_r0x01c2efbc:
        if (puVar22 != (uint *)0x0) {
          uVar9 = *puVar22;
          if (uVar9 == 0 || puVar22 == (uint *)(ulong)uVar9) {
LAB_01c2ee88:
            uVar9 = 0;
          }
          else {
            puVar19 = (uint *)((long)puVar22 - (long)(ulong)uVar9);
            uVar9 = 0;
            if (*puVar19 != 0) {
              uVar9 = puVar19[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
                lVar4 = 0xc;
                if (*(char *)((long)puVar19 + 10) != '\0') {
                  lVar4 = 0x1c;
                }
                lVar4 = (long)puVar19 + lVar4 + (ulong)(ushort)puVar19[2] * 8;
                if (lVar4 != 0) {
                  uVar20 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar20 = (uint)((ulong)((long)puVar22 - lVar4) / (ulong)uVar9);
                  }
                  if (*puVar19 <= uVar20) {
                    uVar20 = 0xffffffff;
                  }
                  if ((uVar20 < DAT_0534bc38) &&
                     (uVar9 = (uint)*(ushort *)(DAT_0534bc40 + (long)(int)uVar20 * 2), uVar9 < 10))
                  goto LAB_01c2ee8c;
                }
              }
              goto LAB_01c2ee88;
            }
          }
LAB_01c2ee8c:
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar9);
          if (uVar9 == local_64) {
            if (*puVar22 == 0) {
LAB_01c2f044:
              iVar10 = 0;
            }
            else {
              cVar13 = DAT_0534bc48;
              do {
                if (cVar13 == '\0') {
                  cVar13 = '\x01';
                  DAT_0534bc48 = '\x01';
                  DAT_0534bc7c = 0xffffffff;
                  DAT_0534bc4c = -1;
                  DAT_0534bc54 = 0xffffffffffffffff;
                  DAT_0534bc5c = 0xffffffffffffffff;
                  DAT_0534bc64 = 0xffffffffffffffff;
                  DAT_0534bc6c = 0xffffffffffffffff;
                  DAT_0534bc74 = 0xffffffffffffffff;
                }
                else {
                  if (-1 < DAT_0534bc4c) {
                    if ((int *)((ulong)DAT_0534bc4c._4_4_ + (long)puVar22) == (int *)0x0)
                    goto LAB_01c2f044;
                    iVar10 = *(int *)((ulong)DAT_0534bc4c._4_4_ + (long)puVar22);
                    goto LAB_01c2f048;
                  }
                  if (DAT_0534bc4c._4_4_ != 0xffffffff) goto LAB_01c2f044;
                }
                puVar19 = (uint *)(ulong)*puVar22;
                iVar10 = 0;
                if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2f048;
                lVar4 = 0xc;
                if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                  lVar4 = 0x1c;
                }
                lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                if (lVar4 == 0) goto LAB_01c2f044;
                uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                DAT_0534bc4c = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc4c);
                iVar10 = 0;
                if (uVar17 == 0) goto LAB_01c2f048;
                piVar18 = (int *)(lVar4 + 4);
                while (piVar18[-1] != -0x670080c8) {
                  piVar18 = piVar18 + 2;
                  uVar17 = uVar17 - 1;
                  if (uVar17 == 0) {
                    iVar10 = 0;
                    goto LAB_01c2f048;
                  }
                }
                iVar10 = 0;
                if (*piVar18 != -1) {
                  iVar10 = *piVar18;
                }
                DAT_0534bc4c = CONCAT44(iVar10,(undefined4)DAT_0534bc4c);
              } while (*puVar22 != 0);
              iVar10 = 0;
            }
LAB_01c2f048:
            if (iVar10 == *(int *)(param_3 + 8)) {
              if (*puVar22 == 0) {
LAB_01c2f12c:
                iVar10 = 0;
              }
              else {
                cVar13 = DAT_0534bc48;
                do {
                  if (cVar13 == '\0') {
                    cVar13 = '\x01';
                    DAT_0534bc48 = '\x01';
                    DAT_0534bc7c = 0xffffffff;
                    DAT_0534bc4c = -1;
                    DAT_0534bc54 = 0xffffffffffffffff;
                    DAT_0534bc5c = 0xffffffffffffffff;
                    DAT_0534bc64 = 0xffffffffffffffff;
                    DAT_0534bc6c = 0xffffffffffffffff;
                    DAT_0534bc74 = 0xffffffffffffffff;
                  }
                  else {
                    if (-1 < (int)DAT_0534bc54) {
                      piVar18 = (int *)((DAT_0534bc54 & 0xffffffff) + (long)puVar22);
                      if (piVar18 == (int *)0x0) goto LAB_01c2f12c;
                      iVar10 = *piVar18;
                      goto LAB_01c2f130;
                    }
                    if ((int)DAT_0534bc54 != -1) goto LAB_01c2f12c;
                  }
                  puVar19 = (uint *)(ulong)*puVar22;
                  iVar10 = 0;
                  if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2f130;
                  lVar4 = 0xc;
                  if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                    lVar4 = 0x1c;
                  }
                  lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                  if (lVar4 == 0) goto LAB_01c2f12c;
                  uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                  DAT_0534bc54 = CONCAT44(DAT_0534bc54._4_4_,0xfffffffe);
                  iVar10 = 0;
                  if (uVar17 == 0) goto LAB_01c2f130;
                  piVar18 = (int *)(lVar4 + 4);
                  while (piVar18[-1] != -0x1dc0d3a8) {
                    piVar18 = piVar18 + 2;
                    uVar17 = uVar17 - 1;
                    if (uVar17 == 0) {
                      iVar10 = 0;
                      goto LAB_01c2f130;
                    }
                  }
                  iVar10 = 0;
                  if (*piVar18 != -1) {
                    iVar10 = *piVar18;
                  }
                  DAT_0534bc54 = CONCAT44(DAT_0534bc54._4_4_,iVar10);
                } while (*puVar22 != 0);
                iVar10 = 0;
              }
LAB_01c2f130:
              if (iVar10 == *(int *)(param_3 + 0xc)) {
                local_70 = s_MuseumFishStampRackLotID1_04a40e68;
                local_78 = puVar2;
                uVar9 = FUN_0273ea30(&local_78);
                if (uVar9 == 0xffffffff) {
LAB_01c2f260:
                  puVar3 = PTR_DAT_04bb2020 + 0x10;
                  local_70 = s_MuseumFishStampRackLotID2_04a40e84;
                  local_78 = puVar3;
                  uVar9 = FUN_0273ea30(&local_78);
                  if (uVar9 != 0xffffffff) {
                    if (*puVar22 == 0) {
LAB_01c2f37c:
                      uVar20 = 0;
                    }
                    else {
                      cVar13 = DAT_0534bc48;
                      do {
                        if (cVar13 == '\0') {
                          cVar13 = '\x01';
                          DAT_0534bc48 = '\x01';
                          DAT_0534bc4c = -1;
                          DAT_0534bc54 = 0xffffffffffffffff;
                          DAT_0534bc7c = 0xffffffff;
                          DAT_0534bc5c = 0xffffffffffffffff;
                          DAT_0534bc64 = 0xffffffffffffffff;
                          DAT_0534bc6c = 0xffffffffffffffff;
                          DAT_0534bc74 = 0xffffffffffffffff;
                        }
                        else {
                          if (-1 < (int)DAT_0534bc6c) {
                            pbVar12 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar22);
                            if (pbVar12 == (byte *)0x0) goto LAB_01c2f37c;
                            uVar20 = (uint)*pbVar12;
                            goto LAB_01c2f380;
                          }
                          if ((int)DAT_0534bc6c != -1) goto LAB_01c2f37c;
                        }
                        puVar19 = (uint *)(ulong)*puVar22;
                        uVar20 = 0;
                        if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2f380;
                        lVar4 = 0xc;
                        if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                          lVar4 = 0x1c;
                        }
                        lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                        if (lVar4 == 0) goto LAB_01c2f37c;
                        uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                        DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                        uVar20 = 0;
                        if (uVar17 == 0) goto LAB_01c2f380;
                        piVar18 = (int *)(lVar4 + 4);
                        while (piVar18[-1] != -0x56f47f82) {
                          piVar18 = piVar18 + 2;
                          uVar17 = uVar17 - 1;
                          if (uVar17 == 0) {
                            uVar20 = 0;
                            goto LAB_01c2f380;
                          }
                        }
                        iVar10 = 0;
                        if (*piVar18 != -1) {
                          iVar10 = *piVar18;
                        }
                        DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar10);
                      } while (*puVar22 != 0);
                      uVar20 = 0;
                    }
LAB_01c2f380:
                    if (uVar9 == uVar20) {
                      uVar9 = 1;
                      goto LAB_01c2f4ac;
                    }
                  }
                  local_70 = s_MuseumFishStampRackLotID3_04a40ea0;
                  local_78 = puVar3;
                  uVar9 = FUN_0273ea30(&local_78);
                  if (uVar9 != 0xffffffff) {
                    if (*puVar22 == 0) {
LAB_01c2f49c:
                      uVar20 = 0;
                    }
                    else {
                      cVar13 = DAT_0534bc48;
                      do {
                        if (cVar13 == '\0') {
                          cVar13 = '\x01';
                          DAT_0534bc48 = '\x01';
                          DAT_0534bc7c = 0xffffffff;
                          DAT_0534bc4c = -1;
                          DAT_0534bc54 = 0xffffffffffffffff;
                          DAT_0534bc5c = 0xffffffffffffffff;
                          DAT_0534bc64 = 0xffffffffffffffff;
                          DAT_0534bc6c = 0xffffffffffffffff;
                          DAT_0534bc74 = 0xffffffffffffffff;
                        }
                        else {
                          if (-1 < (int)DAT_0534bc6c) {
                            pbVar12 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar22);
                            if (pbVar12 == (byte *)0x0) goto LAB_01c2f49c;
                            uVar20 = (uint)*pbVar12;
                            goto LAB_01c2f4a0;
                          }
                          if ((int)DAT_0534bc6c != -1) goto LAB_01c2f49c;
                        }
                        puVar19 = (uint *)(ulong)*puVar22;
                        uVar20 = 0;
                        if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2f4a0;
                        lVar4 = 0xc;
                        if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                          lVar4 = 0x1c;
                        }
                        lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                        if (lVar4 == 0) goto LAB_01c2f49c;
                        uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                        DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                        uVar20 = 0;
                        if (uVar17 == 0) goto LAB_01c2f4a0;
                        piVar18 = (int *)(lVar4 + 4);
                        while (piVar18[-1] != -0x56f47f82) {
                          piVar18 = piVar18 + 2;
                          uVar17 = uVar17 - 1;
                          if (uVar17 == 0) {
                            uVar20 = 0;
                            goto LAB_01c2f4a0;
                          }
                        }
                        iVar10 = 0;
                        if (*piVar18 != -1) {
                          iVar10 = *piVar18;
                        }
                        DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar10);
                      } while (*puVar22 != 0);
                      uVar20 = 0;
                    }
LAB_01c2f4a0:
                    if (uVar9 == uVar20) {
                      uVar9 = 2;
                      goto LAB_01c2f4ac;
                    }
                  }
                  puVar3 = PTR_DAT_04bb2020 + 0x10;
                  local_70 = s_MuseumInsectStampRackLotID1_04a40ebc;
                  local_78 = puVar3;
                  uVar9 = FUN_0273ea30(&local_78);
                  if (uVar9 == 0xffffffff) {
LAB_01c2f664:
                    local_70 = s_MuseumInsectStampRackLotID2_04a40eda;
                    local_78 = puVar3;
                    uVar9 = FUN_0273ea30(&local_78);
                    if (uVar9 != 0xffffffff) {
                      if (*puVar22 == 0) {
LAB_01c2f76c:
                        uVar20 = 0;
                      }
                      else {
                        cVar13 = DAT_0534bc48;
                        do {
                          if (cVar13 == '\0') {
                            cVar13 = '\x01';
                            DAT_0534bc48 = '\x01';
                            DAT_0534bc7c = 0xffffffff;
                            DAT_0534bc4c = -1;
                            DAT_0534bc54 = 0xffffffffffffffff;
                            DAT_0534bc5c = 0xffffffffffffffff;
                            DAT_0534bc64 = 0xffffffffffffffff;
                            DAT_0534bc6c = 0xffffffffffffffff;
                            DAT_0534bc74 = 0xffffffffffffffff;
                          }
                          else {
                            if (-1 < (int)DAT_0534bc6c) {
                              pbVar12 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar22);
                              if (pbVar12 == (byte *)0x0) goto LAB_01c2f76c;
                              uVar20 = (uint)*pbVar12;
                              goto LAB_01c2f770;
                            }
                            if ((int)DAT_0534bc6c != -1) goto LAB_01c2f76c;
                          }
                          puVar19 = (uint *)(ulong)*puVar22;
                          uVar20 = 0;
                          if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2f770;
                          lVar4 = 0xc;
                          if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                            lVar4 = 0x1c;
                          }
                          lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                          if (lVar4 == 0) goto LAB_01c2f76c;
                          uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                          DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                          uVar20 = 0;
                          if (uVar17 == 0) goto LAB_01c2f770;
                          piVar18 = (int *)(lVar4 + 4);
                          while (piVar18[-1] != -0x56f47f82) {
                            piVar18 = piVar18 + 2;
                            uVar17 = uVar17 - 1;
                            if (uVar17 == 0) {
                              uVar20 = 0;
                              goto LAB_01c2f770;
                            }
                          }
                          iVar10 = 0;
                          if (*piVar18 != -1) {
                            iVar10 = *piVar18;
                          }
                          DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar10);
                        } while (*puVar22 != 0);
                        uVar20 = 0;
                      }
LAB_01c2f770:
                      if (uVar9 == uVar20) {
                        uVar20 = 4;
                        goto LAB_01c2f8ac;
                      }
                    }
                    puVar3 = PTR_DAT_04bb2020 + 0x10;
                    local_70 = s_MuseumInsectStampRackLotID3_04a40ef8;
                    local_78 = puVar3;
                    uVar9 = FUN_0273ea30(&local_78);
                    if (uVar9 != 0xffffffff) {
                      if (*puVar22 == 0) {
LAB_01c2f89c:
                        uVar14 = 0;
                      }
                      else {
                        cVar13 = DAT_0534bc48;
                        do {
                          if (cVar13 == '\0') {
                            cVar13 = '\x01';
                            DAT_0534bc48 = '\x01';
                            DAT_0534bc7c = 0xffffffff;
                            DAT_0534bc4c = -1;
                            DAT_0534bc54 = 0xffffffffffffffff;
                            DAT_0534bc5c = 0xffffffffffffffff;
                            DAT_0534bc64 = 0xffffffffffffffff;
                            DAT_0534bc6c = 0xffffffffffffffff;
                            DAT_0534bc74 = 0xffffffffffffffff;
                          }
                          else {
                            if (-1 < (int)DAT_0534bc6c) {
                              pbVar12 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar22);
                              if (pbVar12 == (byte *)0x0) goto LAB_01c2f89c;
                              uVar14 = (uint)*pbVar12;
                              goto LAB_01c2f8a0;
                            }
                            if ((int)DAT_0534bc6c != -1) goto LAB_01c2f89c;
                          }
                          puVar19 = (uint *)(ulong)*puVar22;
                          uVar14 = 0;
                          if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2f8a0;
                          lVar4 = 0xc;
                          if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                            lVar4 = 0x1c;
                          }
                          lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                          if (lVar4 == 0) goto LAB_01c2f89c;
                          uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                          DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                          uVar14 = 0;
                          if (uVar17 == 0) goto LAB_01c2f8a0;
                          piVar18 = (int *)(lVar4 + 4);
                          while (piVar18[-1] != -0x56f47f82) {
                            piVar18 = piVar18 + 2;
                            uVar17 = uVar17 - 1;
                            if (uVar17 == 0) {
                              uVar14 = 0;
                              goto LAB_01c2f8a0;
                            }
                          }
                          iVar10 = 0;
                          if (*piVar18 != -1) {
                            iVar10 = *piVar18;
                          }
                          DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar10);
                        } while (*puVar22 != 0);
                        uVar14 = 0;
                      }
LAB_01c2f8a0:
                      uVar20 = 5;
                      if (uVar9 == uVar14) goto LAB_01c2f8ac;
                    }
                    local_70 = s_MuseumFossilStampRackLotID1_04a40f16;
                    local_78 = puVar3;
                    uVar9 = FUN_0273ea30(&local_78);
                    if (uVar9 == 0xffffffff) {
LAB_01c2fb5c:
                      puVar3 = PTR_DAT_04bb2020 + 0x10;
                      local_70 = s_MuseumFossilStampRackLotID2_04a40f34;
                      local_78 = puVar3;
                      uVar9 = FUN_0273ea30(&local_78);
                      if (uVar9 != 0xffffffff) {
                        if (*puVar22 == 0) {
LAB_01c2fc7c:
                          uVar20 = 0;
                        }
                        else {
                          cVar13 = DAT_0534bc48;
                          do {
                            if (cVar13 == '\0') {
                              cVar13 = '\x01';
                              DAT_0534bc48 = '\x01';
                              DAT_0534bc4c = -1;
                              DAT_0534bc54 = 0xffffffffffffffff;
                              DAT_0534bc7c = 0xffffffff;
                              DAT_0534bc5c = 0xffffffffffffffff;
                              DAT_0534bc64 = 0xffffffffffffffff;
                              DAT_0534bc6c = 0xffffffffffffffff;
                              DAT_0534bc74 = 0xffffffffffffffff;
                            }
                            else {
                              if (-1 < (int)DAT_0534bc6c) {
                                pbVar12 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar22);
                                if (pbVar12 == (byte *)0x0) goto LAB_01c2fc7c;
                                uVar20 = (uint)*pbVar12;
                                goto LAB_01c2fc80;
                              }
                              if ((int)DAT_0534bc6c != -1) goto LAB_01c2fc7c;
                            }
                            puVar19 = (uint *)(ulong)*puVar22;
                            uVar20 = 0;
                            if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2fc80;
                            lVar4 = 0xc;
                            if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                              lVar4 = 0x1c;
                            }
                            lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                            if (lVar4 == 0) goto LAB_01c2fc7c;
                            uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                            uVar20 = 0;
                            if (uVar17 == 0) goto LAB_01c2fc80;
                            piVar18 = (int *)(lVar4 + 4);
                            while (piVar18[-1] != -0x56f47f82) {
                              piVar18 = piVar18 + 2;
                              uVar17 = uVar17 - 1;
                              if (uVar17 == 0) {
                                uVar20 = 0;
                                goto LAB_01c2fc80;
                              }
                            }
                            iVar10 = 0;
                            if (*piVar18 != -1) {
                              iVar10 = *piVar18;
                            }
                            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar10);
                          } while (*puVar22 != 0);
                          uVar20 = 0;
                        }
LAB_01c2fc80:
                        if (uVar9 == uVar20) {
                          uVar20 = 7;
                          goto LAB_01c2fdac;
                        }
                      }
                      local_70 = s_MuseumFossilStampRackLotID3_04a40f52;
                      local_78 = puVar3;
                      uVar9 = FUN_0273ea30(&local_78);
                      if (uVar9 != 0xffffffff) {
                        if (*puVar22 == 0) {
LAB_01c2fd9c:
                          uVar20 = 0;
                        }
                        else {
                          cVar13 = DAT_0534bc48;
                          do {
                            if (cVar13 == '\0') {
                              cVar13 = '\x01';
                              DAT_0534bc48 = '\x01';
                              DAT_0534bc7c = 0xffffffff;
                              DAT_0534bc4c = -1;
                              DAT_0534bc54 = 0xffffffffffffffff;
                              DAT_0534bc5c = 0xffffffffffffffff;
                              DAT_0534bc64 = 0xffffffffffffffff;
                              DAT_0534bc6c = 0xffffffffffffffff;
                              DAT_0534bc74 = 0xffffffffffffffff;
                            }
                            else {
                              if (-1 < (int)DAT_0534bc6c) {
                                pbVar12 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar22);
                                if (pbVar12 == (byte *)0x0) goto LAB_01c2fd9c;
                                uVar20 = (uint)*pbVar12;
                                goto LAB_01c2fda0;
                              }
                              if ((int)DAT_0534bc6c != -1) goto LAB_01c2fd9c;
                            }
                            puVar19 = (uint *)(ulong)*puVar22;
                            uVar20 = 0;
                            if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2fda0;
                            lVar4 = 0xc;
                            if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                              lVar4 = 0x1c;
                            }
                            lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                            if (lVar4 == 0) goto LAB_01c2fd9c;
                            uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                            uVar20 = 0;
                            if (uVar17 == 0) goto LAB_01c2fda0;
                            piVar18 = (int *)(lVar4 + 4);
                            while (piVar18[-1] != -0x56f47f82) {
                              piVar18 = piVar18 + 2;
                              uVar17 = uVar17 - 1;
                              if (uVar17 == 0) {
                                uVar20 = 0;
                                goto LAB_01c2fda0;
                              }
                            }
                            iVar10 = 0;
                            if (*piVar18 != -1) {
                              iVar10 = *piVar18;
                            }
                            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar10);
                          } while (*puVar22 != 0);
                          uVar20 = 0;
                        }
LAB_01c2fda0:
                        if (uVar9 == uVar20) {
                          uVar20 = 8;
                          goto LAB_01c2fdac;
                        }
                      }
                      puVar3 = PTR_DAT_04bb2020 + 0x10;
                      local_70 = s_MuseumArtStampRackLotID1_04a40f70;
                      local_78 = puVar3;
                      uVar9 = FUN_0273ea30(&local_78);
                      if (uVar9 == 0xffffffff) {
LAB_01c2fe98:
                        local_70 = s_MuseumArtStampRackLotID2_04a40f8b;
                        local_78 = puVar3;
                        uVar9 = FUN_0273ea30(&local_78);
                        if (uVar9 != 0xffffffff) {
                          pbVar12 = (byte *)FUN_01c33fa0(puVar22,8,0xa90b807e,0);
                          if (pbVar12 == (byte *)0x0) {
                            uVar14 = 0;
                          }
                          else {
                            uVar14 = (uint)*pbVar12;
                          }
                          uVar20 = 10;
                          if (uVar9 == uVar14) goto LAB_01c2ff8c;
                        }
                        local_78 = PTR_DAT_04bb2020 + 0x10;
                        local_70 = s_MuseumArtStampRackLotID3_04a40fa6;
                        uVar9 = FUN_0273ea30(&local_78);
                        if (uVar9 != 0xffffffff) {
                          pbVar12 = (byte *)FUN_01c33fa0(puVar22,8,0xa90b807e,0);
                          if (pbVar12 == (byte *)0x0) {
                            uVar14 = 0;
                          }
                          else {
                            uVar14 = (uint)*pbVar12;
                          }
                          uVar20 = 0xb;
                          if (uVar9 == uVar14) goto LAB_01c2ff8c;
                        }
                        goto LAB_01c2ee14;
                      }
                      pbVar12 = (byte *)FUN_01c33fa0(puVar22,8,0xa90b807e,0);
                      if (pbVar12 == (byte *)0x0) {
                        uVar14 = 0;
                      }
                      else {
                        uVar14 = (uint)*pbVar12;
                      }
                      uVar20 = 9;
                      if (uVar9 != uVar14) goto LAB_01c2fe98;
LAB_01c2ff8c:
                      bVar7 = FUN_0252c2c8(param_4);
                      bVar7 = bVar7 & 1;
                      uVar9 = uVar20 - 9;
                      *(byte *)(param_2 + 9) = bVar7;
                      uVar15 = 3;
                    }
                    else {
                      if (*puVar22 == 0) {
LAB_01c2fb48:
                        uVar20 = 0;
                      }
                      else {
                        cVar13 = DAT_0534bc48;
                        do {
                          if (cVar13 == '\0') {
                            cVar13 = '\x01';
                            DAT_0534bc48 = '\x01';
                            DAT_0534bc7c = 0xffffffff;
                            DAT_0534bc4c = -1;
                            DAT_0534bc54 = 0xffffffffffffffff;
                            DAT_0534bc5c = 0xffffffffffffffff;
                            DAT_0534bc64 = 0xffffffffffffffff;
                            DAT_0534bc6c = 0xffffffffffffffff;
                            DAT_0534bc74 = 0xffffffffffffffff;
                          }
                          else {
                            if (-1 < (int)DAT_0534bc6c) {
                              pbVar12 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar22);
                              if (pbVar12 == (byte *)0x0) goto LAB_01c2fb48;
                              uVar20 = (uint)*pbVar12;
                              goto LAB_01c2fb4c;
                            }
                            if ((int)DAT_0534bc6c != -1) goto LAB_01c2fb48;
                          }
                          puVar19 = (uint *)(ulong)*puVar22;
                          uVar20 = 0;
                          if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2fb4c;
                          lVar4 = 0xc;
                          if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                            lVar4 = 0x1c;
                          }
                          lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                          if (lVar4 == 0) goto LAB_01c2fb48;
                          uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                          DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                          uVar20 = 0;
                          if (uVar17 == 0) goto LAB_01c2fb4c;
                          piVar18 = (int *)(lVar4 + 4);
                          while (piVar18[-1] != -0x56f47f82) {
                            piVar18 = piVar18 + 2;
                            uVar17 = uVar17 - 1;
                            if (uVar17 == 0) {
                              uVar20 = 0;
                              goto LAB_01c2fb4c;
                            }
                          }
                          iVar10 = 0;
                          if (*piVar18 != -1) {
                            iVar10 = *piVar18;
                          }
                          DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar10);
                        } while (*puVar22 != 0);
                        uVar20 = 0;
                      }
LAB_01c2fb4c:
                      if (uVar9 != uVar20) goto LAB_01c2fb5c;
                      uVar20 = 6;
LAB_01c2fdac:
                      if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
                        bVar7 = true;
                      }
                      else {
                        pcVar11 = (char *)FUN_02582a24(param_4);
                        plVar6 = DAT_0537d558;
                        cVar13 = *pcVar11;
                        uVar17 = FUN_01d3e29c(*DAT_0537d558 + 8);
                        pcVar11 = (char *)(*plVar6 + 0x472);
                        if ((uVar17 & 1) == 0) {
                          pcVar11 = PTR_DAT_04bc1220;
                        }
                        bVar7 = cVar13 == *pcVar11;
                      }
                      *(byte *)(param_2 + 9) = bVar7;
                      uVar9 = uVar20 - 6;
                      uVar15 = 2;
                    }
                    *(undefined4 *)(param_2 + 4) = uVar15;
                  }
                  else {
                    if (*puVar22 == 0) {
LAB_01c2f64c:
                      uVar20 = 0;
                    }
                    else {
                      cVar13 = DAT_0534bc48;
                      do {
                        if (cVar13 == '\0') {
                          cVar13 = '\x01';
                          DAT_0534bc48 = '\x01';
                          DAT_0534bc4c = -1;
                          DAT_0534bc54 = 0xffffffffffffffff;
                          DAT_0534bc7c = 0xffffffff;
                          DAT_0534bc5c = 0xffffffffffffffff;
                          DAT_0534bc64 = 0xffffffffffffffff;
                          DAT_0534bc6c = 0xffffffffffffffff;
                          DAT_0534bc74 = 0xffffffffffffffff;
                        }
                        else {
                          if (-1 < (int)DAT_0534bc6c) {
                            pbVar12 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar22);
                            if (pbVar12 == (byte *)0x0) goto LAB_01c2f64c;
                            uVar20 = (uint)*pbVar12;
                            goto LAB_01c2f650;
                          }
                          if ((int)DAT_0534bc6c != -1) goto LAB_01c2f64c;
                        }
                        puVar19 = (uint *)(ulong)*puVar22;
                        uVar20 = 0;
                        if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2f650;
                        lVar4 = 0xc;
                        if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                          lVar4 = 0x1c;
                        }
                        lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                        if (lVar4 == 0) goto LAB_01c2f64c;
                        uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                        DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                        uVar20 = 0;
                        if (uVar17 == 0) goto LAB_01c2f650;
                        piVar18 = (int *)(lVar4 + 4);
                        while (piVar18[-1] != -0x56f47f82) {
                          piVar18 = piVar18 + 2;
                          uVar17 = uVar17 - 1;
                          if (uVar17 == 0) {
                            uVar20 = 0;
                            goto LAB_01c2f650;
                          }
                        }
                        iVar10 = 0;
                        if (*piVar18 != -1) {
                          iVar10 = *piVar18;
                        }
                        DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar10);
                      } while (*puVar22 != 0);
                      uVar20 = 0;
                    }
LAB_01c2f650:
                    if (uVar9 != uVar20) goto LAB_01c2f664;
                    uVar20 = 3;
LAB_01c2f8ac:
                    if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
                      bVar8 = true;
                    }
                    else {
                      pcVar11 = (char *)FUN_02582a24(param_4);
                      plVar6 = DAT_0537d558;
                      cVar13 = *pcVar11;
                      uVar17 = FUN_01d3e29c(*DAT_0537d558 + 8);
                      pcVar11 = (char *)(*plVar6 + 0x472);
                      if ((uVar17 & 1) == 0) {
                        pcVar11 = PTR_DAT_04bc1220;
                      }
                      bVar8 = cVar13 == *pcVar11;
                    }
                    *(bool *)(param_2 + 9) = bVar8;
                    *(undefined4 *)(param_2 + 4) = 1;
                    if (*puVar22 == 0) {
LAB_01c2fb24:
                      bVar8 = false;
                    }
                    else {
                      cVar13 = DAT_0534bc48;
                      do {
                        if (cVar13 == '\0') {
                          cVar13 = '\x01';
                          DAT_0534bc48 = '\x01';
                          DAT_0534bc7c = 0xffffffff;
                          DAT_0534bc4c = -1;
                          DAT_0534bc54 = 0xffffffffffffffff;
                          DAT_0534bc5c = 0xffffffffffffffff;
                          DAT_0534bc64 = 0xffffffffffffffff;
                          DAT_0534bc6c = 0xffffffffffffffff;
                          DAT_0534bc74 = 0xffffffffffffffff;
                        }
                        else {
                          if (-1 < (int)DAT_0534bc7c) {
                            if ((char *)((ulong)DAT_0534bc7c + (long)puVar22) == (char *)0x0)
                            goto LAB_01c2fb24;
                            bVar8 = *(char *)((ulong)DAT_0534bc7c + (long)puVar22) != '\0';
                            goto LAB_01c2fb28;
                          }
                          if (DAT_0534bc7c != 0xffffffff) goto LAB_01c2fb24;
                        }
                        puVar19 = (uint *)(ulong)*puVar22;
                        bVar8 = false;
                        if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2fb28;
                        lVar4 = 0xc;
                        if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                          lVar4 = 0x1c;
                        }
                        lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                        if (lVar4 == 0) goto LAB_01c2fb24;
                        uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                        DAT_0534bc7c = 0xfffffffe;
                        bVar8 = false;
                        if (uVar17 == 0) goto LAB_01c2fb28;
                        puVar19 = (uint *)(lVar4 + 4);
                        while (puVar19[-1] != 0xed4b6070) {
                          puVar19 = puVar19 + 2;
                          uVar17 = uVar17 - 1;
                          if (uVar17 == 0) {
                            bVar8 = false;
                            goto LAB_01c2fb28;
                          }
                        }
                        DAT_0534bc7c = 0;
                        if (*puVar19 != 0xffffffff) {
                          DAT_0534bc7c = *puVar19;
                        }
                      } while (*puVar22 != 0);
                      bVar8 = false;
                    }
LAB_01c2fb28:
                    bVar7 = *(byte *)(param_2 + 9);
                    uVar9 = uVar20 - 3;
                    *(bool *)(param_2 + 0x180) = bVar8;
                  }
                }
                else {
                  if (*puVar22 == 0) {
LAB_01c2f24c:
                    uVar20 = 0;
                  }
                  else {
                    cVar13 = DAT_0534bc48;
                    do {
                      if (cVar13 == '\0') {
                        cVar13 = '\x01';
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc4c = -1;
                        DAT_0534bc54 = 0xffffffffffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (int)DAT_0534bc6c) {
                          pbVar12 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar22);
                          if (pbVar12 == (byte *)0x0) goto LAB_01c2f24c;
                          uVar20 = (uint)*pbVar12;
                          goto LAB_01c2f250;
                        }
                        if ((int)DAT_0534bc6c != -1) goto LAB_01c2f24c;
                      }
                      puVar19 = (uint *)(ulong)*puVar22;
                      uVar20 = 0;
                      if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c2f250;
                      lVar4 = 0xc;
                      if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                        lVar4 = 0x1c;
                      }
                      lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                      if (lVar4 == 0) goto LAB_01c2f24c;
                      uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                      uVar20 = 0;
                      if (uVar17 == 0) goto LAB_01c2f250;
                      piVar18 = (int *)(lVar4 + 4);
                      while (piVar18[-1] != -0x56f47f82) {
                        piVar18 = piVar18 + 2;
                        uVar17 = uVar17 - 1;
                        if (uVar17 == 0) {
                          uVar20 = 0;
                          goto LAB_01c2f250;
                        }
                      }
                      iVar10 = 0;
                      if (*piVar18 != -1) {
                        iVar10 = *piVar18;
                      }
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar10);
                    } while (*puVar22 != 0);
                    uVar20 = 0;
                  }
LAB_01c2f250:
                  if (uVar9 != uVar20) goto LAB_01c2f260;
                  uVar9 = 0;
LAB_01c2f4ac:
                  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
                    bVar7 = true;
                  }
                  else {
                    pcVar11 = (char *)FUN_02582a24(param_4);
                    plVar6 = DAT_0537d558;
                    cVar13 = *pcVar11;
                    uVar17 = FUN_01d3e29c(*DAT_0537d558 + 8);
                    pcVar11 = (char *)(*plVar6 + 0x472);
                    if ((uVar17 & 1) == 0) {
                      pcVar11 = PTR_DAT_04bc1220;
                    }
                    bVar7 = cVar13 == *pcVar11;
                  }
                  *(byte *)(param_2 + 9) = bVar7;
                  *(undefined4 *)(param_2 + 4) = 0;
                  uVar20 = uVar9;
                }
                *(char *)(param_2 + 8) = (char)uVar9;
                if (bVar7 == 0) {
                  FUN_038d1270(lVar1,(&PTR_s_OwlFishStampRally1_04a41290)[uVar20]);
                  iVar10 = FUN_02754e30(param_4,lVar1);
                }
                else {
                  FUN_038d1270(lVar1,(&PTR_s_OwlFishStampRally1_04a41128)[uVar20]);
                  iVar10 = FUN_0274bce0(param_4,lVar1);
                }
                *(bool *)param_2 = iVar10 == 0;
                if (*puVar22 != 0) {
                  cVar13 = DAT_0534bc48;
                  do {
                    if (cVar13 == '\0') {
                      cVar13 = '\x01';
                      DAT_0534bc48 = '\x01';
                      DAT_0534bc7c = 0xffffffff;
                      DAT_0534bc4c = -1;
                      DAT_0534bc54 = 0xffffffffffffffff;
                      DAT_0534bc5c = 0xffffffffffffffff;
                      DAT_0534bc64 = 0xffffffffffffffff;
                      DAT_0534bc6c = 0xffffffffffffffff;
                      DAT_0534bc74 = 0xffffffffffffffff;
                    }
                    else {
                      if (-1 < (int)DAT_0534bc74) {
                        puVar16 = (undefined8 *)((DAT_0534bc74 & 0xffffffff) + (long)puVar22);
                        goto LAB_01c300ec;
                      }
                      if ((int)DAT_0534bc74 != -1) break;
                    }
                    puVar19 = (uint *)(ulong)*puVar22;
                    puVar16 = (undefined8 *)0x0;
                    if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c300ec;
                    lVar4 = 0xc;
                    if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                      lVar4 = 0x1c;
                    }
                    lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                    if (lVar4 == 0) break;
                    uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                    DAT_0534bc74 = CONCAT44(DAT_0534bc74._4_4_,0xfffffffe);
                    puVar16 = (undefined8 *)0x0;
                    if (uVar17 == 0) goto LAB_01c300ec;
                    piVar18 = (int *)(lVar4 + 4);
                    while (piVar18[-1] != 0x4ab9b98a) {
                      piVar18 = piVar18 + 2;
                      uVar17 = uVar17 - 1;
                      if (uVar17 == 0) {
                        puVar16 = (undefined8 *)0x0;
                        goto LAB_01c300ec;
                      }
                    }
                    iVar10 = 0;
                    if (*piVar18 != -1) {
                      iVar10 = *piVar18;
                    }
                    DAT_0534bc74 = CONCAT44(DAT_0534bc74._4_4_,iVar10);
                  } while (*puVar22 != 0);
                }
                puVar16 = (undefined8 *)0x0;
LAB_01c300ec:
                puVar5 = &DAT_0407ebb1;
                if (puVar16 != (undefined8 *)0x0) {
                  puVar5 = puVar16;
                }
                FUN_038d1270(param_2 + 0x68,puVar5);
                if (*puVar22 != 0) {
                  cVar13 = DAT_0534bc48;
                  do {
                    if (cVar13 == '\0') {
                      cVar13 = '\x01';
                      DAT_0534bc48 = '\x01';
                      DAT_0534bc7c = 0xffffffff;
                      DAT_0534bc4c = -1;
                      DAT_0534bc54 = 0xffffffffffffffff;
                      DAT_0534bc5c = 0xffffffffffffffff;
                      DAT_0534bc64 = 0xffffffffffffffff;
                      DAT_0534bc6c = 0xffffffffffffffff;
                      DAT_0534bc74 = 0xffffffffffffffff;
                    }
                    else {
                      if (-1 < (long)DAT_0534bc6c) {
                        puVar16 = (undefined8 *)((ulong)DAT_0534bc6c._4_4_ + (long)puVar22);
                        goto LAB_01c301dc;
                      }
                      if (DAT_0534bc6c._4_4_ != 0xffffffff) break;
                    }
                    puVar19 = (uint *)(ulong)*puVar22;
                    puVar16 = (undefined8 *)0x0;
                    if ((*puVar22 == 0) || (puVar22 == puVar19)) goto LAB_01c301dc;
                    lVar4 = 0xc;
                    if (*(char *)((long)puVar22 + (10 - (long)puVar19)) != '\0') {
                      lVar4 = 0x1c;
                    }
                    lVar4 = (long)puVar22 + (lVar4 - (long)puVar19);
                    if (lVar4 == 0) break;
                    uVar17 = (ulong)*(ushort *)((long)puVar22 + (8 - (long)puVar19));
                    DAT_0534bc6c = CONCAT44(0xfffffffe,(int)DAT_0534bc6c);
                    puVar16 = (undefined8 *)0x0;
                    if (uVar17 == 0) goto LAB_01c301dc;
                    piVar18 = (int *)(lVar4 + 4);
                    while (piVar18[-1] != 0x512b63c) {
                      piVar18 = piVar18 + 2;
                      uVar17 = uVar17 - 1;
                      if (uVar17 == 0) {
                        puVar16 = (undefined8 *)0x0;
                        goto LAB_01c301dc;
                      }
                    }
                    iVar10 = 0;
                    if (*piVar18 != -1) {
                      iVar10 = *piVar18;
                    }
                    DAT_0534bc6c = CONCAT44(iVar10,(int)DAT_0534bc6c);
                  } while (*puVar22 != 0);
                }
                puVar16 = (undefined8 *)0x0;
LAB_01c301dc:
                puVar5 = &DAT_0407ebb1;
                if (puVar16 != (undefined8 *)0x0) {
                  puVar5 = puVar16;
                }
                FUN_038d1270(param_2 + 0x148,puVar5);
                uVar21 = uVar21 + 1;
                goto LAB_01c2ee18;
              }
            }
          }
        }
      }
    }
LAB_01c2ee14:
    uVar21 = uVar21 + 1;
  } while( true );
}

