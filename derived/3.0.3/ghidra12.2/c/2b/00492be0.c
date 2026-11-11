
/* WARNING: Removing unreachable block (ram,0x004930d8) */

void FUN_00492be0(int *param_1,ulong *param_2,ulong param_3,undefined8 param_4,int param_5)

{
  char *pcVar1;
  long *plVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  ulong *puVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  long *plVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  char *pcVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  char local_b4 [4];
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  int local_94;
  undefined1 auStack_90 [64];
  
  if ((param_3 & 1) != 0) {
    return;
  }
  if (param_1[0x4e] == 1) {
    if (DAT_04c70f78 == '\0') goto LAB_00492cc4;
    FUN_00444bc0(auStack_90,&DAT_04c70f28,1);
    lVar10 = FUN_004446b0(auStack_90,"Types cannot be added to when using a compendium.",
                          &DAT_0413df78);
    uVar17 = 0x73c;
  }
  else {
    uVar12 = param_1[6];
    iVar16 = param_1[0x1a];
    uVar9 = uVar12;
    if ((int)uVar12 < 2) {
      uVar9 = 1;
    }
    if ((int)uVar9 <= iVar16) {
      if ((int)(param_1[7] & 0x3fffffffU) < iVar16) {
        uVar17 = FUN_00426720(PTR_DAT_048607b8,iVar16,8,*(undefined8 *)(param_1 + 4));
        uVar12 = param_1[6];
        *(undefined8 *)(param_1 + 4) = uVar17;
      }
      if ((int)uVar12 < iVar16) {
        param_1[6] = iVar16;
        memset((void *)(*(long *)(param_1 + 4) + (long)(int)uVar12 * 8),0,
               (ulong)(iVar16 + ~uVar12) * 8 + 8);
      }
      else if (iVar16 < (int)uVar12) {
        param_1[6] = iVar16;
      }
      if (param_5 == 0) {
        if (param_2[1] < *param_2 + *(long *)(param_1 + 0x72)) {
          *param_2 = param_2[1];
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
        }
        else {
          *param_2 = *param_2 + *(long *)(param_1 + 0x72);
          if ((char)param_2[3] == '\0') {
            if (*param_1 < 0) goto LAB_00492f28;
            goto LAB_00492d68;
          }
        }
        *param_1 = -0x7ffbfe00;
LAB_00492f28:
        if (DAT_04c70f78 == '\0') {
          return;
        }
        FUN_00444bc0(auStack_90,&DAT_04c70f28,1);
        lVar10 = FUN_004446b0(auStack_90,"Error in input stream.",&DAT_0413df78);
        *(char **)(lVar10 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar10 + 0x30) = 0x749;
        FUN_00444c00(auStack_90);
        return;
      }
LAB_00492d68:
      puVar7 = PTR_DAT_048607c0;
      iVar16 = param_1[0x7a];
      local_a8 = (long *)0x0;
      local_a0 = -0x8000000000000000;
      pcVar14 = (char *)*param_2;
      local_94 = iVar16;
      if ((long)pcVar14 < (long)param_2[1]) {
        do {
          if (*pcVar14 == '\0') break;
          if (iVar16 < 1) {
            if (DAT_04c70f78 == '\0') goto LAB_00493200;
            FUN_00444bc0(auStack_90,&DAT_04c70f28,1);
            lVar10 = FUN_004446b0(auStack_90,
                                  "Too many type bodies actually present in bundle compared to what expected ({})."
                                  ,&DAT_04853780,&local_94);
            *(char **)(lVar10 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            *(undefined8 *)(lVar10 + 0x30) = 0x753;
            goto LAB_004931f8;
          }
          FUN_0048d8b0(param_1,param_2,&local_b0,local_b4);
          if ((char)param_2[3] != '\0') {
            *param_1 = -0x7ffbfe00;
LAB_00493248:
            if (DAT_04c70f78 == '\0') goto LAB_00493298;
            FUN_00444bc0(auStack_90,&DAT_04c70f28,1);
            lVar10 = FUN_004446b0(auStack_90,"Error in input stream.",&DAT_0413df78);
            uVar17 = 0x757;
            goto LAB_0049328c;
          }
          if (*param_1 < 0) goto LAB_00493248;
          if (local_b4[0] != '\0') {
            if ((uint)local_a0 == (local_a0._4_4_ & 0x3fffffff)) {
              FUN_00426990(puVar7,&local_a8,8);
            }
            local_a8[(int)(uint)local_a0] = local_b0;
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 + 1);
          }
          iVar16 = param_1[0x7a] + -1;
          param_1[0x7a] = iVar16;
          pcVar14 = (char *)*param_2;
        } while ((long)pcVar14 < (long)param_2[1]);
      }
      if (*param_1 < 0) {
LAB_00493298:
        uVar9 = local_a0._4_4_;
        goto joined_r0x004932c0;
      }
      if (param_1[0x4e] == 2) {
        *(ulong *)(param_1 + 0x54) = param_2[2];
        *(char **)(param_1 + 0x56) = pcVar14;
      }
      iVar16 = param_1[0x2a];
      if (iVar16 == 0) {
        param_1[0x2a] = 0;
      }
      else {
        puVar20 = *(undefined8 **)(param_1 + 0x28);
        lVar10 = *(long *)(param_1 + 4);
        iVar4 = param_1[6];
        iVar13 = 0;
        puVar18 = (undefined8 *)0x0;
        puVar21 = puVar20 + (long)iVar16 * 2 + -2;
        do {
          while ((iVar4 <= *(int *)(puVar21 + 1) ||
                 (lVar22 = *(long *)(lVar10 + (long)*(int *)(puVar21 + 1) * 8), lVar22 == 0))) {
            puVar8 = puVar20;
            if (puVar18 != (undefined8 *)0x0) {
              puVar8 = puVar21 + 2;
              puVar21 = puVar18;
            }
joined_r0x00492e88:
            puVar18 = puVar21;
            puVar21 = puVar8;
            iVar16 = iVar16 + -1;
            if (iVar16 == 0) goto LAB_00492ed0;
          }
          iVar13 = iVar13 + 1;
          *(long *)*puVar21 = lVar22;
          if (puVar18 == (undefined8 *)0x0) {
            puVar8 = puVar21 + -2;
            puVar21 = puVar18;
            goto joined_r0x00492e88;
          }
          *puVar21 = *puVar18;
          puVar21[1] = puVar18[1];
          puVar20 = puVar21 + 2;
          puVar21 = puVar18 + -2;
          puVar18 = (undefined8 *)0x0;
          iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
LAB_00492ed0:
        param_1[0x2a] = param_1[0x2a] - iVar13;
      }
      if ((uint)local_a0 != 0) {
        plVar2 = local_a8 + (int)(uint)local_a0;
        plVar23 = local_a8;
        do {
          if ((*(char *)(*plVar23 + 2) < '\0') &&
             (puVar20 = (undefined8 *)FUN_00426db0(*plVar23,0x800000), puVar20 != (undefined8 *)0x0)
             ) {
            plVar15 = (long *)*puVar20;
            sVar6 = (short)*plVar15;
          }
          else {
            plVar15 = (long *)0x0;
            sVar6 = sRam0000000000000000;
          }
          if ((long)sVar6 != 0) {
            lVar10 = (long)sVar6 << 3;
            do {
              plVar15 = plVar15 + 1;
              if (((*(byte *)(*plVar15 + 2) >> 4 & 1) != 0) &&
                 (puVar11 = (ulong *)FUN_00426db0(*plVar15,0x100000), puVar11 != (ulong *)0x0)) {
                uVar9 = FUN_00426fc0(*(undefined8 *)(*plVar15 + 8));
                *puVar11 = (ulong)(uVar9 & 0xffff | (uint)*(ushort *)((long)puVar11 + 2) << 0x10);
              }
              lVar10 = lVar10 + -8;
            } while (lVar10 != 0);
          }
          plVar23 = plVar23 + 1;
        } while (plVar23 != plVar2);
      }
      pcVar14 = (char *)*param_2;
      pcVar3 = (char *)param_2[1];
      if ((long)pcVar3 - (long)pcVar14 < 4) {
        pcVar19 = pcVar14;
LAB_004930a4:
        do {
          if (pcVar3 == pcVar19) {
            if ((char)param_2[3] == '\0') {
              if (-1 < *param_1) {
                if (param_5 != 0) goto LAB_00493298;
                *(ulong *)(param_1 + 0x72) = (long)pcVar14 - param_2[2];
                uVar9 = local_a0._4_4_;
                goto joined_r0x004932c0;
              }
            }
            else {
              *param_1 = -0x7ffbfe00;
            }
            if (DAT_04c70f78 != '\0') {
              FUN_00444bc0(auStack_90,&DAT_04c70f28,1);
              lVar10 = FUN_004446b0(auStack_90,"Error in input stream.",&DAT_0413df78);
              uVar17 = 0x791;
LAB_0049328c:
              *(char **)(lVar10 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              *(undefined8 *)(lVar10 + 0x30) = uVar17;
              FUN_00444c00(auStack_90);
            }
            goto LAB_00493298;
          }
          pcVar1 = pcVar19 + 1;
          if (pcVar3 < pcVar1) {
            *param_2 = (ulong)pcVar3;
            *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
            pcVar19 = pcVar3;
            goto LAB_004930a4;
          }
          cVar5 = *pcVar19;
          *param_2 = (ulong)pcVar1;
          pcVar19 = pcVar1;
        } while (cVar5 == '\0');
        if (DAT_04c70f78 != '\0') {
          FUN_00444bc0(auStack_90,&DAT_04c70f28,1);
          lVar10 = FUN_004446b0(auStack_90,
                                "Found non-zero byte in padding of type body section (TBOD/TBDY).",
                                &DAT_0413df78);
          *(char **)(lVar10 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar10 + 0x30) = 0x78f;
          *(undefined4 *)(lVar10 + 0xc) = 0x68bf09d3;
          goto LAB_004931f8;
        }
      }
      else if (DAT_04c70f78 != '\0') {
        FUN_00444bc0(auStack_90,&DAT_04c70f28,1);
        local_b0 = param_2[1] - *param_2;
        lVar10 = FUN_004446b0(auStack_90,
                              "Type body section (TBOD/TBDY) has oversized padding: max padding of 3 bytes expected, found {} instead."
                              ,&DAT_048669d0,&local_b0);
        *(char **)(lVar10 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar10 + 0x30) = 0x78a;
        *(undefined4 *)(lVar10 + 0xc) = 0x16964161;
LAB_004931f8:
        FUN_00444c00(auStack_90);
      }
LAB_00493200:
      *param_1 = -0x7ffbfe00;
      uVar9 = local_a0._4_4_;
joined_r0x004932c0:
      if (local_a0 < 0) {
        return;
      }
      local_a0 = (ulong)uVar9 << 0x20;
      if (local_a8 == (long *)0x0) {
        return;
      }
      FUN_00421f90(PTR_DAT_048607c0,local_a8,8,uVar9 & 0x3fffffff);
      return;
    }
    if (DAT_04c70f78 == '\0') goto LAB_00492cc4;
    FUN_00444bc0(auStack_90,&DAT_04c70f28,1);
    lVar10 = FUN_004446b0(auStack_90,"Cannot remove types while deserializing.",&DAT_0413df78);
    uVar17 = 0x741;
  }
  *(char **)(lVar10 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar10 + 0x30) = uVar17;
  FUN_00444c00(auStack_90);
LAB_00492cc4:
  *param_1 = -0x7ffbfe00;
  return;
}

