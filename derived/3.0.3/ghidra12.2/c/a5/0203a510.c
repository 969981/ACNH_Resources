
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0203a510(undefined8 param_1,uint *param_2,long *param_3,long *param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ushort *puVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort uVar9;
  byte bVar10;
  undefined8 **ppuVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  char *pcVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined4 *puVar25;
  int iVar26;
  ulong uVar27;
  undefined1 *puVar28;
  undefined *local_210;
  undefined1 *puStack_208;
  int local_200;
  undefined1 auStack_1fc [7];
  undefined1 local_1f5;
  undefined *local_1f0;
  undefined1 *puStack_1e8;
  int local_1e0;
  undefined1 auStack_1dc [7];
  undefined1 local_1d5;
  undefined *local_1d0;
  undefined1 *puStack_1c8;
  int local_1c0;
  undefined1 auStack_1bc [7];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  int local_1a0;
  undefined1 auStack_19c [7];
  undefined1 local_195;
  undefined *local_190;
  undefined1 *puStack_188;
  int local_180;
  undefined1 auStack_17c [7];
  undefined1 local_175;
  undefined *local_170;
  undefined1 *puStack_168;
  int local_160;
  undefined1 auStack_15c [7];
  undefined1 local_155;
  undefined4 local_14c;
  undefined *local_148;
  char *pcStack_140;
  undefined *local_138;
  char *pcStack_130;
  undefined *local_c8;
  char *pcStack_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 **local_a8;
  undefined8 **ppuStack_a0;
  undefined8 *local_98;
  undefined8 local_90;
  char acStack_88 [16];
  int local_78 [2];
  ushort local_70;
  undefined1 local_6e;
  ushort local_6c;
  undefined1 local_6a;
  
  bVar10 = DAT_0545a5e4;
  iVar14 = *(int *)PTR_DAT_04bc20e0;
  local_138 = (undefined *)CONCAT44(local_138._4_4_,iVar14);
  local_6a = PTR_DAT_04bb9cf0[2];
  local_6e = PTR_DAT_04bb9cf0[2];
  local_6c = *(ushort *)PTR_DAT_04bb9cf0;
  local_70 = *(ushort *)PTR_DAT_04bb9cf0;
  if (iVar14 == 4 && 1 < (int)*param_2) {
    puVar22 = *(undefined8 **)(*(long *)(param_2 + 2) + 8);
    *puVar22 = *(undefined8 *)(param_2 + 4);
    *(undefined8 **)(param_2 + 4) = puVar22;
    uVar15 = *param_2 - 2;
    if (1 < (int)*param_2) {
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      else {
        memmove((void *)(*(long *)(param_2 + 2) + 8),(void *)(*(long *)(param_2 + 2) + 0x10),
                (ulong)uVar15 << 3);
        uVar15 = *param_2 - 1;
      }
      *param_2 = uVar15;
    }
  }
  if ((bVar10 >> 1 & 1) == 0) {
    iVar26 = 0;
  }
  else {
    local_78[0] = (uint)(param_5 != 0) << 1;
    local_78[1] = (uint)(param_5 != 0) << 1 | 1;
    if ((DAT_0545a5e4 >> 1 & 1) != 0) {
      local_6c = _DAT_0545a400;
      local_6a = FUN_020fd7d8(&DAT_0545a400);
      local_70 = _DAT_0545a403;
      local_6e = FUN_020fd7d8(&DAT_0545a403);
    }
    local_b8 = (undefined *)0x0;
    local_b0 = (char *)0x0;
    local_a8 = &local_98;
    local_98 = &local_90;
    local_90 = 0;
    if (acStack_88 != (char *)0x0) {
      local_b8 = (undefined *)0x200000000;
      local_b0 = acStack_88;
    }
    ppuStack_a0 = local_a8;
    if (*param_2 != 0) {
      puVar22 = *(undefined8 **)(param_2 + 2);
      lVar17 = 0;
      puVar23 = puVar22 + (int)*param_2;
      pcVar19 = "AI_NPC_Wherearen";
      if (iVar14 != 10) {
        pcVar19 = "AI_NPC_Wherearen_KKFesDemoLive";
      }
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      puVar3 = PTR_DAT_04bb6a30 + 0x10;
      puVar4 = PTR_DAT_04bb3768 + 0x10;
      do {
        ppuVar11 = local_a8;
        puVar25 = (undefined4 *)*puVar22;
        if (*(char *)(puVar25 + 4) != '\0') {
          if (local_78[lVar17] == param_5) {
            if (0 < (int)*param_2) {
              uVar27 = 0;
              do {
                if (*(undefined4 **)(*(long *)(param_2 + 2) + uVar27 * 8) == puVar25)
                goto LAB_0203a74c;
                uVar27 = uVar27 + 1;
              } while (*param_2 != uVar27);
            }
            uVar27 = 0xffffffff;
LAB_0203a74c:
            if ((int)local_b8 < local_b8._4_4_) {
              if (local_a8 != (undefined8 **)0x0) {
                local_a8 = (undefined8 **)*local_a8;
              }
              *(int *)ppuVar11 = (int)uVar27;
              if ((int)local_b8 < local_b8._4_4_) {
                *(undefined8 ***)(local_b0 + (long)(int)local_b8 * 8) = ppuVar11;
                local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(int)local_b8 + 1);
              }
            }
            puVar6 = &local_6c;
            if (lVar17 != 0) {
              puVar6 = &local_70;
            }
            pcStack_140 = "WherearenMainField";
            uVar7 = *puVar25;
            uVar20 = 6;
            if (lVar17 != 0) {
              uVar20 = 7;
            }
            local_155 = 0;
            local_160 = 8;
            local_170 = puVar3;
            puStack_168 = auStack_15c;
            local_14c = uVar7;
            local_148 = puVar2;
            local_c8 = puVar2;
            pcStack_c0 = pcVar19;
            (**(code **)(*param_3 + 0x18))(param_3);
            puVar28 = (undefined1 *)param_3[1];
            if (auStack_15c != puVar28) {
              (**(code **)(*param_3 + 0x18))(param_3);
              lVar16 = 0;
              do {
                if (*(char *)(param_3[1] + lVar16) == '\0') goto LAB_0203a874;
                lVar5 = param_3[1] + lVar16;
                if (*(char *)(lVar5 + 1) == '\0') {
                  lVar16 = lVar16 + 1;
                  goto LAB_0203a874;
                }
                if (*(char *)(lVar5 + 2) == '\0') {
                  lVar16 = lVar16 + 2;
                  goto LAB_0203a874;
                }
                lVar16 = lVar16 + 3;
              } while (lVar16 != 0x80001);
              lVar16 = 0;
LAB_0203a874:
              iVar26 = (int)lVar16;
              if (local_160 <= (int)lVar16) {
                iVar26 = local_160 + -1;
              }
              memcpy(auStack_15c,puVar28,(long)iVar26);
              auStack_15c[iVar26] = 0;
            }
            local_175 = 0;
            local_180 = 8;
            local_190 = PTR_DAT_04bb6a30 + 0x10;
            puStack_188 = auStack_17c;
            local_170 = puVar4;
            (**(code **)(*param_4 + 0x18))(param_4);
            puVar28 = (undefined1 *)param_4[1];
            if (auStack_17c != puVar28) {
              (**(code **)(*param_4 + 0x18))(param_4);
              lVar16 = 0;
              do {
                if (*(char *)(param_4[1] + lVar16) == '\0') goto LAB_0203a944;
                lVar5 = param_4[1] + lVar16;
                if (*(char *)(lVar5 + 1) == '\0') {
                  lVar16 = lVar16 + 1;
                  goto LAB_0203a944;
                }
                if (*(char *)(lVar5 + 2) == '\0') {
                  lVar16 = lVar16 + 2;
                  goto LAB_0203a944;
                }
                lVar16 = lVar16 + 3;
              } while (lVar16 != 0x80001);
              lVar16 = 0;
LAB_0203a944:
              iVar26 = (int)lVar16;
              if (local_180 <= (int)lVar16) {
                iVar26 = local_180 + -1;
              }
              memcpy(auStack_17c,puVar28,(long)iVar26);
              auStack_17c[iVar26] = 0;
            }
            local_190 = PTR_DAT_04bb3768 + 0x10;
            FUN_0203b0e0(&local_138,puVar25 + 1,puVar6,&local_148,&local_c8,uVar20,0,uVar7,
                         &local_170,&local_190);
            FUN_02039990(param_1,&local_138);
            if (lVar17 == 1) break;
            lVar17 = 1;
          }
          param_5 = param_5 + 1;
        }
        puVar22 = puVar22 + 1;
      } while (puVar22 != puVar23);
      if ((int)local_b8 != 0) {
        pcVar19 = local_b0 + (long)((int)local_b8 + -1) * 8;
        do {
          uVar15 = **(uint **)pcVar19;
          lVar17 = (long)(int)uVar15;
          if ((int)uVar15 < (int)*param_2) {
            lVar16 = lVar17 + 1;
            puVar22 = *(undefined8 **)(param_2 + 4);
            do {
              puVar23 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar17 * 8);
              lVar17 = lVar17 + 1;
              *puVar23 = puVar22;
              *(undefined8 **)(param_2 + 4) = puVar23;
              puVar22 = puVar23;
            } while (lVar17 < lVar16);
          }
          if ((-1 < (int)uVar15) && (uVar21 = *param_2, (int)uVar15 < (int)uVar21)) {
            uVar1 = uVar15 + 1;
            uVar8 = uVar21 - uVar1;
            if (uVar8 != 0 && (int)uVar1 <= (int)uVar21) {
              memmove((void *)(*(long *)(param_2 + 2) + (ulong)uVar15 * 8),
                      (void *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 8),
                      -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3);
              uVar21 = *param_2;
            }
            *param_2 = uVar21 - 1;
          }
          bVar12 = pcVar19 != local_b0;
          pcVar19 = pcVar19 + -8;
        } while (bVar12);
      }
    }
    iVar26 = 2;
  }
  iVar24 = 0;
  puVar22 = *(undefined8 **)(param_2 + 2);
  pcVar19 = "AI_NPC_Wherearen";
  if (iVar14 != 10) {
    pcVar19 = "AI_NPC_Wherearen_KKFesDemoLive";
  }
  puVar23 = puVar22 + (int)*param_2;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bb6a30 + 0x10;
  puVar4 = PTR_DAT_04bb3768 + 0x10;
  do {
    if (((bVar10 >> 1 & 1) == 0) ||
       ((uVar9 = CONCAT11((&DAT_0545a400)[(long)iVar24 + (long)iVar24 * 2],
                          (&DAT_0545a401)[(long)iVar24 * 3]),
        uVar9 != (ushort)(local_6c >> 8 | local_6c << 8) &&
        (uVar9 != (ushort)(local_70 >> 8 | local_70 << 8))))) {
      puVar18 = puVar23;
      if (puVar22 != puVar23) {
        puVar25 = (undefined4 *)*puVar22;
        uVar20 = *puVar25;
        local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar20);
        pcStack_c0 = "WherearenMainField";
        local_1a0 = 8;
        local_195 = 0;
        local_1b0 = puVar3;
        puStack_1a8 = auStack_19c;
        local_c8 = puVar2;
        local_b8 = puVar2;
        local_b0 = pcVar19;
        (**(code **)(*param_3 + 0x18))(param_3);
        puVar28 = (undefined1 *)param_3[1];
        if (auStack_19c != puVar28) {
          (**(code **)(*param_3 + 0x18))(param_3);
          lVar17 = 0;
          do {
            if (*(char *)(param_3[1] + lVar17) == '\0') goto LAB_0203acc4;
            lVar16 = param_3[1] + lVar17;
            if (*(char *)(lVar16 + 1) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_0203acc4;
            }
            if (*(char *)(lVar16 + 2) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_0203acc4;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_0203acc4:
          iVar13 = (int)lVar17;
          if (local_1a0 <= (int)lVar17) {
            iVar13 = local_1a0 + -1;
          }
          memcpy(auStack_19c,puVar28,(long)iVar13);
          auStack_19c[iVar13] = 0;
        }
        local_1b5 = 0;
        local_1c0 = 8;
        local_1d0 = PTR_DAT_04bb6a30 + 0x10;
        puStack_1c8 = auStack_1bc;
        local_1b0 = puVar4;
        (**(code **)(*param_4 + 0x18))(param_4);
        puVar28 = (undefined1 *)param_4[1];
        if (auStack_1bc != puVar28) {
          (**(code **)(*param_4 + 0x18))(param_4);
          lVar17 = 0;
          do {
            if (*(char *)(param_4[1] + lVar17) == '\0') goto LAB_0203ab10;
            lVar16 = param_4[1] + lVar17;
            if (*(char *)(lVar16 + 1) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_0203ab10;
            }
            if (*(char *)(lVar16 + 2) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_0203ab10;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_0203ab10:
          iVar13 = (int)lVar17;
          if (local_1c0 <= (int)lVar17) {
            iVar13 = local_1c0 + -1;
          }
          memcpy(auStack_1bc,puVar28,(long)iVar13);
          auStack_1bc[iVar13] = 0;
        }
        local_1d0 = PTR_DAT_04bb3768 + 0x10;
        FUN_0203b0e0(&local_138,puVar25 + 1,&DAT_0545a400 + (long)iVar24 + (long)iVar24 * 2,
                     &local_c8,&local_b8,iVar26 + 6,0,uVar20,&local_1b0,&local_1d0);
        FUN_02039990(param_1,&local_138);
        puVar18 = puVar22 + 1;
      }
      iVar26 = iVar26 + 1;
      puVar22 = puVar18;
    }
    iVar24 = iVar24 + 1;
  } while (iVar24 != 9);
  iVar26 = 0;
  iVar24 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bb6a30 + 0x10;
  puVar4 = PTR_DAT_04bb3768 + 0x10;
  do {
    puVar18 = puVar23;
    if (puVar22 != puVar23) {
      puVar25 = (undefined4 *)*puVar22;
      local_148 = (undefined *)CONCAT44(local_148._4_4_,*puVar25);
      local_b0 = PTR_DAT_04bb2120;
      pcVar19 = "AI_NPC_Wherearen_KKFesDemoLive";
      local_b8 = puVar2;
      if (iVar14 == 10) {
        local_138 = PTR_DAT_04bb2020 + 0x10;
        pcStack_130 = "IsBuiltAllNpcHouse";
        iVar13 = FUN_02758850(&local_138);
        pcVar19 = "AI_NPC_WherearenVisitor";
        if (iVar13 != 0) {
          pcVar19 = "AI_NPC_Wherearen";
        }
      }
      local_c8 = PTR_DAT_04bb2020 + 0x10;
      pcStack_c0 = "WherearenVisitor";
      uVar27 = (ulong)local_148 & 0xffffffff;
      local_1e0 = 8;
      local_1d5 = 0;
      local_1f0 = puVar3;
      puStack_1e8 = auStack_1dc;
      local_b0 = pcVar19;
      (**(code **)(*param_3 + 0x18))(param_3);
      puVar28 = (undefined1 *)param_3[1];
      if (auStack_1dc != puVar28) {
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar17 = 0;
        do {
          if (*(char *)(param_3[1] + lVar17) == '\0') goto LAB_0203afbc;
          lVar16 = param_3[1] + lVar17;
          if (*(char *)(lVar16 + 1) == '\0') {
            lVar17 = lVar17 + 1;
            goto LAB_0203afbc;
          }
          if (*(char *)(lVar16 + 2) == '\0') {
            lVar17 = lVar17 + 2;
            goto LAB_0203afbc;
          }
          lVar17 = lVar17 + 3;
        } while (lVar17 != 0x80001);
        lVar17 = 0;
LAB_0203afbc:
        iVar13 = (int)lVar17;
        if (local_1e0 <= (int)lVar17) {
          iVar13 = local_1e0 + -1;
        }
        memcpy(auStack_1dc,puVar28,(long)iVar13);
        auStack_1dc[iVar13] = 0;
      }
      local_1f5 = 0;
      local_200 = 8;
      local_210 = PTR_DAT_04bb6a30 + 0x10;
      puStack_208 = auStack_1fc;
      local_1f0 = puVar4;
      (**(code **)(*param_4 + 0x18))(param_4);
      puVar28 = (undefined1 *)param_4[1];
      if (auStack_1fc != puVar28) {
        (**(code **)(*param_4 + 0x18))(param_4);
        lVar17 = 0;
        do {
          if (*(char *)(param_4[1] + lVar17) == '\0') goto LAB_0203ade8;
          lVar16 = param_4[1] + lVar17;
          if (*(char *)(lVar16 + 1) == '\0') {
            lVar17 = lVar17 + 1;
            goto LAB_0203ade8;
          }
          if (*(char *)(lVar16 + 2) == '\0') {
            lVar17 = lVar17 + 2;
            goto LAB_0203ade8;
          }
          lVar17 = lVar17 + 3;
        } while (lVar17 != 0x80001);
        lVar17 = 0;
LAB_0203ade8:
        iVar13 = (int)lVar17;
        if (local_200 <= (int)lVar17) {
          iVar13 = local_200 + -1;
        }
        memcpy(auStack_1fc,puVar28,(long)iVar13);
        auStack_1fc[iVar13] = 0;
      }
      local_210 = PTR_DAT_04bb3768 + 0x10;
      FUN_0203b0e0(&local_138,puVar25 + 1,&DAT_0545a41b + (long)iVar24 + (long)iVar24 * 2,&local_c8,
                   &local_b8,iVar26,1,uVar27,&local_1f0,&local_210);
      FUN_02039990(param_1,&local_138);
      puVar18 = puVar22 + 1;
    }
    iVar26 = iVar26 + 1;
    iVar24 = iVar24 + 1;
    puVar22 = puVar18;
    if (iVar26 == 6) {
      FUN_0252d11c(&local_b8);
      local_138 = PTR_DAT_04bb2020 + 0x10;
      pcStack_130 = "WHEREAREN_ChocolateDemoReserve";
      iVar14 = FUN_02753180(&local_b8,&local_138);
      if (iVar14 != 0) {
        FUN_02038f10(param_1);
      }
      return;
    }
  } while( true );
}

