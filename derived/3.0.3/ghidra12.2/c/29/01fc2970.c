
undefined8
FUN_01fc2970(undefined8 *param_1,undefined4 *param_2,undefined2 *param_3,long param_4,float *param_5
            ,long param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined2 *puVar18;
  undefined8 uVar19;
  bool bVar20;
  long lVar21;
  uint *puVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  undefined1 *__src;
  float *pfVar28;
  long *plVar29;
  int local_19c;
  float local_16c;
  float local_168 [2];
  undefined *local_160;
  undefined1 *local_158;
  int local_150;
  undefined1 auStack_14c [63];
  undefined1 local_10d;
  int local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  int local_fc;
  undefined2 local_f8;
  undefined *local_f0;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  uint *local_e0;
  float local_d8 [2];
  long local_d0;
  long local_c8;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  
  plVar29 = (long *)*param_1;
  uVar16 = (**(code **)(*plVar29 + 0x5c0))(plVar29);
  puVar2 = PTR_DAT_04bb5ce0;
  puVar1 = PTR_DAT_04bb2720;
  local_c0 = PTR_DAT_04bb2010;
  if ((uVar16 & 1) != 0) {
    return 0;
  }
  local_80 = 0;
  puStack_a8 = PTR_DAT_04bb2010 + 0x10;
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  local_90 = 0;
  local_a0 = 0;
  puStack_98 = puStack_a8;
  puStack_88 = puStack_a8;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar21 = *(long *)PTR_DAT_04bb2720, lVar21 != 0)) &&
     (*(long *)(lVar21 + 0x330) != 0)) {
    puVar17 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
    iVar13 = FUN_006bd550(*puVar17,0);
    if (((iVar13 == 0x758f7eaf) && (*(long *)puVar1 != 0)) &&
       ((lVar21 = *(long *)(*(long *)puVar1 + 0x330), lVar21 != 0 && (*(int *)(lVar21 + 0x244) != 0)
        ))) {
      lVar21 = *(long *)puVar2;
      if (lVar21 == 0) {
        iVar24 = 0;
        local_19c = 0;
        iVar25 = 0x10;
        iVar26 = 0x10;
      }
      else {
        iVar24 = *(int *)(lVar21 + 0xd88);
        local_19c = *(int *)(lVar21 + 0xd8c);
        iVar26 = *(int *)(lVar21 + 0xd98);
        iVar25 = *(int *)(lVar21 + 0xd9c);
      }
      iVar13 = iVar24;
      if (iVar26 <= iVar24) {
        iVar13 = iVar26;
      }
      if (iVar24 <= iVar26) {
        iVar24 = iVar26;
      }
      iVar26 = local_19c;
      if (iVar25 <= local_19c) {
        iVar26 = iVar25;
      }
      if (local_19c <= iVar25) {
        local_19c = iVar25;
      }
      goto LAB_01fc2ac4;
    }
  }
  lVar21 = *(long *)PTR_DAT_04bb59d8;
  if (lVar21 == 0) {
    iVar26 = 0;
    iVar13 = 0;
    local_19c = 0;
    iVar24 = 0;
  }
  else {
    iVar13 = *(int *)(lVar21 + 0x28);
    iVar26 = *(int *)(lVar21 + 0x2c);
    iVar24 = *(int *)(lVar21 + 0x38);
    local_19c = *(int *)(lVar21 + 0x3c);
  }
LAB_01fc2ac4:
  local_d0 = param_6 + 8;
  local_c8 = param_6 + 0x18;
  local_c0 = local_c0 + 0x10;
  iVar25 = *(int *)(param_6 + 0x24) + 1;
  iVar7 = *(int *)(param_6 + 0x10);
  local_b4 = *(int *)(param_6 + 0x14);
  if (iVar25 != local_b4) {
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puVar2 = PTR_DAT_04bb2f70 + 0x10;
    puVar3 = PTR_DAT_04bb2bc0 + 0x10;
    local_b8 = iVar7;
    do {
      if (((iVar13 <= local_b8) && (local_b8 <= iVar24)) &&
         ((iVar26 <= local_b4 && (local_b4 <= local_19c)))) {
        local_168[0] = (float)local_b8 * 5.0 + 2.5;
        local_168[1] = 0.0;
        local_160 = (undefined *)CONCAT44(local_160._4_4_,(float)local_b4 * 5.0 + 2.5);
        iVar14 = FUN_01318f40(param_1[1],local_168);
        if (iVar14 == 0) {
          local_d8[0] = 1.4013e-45;
          local_d8[1] = 0.0;
          pfVar28 = local_d8;
          lVar21 = 1;
          bVar20 = false;
          do {
            fVar9 = *pfVar28;
            puVar18 = (undefined2 *)FUN_01a5190c(param_1[2],fVar9,&local_c0,&puStack_88);
            local_168[0] = fVar9;
            uVar16 = FUN_01fa981c(plVar29,puVar18,&puStack_88,local_168);
            if ((uVar16 & 1) == 0) goto LAB_01fc2c58;
            uVar16 = FUN_0277e294(puVar18);
            puVar11 = PTR_DAT_04bb43c0;
            if ((uVar16 & 1) == 0) {
              lVar27 = *(long *)PTR_DAT_04bbbc68;
              if (((((lVar27 != 0) && (*(long *)(lVar27 + 0xb0) != 0)) &&
                   (*(long *)(*(long *)(lVar27 + 0xb0) + 8) != 0)) &&
                  ((*(long *)(lVar27 + 0x488) != 0 &&
                   (*(long *)(*(long *)(lVar27 + 0x488) + 8) != 0)))) &&
                 ((*(long *)(lVar27 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar27 + 0x2b0) + 8) != 0)
                  ))) {
                uVar15 = FUN_0277d6c4(puVar18);
                uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                  FUN_0124c030(local_168,puVar18);
                  if (((int)plVar29[0x15f1] == 0) &&
                     (iVar14 = FUN_0123db50(&local_160,local_158), (iVar14 - 2U & 0xfffffff9) == 0))
                  {
                    iVar23 = 5;
                  }
                  else {
                    iVar14 = FUN_0123db50(&local_160,local_158);
                    iVar23 = 5;
                    if (6 < iVar14 - 0xbU) {
                      iVar23 = *(int *)(PTR_DAT_04bb2e10 + 8);
                      iVar8 = *(int *)(PTR_DAT_04bb2e10 + 0xc);
                      iVar14 = iVar23;
                      if (0 < iVar23) {
                        iVar14 = 1;
                      }
                      if (iVar23 < 2) {
                        iVar23 = 1;
                      }
                      iVar5 = iVar8;
                      if (0 < iVar8) {
                        iVar5 = 1;
                      }
                      if (iVar8 < 2) {
                        iVar8 = 1;
                      }
                      local_a0 = CONCAT44(local_80._4_4_ + iVar5,(int)local_80 + iVar14);
                      local_90 = CONCAT44(local_80._4_4_ + iVar8,(int)local_80 + iVar23);
                      *param_2 = 4;
                      *param_3 = *puVar18;
                      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar18 + 1);
                      *(undefined1 *)((long)param_3 + 3) = *(undefined1 *)((long)puVar18 + 3);
                      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar18 + 2);
                      *(int *)(param_4 + 0x20) = (int)local_80 + iVar23;
                      *(int *)(param_4 + 0x24) = local_80._4_4_ + iVar8;
                      fVar9 = *pfVar28;
                      *(int *)(param_4 + 0x10) = (int)local_80 + iVar14;
                      *(int *)(param_4 + 0x14) = local_80._4_4_ + iVar5;
                      *param_5 = fVar9;
                      iVar23 = 1;
                    }
                  }
                  goto LAB_01fc2c50;
                }
              }
            }
            else {
              local_e8 = *puVar18;
              local_e6 = *(undefined1 *)(puVar18 + 1);
              local_e5 = *(undefined1 *)((long)puVar18 + 3);
              local_e4 = *(undefined4 *)(puVar18 + 2);
              local_e0 = (uint *)0x0;
              lVar27 = *(long *)PTR_DAT_04bb43c0;
              local_f0 = puVar1;
              uVar15 = FUN_0277d6c4(&local_e8);
              if (*(long *)puVar11 != 0) {
                lVar27 = *(long *)(lVar27 + 0x57e58);
                uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                if ((uVar15 < *(uint *)(lVar27 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                  lVar27 = *(long *)PTR_DAT_04bc0428;
                  uVar15 = FUN_0277d6c4(puVar18);
                  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                  if (uVar15 < *(uint *)(lVar27 + 0x1d8)) {
                    puVar22 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar15 * 8);
                    if (puVar22 != (uint *)0x0) {
                      local_e0 = puVar22;
                    }
                  }
                }
              }
              uVar19 = FUN_01afb480(&local_f0,&local_b0);
              local_a0 = CONCAT44(local_a0._4_4_ + local_80._4_4_,(int)local_a0 + (int)local_80);
              local_90 = CONCAT44(local_90._4_4_ + local_80._4_4_,(int)local_90 + (int)local_80);
              if (local_e0 == (uint *)0x0) {
LAB_01fc2f80:
                local_168[0] = 0.0;
              }
              else {
                uVar15 = *local_e0;
                local_168[0] = 0.0;
                if (uVar15 == 0) goto LAB_01fc2f80;
                if (local_e0 != (uint *)(ulong)uVar15) {
                  puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar15);
                  local_168[0] = 0.0;
                  if (*puVar22 != 0) {
                    uVar15 = puVar22[1];
                    if ((uVar15 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                      lVar27 = 0xc;
                      if (*(char *)((long)puVar22 + 10) != '\0') {
                        lVar27 = 0x1c;
                      }
                      lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                      if (lVar27 != 0) {
                        uVar6 = 0;
                        if ((ulong)uVar15 != 0) {
                          uVar6 = (uint)((ulong)((long)local_e0 - lVar27) / (ulong)uVar15);
                        }
                        if (*puVar22 <= uVar6) {
                          uVar6 = 0xffffffff;
                        }
                        if ((uVar6 < *(uint *)PTR_DAT_04bc0110) &&
                           (local_168[0] = (float)(uint)*(ushort *)
                                                         (*(long *)(PTR_DAT_04bc0110 + 8) +
                                                         (long)(int)uVar6 * 2),
                           (uint)local_168[0] < 9)) goto LAB_01fc2f84;
                      }
                    }
                    local_168[0] = 0.0;
                  }
                }
              }
LAB_01fc2f84:
              uVar16 = FUN_01fb0064(uVar19,*(long *)(plVar29[1] + 0x68) + 0x278,puVar18,&local_b0,
                                    local_168);
              iVar23 = 5;
              if ((uVar16 & 1) != 0) {
                if ((int)plVar29[0x15f1] == 0) {
                  if (local_e0 == (uint *)0x0) goto LAB_01fc31b0;
                  uVar15 = *local_e0;
                  local_168[0] = 0.0;
                  if ((uVar15 != 0) && (local_e0 != (uint *)(ulong)uVar15)) {
                    puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar15);
                    local_168[0] = 0.0;
                    if (*puVar22 != 0) {
                      uVar15 = puVar22[1];
                      if ((uVar15 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                        lVar27 = 0xc;
                        if (*(char *)((long)puVar22 + 10) != '\0') {
                          lVar27 = 0x1c;
                        }
                        lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                        if (lVar27 != 0) {
                          uVar6 = 0;
                          if ((ulong)uVar15 != 0) {
                            uVar6 = (uint)((ulong)((long)local_e0 - lVar27) / (ulong)uVar15);
                          }
                          if (*puVar22 <= uVar6) {
                            uVar6 = 0xffffffff;
                          }
                          if ((uVar6 < *(uint *)PTR_DAT_04bc0048) &&
                             (local_168[0] = (float)(uint)*(ushort *)
                                                           (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                           (long)(int)uVar6 * 2),
                             (uint)local_168[0] < 0x52)) goto LAB_01fc30f8;
                        }
                      }
                      local_168[0] = 0.0;
                    }
                  }
LAB_01fc30f8:
                  iVar23 = 5;
                  if (8 < (int)local_168[0] - 1U) {
                    uVar15 = *local_e0;
                    local_168[0] = 0.0;
                    if ((uVar15 != 0) && (local_e0 != (uint *)(ulong)uVar15)) {
                      puVar22 = (uint *)((long)local_e0 - (long)(ulong)uVar15);
                      local_168[0] = 0.0;
                      if (*puVar22 != 0) {
                        uVar15 = puVar22[1];
                        if ((uVar15 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                          lVar27 = 0xc;
                          if (*(char *)((long)puVar22 + 10) != '\0') {
                            lVar27 = 0x1c;
                          }
                          lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                          if (lVar27 != 0) {
                            uVar6 = 0;
                            if ((ulong)uVar15 != 0) {
                              uVar6 = (uint)((ulong)((long)local_e0 - lVar27) / (ulong)uVar15);
                            }
                            if (*puVar22 <= uVar6) {
                              uVar6 = 0xffffffff;
                            }
                            if ((uVar6 < *(uint *)PTR_DAT_04bc0048) &&
                               (local_168[0] = (float)(uint)*(ushort *)
                                                             (*(long *)(PTR_DAT_04bc0048 + 8) +
                                                             (long)(int)uVar6 * 2),
                               (uint)local_168[0] < 0x52)) goto LAB_01fc31b4;
                          }
                        }
LAB_01fc31b0:
                        local_168[0] = 0.0;
                      }
                    }
LAB_01fc31b4:
                    iVar23 = 5;
                    if (((uint)local_168[0] & 0xfffffffe) != 10) goto LAB_01fc2fb0;
                  }
                }
                else {
LAB_01fc2fb0:
                  if ((param_7 & 1) == 0) {
                    iVar14 = FUN_01b10e00(&local_f0);
                    iVar23 = 5;
                    if (iVar14 == 6) goto LAB_01fc2c50;
                  }
                  puVar11 = PTR_PTR_04bb2238;
                  local_10d = 0;
                  local_150 = 0x40;
                  local_168[0] = 0.0;
                  local_168[1] = 0.0;
                  local_160 = puVar2;
                  local_158 = auStack_14c;
                  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
                  puVar12 = PTR_PTR_04bb2238;
                  __src = *(undefined1 **)(puVar11 + 8);
                  if (auStack_14c != __src) {
                    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
                    lVar27 = 0;
                    do {
                      if (*(char *)(*(long *)(puVar12 + 8) + lVar27) == '\0') goto LAB_01fc31dc;
                      lVar4 = *(long *)(puVar12 + 8) + lVar27;
                      if (*(char *)(lVar4 + 1) == '\0') {
                        lVar27 = lVar27 + 1;
                        goto LAB_01fc31dc;
                      }
                      if (*(char *)(lVar4 + 2) == '\0') {
                        lVar27 = lVar27 + 2;
                        goto LAB_01fc31dc;
                      }
                      lVar27 = lVar27 + 3;
                    } while (lVar27 != 0x80001);
                    lVar27 = 0;
LAB_01fc31dc:
                    iVar14 = (int)lVar27;
                    if (local_150 <= (int)lVar27) {
                      iVar14 = local_150 + -1;
                    }
                    memcpy(auStack_14c,__src,(long)iVar14);
                    auStack_14c[iVar14] = 0;
                  }
                  local_f8 = 0;
                  uStack_104 = *(undefined4 *)PTR_DAT_04bb37e0;
                  local_100 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                  local_108 = 0;
                  local_16c = *pfVar28;
                  local_fc = 0;
                  local_160 = puVar3;
                  uVar16 = FUN_02080ddc(plVar29 + 0x15f7,local_168,puVar18,&puStack_88,&local_16c);
                  if ((uVar16 & 1) == 0) {
                    iVar23 = 5;
                  }
                  else {
                    iVar23 = 5;
                    if (((local_108 != 0) &&
                        ((*(int *)(plVar29[1] + 0x750) != 1 || ((char)local_f8 != '\0')))) &&
                       (((*(byte *)((long)plVar29 + 0xafb1) & 1) != 0 ||
                        ((uVar16 = (**(code **)(*plVar29 + 0x608))(plVar29), (uVar16 & 1) == 0 ||
                         (iVar23 = 5, local_fc == 1)))))) {
                      iVar23 = 1;
                      *param_2 = 1;
                      *param_3 = *puVar18;
                      *(undefined1 *)(param_3 + 1) = *(undefined1 *)(puVar18 + 1);
                      *(undefined1 *)((long)param_3 + 3) = *(undefined1 *)((long)puVar18 + 3);
                      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar18 + 2);
                      *(int *)(param_4 + 0x10) = (int)local_a0;
                      *(int *)(param_4 + 0x14) = local_a0._4_4_;
                      *(int *)(param_4 + 0x20) = (int)local_90;
                      *(int *)(param_4 + 0x24) = local_90._4_4_;
                      *param_5 = *pfVar28;
                    }
                  }
                }
              }
LAB_01fc2c50:
              if (iVar23 != 5) {
                return 1;
              }
            }
LAB_01fc2c58:
            pfVar28 = local_d8 + lVar21;
            lVar21 = 2;
            bVar10 = !bVar20;
            bVar20 = true;
          } while (bVar10);
        }
      }
      if (local_b8 < *(int *)(local_c8 + 8)) {
        local_b8 = local_b8 + 1;
      }
      else {
        local_b8 = *(int *)(local_d0 + 8);
        local_b4 = local_b4 + 1;
      }
    } while (iVar7 != local_b8 || iVar25 != local_b4);
  }
  return 0;
}

