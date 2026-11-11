
void FUN_00491fa0(int *param_1,long *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  ulong *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 local_c0;
  byte *local_b8;
  ulong local_b0;
  uint local_a8;
  uint local_a4;
  undefined1 auStack_a0 [64];
  
  iVar15 = param_1[0x1a];
  lVar16 = (long)iVar15;
  uVar4 = FUN_0048ef90(param_2);
  if (uVar4 >> 0x1f == 0) {
    if (*(byte *)(param_2 + 3) != 0) goto LAB_00491ff4;
    if (-1 < *param_1) {
      iVar12 = (int)uVar4;
      if (iVar12 < iVar15) {
        if (DAT_04c70f78 == '\0') goto LAB_004920d4;
        FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
        lVar16 = FUN_004446b0(auStack_a0,"Cannot remove types.",&DAT_0413df78);
        uVar11 = 0x81e;
      }
      else {
        if (iVar15 == iVar12) {
          return;
        }
        iVar14 = iVar12 - iVar15;
        if ((long)iVar14 <= param_2[1] - *param_2) {
          if ((int)(param_1[0x1b] & 0x3fffffffU) < iVar12) {
            uVar11 = FUN_00426720(PTR_DAT_048607b8,uVar4 & 0xffffffff,8,
                                  *(undefined8 *)(param_1 + 0x18),param_1[0x1a]);
            *(undefined8 *)(param_1 + 0x18) = uVar11;
          }
          uVar6 = param_1[0x1a];
          if ((int)uVar6 < iVar12) {
            param_1[0x1a] = iVar12;
            memset((void *)(*(long *)(param_1 + 0x18) + (long)(int)uVar6 * 8),0,
                   (ulong)(~uVar6 + iVar12) * 8 + 8);
            iVar2 = param_1[0x4e];
          }
          else {
            if (iVar12 < (int)uVar6) {
              param_1[0x1a] = iVar12;
            }
            iVar2 = param_1[0x4e];
          }
          if ((iVar2 == 2) && ((int)(param_1[0x53] & 0x3fffffffU) < iVar12)) {
            uVar11 = FUN_004267f0(PTR_DAT_048607b8,uVar4 & 0xffffffff,0x18,
                                  *(undefined8 *)(param_1 + 0x50),param_1[0x52],param_1 + 0x53);
            *(undefined8 *)(param_1 + 0x50) = uVar11;
          }
          puVar5 = (undefined8 *)FUN_00422030(param_1 + 0x2c,0x38,iVar14);
          if (iVar15 < iVar12) {
            lVar9 = lVar16;
            do {
              puVar5[4] = 0;
              puVar5[5] = 0;
              *(int *)(puVar5 + 6) = (int)lVar9;
              puVar5[2] = 1;
              puVar5[3] = 0;
              *puVar5 = &DAT_00100001;
              puVar5[1] = 0;
              *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar9 * 8) = puVar5;
              lVar9 = lVar9 + 1;
              puVar5 = puVar5 + 7;
            } while (iVar12 != lVar9);
          }
          param_1[0x7a] = param_1[0x7a] + iVar14;
          if (param_3 != 0) {
LAB_00492278:
            puVar3 = PTR_DAT_048607b8;
            if (iVar12 <= iVar15) {
              return;
            }
            do {
              puVar13 = *(ulong **)(*(long *)(param_1 + 0x18) + lVar16 * 8);
              uVar4 = FUN_0048ef90(param_2);
              local_a4 = (uint)uVar4;
              if (uVar4 >> 0x1f != 0) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_00492770:
                *param_1 = -0x7ffbfe00;
LAB_0049277c:
                if (DAT_04c70f78 == '\0') {
                  return;
                }
                FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                lVar16 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
                uVar11 = 0x854;
                goto LAB_00492044;
              }
              if (*(byte *)(param_2 + 3) != 0) goto LAB_00492770;
              if (*param_1 < 0) goto LAB_0049277c;
              if (param_1[0x4e] == 2) {
                uVar6 = param_1[0x52];
                if (uVar6 == (param_1[0x53] & 0x3fffffffU)) {
                  FUN_00426990(puVar3,param_1 + 0x50,0x18);
                  uVar6 = param_1[0x52];
                  uVar4 = (ulong)local_a4;
                }
                puVar7 = (undefined4 *)(*(long *)(param_1 + 0x50) + (long)(int)uVar6 * 0x18);
                *puVar7 = (int)uVar4;
                puVar7[1] = 1;
                *(undefined8 *)(puVar7 + 2) = 0;
                *(undefined8 *)(puVar7 + 4) = 0x8000000000000000;
                param_1[0x52] = uVar6 + 1;
                uVar4 = (ulong)local_a4;
                if (local_a4 != 0xffffffff) goto LAB_00492328;
              }
              else {
LAB_00492328:
                if (param_1[0x1e] <= (int)uVar4) {
                  if (DAT_04c70f78 == '\0') goto LAB_004920d4;
                  FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                  lVar16 = FUN_004446b0(auStack_a0,
                                        "Invalid type name string ID #{} (out of bounds).",
                                        &DAT_04853780,&local_a4);
                  uVar11 = 0x862;
                  goto LAB_004920c8;
                }
                pcVar8 = *(char **)(*(long *)(param_1 + 0x1c) + (long)(int)uVar4 * 8);
                if (*pcVar8 != '\0') {
                  *puVar13 = *puVar13 | 8;
                  puVar13[3] = (ulong)pcVar8;
                }
              }
              uVar4 = FUN_0048ef90(param_2);
              if (uVar4 >> 0x1f != 0) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_00492888:
                *param_1 = -0x7ffbfe00;
LAB_00492894:
                if (DAT_04c70f78 == '\0') {
                  return;
                }
                FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                lVar16 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
                uVar11 = 0x86d;
                goto LAB_00492044;
              }
              if (*(byte *)(param_2 + 3) != 0) goto LAB_00492888;
              if (*param_1 < 0) goto LAB_00492894;
              iVar15 = (int)uVar4;
              if (0 < iVar15) {
                lVar9 = param_2[1] - *param_2;
                if (lVar9 < 0) {
                  lVar9 = lVar9 + 1;
                }
                if (lVar9 >> 1 < (long)iVar15) {
                  if (DAT_04c70f78 == '\0') goto LAB_004920d4;
                  FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                  lVar16 = FUN_004446b0(auStack_a0,"Invalid template",&DAT_0413df78);
                  uVar11 = 0x870;
                  goto LAB_004920c8;
                }
                puVar5 = (undefined8 *)
                         (**(code **)(*(long *)(param_1 + 0x2c) + 0x10))
                                   (param_1 + 0x2c,(uVar4 & 0xffffffff) * 0x10 + 0x10,0);
                *puVar5 = 0;
                puVar5[1] = (long)iVar15;
                *puVar13 = *puVar13 | 0x8000;
                puVar13[4] = (ulong)puVar5;
                if (param_1[0x4e] == 2) {
                  if ((int)(*(uint *)(*(long *)(param_1 + 0x50) + ((long)param_1[0x52] + -1) * 0x18
                                     + 0x14) & 0x3fffffff) < iVar15) {
                    lVar9 = *(long *)(param_1 + 0x50) + ((long)param_1[0x52] + -1) * 0x18;
                    uVar11 = FUN_004267f0(puVar3,uVar4 & 0xffffffff,0x10,*(undefined8 *)(lVar9 + 8),
                                          *(undefined4 *)(lVar9 + 0x10));
                    *(undefined8 *)(lVar9 + 8) = uVar11;
                  }
                }
                lVar9 = puVar5[1] << 4;
                if (lVar9 != 0) {
                  puVar5 = puVar5 + 3;
                  do {
                    uVar4 = FUN_0048ef90(param_2);
                    if (uVar4 >> 0x1f != 0) {
                      *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
                    }
                    local_a8 = (uint)uVar4;
                    local_b0 = FUN_0048ef90(param_2);
                    if ((char)param_2[3] != '\0') {
                      *param_1 = -0x7ffbfe00;
LAB_0049271c:
                      if (DAT_04c70f78 == '\0') {
                        return;
                      }
                      FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                      lVar16 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
                      uVar11 = 0x881;
                      goto LAB_00492044;
                    }
                    if (*param_1 < 0) goto LAB_0049271c;
                    if (param_1[0x4e] == 2) {
                      lVar10 = *(long *)(param_1 + 0x50) + (long)param_1[0x52] * 0x18;
                      iVar15 = *(int *)(lVar10 + -8);
                      plVar1 = (long *)(*(long *)(lVar10 + -0x10) + (long)iVar15 * 0x10);
                      *plVar1 = (long)(int)(uint)uVar4;
                      plVar1[1] = local_b0;
                      *(int *)(lVar10 + -8) = iVar15 + 1;
                      uVar4 = (ulong)local_a8;
                    }
                    iVar15 = (int)uVar4;
                    local_b8 = *(byte **)(*(long *)(param_1 + 0x1c) + (long)iVar15 * 8);
                    if ((iVar15 < 0) || (param_1[0x1e] <= iVar15)) {
                      if (DAT_04c70f78 == '\0') goto LAB_004920d4;
                      FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                      local_c0 = FUN_00427270(puVar13);
                      lVar16 = FUN_004446b0(auStack_a0,
                                            "Invalid template parameter name string ID #{} (out of bounds) for type \'{}\'."
                                            ,&DAT_04866960,&local_a8,&local_c0);
                      uVar11 = 0x88c;
                      goto LAB_004920c8;
                    }
                    if ((*local_b8 == 0) || (local_b8[1] == 0)) {
                      if (DAT_04c70f78 == '\0') goto LAB_004920d4;
                      FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                      local_c0 = FUN_00427270(puVar13);
                      lVar16 = FUN_004446b0(auStack_a0,
                                            "Invalid template parameter string ID #{} with empty name for type \'{}\': \'{}\'."
                                            ,&DAT_04866978,&local_a8,&local_c0,&local_b8);
                      uVar11 = 0x88f;
                      goto LAB_004920c8;
                    }
                    if ((*local_b8 | 2) != 0x76) {
                      if (DAT_04c70f78 == '\0') goto LAB_004920d4;
                      FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                      local_c0 = FUN_00427270(puVar13);
                      lVar16 = FUN_004446b0(auStack_a0,
                                            "Invalid template parameter name \'{}\' for type \'{}\' (expected \'t\' for type, \'v\' for value; found \'{}\' instead)."
                                            ,PTR_DAT_04bd5e40,&local_b8,&local_c0,local_b8);
                      uVar11 = 0x893;
                      goto LAB_004920c8;
                    }
                    *puVar5 = local_b8;
                    uVar4 = local_b0;
                    if (*local_b8 == 0x74) {
                      if ((local_b0 == 0) || ((ulong)(long)param_1[0x1a] <= local_b0)) {
                        if (DAT_04c70f78 == '\0') goto LAB_004920d4;
                        FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                        local_c0 = FUN_00427270(puVar13);
                        lVar16 = FUN_004446b0(auStack_a0,
                                              "Invalid template type ID #{} (out of bounds) for type \'{}\'."
                                              ,&DAT_048669b8,&local_b0,&local_c0);
                        uVar11 = 0x89b;
                        goto LAB_004920c8;
                      }
                      uVar4 = *(ulong *)(*(long *)(param_1 + 0x18) +
                                        (-(local_b0 >> 0x1f & 1) & 0xfffffff800000000 |
                                        (local_b0 & 0xffffffff) << 3));
                    }
                    puVar5[-1] = uVar4;
                    puVar5 = puVar5 + 2;
                    lVar9 = lVar9 + -0x10;
                  } while (lVar9 != 0);
                }
              }
              lVar16 = lVar16 + 1;
              if (iVar12 <= lVar16) {
                return;
              }
            } while( true );
          }
          if (1 < iVar15) {
            iVar14 = 1;
            do {
              FUN_0048ef90(param_2);
              uVar4 = FUN_0048ef90(param_2);
              if (uVar4 >> 0x1f != 0) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_00492600:
                *param_1 = -0x7ffbfe00;
LAB_0049260c:
                if (DAT_04c70f78 == '\0') {
                  return;
                }
                FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
                lVar16 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
                uVar11 = 0x843;
                goto LAB_00492044;
              }
              if (*(byte *)(param_2 + 3) != 0) goto LAB_00492600;
              if (*param_1 < 0) goto LAB_0049260c;
              if (0 < (int)uVar4) {
                do {
                  FUN_0048ef90(param_2);
                  FUN_0048ef90(param_2);
                  uVar6 = (int)uVar4 - 1;
                  uVar4 = (ulong)uVar6;
                } while (uVar6 != 0);
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar15);
          }
          if ((char)param_2[3] == '\0') {
            if (-1 < *param_1) goto LAB_00492278;
          }
          else {
            *param_1 = -0x7ffbfe00;
          }
          if (DAT_04c70f78 == '\0') {
            return;
          }
          FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
          lVar16 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
          uVar11 = 0x84a;
          goto LAB_00492044;
        }
        if (DAT_04c70f78 == '\0') goto LAB_004920d4;
        FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
        lVar16 = FUN_004446b0(auStack_a0,"More types than would fit in the section",&DAT_0413df78);
        uVar11 = 0x825;
      }
LAB_004920c8:
      *(char **)(lVar16 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar16 + 0x30) = uVar11;
      FUN_00444c00(auStack_a0);
LAB_004920d4:
      *param_1 = -0x7ffbfe00;
      return;
    }
  }
  else {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_00491ff4:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04c70f78 == '\0') {
    return;
  }
  FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
  lVar16 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
  uVar11 = 0x81b;
LAB_00492044:
  *(char **)(lVar16 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar16 + 0x30) = uVar11;
  FUN_00444c00(auStack_a0);
  return;
}

