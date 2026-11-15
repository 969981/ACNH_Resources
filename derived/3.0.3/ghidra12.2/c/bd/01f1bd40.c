
undefined8 FUN_01f1bd40(long param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  float *pfVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 local_1cf4;
  undefined8 local_1cf0;
  undefined1 *local_1ce8;
  undefined8 *******local_1ce0;
  undefined8 *******pppppppuStack_1cd8;
  undefined8 *******local_1cd0 [29];
  undefined8 *******local_1be8 [29];
  undefined8 *******local_1b00 [29];
  undefined8 *******local_1a18 [29];
  undefined8 *******local_1930 [29];
  undefined8 *******local_1848 [29];
  undefined8 *******local_1760 [29];
  undefined8 *******local_1678 [29];
  undefined8 *******local_1590 [29];
  undefined8 *******local_14a8 [29];
  undefined8 *******local_13c0 [29];
  undefined8 *******local_12d8 [29];
  undefined8 *******local_11f0 [29];
  undefined8 *******local_1108 [29];
  undefined8 *******local_1020 [29];
  undefined8 *******local_f38 [29];
  undefined8 *******local_e50 [29];
  undefined8 *******local_d68 [29];
  undefined8 *******local_c80 [29];
  undefined8 *******local_b98 [29];
  undefined8 *******local_ab0 [29];
  undefined8 *******local_9c8 [29];
  undefined8 *******local_8e0 [29];
  undefined8 ******local_7f8 [29];
  undefined8 *****local_710 [29];
  undefined8 ****local_628 [29];
  undefined8 ***local_540 [29];
  undefined8 **local_458 [29];
  undefined8 *local_370 [29];
  undefined8 local_288 [29];
  undefined1 auStack_1a0 [240];
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 local_9c [7];
  undefined1 local_95;
  
  puVar5 = PTR_DAT_04bb2720;
  if ((int)param_3 < 0) {
    return 0;
  }
  lVar13 = *(long *)PTR_DAT_04bb4828;
  if (lVar13 == 0) {
    return 0;
  }
  local_288[0] = 0;
  local_1cd0[0] = local_1be8;
  local_1be8[0] = local_1b00;
  local_1b00[0] = local_1a18;
  local_1a18[0] = local_1930;
  local_1ce0 = local_1cd0;
  local_1930[0] = local_1848;
  local_1cf0 = 0;
  local_1ce8 = (undefined1 *)0x0;
  local_1848[0] = local_1760;
  local_1760[0] = local_1678;
  local_1678[0] = local_1590;
  local_1590[0] = local_14a8;
  local_14a8[0] = local_13c0;
  local_13c0[0] = local_12d8;
  local_12d8[0] = local_11f0;
  local_11f0[0] = local_1108;
  local_1108[0] = local_1020;
  local_1020[0] = local_f38;
  local_f38[0] = local_e50;
  local_e50[0] = local_d68;
  local_d68[0] = local_c80;
  local_c80[0] = local_b98;
  local_b98[0] = local_ab0;
  local_ab0[0] = local_9c8;
  local_9c8[0] = local_8e0;
  local_8e0[0] = local_7f8;
  local_7f8[0] = local_710;
  local_710[0] = local_628;
  local_628[0] = local_540;
  local_540[0] = local_458;
  local_458[0] = local_370;
  local_370[0] = local_288;
  if (auStack_1a0 != (undefined1 *)0x0) {
    local_1cf0 = 0x1e00000000;
    local_1ce8 = auStack_1a0;
  }
  lVar10 = *(long *)PTR_DAT_04bb2720;
  uVar6 = 0;
  pppppppuStack_1cd8 = local_1ce0;
  if (lVar10 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      uVar6 = 0;
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      local_1cf0._0_1_ = uVar6;
      uVar6 = (undefined1)local_1cf0;
      iVar7 = FUN_006bd550(*puVar14,0);
      local_1cf0._0_1_ = uVar6;
      uVar6 = (undefined1)local_1cf0;
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  local_1cf0._0_1_ = uVar6;
  local_1cf4._3_1_ = (undefined1)local_1cf0;
  local_95 = 0;
  uVar3 = *(undefined4 *)(puVar14 + 7);
  local_a8 = local_9c;
  local_a0 = 8;
  local_9c[0] = 0;
  local_b0 = PTR_DAT_04bb3768 + 0x10;
  uVar8 = FUN_021d62e0(&local_b0,*(undefined4 *)(*(long *)(param_1 + 8) + 0x50c));
  if ((uVar8 & 1) == 0) {
    local_1cf4 = CONCAT13(local_1cf4._3_1_,*(undefined3 *)PTR_DAT_04bb9cf0);
  }
  else {
    local_1cf4 = CONCAT22((short)(CONCAT13(local_1cf4._3_1_,0x80000) >> 0x10),0x23);
    FUN_020fd3a0(&local_1cf4,&local_b0);
  }
  if ((local_1cf4 & 0xff) < 0x23) {
    uVar8 = (ulong)(local_1cf4 & 0xffffff) & 0xff;
    if ((local_1cf4 >> 8 & 0xff) <= (uint)(byte)PTR_DAT_04bc27f0[uVar8]) {
      uVar9 = 0;
      if ((*(uint *)(PTR_DAT_04bc2a20 + uVar8 * 4) & 1 << (ulong)(local_1cf4 >> 8 & 0x1f)) != 0) {
        uVar9 = uVar8;
      }
      goto LAB_01f1c020;
    }
  }
  uVar9 = 0;
LAB_01f1c020:
  FUN_01c23f70(lVar13,&local_1cf0,uVar3,uVar9,1,1);
  if (param_3 < (uint)local_1cf0) {
    pfVar12 = *(float **)(local_1ce8 + (ulong)param_3 * 8);
    fVar18 = pfVar12[0x37];
    fVar19 = pfVar12[0x38];
    fVar20 = pfVar12[0x39];
    fVar16 = (float)NEON_ucvtf(pfVar12[3]);
    fVar17 = cosf(fVar16 * 1.4629181e-09);
    fVar16 = sinf(fVar16 * 1.4629181e-09);
    puVar4 = PTR_DAT_04bb2640;
    local_b0 = (undefined *)
               CONCAT44(fVar19 + pfVar12[1],*pfVar12 + fVar20 * fVar16 + fVar18 * fVar17);
    local_a8 = (undefined1 *)
               CONCAT44(local_a8._4_4_,(fVar20 * fVar17 - fVar18 * fVar16) + pfVar12[2]);
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      lVar13 = *(long *)puVar5;
      uVar8 = 0;
      piVar1 = (int *)(PTR_DAT_04bbe4b0 + 8);
      do {
        uVar11 = (uint)uVar8;
        if (lVar13 == 0) {
LAB_01f1c130:
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
          if (*(long *)(lVar13 + 0x330) != 0) {
            puVar14 = (undefined8 *)
                      (**(code **)(**(long **)puVar4 + 0x18))
                                (*(long **)puVar4,*(undefined4 *)(lVar13 + 0x338));
            iVar7 = FUN_006bd550(*puVar14,0);
            lVar13 = *(long *)puVar5;
            if ((iVar7 != 0x758f7eaf) || (lVar13 == 0)) goto LAB_01f1c130;
            iVar7 = 0;
            if (*(long *)(lVar13 + 0x330) != 0) {
              iVar7 = *(int *)(*(long *)(lVar13 + 0x330) + 0x244);
            }
          }
        }
        piVar2 = piVar1 + uVar8;
        if (0x32 < uVar11) {
          piVar2 = piVar1;
        }
        if (*piVar2 == iVar7) goto LAB_01f1c160;
        uVar15 = 0x33;
        if ((int)uVar11 < 0x33) {
          uVar15 = uVar11 + 1;
        }
        uVar8 = (ulong)uVar15;
      } while (uVar15 != 0x33);
    }
    uVar11 = 0;
LAB_01f1c160:
    if ((uVar11 < 0x22) && ((1L << ((ulong)uVar11 & 0x3f) & 0x2000000e0U) != 0)) {
      local_1cf4 = uVar11;
      uVar8 = FUN_02087eec(*(undefined8 *)(param_1 + 0x18),&local_b0,0);
      if ((uVar8 & 1) != 0) {
        *(undefined4 *)(param_2 + 1) = local_a8._0_4_;
        *param_2 = local_b0;
        return 1;
      }
    }
  }
  return 0;
}

