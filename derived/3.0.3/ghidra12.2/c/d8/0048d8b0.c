
/* WARNING: Type propagation algorithm not settling */

void FUN_0048d8b0(int *param_1,long *param_2,long *param_3,undefined1 *param_4)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  int *piVar15;
  short *psVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  long lVar21;
  byte *pbVar22;
  long *plVar23;
  long lVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  int local_640;
  undefined8 local_628 [14];
  ulong local_5b8;
  undefined1 *local_520;
  ulong local_510;
  undefined8 local_3f8;
  long local_3f0;
  uint local_3e4;
  uint local_3e0;
  int local_3dc;
  undefined1 *local_3d8;
  undefined8 local_3d0;
  undefined1 auStack_3c8 [128];
  undefined1 *local_348;
  undefined8 local_340;
  undefined1 auStack_338 [128];
  undefined1 *local_2b8;
  uint local_2b0;
  uint local_2ac;
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [112];
  ulong local_230;
  ulong local_228;
  undefined1 *local_220;
  int *local_218;
  long local_210;
  long local_208;
  long *local_1b0;
  ulong local_188;
  ulong local_180;
  short *local_170;
  undefined8 local_160;
  undefined8 local_148;
  undefined4 local_70;
  int local_6c [3];
  
  *param_3 = 0;
  *param_4 = 0;
  uVar9 = FUN_0048ef90(param_2);
  if (uVar9 >> 0x1f != 0) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  iVar8 = (int)uVar9;
  local_6c[0] = iVar8;
  uVar10 = FUN_0048ef90(param_2);
  if (uVar10 >> 0x1f != 0) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  uVar11 = FUN_0048ef90(param_2);
  local_70 = (uint)uVar11;
  if (uVar11 >> 0x20 != 0) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048d958:
    *param_1 = -0x7ffbfe00;
LAB_0048d964:
    if (DAT_04c70f78 == '\0') {
      return;
    }
    FUN_00444bc0(auStack_2a0,&DAT_04c70f28,1);
    lVar12 = FUN_004446b0(auStack_2a0,"Error in input stream.",&DAT_0413df78);
    *(char **)(lVar12 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar12 + 0x30) = 0x535;
    FUN_00444c00(auStack_2a0);
    return;
  }
  if (*(byte *)(param_2 + 3) != 0) goto LAB_0048d958;
  if (*param_1 < 0) goto LAB_0048d964;
  if ((iVar8 < 1) || (param_1[0x1a] <= iVar8)) {
    if (DAT_04c70f78 == '\0') goto LAB_0048e01c;
    FUN_00444bc0(auStack_2a0,&DAT_04c70f28,1);
    lVar12 = FUN_004446b0(auStack_2a0,"Invalid type ID (out of bounds).",&DAT_0413df78);
    *(char **)(lVar12 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar12 + 0x30) = 0x539;
    uVar19 = 0x71b95bd8;
LAB_0048db00:
    *(undefined4 *)(lVar12 + 0xc) = uVar19;
LAB_0048e014:
    FUN_00444c00(auStack_2a0);
LAB_0048e01c:
    *param_1 = -0x7ffbfe00;
    return;
  }
  if (param_1[6] <= iVar8) {
    if (DAT_04c70f78 == '\0') goto LAB_0048e01c;
    FUN_00444bc0(auStack_2a0,&DAT_04c70f28,1);
    lVar12 = FUN_004446b0(auStack_2a0,"Invalid type ID (out of bounds).",&DAT_0413df78);
    *(char **)(lVar12 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar12 + 0x30) = 0x53a;
    uVar19 = 0x71b95bd9;
    goto LAB_0048db00;
  }
  if (*(long *)(*(long *)(param_1 + 4) +
               (-(uVar9 >> 0x1f & 1) & 0xfffffff800000000 | (uVar9 & 0xffffffff) << 3)) != 0) {
    if (DAT_04c70f78 == '\0') goto LAB_0048e01c;
    FUN_00444bc0(auStack_2a0,&DAT_04c70f28,1);
    lVar12 = FUN_004446b0(auStack_2a0,"TypeId {} already read",&DAT_04853780,local_6c);
    uVar20 = 0x53b;
LAB_0048e010:
    *(char **)(lVar12 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar12 + 0x30) = uVar20;
    goto LAB_0048e014;
  }
  pbVar22 = *(byte **)(*(long *)(param_1 + 0x18) + (long)iVar8 * 8);
  uVar25 = (uint)uVar10;
  if (((int)uVar25 < 0) || (param_1[0x1a] <= (int)uVar25)) {
    if (DAT_04c70f78 == '\0') goto LAB_0048e01c;
    FUN_00444bc0(auStack_2a0,&DAT_04c70f28,1);
    local_628[0] = FUN_00427270(pbVar22);
    lVar12 = FUN_004446b0(auStack_2a0,"Invalid parent type ID (out of bounds) for type \'{}\'.",
                          &DAT_048534d0,local_628);
    uVar20 = 0x53f;
    goto LAB_0048e010;
  }
  local_3e0 = 0;
  uVar27 = local_70;
  if ((uVar11 & 1) != 0) {
    uVar11 = (ulong)(local_70 ^ 1);
    uVar27 = local_70 ^ 1;
    local_3e0 = DAT_04141564;
  }
  uVar7 = (uint)uVar11;
  uVar2 = local_70 >> 1;
  local_70 = uVar27;
  if ((uVar2 & 1) != 0) {
    local_3e0 = local_3e0 | DAT_04141568;
    uVar7 = uVar7 ^ 2;
    local_70 = uVar7;
  }
  uVar27 = local_3e0;
  uVar2 = uVar7;
  if ((uVar7 >> 2 & 1) != 0) {
    local_70 = uVar7 ^ 4;
    uVar27 = local_3e0 | DAT_0414156c;
    uVar2 = local_70;
  }
  uVar5 = uVar2;
  if ((uVar7 >> 3 & 1) != 0) {
    uVar27 = uVar27 | DAT_04141570;
    local_70 = uVar2 ^ 8;
    uVar5 = local_70;
  }
  uVar7 = uVar5;
  if ((uVar2 >> 4 & 1) != 0) {
    uVar27 = uVar27 | DAT_04141574;
    local_70 = uVar5 ^ 0x10;
    uVar7 = local_70;
  }
  uVar2 = uVar7;
  if ((uVar5 >> 5 & 1) != 0) {
    uVar27 = uVar27 | DAT_04141578;
    local_70 = uVar7 ^ 0x20;
    uVar2 = local_70;
  }
  uVar5 = uVar2;
  if ((uVar7 >> 6 & 1) != 0) {
    uVar27 = uVar27 | DAT_0414157c;
    local_70 = uVar2 ^ 0x40;
    uVar5 = local_70;
  }
  uVar7 = uVar5;
  if ((uVar2 >> 7 & 1) != 0) {
    uVar27 = uVar27 | DAT_04141580;
    local_70 = uVar5 ^ 0x80;
    uVar7 = local_70;
  }
  if ((uVar5 >> 8 & 1) != 0) {
    uVar27 = uVar27 | DAT_04141584;
    local_70 = uVar7 ^ 0x100;
    uVar7 = local_70;
  }
  local_3e0 = uVar27;
  if (uVar7 != 0) {
    if (DAT_04c70f78 == '\0') goto LAB_0048e01c;
    FUN_00444bc0(auStack_2a0,&DAT_04c70f28,1);
    local_628[0] = FUN_00427270(pbVar22);
    lVar12 = FUN_004446b0(auStack_2a0,"Invalid Opt bits 0x{:x} on content of type \'{}\'.",
                          &DAT_048669e0,&local_70,local_628);
    uVar20 = 0x551;
    goto LAB_0048e010;
  }
  uVar9 = FUN_0046b890(param_1 + 0x7c,uVar27);
  if ((uVar9 & 1) == 0) {
    if (DAT_04c70f78 == '\0') goto LAB_0048e01c;
    FUN_00444bc0(auStack_2a0,&DAT_04c70f28,1);
    local_628[0] = FUN_00427270(pbVar22);
    lVar12 = FUN_004446b0(auStack_2a0,"Forbidden Opt bits 0x{:x} on content of type \'{}\'.",
                          &DAT_048669e0,&local_3e0,local_628);
    uVar20 = 0x554;
    goto LAB_0048e010;
  }
  local_70 = uVar27;
  FUN_00451ea0(auStack_2a0);
  FUN_00452230(auStack_2a0,param_1);
  local_3d8 = auStack_3c8;
  local_348 = auStack_338;
  local_2b8 = auStack_2a8;
  local_2ac = 0x80000002;
  local_3d0 = -0x7fffffe000000000;
  local_340 = -0x7fffffe000000000;
  local_2b0 = 0;
  local_3dc = 0;
  local_3e4 = 0;
  local_3e0 = uVar25;
  if ((local_70 & 1) == 0) {
joined_r0x0048e2b0:
    if ((local_70 >> 1 & 1) == 0) {
joined_r0x0048e444:
      if ((local_70 >> 4 & 1) != 0) {
        local_3f0 = FUN_0048ef90(param_2);
        if ((char)param_2[3] == '\0') {
          if (-1 < *param_1) {
            if (local_3f0 - 0x100000000U < 0xfffffffe00000000) {
              if (DAT_04c70f78 != '\0') {
                FUN_00444bc0(local_628,&DAT_04c70f28,1);
                lVar12 = FUN_004446b0(local_628,"Invalid version number {} for type #{}.",
                                      &DAT_048669f8,&local_3f0,local_6c);
                *(char **)(lVar12 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                *(undefined8 *)(lVar12 + 0x30) = 0x5bf;
                uVar19 = 0xfc913ab0;
                goto LAB_0048e330;
              }
            }
            else {
              if (-1 < (int)local_3f0) {
                local_208 = (long)(int)local_3f0;
                local_230 = local_230 | 0x10;
                goto joined_r0x0048e544;
              }
              if (DAT_04c70f78 != '\0') {
                FUN_00444bc0(local_628,&DAT_04c70f28,1);
                lVar12 = FUN_004446b0(local_628,"Invalid negative version for type #{}.",
                                      &DAT_04853780,local_6c);
                uVar20 = 0x5c1;
                goto LAB_0048ef80;
              }
            }
            goto LAB_0048e33c;
          }
        }
        else {
          *param_1 = -0x7ffbfe00;
        }
        if (DAT_04c70f78 == '\0') goto LAB_0048e844;
        FUN_00444bc0(local_628,&DAT_04c70f28,1);
        lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
        uVar20 = 0x5bc;
        goto LAB_0048e838;
      }
joined_r0x0048e544:
      if ((local_70 >> 0x14 & 1) == 0) {
        if ((local_70 >> 0x15 & 1) == 0) {
LAB_0048ddb0:
          if ((local_70 >> 0x17 & 1) == 0) {
LAB_0048ddb4:
            if ((local_70._1_1_ >> 6 & 1) == 0) {
LAB_0048ddbc:
              if ((local_70._3_1_ >> 1 & 1) == 0) {
                bVar3 = *pbVar22;
joined_r0x0048ddc8:
                if ((((bVar3 >> 3 & 1) != 0) &&
                    (plVar13 = (long *)FUN_00426db0(pbVar22,8), plVar13 != (long *)0x0)) &&
                   (*plVar13 != 0)) {
                  local_230 = local_230 | 8;
                  local_210 = *plVar13;
                }
                if ((((char)pbVar22[1] < '\0') &&
                    (puVar14 = (undefined8 *)FUN_00426db0(pbVar22,0x8000), puVar6 = PTR_DAT_048607b8
                    , puVar14 != (undefined8 *)0x0)) &&
                   ((plVar13 = (long *)*puVar14, plVar13 != (long *)0x0 && ((short)plVar13[1] != 0))
                   )) {
                  local_230 = local_230 | 0x8000;
                  local_1b0 = plVar13;
                  if ((ulong)*(ushort *)(plVar13 + 1) != 0) {
                    lVar12 = (ulong)*(ushort *)(plVar13 + 1) << 4;
                    do {
                      plVar23 = plVar13 + 2;
                      if (*(char *)plVar13[3] == 't') {
                        uVar19 = *(undefined4 *)(*plVar23 + 0x30);
                        if ((uint)local_340 == (local_340._4_4_ & 0x3fffffff)) {
                          FUN_00426990(puVar6,&local_348,4);
                        }
                        *(undefined4 *)(local_348 + (long)(int)(uint)local_340 * 4) = uVar19;
                        local_340 = CONCAT44(local_340._4_4_,(uint)local_340 + 1);
                        *plVar23 = 0;
                      }
                      lVar12 = lVar12 + -0x10;
                      plVar13 = plVar23;
                    } while (lVar12 != 0);
                  }
                }
                if ((local_70._3_1_ >> 4 & 1) != 0) {
                  local_230 = local_230 | 0x10000000;
                  local_148 = 0;
                }
                iVar8 = FUN_004535f0(auStack_2a0,param_1 + 0x2c,param_3);
                if (-1 < iVar8) {
                  if (((*(char *)(*param_3 + 2) < '\0') &&
                      (puVar14 = (undefined8 *)FUN_00426db0(*param_3,0x800000),
                      puVar14 != (undefined8 *)0x0)) &&
                     ((puVar14 = (undefined8 *)*puVar14, puVar14 != (undefined8 *)0x0 &&
                      ((long)*(short *)((long)puVar14 + 4) != 0)))) {
                    lVar12 = (long)*(short *)((long)puVar14 + 4) << 3;
                    do {
                      puVar14 = puVar14 + 1;
                      lVar24 = *param_3;
                      plVar13 = (long *)FUN_00426d40(*puVar14,0x40000);
                      lVar12 = lVar12 + -8;
                      *plVar13 = lVar24;
                    } while (lVar12 != 0);
                  }
                  lVar12 = *param_3;
                  *(long *)(*(long *)(param_1 + 4) + (long)local_6c[0] * 8) = lVar12;
                  lVar24 = *(long *)(param_1 + 4);
                  iVar8 = param_1[0x2a];
                  if (iVar8 != 0) {
                    iVar28 = param_1[6];
                    do {
                      lVar1 = *(long *)(param_1 + 0x28) + (long)iVar8 * 0x10;
                      iVar8 = *(int *)(lVar1 + -8);
                      if ((iVar28 <= iVar8) ||
                         (lVar21 = *(long *)(lVar24 + (long)iVar8 * 8), lVar21 == 0)) break;
                      **(long **)(lVar1 + -0x10) = lVar21;
                      iVar8 = param_1[0x2a] + -1;
                      param_1[0x2a] = iVar8;
                    } while (iVar8 != 0);
                    lVar24 = *(long *)(param_1 + 4);
                  }
                  FUN_00486910(param_1 + 0x28,lVar12,&local_3e0,lVar24,lVar24 + (long)param_1[6] * 8
                               ,*(long *)(param_1 + 0x18),
                               *(long *)(param_1 + 0x18) + (long)param_1[0x1a] * 8);
                  if (*(code **)(param_1 + 0x98) != (code *)0x0) {
                    (**(code **)(param_1 + 0x98))(*param_3);
                  }
                  goto LAB_0048e844;
                }
                if (DAT_04c70f78 != '\0') {
                  FUN_00444bc0(local_628,&DAT_04c70f28,1);
                  lVar12 = FUN_004446b0(local_628,"Failed to allocate type from builder",
                                        &DAT_0413df78);
                  uVar20 = 0x66a;
                  goto LAB_0048ef80;
                }
                goto LAB_0048e33c;
              }
              uVar9 = FUN_0048ef90(param_2);
              if (uVar9 >> 0x1f == 0) {
                if (*(byte *)(param_2 + 3) != 0) goto LAB_0048e7e8;
                if (-1 < *param_1) {
                  if (param_1[0x26] <= (int)uVar9) {
                    if (DAT_04c70f78 != '\0') {
                      FUN_00444bc0(local_628,&DAT_04c70f28,1);
                      local_3f0 = FUN_00427270(pbVar22);
                      lVar12 = FUN_004446b0(local_628,
                                            "Invalid attribute string ID (out of bounds) for type \'{}\'."
                                            ,&DAT_048534d0,&local_3f0);
                      uVar20 = 0x63c;
                      goto LAB_0048ef80;
                    }
                    goto LAB_0048e33c;
                  }
                  local_160 = *(undefined8 *)
                               (*(long *)(param_1 + 0x24) +
                               (-(uVar9 >> 0x1f & 1) & 0xfffffff800000000 |
                               (uVar9 & 0xffffffff) << 3));
                  local_230 = local_230 | 0x2000000;
                  bVar3 = *pbVar22;
                  goto joined_r0x0048ddc8;
                }
              }
              else {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048e7e8:
                *param_1 = -0x7ffbfe00;
              }
              if (DAT_04c70f78 == '\0') goto LAB_0048e844;
              FUN_00444bc0(local_628,&DAT_04c70f28,1);
              lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
              uVar20 = 0x63b;
              goto LAB_0048e838;
            }
            uVar9 = FUN_0048ef90(param_2);
            puVar6 = PTR_DAT_048607b8;
            if (uVar9 >> 0x1f == 0) {
              if (*(byte *)(param_2 + 3) != 0) goto LAB_0048e1b8;
              if (-1 < *param_1) {
                lVar12 = param_2[1] - *param_2;
                if (lVar12 < 0) {
                  lVar12 = lVar12 + 1;
                }
                iVar8 = (int)uVar9;
                if (lVar12 >> 1 < (long)iVar8) {
                  if (DAT_04c70f78 != '\0') {
                    FUN_00444bc0(local_628,&DAT_04c70f28,1);
                    lVar12 = FUN_004446b0(local_628,"Too many fields",&DAT_0413df78);
                    uVar20 = 0x62a;
                    goto LAB_0048ef80;
                  }
                  goto LAB_0048e33c;
                }
                if (0 < iVar8) {
                  iVar28 = 0;
                  do {
                    uVar9 = FUN_0048ef90(param_2);
                    if (uVar9 >> 0x1f != 0) {
                      *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
                    }
                    uVar10 = FUN_0048ef90(param_2);
                    if (uVar10 >> 0x1f != 0) {
                      *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048eed8:
                      *param_1 = -0x7ffbfe00;
LAB_0048eee4:
                      if (DAT_04c70f78 == '\0') goto LAB_0048e844;
                      FUN_00444bc0(local_628,&DAT_04c70f28,1);
                      lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
                      uVar20 = 0x630;
                      goto LAB_0048e838;
                    }
                    if (*(byte *)(param_2 + 3) != 0) goto LAB_0048eed8;
                    if (*param_1 < 0) goto LAB_0048eee4;
                    iVar26 = (int)uVar9;
                    if ((iVar26 < 1) || (param_1[0x1a] <= iVar26)) {
                      if (DAT_04c70f78 == '\0') goto LAB_0048e33c;
                      FUN_00444bc0(local_628,&DAT_04c70f28,1);
                      local_3f0 = FUN_00427270(pbVar22);
                      lVar12 = FUN_004446b0(local_628,
                                            "Invalid interface type ID (out of bounds) for type \'{}\'."
                                            ,&DAT_048534d0,&local_3f0);
                      uVar20 = 0x631;
                      goto LAB_0048ef80;
                    }
                    FUN_004525b0(auStack_2a0,0,uVar10);
                    uVar25 = local_2b0;
                    if (local_2b0 == (local_2ac & 0x3fffffff)) {
                      FUN_00426990(puVar6,&local_2b8,4);
                      uVar25 = local_2b0;
                    }
                    iVar28 = iVar28 + 1;
                    local_2b0 = uVar25 + 1;
                    *(int *)(local_2b8 + (long)(int)uVar25 * 4) = iVar26;
                  } while (iVar28 < iVar8);
                }
                goto LAB_0048ddbc;
              }
            }
            else {
              *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048e1b8:
              *param_1 = -0x7ffbfe00;
            }
            if (DAT_04c70f78 == '\0') goto LAB_0048e844;
            FUN_00444bc0(local_628,&DAT_04c70f28,1);
            lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
            uVar20 = 0x629;
            goto LAB_0048e838;
          }
LAB_0048e6ac:
          uVar9 = FUN_0048ef90(param_2);
          if (uVar9 >> 0x20 == 0) {
            if (*(byte *)(param_2 + 3) != 0) goto LAB_0048e6d0;
            if (-1 < *param_1) {
              lVar24 = param_2[1] - *param_2;
              uVar10 = (ulong)((uint)uVar9 & 0xffff);
              lVar12 = lVar24 + 3;
              if (-1 < lVar24) {
                lVar12 = lVar24;
              }
              if (lVar12 >> 2 < (long)uVar10) {
                if (DAT_04c70f78 != '\0') {
                  FUN_00444bc0(local_628,&DAT_04c70f28,1);
                  lVar12 = FUN_004446b0(local_628,"Too many fields",&DAT_0413df78);
                  uVar20 = 0x5e4;
                  goto LAB_0048ef80;
                }
                goto LAB_0048e33c;
              }
              uVar25 = (uint)uVar9 >> 0x10;
              psVar16 = (short *)FUN_00428650(0,uVar10);
              puVar6 = PTR_DAT_048607b8;
              local_230 = local_230 | 0x800000;
              local_170 = psVar16;
              if ((uVar9 & 0xffff) != 0) {
                uVar9 = 0;
                do {
                  uVar11 = FUN_0048ef90(param_2);
                  if (0xffff < uVar11) {
                    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
                  }
                  uVar27 = (uint)uVar11 & 0xffff;
                  if (param_1[0x22] <= (int)uVar27) {
                    if (DAT_04c70f78 == '\0') goto LAB_0048e33c;
                    FUN_00444bc0(local_628,&DAT_04c70f28,1);
                    lVar12 = FUN_004446b0(local_628,"Invalid field name string ID (out of bounds).",
                                          &DAT_0413df78);
                    uVar20 = 0x5ef;
                    goto LAB_0048ef80;
                  }
                  local_3f0 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)uVar27 * 8);
                  uVar11 = FUN_0048ef90(param_2);
                  if (0xffff < uVar11) {
                    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
                  }
                  if (((uint)uVar11 >> 7 & 1) == 0) {
                    local_640 = 0;
                  }
                  else {
                    uVar11 = (ulong)((uint)uVar11 & 0xffffff7f);
                    *param_4 = 1;
                    local_640 = FUN_0048ef90(param_2);
                  }
                  uVar17 = FUN_0048ef90(param_2);
                  if (0xffff < uVar17) {
                    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
                  }
                  uVar18 = FUN_0048ef90(param_2);
                  if (uVar18 >> 0x1f != 0) {
                    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048edc8:
                    *param_1 = -0x7ffbfe00;
LAB_0048edd4:
                    if (DAT_04c70f78 == '\0') goto LAB_0048e844;
                    FUN_00444bc0(local_628,&DAT_04c70f28,1);
                    lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
                    uVar20 = 0x601;
                    goto LAB_0048e838;
                  }
                  if (*(byte *)(param_2 + 3) != 0) goto LAB_0048edc8;
                  if (*param_1 < 0) goto LAB_0048edd4;
                  iVar8 = (int)uVar18;
                  if ((iVar8 < 1) || (param_1[0x1a] <= iVar8)) {
                    if (DAT_04c70f78 == '\0') goto LAB_0048e33c;
                    FUN_00444bc0(local_628,&DAT_04c70f28,1);
                    local_3f8 = FUN_00427270(pbVar22);
                    lVar12 = FUN_004446b0(local_628,
                                          "Invalid field type ID (out of bounds) for type \'{}\'.",
                                          &DAT_048534d0,&local_3f8);
                    uVar20 = 0x602;
                    goto LAB_0048ef80;
                  }
                  if (((uint)uVar11 & 0x30) != 0x20) {
                    if (DAT_04c70f78 == '\0') goto LAB_0048e33c;
                    FUN_00444bc0(local_628,&DAT_04c70f28,1);
                    local_3f8 = FUN_00427270(pbVar22);
                    lVar12 = FUN_004446b0(local_628,"Invalid flags on {}::{}",&DAT_048648f0,
                                          &local_3f8,&local_3f0);
                    uVar20 = 0x604;
                    goto LAB_0048ef80;
                  }
                  FUN_00451ea0(local_628);
                  FUN_00453b70(local_628,local_3f0,(uint)uVar17 & 0xffff,uVar11 & 0xffff);
                  local_520 = &DAT_04c161d0;
                  uVar11 = local_5b8 | 0x40000;
                  if (local_640 != 0) {
                    local_510 = (ulong)(uint)(local_640 << 0x1c);
                    uVar11 = local_5b8 | 0x140000;
                  }
                  local_5b8 = uVar11;
                  uVar20 = FUN_004535c0(local_628,param_1 + 0x2c);
                  *(undefined8 *)(psVar16 + uVar9 * 4 + 4) = uVar20;
                  if ((uint)local_3d0 == (local_3d0._4_4_ & 0x3fffffff)) {
                    FUN_00426990(puVar6,&local_3d8,4);
                  }
                  *(int *)(local_3d8 + (long)(int)local_3d0 * 4) = iVar8;
                  local_3d0 = CONCAT44(local_3d0._4_4_,(int)local_3d0 + 1);
                  FUN_00451fa0(local_628);
                  uVar9 = uVar9 + 1;
                } while (uVar9 < uVar10);
              }
              if (uVar25 != 0) {
                uVar27 = 0;
                do {
                  FUN_00451ea0(local_628);
                  FUN_00452260(local_628,&DAT_04c161d0);
                  FUN_00453b70(local_628,"$PLACEHOLDER$",0,0x11);
                  local_5b8 = local_5b8 | 0x40000;
                  local_520 = &DAT_04c161d0;
                  sVar4 = *psVar16;
                  uVar20 = FUN_004535c0(local_628,param_1 + 0x2c);
                  *(undefined8 *)(psVar16 + (long)(int)(uVar27 + (int)sVar4) * 4 + 4) = uVar20;
                  FUN_00451fa0(local_628);
                  uVar27 = uVar27 + 1;
                } while (uVar25 != uVar27);
              }
              goto LAB_0048ddb4;
            }
          }
          else {
            *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048e6d0:
            *param_1 = -0x7ffbfe00;
          }
          if (DAT_04c70f78 == '\0') goto LAB_0048e844;
          FUN_00444bc0(local_628,&DAT_04c70f28,1);
          lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
          uVar20 = 0x5df;
          goto LAB_0048e838;
        }
LAB_0048e610:
        uVar9 = FUN_0048ef90(param_2);
        if (uVar9 < 0x10000) {
          if (*(byte *)(param_2 + 3) != 0) goto LAB_0048e634;
          if (-1 < *param_1) {
            local_180 = uVar9 & 0xffff;
            local_230 = local_230 | 0x200000;
            if ((local_70 >> 0x17 & 1) != 0) goto LAB_0048e6ac;
            goto LAB_0048ddb4;
          }
        }
        else {
          *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048e634:
          *param_1 = -0x7ffbfe00;
        }
        if (DAT_04c70f78 == '\0') goto LAB_0048e844;
        FUN_00444bc0(local_628,&DAT_04c70f28,1);
        lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
        uVar20 = 0x5d7;
        goto LAB_0048e838;
      }
      uVar9 = FUN_0048ef90(param_2);
      if (uVar9 >> 0x20 != 0) {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
      }
      uVar10 = FUN_0048ef90(param_2);
      if (uVar10 >> 0x20 == 0) {
        if (*(byte *)(param_2 + 3) != 0) goto LAB_0048e58c;
        if (-1 < *param_1) {
          local_188 = uVar9 & 0xffff | (uVar10 & 0xfff) << 0x10 | (uVar10 >> 0xc & 0xf) << 0x1c;
          local_230 = local_230 | 0x100000;
          if ((local_70 >> 0x15 & 1) != 0) goto LAB_0048e610;
          goto LAB_0048ddb0;
        }
      }
      else {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048e58c:
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_04c70f78 == '\0') goto LAB_0048e844;
      FUN_00444bc0(local_628,&DAT_04c70f28,1);
      lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
      uVar20 = 0x5ca;
    }
    else {
      if (local_3e4 == 0) {
        if (DAT_04c70f78 == '\0') goto LAB_0048e33c;
        FUN_00444bc0(local_628,&DAT_04c70f28,1);
        lVar12 = FUN_004446b0(local_628,
                              "Invalid type #{} with Opt::SUBTYPE optional but no Opt::FORMAT.",
                              &DAT_04853780,local_6c);
        *(char **)(lVar12 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar12 + 0x30) = 0x5a1;
        uVar19 = 0x1aff8e1a;
LAB_0048e330:
        *(undefined4 *)(lVar12 + 0xc) = uVar19;
LAB_0048e334:
        FUN_00444c00(local_628);
LAB_0048e33c:
        *param_1 = -0x7ffbfe00;
        goto LAB_0048e844;
      }
      uVar9 = FUN_0048ef90(param_2);
      if (uVar9 >> 0x1f == 0) {
        if (*(byte *)(param_2 + 3) != 0) goto LAB_0048e350;
        if (-1 < *param_1) {
          iVar8 = (int)uVar9;
          if (-1 < iVar8) {
            local_230 = local_230 | 2;
            if (iVar8 < param_1[0x1a]) {
              local_220 = (undefined1 *)0x0;
              local_3dc = iVar8;
            }
            else {
              local_220 = &DAT_04c161d0;
            }
            goto joined_r0x0048e444;
          }
          if (DAT_04c70f78 == '\0') goto LAB_0048e33c;
          FUN_00444bc0(local_628,&DAT_04c70f28,1);
          local_3f0 = FUN_00427270(pbVar22);
          lVar12 = FUN_004446b0(local_628,"Invalid sub-type ID (out of bounds) for type \'{}\'.",
                                &DAT_048534d0,&local_3f0);
          uVar20 = 0x5a5;
LAB_0048ef80:
          *(char **)(lVar12 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar12 + 0x30) = uVar20;
          goto LAB_0048e334;
        }
      }
      else {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048e350:
        *param_1 = -0x7ffbfe00;
      }
      if (DAT_04c70f78 == '\0') goto LAB_0048e844;
      FUN_00444bc0(local_628,&DAT_04c70f28,1);
      lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
      uVar20 = 0x5a4;
    }
  }
  else {
    uVar9 = FUN_0048ef90(param_2);
    local_3e4 = (uint)uVar9;
    if (uVar9 >> 0x20 == 0) {
      if (*(byte *)(param_2 + 3) != 0) goto LAB_0048e058;
      if (*param_1 < 0) goto LAB_0048e064;
      local_228 = uVar9 & 0xffffffff;
      local_230 = local_230 | 1;
      piVar15 = (int *)&DAT_04c70f08;
      switch(local_3e4 & 0x1f) {
      case 0:
        break;
      case 1:
        piVar15 = (int *)&DAT_04c70f18;
        break;
      case 2:
      case 4:
      case 5:
        lVar12 = FUN_0044f880(local_228);
        if (lVar12 != 0) {
          piVar15 = (int *)FUN_00428370();
          break;
        }
        if (DAT_04c70f78 == '\0') goto LAB_0048e33c;
        FUN_00444bc0(local_628,&DAT_04c70f28,1);
        local_3f0 = FUN_00427270(pbVar22);
        lVar12 = FUN_004446b0(local_628,
                              "Cannot find a built-in type corresponding to format 0x{:x8} of type \'{}\' (invalid format?)."
                              ,&DAT_048669e0,&local_3e4,&local_3f0);
        *(char **)(lVar12 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar12 + 0x30) = 0x584;
        uVar19 = 0x775182a1;
        goto LAB_0048e330;
      case 3:
        piVar15 = param_1 + 0x6c;
        break;
      case 6:
        piVar15 = param_1 + 0x60;
        break;
      case 7:
        piVar15 = (int *)&DAT_04c70240;
        break;
      case 8:
        piVar15 = param_1 + 0x66;
        break;
      default:
        if (DAT_04c70f78 != '\0') {
          FUN_00444bc0(local_628,&DAT_04c70f28,1);
          local_3f8 = CONCAT44(local_3f8._4_4_,local_3e4) & 0xffffffff0000001f;
          local_3f0 = FUN_00427270(pbVar22);
          lVar12 = FUN_004446b0(local_628,"Unknown format kind 0x{:x8} for type \'{}\'.",
                                &DAT_048669e0,&local_3f8,&local_3f0);
          uVar20 = 0x59a;
          goto LAB_0048ef80;
        }
        goto LAB_0048e33c;
      }
      local_230 = local_230 | 4;
      local_218 = piVar15;
      goto joined_r0x0048e2b0;
    }
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0048e058:
    *param_1 = -0x7ffbfe00;
LAB_0048e064:
    if (DAT_04c70f78 == '\0') goto LAB_0048e844;
    FUN_00444bc0(local_628,&DAT_04c70f28,1);
    lVar12 = FUN_004446b0(local_628,"Error in input stream.",&DAT_0413df78);
    uVar20 = 0x569;
  }
LAB_0048e838:
  *(char **)(lVar12 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar12 + 0x30) = uVar20;
  FUN_00444c00(local_628);
LAB_0048e844:
  puVar6 = PTR_DAT_048607b8;
  local_2b0 = 0;
  if ((-1 < (int)local_2ac) && (local_2b8 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_2b8,4,local_2ac & 0x3fffffff);
  }
  lVar12 = local_340;
  uVar25 = local_340._4_4_;
  local_2b8 = (undefined1 *)0x0;
  local_2ac = 0x80000000;
  local_340 = (ulong)local_340._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_348 != (undefined1 *)0x0)) {
    FUN_00421f90(puVar6,local_348,4,uVar25 & 0x3fffffff);
  }
  lVar12 = local_3d0;
  uVar25 = local_3d0._4_4_;
  local_348 = (undefined1 *)0x0;
  local_340 = CONCAT44(0x80000000,(uint)local_340);
  local_3d0 = (ulong)local_3d0._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_3d8 != (undefined1 *)0x0)) {
    FUN_00421f90(puVar6,local_3d8,4,uVar25 & 0x3fffffff);
  }
  FUN_00451fa0(auStack_2a0);
  return;
}

