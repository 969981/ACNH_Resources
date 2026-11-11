
/* WARNING: Removing unreachable block (ram,0x0046bcc0) */
/* WARNING: Removing unreachable block (ram,0x0046cec0) */
/* WARNING: Type propagation algorithm not settling */

int FUN_0046ba20(long *param_1,ulong *param_2,ulong *param_3,byte **param_4)

{
  byte *pbVar1;
  long *plVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  uint *puVar16;
  ulong *puVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  long lVar22;
  char *__s2;
  long extraout_x1;
  code *pcVar23;
  undefined8 uVar24;
  char *pcVar25;
  uint uVar26;
  ulong uVar27;
  ulong *puVar28;
  byte *pbVar29;
  undefined *puVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong uVar33;
  undefined1 auVar34 [16];
  int local_528 [2];
  int local_520 [2];
  byte *local_518;
  undefined8 local_510;
  undefined1 auStack_508 [8];
  int local_500;
  char *local_4f0;
  undefined8 local_4e8;
  char *local_4d8;
  undefined8 local_4d0;
  ulong *local_4c8;
  int local_4c0;
  uint local_4bc;
  ulong local_4b8 [3];
  char *local_4a0;
  undefined8 local_498;
  int local_b8 [2];
  byte *local_b0;
  char *local_a8;
  uint local_a0;
  byte *local_98;
  uint local_90;
  ulong *local_88;
  ulong *local_80;
  byte *local_78;
  int local_70 [4];
  
  local_528[0] = 0;
  if (param_2 == param_3) {
LAB_0046ca2c:
    local_520[0] = local_528[0];
  }
  else {
    puVar28 = param_2;
    do {
      uVar27 = *puVar28;
      uVar31 = uVar27;
      for (uVar33 = *(ulong *)(uVar27 + 8); uVar33 != 0; uVar33 = *(ulong *)(uVar33 + 8)) {
        pcVar23 = *(code **)(*param_1 + 0x10);
        if ((pcVar23 != (code *)0x0) &&
           (uVar13 = (*pcVar23)(uVar33,*(undefined8 *)(*param_1 + 0x18)), (uVar13 & 1) == 0)) {
LAB_0046bb4c:
          lVar14 = *(long *)(*param_1 + 0x28);
          if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
            FUN_00444bc0(&local_4c8);
            local_518 = (byte *)FUN_00427270(uVar27);
            lVar14 = FUN_004446b0(&local_4c8,"Type \'{}\' has an unreachable type in parents chain",
                                  &DAT_048534d0,&local_518);
            *(char **)(lVar14 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar14 + 0x30) = 0xc2;
            *(undefined4 *)(lVar14 + 0xc) = 0;
LAB_0046bba8:
            FUN_00444c00(&local_4c8);
          }
LAB_0046bbb0:
          local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
          FUN_0046e670(&local_4c8);
          if (((int)local_4c8 < 0) && (FUN_0046e670(local_528), *(char *)*param_1 != '\0')) {
            return local_528[0];
          }
          break;
        }
        if (uVar33 == uVar31) {
LAB_0046bae8:
          lVar14 = *(long *)(*param_1 + 0x28);
          if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
            FUN_00444bc0(&local_4c8);
            local_518 = (byte *)FUN_00427270(uVar27);
            lVar14 = FUN_004446b0(&local_4c8,"Type \'{}\' has a loop in parents chain",&DAT_048534d0
                                  ,&local_518);
            *(char **)(lVar14 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar14 + 0x30) = 0xc3;
            *(undefined4 *)(lVar14 + 0xc) = 0xa62e68d9;
            goto LAB_0046bba8;
          }
          goto LAB_0046bbb0;
        }
        uVar33 = *(ulong *)(uVar33 + 8);
        if (uVar33 == 0) break;
        pcVar23 = *(code **)(*param_1 + 0x10);
        if ((pcVar23 != (code *)0x0) &&
           (uVar13 = (*pcVar23)(uVar33,*(undefined8 *)(*param_1 + 0x18)), (uVar13 & 1) == 0))
        goto LAB_0046bb4c;
        if (uVar33 == uVar31) goto LAB_0046bae8;
        uVar31 = *(ulong *)(uVar31 + 8);
      }
      puVar28 = puVar28 + 1;
    } while (puVar28 != param_3);
    local_520[0] = local_528[0];
    if (local_528[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_528[0];
      }
      FUN_00444bc0(&local_4c8,*(long *)(*param_1 + 0x28),1);
      local_498 = 0x421;
LAB_0046e3a4:
      local_4a0 = 
      "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
      ;
      uVar24 = FUN_004446b0(&local_4c8,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_048648a0,
                            "status",local_520);
      FUN_004446b0(uVar24,&DAT_0407ebb1,&DAT_0413df78);
      FUN_00444c00(&local_4c8);
      return local_520[0];
    }
    puVar28 = param_2;
    if (param_2 == param_3) goto LAB_0046ca2c;
    do {
      uVar31 = *puVar28;
      local_4d8 = (char *)((ulong)local_4d8 & 0xffffffff00000000);
      lVar14 = FUN_004270a0(uVar31);
      if (lVar14 == 0) {
        local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
      }
      else {
        uVar4 = *(ushort *)(lVar14 + 8);
        if (uVar4 < 0x100) {
          iVar7 = 0;
          local_98 = (byte *)((ulong)local_98 & 0xffffffff00000000);
          if (uVar4 != 0) {
            do {
              plVar2 = (long *)(lVar14 + 0x10 + (long)iVar7 * 0x10);
              if (*(char *)plVar2[1] == 't') {
                if (*plVar2 == 0) {
                  FUN_0046e670(&local_4d8);
                  pcVar25 = (char *)*param_1;
                  if ((*(long *)(pcVar25 + 0x28) != 0) &&
                     ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    local_518 = (byte *)FUN_00427270(uVar31);
                    lVar22 = FUN_004446b0(&local_4c8,
                                          "Template type \'{}\' has invalid NULL template type parameter #{}."
                                          ,&DAT_048648d8,&local_518,&local_98);
                    *(char **)(lVar22 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    *(undefined8 *)(lVar22 + 0x30) = 0x40d;
                    FUN_00444c00(&local_4c8);
                    pcVar25 = (char *)*param_1;
                  }
                  if (*pcVar25 != '\0') break;
                  pcVar23 = *(code **)(pcVar25 + 0x10);
                }
                else {
                  pcVar25 = (char *)*param_1;
                  pcVar23 = *(code **)(pcVar25 + 0x10);
                }
                if ((pcVar23 != (code *)0x0) &&
                   (uVar33 = (*pcVar23)(*plVar2,*(undefined8 *)(pcVar25 + 0x18)), (uVar33 & 1) == 0)
                   ) {
                  FUN_0046e670(&local_4d8);
                  pcVar25 = (char *)*param_1;
                  if ((*(long *)(pcVar25 + 0x28) != 0) &&
                     ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    local_518 = (byte *)FUN_00427270(uVar31);
                    lVar22 = FUN_004446b0(&local_4c8,
                                          "Template type \'{}\' has unreachable template type parameter #{}."
                                          ,&DAT_048648d8,&local_518,&local_98);
                    *(char **)(lVar22 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    *(undefined8 *)(lVar22 + 0x30) = 0x40e;
                    FUN_00444c00(&local_4c8);
                    pcVar25 = (char *)*param_1;
                  }
                  if (*pcVar25 != '\0') break;
                }
              }
              iVar7 = (int)local_98 + 1;
              local_98 = (byte *)CONCAT44(local_98._4_4_,iVar7);
            } while (iVar7 < (int)(uint)uVar4);
            iVar7 = (int)local_4d8;
          }
          local_4c8 = (ulong *)CONCAT44(local_4c8._4_4_,iVar7);
        }
        else {
          lVar14 = *(long *)(*param_1 + 0x28);
          if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
            FUN_00444bc0(&local_4c8);
            local_518 = (byte *)FUN_00427270(uVar31);
            lVar14 = FUN_004446b0(&local_4c8,
                                  "Template type \'{}\' has invalid number of template parameters greater than 255."
                                  ,&DAT_048534d0,&local_518);
            *(char **)(lVar14 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar14 + 0x30) = 0x407;
            *(undefined4 *)(lVar14 + 0xc) = 0;
            FUN_00444c00(&local_4c8);
          }
          local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
          FUN_0046e670(&local_4c8);
          iVar7 = (int)local_4c8;
        }
        if ((iVar7 < 0) && (FUN_0046e670(local_528), *(char *)*param_1 != '\0')) {
          return local_528[0];
        }
      }
      puVar6 = PTR_DAT_04bd4920;
      puVar30 = PTR_DAT_048607c0;
      puVar28 = puVar28 + 1;
    } while (puVar28 != param_3);
    local_520[0] = local_528[0];
    if (local_528[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_528[0];
      }
      FUN_00444bc0(&local_4c8,*(long *)(*param_1 + 0x28),1);
      local_498 = 0x429;
      goto LAB_0046e3a4;
    }
    if (param_2 == param_3) goto LAB_0046ca2c;
    puVar28 = param_2;
    do {
      uVar31 = *puVar28;
      lVar14 = FUN_004270a0(uVar31);
      if (lVar14 != 0) {
        local_4c0 = 1;
        local_4bc = 0x80000008;
        local_4c8 = local_4b8;
        local_4b8[0] = uVar31;
        iVar7 = FUN_0046e680(param_1,&local_4c8);
        local_4d8 = (char *)CONCAT44(local_4d8._4_4_,iVar7);
        if (iVar7 < 0) {
          if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
            bVar5 = true;
          }
          else {
            bVar5 = true;
            FUN_00444bc0(&local_518,*(long *)(*param_1 + 0x28),1);
            local_4e8 = 0xd0;
            local_4f0 = 
            "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            uVar24 = FUN_004446b0(&local_518,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_048536a0,
                                  "checkSingleParams(templateStack)",&local_4d8);
            FUN_004446b0(uVar24,&DAT_0407ebb1,puVar6);
            FUN_00444c00(&local_518);
          }
        }
        else {
          bVar5 = false;
        }
        local_4c0 = 0;
        if ((-1 < (int)local_4bc) && (local_4c0 = 0, local_4c8 != (ulong *)0x0)) {
          FUN_00421f90(puVar30,local_4c8,8,local_4bc & 0x3fffffff);
        }
        if (((bVar5) && ((int)local_4d8 < 0)) &&
           (FUN_0046e670(local_528), *(char *)*param_1 != '\0')) {
          return local_528[0];
        }
      }
      puVar28 = puVar28 + 1;
    } while (param_3 != puVar28);
    local_520[0] = local_528[0];
    if (local_528[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_528[0];
      }
      FUN_00444bc0(&local_4c8,*(long *)(*param_1 + 0x28),1);
      local_498 = 0x42f;
      goto LAB_0046e3a4;
    }
    if (param_2 == param_3) goto LAB_0046ca2c;
    puVar30 = &DAT_04864918;
    puVar28 = param_2;
    do {
      puVar32 = (ulong *)*puVar28;
      local_88 = (ulong *)((ulong)local_88 & 0xffffffff00000000);
      lVar14 = *param_1;
      uVar12 = (uint)*puVar32;
      if ((*puVar32 & (*(ulong *)(lVar14 + 8) ^ 0xffffffffffffffff)) == 0) {
        if ((((uVar12 >> 4 & 1) == 0) || (lVar14 = FUN_00426db0(puVar32,0x10), lVar14 == 0)) ||
           (*(int *)(lVar14 + 4) == 0)) {
LAB_0046c074:
          uVar12 = (uint)*puVar32;
          if ((*puVar32 & 1) == 0) {
LAB_0046c190:
            if (((uVar12 >> 0x14 & 1) != 0) &&
               (puVar15 = (ulong *)FUN_00426db0(puVar32,0x100000), puVar15 != (ulong *)0x0)) {
              uVar31 = *puVar15;
              pbVar29 = (byte *)(uVar31 >> 0x10 & 0xfff);
              local_518 = pbVar29;
              if ((uVar31 & 0xffff) == 0) {
                lVar14 = *(long *)(*param_1 + 0x28);
                if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                  FUN_00444bc0(&local_4c8);
                  lVar14 = FUN_004446b0(&local_4c8,"Type \'{}\' has zero size.",puVar30,puVar32);
                  *(char **)(lVar14 + 0x28) =
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  uVar24 = 0x10f;
                  goto LAB_0046c350;
                }
              }
              else {
                uVar12 = FUN_004274f0(puVar32);
                if ((uVar12 >> 1 & 1) != 0) goto LAB_0046c374;
                if (pbVar29 == (byte *)0x0) {
                  lVar14 = *(long *)(*param_1 + 0x28);
                  if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar14 = FUN_004446b0(&local_4c8,"Non-abstract type \'{}\' has zero alignment.",
                                          puVar30,puVar32);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    uVar24 = 0x115;
LAB_0046c350:
                    *(undefined8 *)(lVar14 + 0x30) = uVar24;
                    *(undefined4 *)(lVar14 + 0xc) = 0;
                    FUN_00444c00(&local_4c8);
                  }
                }
                else if (((ulong)((int)(uVar31 >> 0x10) - 1) & (ulong)pbVar29) == 0) {
                  uVar12 = (uint)uVar31 & 0xffff;
                  uVar3 = 0;
                  uVar26 = (uint)pbVar29;
                  if (uVar26 != 0) {
                    uVar3 = uVar12 / uVar26;
                  }
                  if (uVar12 == uVar3 * uVar26) goto LAB_0046c374;
                  lVar14 = *(long *)(*param_1 + 0x28);
                  if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar14 = FUN_004446b0(&local_4c8,
                                          "Non-abstract type \'{}\' has size ({} bytes) not divisible by its alignment ({} bytes)."
                                          ,&DAT_04864940,puVar32,puVar32,&local_518);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    uVar24 = 0x117;
                    goto LAB_0046c350;
                  }
                }
                else {
                  lVar14 = *(long *)(*param_1 + 0x28);
                  if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar14 = FUN_004446b0(&local_4c8,
                                          "Non-abstract type \'{}\' has non-power-of-two alignment ({} bytes)."
                                          ,&DAT_04864928,puVar32,&local_518);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    uVar24 = 0x116;
                    goto LAB_0046c350;
                  }
                }
              }
LAB_0046c360:
              local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
              FUN_0046e670(&local_4c8);
              if (((int)local_4c8 < 0) && (FUN_0046e670(&local_88), *(char *)*param_1 != '\0'))
              goto LAB_0046c968;
            }
          }
          else {
            uVar31 = FUN_00428440(puVar32);
            if (((uVar31 & 0x1f) != 0) && (uVar31 = FUN_00428440(puVar32), (uVar31 & 0x1f) != 1)) {
              uVar12 = (uint)*puVar32;
              goto LAB_0046c190;
            }
            iVar7 = FUN_00426fc0(puVar32);
            if ((iVar7 != 0) || (iVar7 = FUN_00427030(puVar32), iVar7 != 0)) {
              lVar14 = *(long *)(*param_1 + 0x28);
              if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                FUN_00444bc0(&local_4c8);
                lVar14 = FUN_004446b0(&local_4c8,
                                      "Void/opaque type \'{}\' has non-zero size and/or alignment.",
                                      puVar30,puVar32);
                *(char **)(lVar14 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                uVar24 = 0x106;
                goto LAB_0046c350;
              }
              goto LAB_0046c360;
            }
          }
LAB_0046c374:
          if (((*(byte *)((long)puVar32 + 2) >> 5 & 1) != 0) &&
             (puVar16 = (uint *)FUN_00426db0(puVar32,0x200000), puVar16 != (uint *)0x0)) {
            uVar12 = *puVar16;
            lVar14 = *param_1;
            if ((uVar12 & (*(uint *)(lVar14 + 4) ^ 0xffffffff)) != 0) {
              if ((*(long *)(lVar14 + 0x28) != 0) &&
                 (*(byte *)(lVar14 + 0x30) <= *(byte *)(*(long *)(lVar14 + 0x28) + 0x50))) {
                FUN_00444bc0(&local_4c8);
                local_518 = (byte *)CONCAT44(local_518._4_4_,
                                             uVar12 & (*(uint *)(*param_1 + 4) ^ 0xffffffff));
                lVar14 = FUN_004446b0(&local_4c8,
                                      "Type \'{}\' has invalid forbidden flag(s) 0x{:x8}.",
                                      &DAT_04864960,puVar32,&local_518);
                *(char **)(lVar14 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar14 + 0x30) = 0x123;
                *(undefined4 *)(lVar14 + 0xc) = 0xa62e68d8;
                FUN_00444c00(&local_4c8);
              }
              local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
              FUN_0046e670(&local_4c8);
              if (((int)local_4c8 < 0) && (FUN_0046e670(&local_88), *(char *)*param_1 != '\0'))
              goto LAB_0046c968;
            }
          }
          iVar7 = FUN_0046e8d0(param_1,puVar32);
          if (((-1 < iVar7) || (FUN_0046e670(&local_88), *(char *)*param_1 == '\0')) &&
             ((*puVar32 & 1) != 0)) {
            local_98 = (byte *)((ulong)local_98 & 0xffffffff00000000);
            auVar34 = FUN_00428010(puVar32);
            puVar15 = auVar34._0_8_;
            if (puVar15 != auVar34._8_8_) {
              do {
                local_518 = (byte *)*puVar15;
                if (*(long *)(local_518 + 8) == 0) {
                  FUN_0046e670(&local_98);
                  pcVar25 = (char *)*param_1;
                  if ((*(long *)(pcVar25 + 0x28) != 0) &&
                     ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar14 = FUN_004446b0(&local_4c8,
                                          "Record type \'{}\' has a field with no parent.",puVar30,
                                          puVar32);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    *(undefined8 *)(lVar14 + 0x30) = 0x206;
                    FUN_00444c00(&local_4c8);
                    pcVar25 = (char *)*param_1;
                  }
                  if (*pcVar25 != '\0') break;
                }
                local_4d8 = (char *)FUN_00427b40(&local_518);
                if (local_4d8 == (char *)0x0) {
                  FUN_0046e670(&local_98);
                  pcVar25 = (char *)*param_1;
                  if ((*(long *)(pcVar25 + 0x28) != 0) &&
                     ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar14 = FUN_004446b0(&local_4c8,"Record type \'{}\' has a field with no name.",
                                          puVar30,puVar32);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    *(undefined8 *)(lVar14 + 0x30) = 0x20a;
                    FUN_00444c00(&local_4c8);
                    pcVar25 = (char *)*param_1;
                  }
                  if (*pcVar25 != '\0') break;
                  if (local_4d8 != (char *)0x0) goto LAB_0046c578;
                }
                else {
LAB_0046c578:
                  if (*local_4d8 == '\0') {
                    FUN_0046e670(&local_98);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_4c8);
                      lVar14 = FUN_004446b0(&local_4c8,
                                            "Record type \'{}\' has a field with an empty name.",
                                            puVar30,puVar32);
                      *(char **)(lVar14 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      *(undefined8 *)(lVar14 + 0x30) = 0x20d;
                      FUN_00444c00(&local_4c8);
                      pcVar25 = (char *)*param_1;
                    }
                    if (*pcVar25 != '\0') break;
                  }
                }
                if ((local_518 == (byte *)0x0) ||
                   (puVar17 = (ulong *)FUN_00427480(), puVar17 != puVar32)) {
                  FUN_0046e670(&local_98);
                  pcVar25 = (char *)*param_1;
                  if ((*(long *)(pcVar25 + 0x28) != 0) &&
                     ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar14 = FUN_004446b0(&local_4c8,
                                          "Record type \'{}\' has field \'{}\' with DECL context missing or pointing to another type."
                                          ,&DAT_04864988,puVar32,&local_4d8);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    *(undefined8 *)(lVar14 + 0x30) = 0x212;
                    FUN_00444c00(&local_4c8);
                    pcVar25 = (char *)*param_1;
                  }
                  if (*pcVar25 != '\0') break;
                }
                puVar15 = puVar15 + 1;
              } while (auVar34._8_8_ != puVar15);
            }
            if ((-1 < (int)local_98) || (FUN_0046e670(&local_88), *(char *)*param_1 == '\0')) {
              local_4d8 = (char *)((ulong)local_4d8 & 0xffffffff00000000);
              uVar31 = FUN_00428440(puVar32);
              if ((uVar31 & 0x1f) == 7) {
                uVar8 = FUN_00426fc0(puVar32);
                local_98 = (byte *)CONCAT44(local_98._4_4_,uVar8);
                auVar34 = FUN_00428460(puVar32);
                puVar15 = auVar34._0_8_;
                if (puVar15 != auVar34._8_8_) {
                  iVar11 = 0;
                  iVar7 = -1;
                  do {
                    local_518 = (byte *)*puVar15;
                    iVar9 = FUN_00429050(&local_518);
                    local_a8 = (char *)CONCAT44(local_a8._4_4_,iVar9);
                    if (iVar9 < 0) {
                      FUN_0046e670(&local_4d8);
                      pcVar25 = (char *)*param_1;
                      if ((*(long *)(pcVar25 + 0x28) != 0) &&
                         ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                        FUN_00444bc0(&local_4c8);
                        lVar14 = FUN_004446b0(&local_4c8,
                                              "Record type \'{}\' has field \'{}\' with negative offset."
                                              ,&DAT_048649a0,puVar32,&local_518);
                        *(char **)(lVar14 + 0x28) =
                             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                        ;
                        *(undefined8 *)(lVar14 + 0x30) = 0x22b;
                        FUN_00444c00(&local_4c8);
                        pcVar25 = (char *)*param_1;
                      }
                      if (*pcVar25 != '\0') break;
                      iVar9 = (int)local_a8;
                    }
                    iVar10 = FUN_00426fc0(local_518);
                    local_78 = (byte *)CONCAT44(local_78._4_4_,iVar10 + iVar9);
                    if ((int)local_98 < iVar10 + iVar9) {
                      FUN_0046e670(&local_4d8);
                      pcVar25 = (char *)*param_1;
                      if ((*(long *)(pcVar25 + 0x28) != 0) &&
                         ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                        FUN_00444bc0(&local_4c8);
                        uVar8 = FUN_00426fc0(local_518);
                        local_80 = (ulong *)CONCAT44(local_80._4_4_,uVar8);
                        lVar14 = FUN_004446b0(&local_4c8,
                                              "Record type \'{}\' has field \'{}\' with offset + size {} ({} + {}) greater than total type size {}."
                                              ,PTR_DAT_04bd5a50,puVar32,&local_518,&local_78,
                                              &local_a8,&local_80,&local_98);
                        *(char **)(lVar14 + 0x28) =
                             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                        ;
                        *(undefined8 *)(lVar14 + 0x30) = 0x22d;
                        FUN_00444c00(&local_4c8);
                        pcVar25 = (char *)*param_1;
                      }
                      if (*pcVar25 == '\0') goto LAB_0046c810;
LAB_0046c8a0:
                      bVar5 = true;
                    }
                    else {
LAB_0046c810:
                      iVar9 = (int)local_a8;
                      if ((int)local_a8 < iVar11 + iVar7) {
                        FUN_0046e670(&local_4d8);
                        pcVar25 = (char *)*param_1;
                        if ((*(long *)(pcVar25 + 0x28) != 0) &&
                           ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                          FUN_00444bc0(&local_4c8);
                          local_80 = (ulong *)CONCAT44(local_80._4_4_,iVar11 + iVar7);
                          lVar14 = FUN_004446b0(&local_4c8,
                                                "Record type \'{}\' has field \'{}\' with offset {} less than the previous one + size {}. This means that fields either overlap or are not sorted."
                                                ,&DAT_048649f0,puVar32,&local_518,&local_a8,
                                                &local_80);
                          *(char **)(lVar14 + 0x28) =
                               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                          ;
                          *(undefined8 *)(lVar14 + 0x30) = 0x230;
                          FUN_00444c00(&local_4c8);
                          pcVar25 = (char *)*param_1;
                        }
                        if (*pcVar25 != '\0') goto LAB_0046c8a0;
                        iVar9 = (int)local_a8;
                      }
                      iVar11 = FUN_00426fc0(local_518);
                      bVar5 = false;
                      iVar7 = iVar9;
                    }
                    if ((auVar34._8_8_ + -1 == puVar15) || (puVar15 = puVar15 + 1, bVar5)) break;
                  } while( true );
                }
                puVar30 = PTR_DAT_04bd5a38;
                if ((int)local_4d8 < 0) {
                  FUN_0046e670(&local_88);
                  local_4c8 = (ulong *)CONCAT44(local_4c8._4_4_,(int)local_88);
                  iVar7 = (int)local_88;
                  goto joined_r0x0046c184;
                }
              }
            }
          }
        }
        else {
          lVar14 = *(long *)(*param_1 + 0x28);
          if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
            FUN_00444bc0(&local_4c8);
            lVar14 = FUN_004446b0(&local_4c8,
                                  "Overflow in VERSION of type \'{}\' (should fit on 32 bits).",
                                  puVar30,puVar32);
            *(char **)(lVar14 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar14 + 0x30) = 0xfa;
            *(undefined4 *)(lVar14 + 0xc) = 0;
            FUN_00444c00(&local_4c8);
          }
          local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
          FUN_0046e670(&local_4c8);
          if ((-1 < (int)local_4c8) || (FUN_0046e670(&local_88), *(char *)*param_1 == '\0'))
          goto LAB_0046c074;
        }
LAB_0046c968:
        local_4c8 = (ulong *)CONCAT44(local_4c8._4_4_,(int)local_88);
        iVar7 = (int)local_88;
      }
      else {
        if ((*(long *)(lVar14 + 0x28) != 0) &&
           (*(byte *)(lVar14 + 0x30) <= *(byte *)(*(long *)(lVar14 + 0x28) + 0x50))) {
          FUN_00444bc0(&local_4c8);
          local_518 = (byte *)CONCAT44(local_518._4_4_,
                                       uVar12 & (*(uint *)(*param_1 + 8) ^ 0xffffffff));
          lVar14 = FUN_004446b0(&local_4c8,"Type has invalid optionals {}.",&DAT_04864908,&local_518
                               );
          *(char **)(lVar14 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar14 + 0x30) = 0xde;
          *(undefined4 *)(lVar14 + 0xc) = 0;
          FUN_00444c00(&local_4c8);
        }
        local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
        FUN_0046e670(&local_4c8);
        iVar7 = (int)local_4c8;
      }
joined_r0x0046c184:
      if ((iVar7 < 0) && (FUN_0046e670(local_528), *(char *)*param_1 != '\0')) {
        return local_528[0];
      }
      puVar6 = PTR_DAT_048607b8;
      puVar28 = puVar28 + 1;
    } while (puVar28 != param_3);
    local_520[0] = local_528[0];
    if (local_528[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_528[0];
      }
      FUN_00444bc0(&local_4c8,*(long *)(*param_1 + 0x28),1);
      local_498 = 0x436;
      goto LAB_0046e3a4;
    }
    if (param_2 == param_3) goto LAB_0046ca2c;
    puVar28 = param_2;
    do {
      pbVar29 = (byte *)*puVar28;
      local_b8[0] = 0;
      local_b0 = pbVar29;
      lVar14 = FUN_00426e90(pbVar29,1);
      if (lVar14 == 0) {
        lVar14 = *(long *)(*param_1 + 0x28);
        if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
          FUN_00444bc0(&local_4c8);
          lVar14 = FUN_004446b0(&local_4c8,"Every type must have an Opt::FORMAT in its hierarchy",
                                &DAT_0413df78);
          *(char **)(lVar14 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
          ;
          *(undefined8 *)(lVar14 + 0x30) = 0x242;
          *(undefined4 *)(lVar14 + 0xc) = 0xb73f79e0;
          FUN_00444c00(&local_4c8);
        }
        local_80 = (ulong *)((ulong)local_80 & 0xffffffff00000000);
        FUN_0046e670(&local_80);
LAB_0046d02c:
        iVar7 = (int)local_80;
joined_r0x0046ce6c:
        if (iVar7 < 0) {
LAB_0046e354:
          FUN_0046e670(local_528);
          if (*(char *)*param_1 != '\0') {
            return local_528[0];
          }
        }
      }
      else {
        uVar31 = FUN_00428440(pbVar29);
        if (((pbVar29 == (byte *)0x0) || ((uVar31 & 0x1f) != 1)) ||
           (iVar7 = FUN_00426fc0(pbVar29), iVar7 == 0)) {
          local_70[0] = 0;
          pbVar20 = (byte *)FUN_0044f820(pbVar29);
          local_78 = pbVar20;
          if (pbVar20 == pbVar29) {
LAB_0046cefc:
            if ((*pbVar20 & 1) == 0) {
              FUN_0046e670(local_70);
              pcVar25 = (char *)*param_1;
              if ((*(long *)(pcVar25 + 0x28) != 0) &&
                 ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                FUN_00444bc0(&local_4c8);
                lVar14 = FUN_004446b0(&local_4c8,
                                      "Type \'{}\' resolved to type \'{}\' which is a decorator, so not canonical."
                                      ,&DAT_04864a18,pbVar29,&local_78);
                *(char **)(lVar14 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar14 + 0x30) = 0x31a;
                FUN_00444c00(&local_4c8);
                pcVar25 = (char *)*param_1;
              }
              if (*pcVar25 == '\0') goto LAB_0046cf78;
            }
            else {
LAB_0046cf78:
              local_80 = (ulong *)FUN_00426e90(pbVar29,0x2000);
              if (local_80 == (ulong *)0x0) {
                local_80 = (ulong *)0x0;
                local_4c8 = (ulong *)CONCAT44(local_4c8._4_4_,local_70[0]);
                iVar7 = local_70[0];
                goto joined_r0x0046d044;
              }
              if (*local_80 == 0) {
                FUN_0046e670(local_70);
                pcVar25 = (char *)*param_1;
                if ((*(long *)(pcVar25 + 0x28) != 0) &&
                   ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                  FUN_00444bc0(&local_4c8);
                  lVar14 = FUN_004446b0(&local_4c8,"Type \'{}\' has empty Opt::INHERITANCE.",
                                        &DAT_04864918,pbVar29);
                  *(char **)(lVar14 + 0x28) =
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar14 + 0x30) = 799;
                  FUN_00444c00(&local_4c8);
                  pcVar25 = (char *)*param_1;
                }
                if (*pcVar25 != '\0') goto LAB_0046d24c;
              }
              local_88 = (ulong *)FUN_00426e90(local_78,0x2000);
              if (local_88 == (ulong *)0x0) {
                local_88 = (ulong *)0x0;
                uVar31 = FUN_0044f9c0(&local_80,&local_88);
              }
              else {
                uVar31 = FUN_0044f9c0(&local_80,&local_88);
              }
              if ((uVar31 & 1) == 0) {
                FUN_0046e670(local_70);
                lVar14 = *(long *)(*param_1 + 0x28);
                if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                  FUN_00444bc0(&local_4c8);
                  uVar31 = *local_80;
                  local_518 = (byte *)((uVar31 & 0x1fffc) << 0x1e | uVar31 >> 0x11 & 0xffffffff);
                  local_510 = (byte *)(CONCAT44(local_510._4_4_,(int)uVar31) & 0xffffffff00000003);
                  uVar31 = *local_80;
                  local_4d8 = (char *)((uVar31 & 0x1fffc) << 0x1e | uVar31 >> 0x11 & 0xffffffff);
                  local_4d0 = CONCAT44(local_4d0._4_4_,(int)uVar31) & 0xffffffff00000003;
                  uVar31 = *local_88;
                  local_98 = (byte *)((uVar31 & 0x1fffc) << 0x1e | uVar31 >> 0x11 & 0xffffffff);
                  local_90 = (uint)uVar31 & 3;
                  uVar31 = *local_88;
                  local_a8 = (char *)((uVar31 & 0x1fffc) << 0x1e | uVar31 >> 0x11 & 0xffffffff);
                  local_a0 = (uint)uVar31 & 3;
                  lVar14 = FUN_004446b0(&local_4c8,
                                        "Type \'{}\' has inheritance {}/{} but the corresponding resolved type \'{}\' has a different inheritance {}/{}."
                                        ,&DAT_04864a30,pbVar29,&local_518,(ulong)&local_4d8 | 4,
                                        &local_78,&local_98,(ulong)&local_a8 | 4);
                  *(char **)(lVar14 + 0x28) =
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar14 + 0x30) = 0x323;
                  FUN_00444c00(&local_4c8);
                }
              }
            }
LAB_0046d24c:
            local_4c8 = (ulong *)CONCAT44(local_4c8._4_4_,local_70[0]);
            if (-1 < local_70[0]) goto LAB_0046d26c;
LAB_0046d258:
            FUN_0046e670(local_b8);
            if (*(char *)*param_1 == '\0') goto LAB_0046d26c;
LAB_0046e348:
            local_80 = (ulong *)CONCAT44(local_80._4_4_,local_b8[0]);
            iVar7 = local_b8[0];
            goto joined_r0x0046ce6c;
          }
          pcVar23 = *(code **)(*param_1 + 0x10);
          if ((pcVar23 == (code *)0x0) ||
             (uVar31 = (*pcVar23)(pbVar20,*(undefined8 *)(*param_1 + 0x18)), (uVar31 & 1) != 0))
          goto LAB_0046cefc;
          lVar14 = *(long *)(*param_1 + 0x28);
          if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
            FUN_00444bc0(&local_4c8);
            lVar14 = FUN_004446b0(&local_4c8,
                                  "Type \'{}\' resolved to an unreachable type after resolving typedefs."
                                  ,&DAT_04864918,pbVar29);
            *(char **)(lVar14 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar14 + 0x30) = 0x319;
            *(undefined4 *)(lVar14 + 0xc) = 0;
            FUN_00444c00(&local_4c8);
          }
          local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
          FUN_0046e670(&local_4c8);
          iVar7 = (int)local_4c8;
joined_r0x0046d044:
          if (iVar7 < 0) goto LAB_0046d258;
LAB_0046d26c:
          pbVar29 = local_b0;
          uVar31 = FUN_00428440(local_b0);
          if ((pbVar29 == (byte *)0x0) || ((uVar31 & 0x1f) != 7)) {
LAB_0046d420:
            if (((((local_b0[1] >> 6 & 1) != 0) &&
                 (puVar21 = (undefined8 *)FUN_00426db0(local_b0,0x4000),
                 puVar21 != (undefined8 *)0x0)) &&
                (puVar21 = (undefined8 *)*puVar21, puVar21 != (undefined8 *)0x0)) &&
               (uVar24 = *puVar21, 0 < (int)uVar24)) {
              lVar14 = 0;
              do {
                local_4d8 = (char *)puVar21[lVar14 * 2 + 1];
                if (local_4d8 == (char *)0x0) {
                  FUN_0046e670(local_b8);
                  pcVar25 = (char *)*param_1;
                  if ((*(long *)(pcVar25 + 0x28) != 0) &&
                     ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar22 = FUN_004446b0(&local_4c8,"Type \'{}\' has null interface type.",
                                          &DAT_048537e8,&local_b0);
                    *(char **)(lVar22 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    uVar19 = 0x266;
LAB_0046d670:
                    *(undefined8 *)(lVar22 + 0x30) = uVar19;
                    FUN_00444c00(&local_4c8);
                    pcVar25 = (char *)*param_1;
                  }
LAB_0046d680:
                  if (*pcVar25 != '\0') goto LAB_0046ddcc;
                }
                else {
                  pcVar23 = *(code **)(*param_1 + 0x10);
                  if ((pcVar23 != (code *)0x0) &&
                     (uVar31 = (*pcVar23)(local_4d8,*(undefined8 *)(*param_1 + 0x18)),
                     (uVar31 & 1) == 0)) {
                    FUN_0046e670(local_b8);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_4c8);
                      lVar22 = FUN_004446b0(&local_4c8,
                                            "Type \'{}\' has unreachable interface type (not in scope)."
                                            ,&DAT_048537e8,&local_b0);
                      *(char **)(lVar22 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      uVar19 = 0x267;
                      goto LAB_0046d670;
                    }
                    goto LAB_0046d680;
                  }
                  pcVar25 = local_4d8;
                  uVar31 = FUN_00428440(local_4d8);
                  if ((pcVar25 == (char *)0x0) || ((uVar31 & 0x1f) != 7)) {
                    FUN_0046e670(local_b8);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_4c8);
                      lVar22 = FUN_004446b0(&local_4c8,
                                            "Type \'{}\' has interface \'{}\' which is not a record type."
                                            ,&DAT_04861bc0,&local_b0,&local_4d8);
                      *(char **)(lVar22 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      uVar19 = 0x26a;
                      goto LAB_0046d670;
                    }
                    goto LAB_0046d680;
                  }
                  FUN_00427c30(&local_518,puVar21[lVar14 * 2 + 1],0);
                  do {
                    while (local_518 + 8 < local_510) {
                      local_518 = local_518 + 8;
                      uVar12 = FUN_004290b0();
                      if ((uVar12 >> 5 & 1) != 0) goto LAB_0046d4e4;
                    }
                    uVar31 = FUN_00427c40(&local_518);
                    if ((uVar31 & 1) == 0) goto LAB_0046d688;
                    uVar12 = FUN_004290b0(local_518);
                  } while ((uVar12 >> 5 & 1) == 0);
LAB_0046d4e4:
                  FUN_0046e670(local_b8);
                  pcVar25 = (char *)*param_1;
                  if ((*(long *)(pcVar25 + 0x28) != 0) &&
                     ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar22 = FUN_004446b0(&local_4c8,
                                          "Type \'{}\' has interface \'{}\' with non-empty decl array."
                                          ,&DAT_04861bc0,&local_b0,&local_4d8);
                    *(char **)(lVar22 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    *(undefined8 *)(lVar22 + 0x30) = 0x270;
                    FUN_00444c00(&local_4c8);
                    pcVar25 = (char *)*param_1;
                  }
                  if (*pcVar25 != '\0') goto LAB_0046e348;
                }
LAB_0046d688:
                lVar14 = lVar14 + 1;
              } while (lVar14 < (int)uVar24);
            }
            if ((*local_b0 & 1) != 0) {
              local_4c0 = 0;
              local_4bc = 0x80000080;
              local_4d8 = (char *)0x0;
              local_4d0 = -0x8000000000000000;
              lVar14 = *(long *)(local_b0 + 8);
              local_4c8 = local_4b8;
              if (lVar14 != 0) {
                do {
                  auVar34 = FUN_00428010(lVar14);
                  puVar32 = auVar34._0_8_;
                  iVar7 = local_4c0 + (int)((ulong)((long)auVar34._8_8_ - (long)puVar32) >> 3);
                  if ((int)(local_4bc & 0x3fffffff) < iVar7) {
                    local_4c8 = (ulong *)FUN_00426720(puVar6,iVar7,8,local_4c8,local_4c0,&local_4bc)
                    ;
                  }
                  for (; puVar32 != auVar34._8_8_; puVar32 = puVar32 + 1) {
                    local_518 = (byte *)*puVar32;
                    uVar24 = FUN_00427b40(&local_518);
                    FUN_0043bce0(&local_98,uVar24,0xffffffff);
                    if ((uint)local_4d0 == (local_4d0._4_4_ & 0x3fffffff)) {
                      FUN_00426990(puVar6,&local_4d8,8);
                    }
                    *(byte **)(local_4d8 + (long)(int)(uint)local_4d0 * 8) = local_98;
                    local_98 = (byte *)0x0;
                    local_4d0 = CONCAT44(local_4d0._4_4_,(uint)local_4d0 + 1);
                    FUN_0043be10(&local_98);
                  }
                  lVar14 = *(long *)(lVar14 + 8);
                } while (lVar14 != 0);
              }
              auVar34 = FUN_00428010(local_b0);
              puVar32 = auVar34._0_8_;
              iVar7 = local_4c0 + (int)((ulong)((long)auVar34._8_8_ - (long)puVar32) >> 3);
              if ((int)(local_4bc & 0x3fffffff) < iVar7) {
                local_4c8 = (ulong *)FUN_00426720(puVar6,iVar7,8,local_4c8,local_4c0,&local_4bc);
              }
              for (; puVar32 != auVar34._8_8_; puVar32 = puVar32 + 1) {
                local_98 = (byte *)*puVar32;
                local_a8 = (char *)FUN_00427b40(&local_98);
                if (0 < local_4c0) {
                  lVar14 = 0;
                  do {
                    if ((char *)local_4c8[lVar14] == local_a8) goto LAB_0046d834;
                    lVar14 = lVar14 + 1;
                  } while (lVar14 < local_4c0);
                }
                lVar14 = 0xffffffff;
LAB_0046d834:
                FUN_0043bce0(&local_518,local_a8,0xffffffff);
                if ((uint)local_4d0 == (local_4d0._4_4_ & 0x3fffffff)) {
                  FUN_00426990(puVar6,&local_4d8,8);
                }
                *(byte **)(local_4d8 + (long)(int)(uint)local_4d0 * 8) = local_518;
                local_518 = (byte *)0x0;
                local_4d0 = CONCAT44(local_4d0._4_4_,(uint)local_4d0 + 1);
                FUN_0043be10(&local_518);
                if ((-1 < (int)lVar14) &&
                   ((*(char *)(*param_1 + 0x20) == '\0' || (*local_a8 != '$')))) {
                  FUN_0046e670(local_b8);
                  pcVar25 = (char *)*param_1;
                  if ((*(long *)(pcVar25 + 0x28) != 0) &&
                     ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                    FUN_00444bc0(&local_518);
                    lVar14 = FUN_004446b0(&local_518,
                                          "Type \'{}\' has duplicate field with name \'{}\' (possibly from ancestor)."
                                          ,&DAT_04853828,&local_b0,&local_a8);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    *(undefined8 *)(lVar14 + 0x30) = 0x294;
                    FUN_00444c00(&local_518);
                    pcVar25 = (char *)*param_1;
                  }
                  if (*pcVar25 == '\0') goto LAB_0046d918;
LAB_0046dc60:
                  local_80 = (ulong *)CONCAT44(local_80._4_4_,local_b8[0]);
                  bVar5 = true;
                  iVar7 = (uint)local_4d0;
                  goto joined_r0x0046dc74;
                }
LAB_0046d918:
                lVar14 = (long)local_4c0;
                local_4c0 = local_4c0 + 1;
                local_4c8[lVar14] = (ulong)local_a8;
                local_78 = local_98;
                if (local_98 == (byte *)0x0) {
                  FUN_0046e670(local_b8);
                  pcVar25 = (char *)*param_1;
                  if ((*(long *)(pcVar25 + 0x28) != 0) &&
                     ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                    FUN_00444bc0(&local_518);
                    lVar14 = FUN_004446b0(&local_518,
                                          "Field \'{}\' of type \'{}\' has invalid NULL type.",
                                          &DAT_04863198,&local_a8,&local_b0);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    uVar24 = 0x299;
LAB_0046dc48:
                    *(undefined8 *)(lVar14 + 0x30) = uVar24;
                    FUN_00444c00(&local_518);
                    pcVar25 = (char *)*param_1;
                  }
LAB_0046dc58:
                  if (*pcVar25 != '\0') goto LAB_0046dc60;
                }
                else {
                  if ((*local_98 & 1) != 0) {
                    FUN_0046e670(local_b8);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_518);
                      lVar14 = FUN_004446b0(&local_518,
                                            "Field \'{}\' of type \'{}\' has non-decorator type.",
                                            &DAT_04863198,&local_a8,&local_b0);
                      *(char **)(lVar14 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      uVar24 = 0x29e;
                      goto LAB_0046dc48;
                    }
                    goto LAB_0046dc58;
                  }
                  iVar7 = FUN_0046e8d0(param_1);
                  if (iVar7 < 0) {
                    FUN_0046e670(local_b8);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_518);
                      lVar14 = FUN_004446b0(&local_518,
                                            "Field decorator type \'{}\' of decl \'{}\' of type \'{}\' failed inner checks."
                                            ,&DAT_04864a90,&local_78,&local_a8,&local_b0);
                      *(char **)(lVar14 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      uVar24 = 0x29f;
                      goto LAB_0046dc48;
                    }
                    goto LAB_0046dc58;
                  }
                  if (*(long *)(local_78 + 8) == 0) {
                    FUN_0046e670(local_b8);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_518);
                      lVar14 = FUN_004446b0(&local_518,"Field \'{}\' has null type.",&DAT_04863660,
                                            &local_98);
                      *(char **)(lVar14 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      uVar24 = 0x2a0;
                      goto LAB_0046dc48;
                    }
                    goto LAB_0046dc58;
                  }
                  pcVar23 = *(code **)(*param_1 + 0x10);
                  if ((pcVar23 != (code *)0x0) &&
                     (uVar31 = (*pcVar23)(*(long *)(local_78 + 8),*(undefined8 *)(*param_1 + 0x18)),
                     (uVar31 & 1) == 0)) {
                    FUN_0046e670(local_b8);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_518);
                      lVar14 = FUN_004446b0(&local_518,"Type of field \'{}\' is not reachable.",
                                            &DAT_04863660,&local_98);
                      *(char **)(lVar14 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      uVar24 = 0x2a3;
                      goto LAB_0046dc48;
                    }
                    goto LAB_0046dc58;
                  }
                  pbVar29 = local_78;
                  uVar31 = FUN_00428440(local_78);
                  if ((pbVar29 != (byte *)0x0) && ((uVar31 & 0x1f) == 0)) {
                    FUN_0046e670(local_b8);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_518);
                      lVar14 = FUN_004446b0(&local_518,
                                            "Type \'{}\' has field \'{}\' with VOID type.",
                                            &DAT_04853828,&local_b0,&local_a8);
                      *(char **)(lVar14 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      *(undefined8 *)(lVar14 + 0x30) = 0x2a6;
                      FUN_00444c00(&local_518);
                      pcVar25 = (char *)*param_1;
                    }
                    if (*pcVar25 != '\0') goto LAB_0046dc60;
                  }
                  uVar12 = FUN_004274f0(local_78);
                  if ((uVar12 >> 1 & 1) != 0) {
                    FUN_0046e670(local_b8);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_518);
                      lVar14 = FUN_004446b0(&local_518,
                                            "Type \'{}\' has field \'{}\' with abstract type ({}).",
                                            &DAT_04864a90,&local_b0,&local_a8,&local_78);
                      *(char **)(lVar14 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      uVar24 = 0x2a7;
                      goto LAB_0046dc48;
                    }
                    goto LAB_0046dc58;
                  }
                }
              }
              bVar5 = false;
              iVar7 = (uint)local_4d0;
joined_r0x0046dc74:
              if (0 < iVar7) {
                pcVar25 = local_4d8 + (long)iVar7 * 8;
                do {
                  pcVar25 = pcVar25 + -8;
                  FUN_0043be10(pcVar25);
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              lVar14 = local_4d0;
              uVar12 = local_4d0._4_4_;
              local_4d0 = (ulong)local_4d0._4_4_ << 0x20;
              if ((-1 < lVar14) && (local_4d8 != (char *)0x0)) {
                FUN_00421f90(puVar6,local_4d8,8,uVar12 & 0x3fffffff);
              }
              local_4c0 = 0;
              if ((-1 < (int)local_4bc) && (local_4c8 != (ulong *)0x0)) {
                FUN_00421f90(puVar6,local_4c8,8,local_4bc & 0x3fffffff);
              }
              if (bVar5) goto LAB_0046d02c;
            }
            pbVar29 = local_b0;
            uVar31 = FUN_00428440(local_b0);
            if ((pbVar29 != (byte *)0x0) && ((uVar31 & 0x1f) == 6)) {
              pcVar25 = (char *)FUN_00426d90(pbVar29);
              local_4d8 = pcVar25;
              if (pcVar25 == (char *)0x0) {
LAB_0046dd48:
                puVar21 = (undefined8 *)FUN_00428370(pbVar29);
                if (puVar21 != &DAT_04c6fd58) goto LAB_0046dea8;
                if (pcVar25 == (char *)0x0) {
                  lVar14 = *(long *)(*param_1 + 0x28);
                  if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar14 = FUN_004446b0(&local_4c8,"Referenced pointer type \'{}\' has no subtype"
                                          ,&DAT_04864ab0,pbVar29);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    uVar24 = 0x2e6;
                    goto LAB_0046de84;
                  }
                  goto LAB_0046de94;
                }
                uVar31 = FUN_00428700(pcVar25,&DAT_04c161d0);
                if (((uVar31 & 1) != 0) ||
                   (uVar31 = FUN_00428700(pcVar25,&DAT_04c11f18), (uVar31 & 1) != 0))
                goto LAB_0046dea8;
                local_4c8 = (ulong *)FUN_00426e90(pcVar25,0x2000);
                if (local_4c8 == (ulong *)0x0) {
                  local_4c8 = (ulong *)0x0;
LAB_0046e0d0:
                  do {
                    if (pcVar25 == &DAT_04c14570) goto LAB_0046dea8;
                    pcVar25 = *(char **)(pcVar25 + 8);
                  } while (pcVar25 != (char *)0x0);
                }
                else {
                  pbVar20 = (byte *)FUN_00426e90(&DAT_04c14570,0x2000);
                  if (pbVar20 == (byte *)0x0) goto LAB_0046e0d0;
                  local_518 = pbVar20;
                  uVar31 = FUN_0044f950(&local_4c8,&local_518);
                  if ((uVar31 & 1) != 0) goto LAB_0046dea8;
                }
                lVar14 = *(long *)(*param_1 + 0x28);
                if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                  FUN_00444bc0(&local_4c8);
                  lVar14 = FUN_004446b0(&local_4c8,
                                        "Referenced pointer type \'{}\' points to non-referenced type \'{}\'"
                                        ,&DAT_04864ac0,pbVar29,&local_4d8);
                  *(char **)(lVar14 + 0x28) =
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  uVar24 = 0x2e8;
LAB_0046de84:
                  *(undefined8 *)(lVar14 + 0x30) = uVar24;
                  *(undefined4 *)(lVar14 + 0xc) = 0;
                  FUN_00444c00(&local_4c8);
                }
              }
              else {
                pcVar23 = *(code **)(*param_1 + 0x10);
                if ((pcVar23 == (code *)0x0) ||
                   (uVar31 = (*pcVar23)(pcVar25,*(undefined8 *)(*param_1 + 0x18)), (uVar31 & 1) != 0
                   )) goto LAB_0046dd48;
                lVar14 = *(long *)(*param_1 + 0x28);
                if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                  FUN_00444bc0(&local_4c8);
                  lVar14 = FUN_004446b0(&local_4c8,
                                        "Pointer type \'{}\' has unreachable pointee type.",
                                        &DAT_04864ab0,pbVar29);
                  *(char **)(lVar14 + 0x28) =
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  uVar24 = 0x2df;
                  goto LAB_0046de84;
                }
              }
LAB_0046de94:
              local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
              FUN_0046e670(&local_4c8);
              if (((int)local_4c8 < 0) && (FUN_0046e670(local_b8), *(char *)*param_1 != '\0'))
              goto LAB_0046e348;
            }
LAB_0046dea8:
            pbVar29 = local_b0;
            uVar31 = FUN_00428440(local_b0);
            if ((pbVar29 != (byte *)0x0) && ((uVar31 & 0x1f) == 8)) {
              local_4d8 = (char *)((ulong)local_4d8 & 0xffffffff00000000);
              pbVar20 = (byte *)FUN_00426d90(pbVar29);
              local_518 = pbVar20;
              if (pbVar20 == (byte *)0x0) {
                puVar21 = (undefined8 *)FUN_00426e90(pbVar29,1);
                if ((puVar21 != (undefined8 *)0x0) && ((int)((ulong)*puVar21 >> 8) != 0)) {
                  FUN_0046e670(&local_4d8);
                  lVar14 = *(long *)(*param_1 + 0x28);
                  if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                    FUN_00444bc0(&local_4c8);
                    lVar14 = FUN_004446b0(&local_4c8,"Fixed array type {} must have a subtype",
                                          &DAT_04864ad8,pbVar29);
                    *(char **)(lVar14 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    uVar24 = 0x305;
LAB_0046e190:
                    *(undefined8 *)(lVar14 + 0x30) = uVar24;
                    FUN_00444c00(&local_4c8);
                  }
                }
              }
              else {
                uVar31 = FUN_00428440();
                if ((uVar31 & 0x1f) != 1) {
                  pcVar23 = *(code **)(*param_1 + 0x10);
                  if ((pcVar23 != (code *)0x0) &&
                     (uVar31 = (*pcVar23)(pbVar20,*(undefined8 *)(*param_1 + 0x18)),
                     (uVar31 & 1) == 0)) {
                    FUN_0046e670(&local_4d8);
                    pcVar25 = (char *)*param_1;
                    if ((*(long *)(pcVar25 + 0x28) != 0) &&
                       ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                      FUN_00444bc0(&local_4c8);
                      lVar14 = FUN_004446b0(&local_4c8,
                                            "Array type \'{}\' has unreachable element type.",
                                            &DAT_04864ad8,pbVar29);
                      *(char **)(lVar14 + 0x28) =
                           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                      ;
                      *(undefined8 *)(lVar14 + 0x30) = 0x2f9;
                      FUN_00444c00(&local_4c8);
                      pcVar25 = (char *)*param_1;
                    }
                    if (*pcVar25 != '\0') goto LAB_0046e19c;
                  }
                  puVar21 = (undefined8 *)FUN_00426e90(pbVar29,1);
                  if ((puVar21 != (undefined8 *)0x0) && (0 < (int)((ulong)*puVar21 >> 8))) {
                    iVar7 = FUN_00426fc0(pbVar29);
                    iVar11 = FUN_00426fc0(local_518);
                    puVar21 = (undefined8 *)FUN_00426e90(pbVar29,1);
                    if (puVar21 == (undefined8 *)0x0) {
                      if (iVar7 != 0) goto LAB_0046e078;
                    }
                    else if (iVar7 != (int)((ulong)*puVar21 >> 8) * iVar11) {
LAB_0046e078:
                      FUN_0046e670(&local_4d8);
                      lVar14 = *(long *)(*param_1 + 0x28);
                      if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50)))
                      {
                        FUN_00444bc0(&local_4c8);
                        uVar8 = FUN_00426fc0(pbVar29);
                        local_98 = (byte *)CONCAT44(local_98._4_4_,uVar8);
                        puVar21 = (undefined8 *)FUN_00426e90(pbVar29,1);
                        if (puVar21 == (undefined8 *)0x0) {
                          uVar8 = 0;
                        }
                        else {
                          uVar8 = (undefined4)((ulong)*puVar21 >> 8);
                        }
                        local_a8 = (char *)CONCAT44(local_a8._4_4_,uVar8);
                        uVar8 = FUN_00426fc0(local_518);
                        local_78 = (byte *)CONCAT44(local_78._4_4_,uVar8);
                        lVar14 = FUN_004446b0(&local_4c8,
                                              "Fixed size array type \'{}\' ({} bytes) contains {} \'{}\' ({} bytes each), sizes mismatch."
                                              ,&DAT_04864ae8,pbVar29,&local_98,&local_a8,&local_518,
                                              &local_78);
                        *(char **)(lVar14 + 0x28) =
                             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                        ;
                        uVar24 = 0x2ff;
                        goto LAB_0046e190;
                      }
                    }
                  }
                }
              }
LAB_0046e19c:
              if (((int)local_4d8 < 0) && (FUN_0046e670(local_b8), *(char *)*param_1 != '\0'))
              goto LAB_0046e348;
            }
            pbVar29 = local_b0;
            uVar31 = FUN_00428440(local_b0);
            if (((uVar31 & 0x1f) == 7) &&
               ((local_518 = *(byte **)(pbVar29 + 8), local_518 != (byte *)0x0 &&
                (uVar31 = FUN_00428440(), (uVar31 & 0x1f) != 7)))) {
              lVar14 = *(long *)(*param_1 + 0x28);
              if ((lVar14 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                FUN_00444bc0(&local_4c8);
                lVar14 = FUN_004446b0(&local_4c8,
                                      "Registered record type \'{}\' has as parent type \'{}\', which is a non-record type."
                                      ,&DAT_04864a18,pbVar29,&local_518);
                *(char **)(lVar14 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                ;
                *(undefined8 *)(lVar14 + 0x30) = 0x331;
                *(undefined4 *)(lVar14 + 0xc) = 0;
                FUN_00444c00(&local_4c8);
              }
              local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
              FUN_0046e670(&local_4c8);
              if (((int)local_4c8 < 0) && (FUN_0046e670(local_b8), *(char *)*param_1 != '\0'))
              goto LAB_0046e348;
            }
            pbVar29 = local_b0;
            lVar14 = FUN_004272d0(local_b0);
            if (lVar14 == 0) {
              uVar12 = FUN_004274f0(pbVar29);
              if ((uVar12 >> 5 & 1) == 0) {
                uVar31 = FUN_00428440(pbVar29);
                if ((uVar31 & 0x1f) != 7) {
                  pbVar29 = (byte *)0x0;
                }
                local_518 = pbVar29;
                if (pbVar29 != (byte *)0x0) {
                  local_4d8 = (char *)0x0;
                  auVar34 = FUN_00428010();
                  uVar31 = auVar34._8_8_ - auVar34._0_8_;
                  if (0 < (int)(uVar31 >> 3)) {
                    lVar14 = 0;
                    do {
                      puVar32 = *(ulong **)(auVar34._0_8_ + lVar14 * 8);
                      local_4c8 = puVar32;
                      uVar33 = FUN_00428440(puVar32);
                      if ((((puVar32 != (ulong *)0x0) && ((uVar33 & 0x1f) == 8)) &&
                          (iVar7 = FUN_00426fc0(puVar32), iVar7 == 4)) &&
                         (pcVar25 = (char *)FUN_00427270(puVar32), pcVar25 != (char *)0x0)) {
                        __s2 = (char *)FUN_00427270(&DAT_04c1ff90);
                        iVar7 = strcmp(pcVar25,__s2);
                        if (iVar7 == 0) {
                          local_4d8 = (char *)FUN_00427b40(&local_4c8);
                          if (local_4d8 != (char *)0x0) {
                            FUN_00427bc0(&local_4c8,pbVar29,PTR_DAT_04bd7370);
                            puVar32 = local_4c8;
                            if ((local_4b8[0] & 1) != 0) {
                              FUN_0043dd50(local_4b8[0] & 0xfffffffffffffffe);
                            }
                            if ((puVar32 == (ulong *)0x0) || ((char)*puVar32 == '\0')) {
                              lVar14 = *(long *)(*param_1 + 0x28);
                              if ((lVar14 != 0) &&
                                 (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar14 + 0x50))) {
                                FUN_00444bc0(&local_4c8);
                                lVar14 = FUN_004446b0(&local_4c8,
                                                                                                            
                                                  "Record type \'{}\' contains a relarray \'{}\' but is not marked with a hk::ContainsRelArrays attribute."
                                                  ,&DAT_04864b18,&local_518,&local_4d8);
                                *(char **)(lVar14 + 0x28) =
                                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                                ;
                                *(undefined8 *)(lVar14 + 0x30) = 0x35b;
                                *(undefined4 *)(lVar14 + 0xc) = 0;
                                FUN_00444c00(&local_4c8);
                              }
                              local_4c8 = (ulong *)((ulong)local_4c8 & 0xffffffff00000000);
                              FUN_0046e670(&local_4c8);
                              if ((int)local_4c8 < 0) {
                                FUN_0046e670(local_b8);
                                local_80 = (ulong *)CONCAT44(local_80._4_4_,local_b8[0]);
                                iVar7 = local_b8[0];
                                goto joined_r0x0046ce6c;
                              }
                            }
                          }
                          break;
                        }
                      }
                      lVar14 = lVar14 + 1;
                    } while (lVar14 < (long)(uVar31 * 0x20000000) >> 0x20);
                  }
                }
              }
            }
            goto LAB_0046e348;
          }
          lVar14 = FUN_0044f1b0(local_b0);
          local_518 = *(byte **)(lVar14 + 8);
          if (local_518 == (byte *)0x0) goto LAB_0046d420;
          iVar7 = FUN_00426fc0(local_b0);
          iVar11 = FUN_00426fc0(local_518);
          if (iVar11 <= iVar7) {
LAB_0046d32c:
            auVar34 = FUN_00428460(local_518);
            if (((int)((ulong)(auVar34._8_8_ - auVar34._0_8_) >> 3) != 0) &&
               (auVar34 = FUN_00428460(local_b0),
               (int)((ulong)(auVar34._8_8_ - auVar34._0_8_) >> 3) != 0)) {
              FUN_00428460(local_518);
              local_4d8 = *(char **)(extraout_x1 + -8);
              iVar7 = FUN_00429050(&local_4d8);
              iVar11 = FUN_00426fc0(local_4d8);
              local_98 = (byte *)CONCAT44(local_98._4_4_,iVar11 + iVar7);
              FUN_00428460(local_b0);
              iVar7 = FUN_00429050();
              local_a8 = (char *)CONCAT44(local_a8._4_4_,iVar7);
              if (iVar7 < (int)local_98) {
                FUN_0046e670(local_b8);
                pcVar25 = (char *)*param_1;
                if ((*(long *)(pcVar25 + 0x28) != 0) &&
                   ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
                  FUN_00444bc0(&local_4c8);
                  uVar24 = FUN_00428460(local_b0);
                  lVar14 = FUN_004446b0(&local_4c8,
                                        "Field \'{}\' (starts at offset {}) overlaps with field \'{}\' in parent (ends at offset {})"
                                        ,&DAT_04864a68,uVar24,&local_a8,&local_4d8,&local_98);
                  *(char **)(lVar14 + 0x28) =
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                  ;
                  *(undefined8 *)(lVar14 + 0x30) = 0x259;
                  FUN_00444c00(&local_4c8);
                  pcVar25 = (char *)*param_1;
                }
                if (*pcVar25 != '\0') goto LAB_0046ddcc;
              }
            }
            goto LAB_0046d420;
          }
          FUN_0046e670(local_b8);
          pcVar25 = (char *)*param_1;
          if ((*(long *)(pcVar25 + 0x28) != 0) &&
             ((byte)pcVar25[0x30] <= *(byte *)(*(long *)(pcVar25 + 0x28) + 0x50))) {
            FUN_00444bc0(&local_4c8);
            lVar14 = FUN_004446b0(&local_4c8,"Type \'{}\' is smaller than parent type \'{}\'",
                                  &DAT_04861bc0,&local_b0,&local_518);
            *(char **)(lVar14 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
            ;
            *(undefined8 *)(lVar14 + 0x30) = 0x250;
            FUN_00444c00(&local_4c8);
            pcVar25 = (char *)*param_1;
          }
          if (*pcVar25 == '\0') goto LAB_0046d32c;
LAB_0046ddcc:
          local_80 = (ulong *)CONCAT44(local_80._4_4_,local_b8[0]);
          if (-1 < local_b8[0]) goto LAB_0046e368;
          goto LAB_0046e354;
        }
        local_80 = (ulong *)((ulong)local_80 & 0xffffffff00000000);
      }
LAB_0046e368:
      puVar28 = puVar28 + 1;
    } while (puVar28 != param_3);
    local_520[0] = local_528[0];
    if (local_528[0] < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) == '\0') {
        return local_528[0];
      }
      FUN_00444bc0(&local_4c8,*(long *)(*param_1 + 0x28),1);
      local_498 = 0x43d;
      goto LAB_0046e3a4;
    }
  }
  iVar7 = local_520[0];
  local_518 = (byte *)0x0;
  local_510 = (byte *)0x8000000000000000;
  uVar12 = *(uint *)(param_4 + 1);
  pbVar29 = *param_4;
  uVar24 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_4c8 = (ulong *)CONCAT44(local_4c8._4_4_,uVar12);
  local_528[0] = local_520[0];
  if ((int)uVar12 < 1) {
    local_518 = (byte *)0x0;
    local_510 = (byte *)0x8000000000000000;
  }
  else {
    local_518 = (byte *)FUN_00421ed0(uVar24,8,&local_4c8);
    local_510 = (byte *)CONCAT44((int)local_4c8,uVar12);
    uVar3 = uVar12 & 3;
    pbVar20 = local_518;
    if (2 < uVar12 - 1) {
      iVar11 = uVar3 - uVar12;
      pbVar18 = local_518;
      do {
        *(undefined8 *)pbVar18 = *(undefined8 *)pbVar29;
        *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar29 + 8);
        *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar29 + 0x10);
        pbVar1 = pbVar29 + 0x18;
        pbVar20 = pbVar18 + 0x20;
        pbVar29 = pbVar29 + 0x20;
        *(undefined8 *)(pbVar18 + 0x18) = *(undefined8 *)pbVar1;
        iVar11 = iVar11 + 4;
        pbVar18 = pbVar20;
      } while (iVar11 != 0);
    }
    if (uVar3 != 0) {
      iVar11 = -uVar3;
      do {
        iVar11 = iVar11 + 1;
        *(undefined8 *)pbVar20 = *(undefined8 *)pbVar29;
        pbVar20 = pbVar20 + 8;
        pbVar29 = pbVar29 + 8;
      } while (iVar11 != 0);
    }
  }
  FUN_0043d5f0(auStack_508);
  iVar11 = (int)local_510 + (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if ((int)(local_510._4_4_ & 0x3fffffff) < iVar11) {
    local_518 = (byte *)FUN_00426720(uVar24,iVar11,8,local_518,(ulong)local_510 & 0xffffffff,
                                     (long)&local_510 + 4);
  }
  if (local_500 * 2 < (iVar11 + 1) * 3) {
    FUN_0043d3c0(auStack_508);
  }
  puVar30 = PTR_DAT_048607c0;
  do {
    if (param_2 == param_3) goto LAB_0046cbf8;
    local_4bc = 0x80000020;
    param_3 = param_3 + -1;
    local_4b8[0] = *param_3;
    local_4c0 = 1;
    local_4c8 = local_4b8;
    iVar11 = FUN_0046f110(param_1,&local_4c8,&local_518);
    local_4c0 = 0;
    if ((-1 < (int)local_4bc) && (local_4c8 != (ulong *)0x0)) {
      FUN_00421f90(puVar30,local_4c8,8,local_4bc & 0x3fffffff);
    }
  } while (-1 < iVar11);
  FUN_0046e670(local_528);
  iVar7 = local_528[0];
  if (*(char *)*param_1 == '\0') {
LAB_0046cbf8:
    local_520[0] = iVar7;
    if (iVar7 < 0) {
      if (*(char *)(*(long *)(*param_1 + 0x28) + 0x50) != '\0') {
        FUN_00444bc0(&local_4c8,*(long *)(*param_1 + 0x28),1);
        local_4a0 = 
        "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
        ;
        local_498 = 0x442;
        uVar19 = FUN_004446b0(&local_4c8,"HK_RETURN_IF_FAILED({}) returning {}. ",&DAT_048648a0,
                              "status",local_520);
        FUN_004446b0(uVar19,&DAT_0407ebb1,&DAT_0413df78);
        FUN_00444c00(&local_4c8);
      }
      goto LAB_0046cc7c;
    }
    if (&local_518 != param_4) {
      *(undefined4 *)(param_4 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)param_4 + 0xc)) && (*param_4 != (byte *)0x0)) {
        FUN_00421f90(uVar24,*param_4,8,*(uint *)((long)param_4 + 0xc) & 0x3fffffff);
      }
      *param_4 = (byte *)0x0;
      param_4[1] = (byte *)0x8000000000000000;
      if ((long)local_510 < 0) {
        FUN_00426620(uVar24,&local_518,8);
      }
      *param_4 = local_518;
      *(int *)(param_4 + 1) = (int)local_510;
      *(uint *)((long)param_4 + 0xc) = local_510._4_4_;
      local_518 = (byte *)0x0;
      local_510 = (byte *)0x0;
    }
    FUN_0043d7c0(param_4 + 2,auStack_508);
  }
  local_520[0] = iVar7;
LAB_0046cc7c:
  FUN_0043d280(auStack_508);
  uVar31 = (ulong)local_510;
  uVar12 = local_510._4_4_;
  local_510 = (byte *)((ulong)local_510._4_4_ << 0x20);
  if ((-1 < (long)uVar31) && (local_518 != (byte *)0x0)) {
    FUN_00421f90(uVar24,local_518,8,uVar12 & 0x3fffffff);
  }
  return local_520[0];
}

