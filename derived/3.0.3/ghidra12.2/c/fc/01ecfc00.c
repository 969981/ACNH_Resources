
undefined8 FUN_01ecfc00(long param_1,undefined8 *param_2,uint param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  float *pfVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  byte *pbVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_1ccc;
  float fStack_1cc8;
  float local_1cc4;
  undefined8 local_1cc0;
  undefined1 *local_1cb8;
  undefined8 ****local_1cb0;
  undefined8 ****ppppuStack_1ca8;
  undefined8 ****local_1ca0 [29];
  undefined8 ****local_1bb8 [29];
  undefined8 ****local_1ad0 [29];
  undefined8 ****local_19e8 [29];
  undefined8 ****local_1900 [29];
  undefined8 ****local_1818 [29];
  undefined8 ****local_1730 [29];
  undefined8 ****local_1648 [29];
  undefined8 ****local_1560 [29];
  undefined8 ****local_1478 [29];
  undefined8 ****local_1390 [29];
  undefined8 ****local_12a8 [29];
  undefined8 ****local_11c0 [29];
  undefined8 ****local_10d8 [29];
  undefined8 ****local_ff0 [29];
  undefined8 ****local_f08 [29];
  undefined8 ****local_e20 [29];
  undefined8 ****local_d38 [29];
  undefined8 ****local_c50 [29];
  undefined8 ****local_b68 [29];
  undefined8 ****local_a80 [29];
  undefined8 ****local_998 [29];
  undefined8 ****local_8b0 [29];
  undefined8 ****local_7c8 [29];
  undefined8 ****local_6e0 [29];
  undefined8 ****local_5f8 [29];
  undefined8 ***local_510 [29];
  undefined8 **local_428 [29];
  undefined8 *local_340 [29];
  undefined8 local_258 [29];
  undefined1 auStack_170 [240];
  
  puVar5 = PTR_DAT_04bb2720;
  if ((int)param_3 < 0) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb4828;
  if (lVar12 != 0) {
    local_258[0] = 0;
    local_1ca0[0] = local_1bb8;
    local_1bb8[0] = local_1ad0;
    local_1ad0[0] = local_19e8;
    local_1900[0] = local_1818;
    local_1818[0] = local_1730;
    local_1cb0 = local_1ca0;
    local_1730[0] = local_1648;
    local_19e8[0] = local_1900;
    local_1648[0] = local_1560;
    local_1560[0] = local_1478;
    local_1478[0] = local_1390;
    local_1390[0] = local_12a8;
    local_12a8[0] = local_11c0;
    local_11c0[0] = local_10d8;
    local_10d8[0] = local_ff0;
    local_ff0[0] = local_f08;
    local_f08[0] = local_e20;
    local_e20[0] = local_d38;
    local_d38[0] = local_c50;
    local_c50[0] = local_b68;
    local_1cc0 = 0;
    local_1cb8 = (undefined1 *)0x0;
    local_b68[0] = local_a80;
    local_a80[0] = local_998;
    local_998[0] = local_8b0;
    local_8b0[0] = local_7c8;
    local_7c8[0] = local_6e0;
    local_6e0[0] = local_5f8;
    local_5f8[0] = local_510;
    local_510[0] = local_428;
    local_428[0] = local_340;
    local_340[0] = local_258;
    if (auStack_170 != (undefined1 *)0x0) {
      local_1cc0 = 0x1e00000000;
      local_1cb8 = auStack_170;
    }
    lVar9 = *(long *)PTR_DAT_04bb2720;
    ppppuStack_1ca8 = local_1cb0;
    if (lVar9 == 0) {
      puVar13 = &DAT_055c04a0;
    }
    else {
      puVar13 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar13 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar6 = FUN_006bd550(*puVar13,0);
        puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar6 != 0x758f7eaf) {
          puVar13 = &DAT_055c04a0;
        }
      }
    }
    uVar3 = *(undefined4 *)(puVar13 + 7);
    lVar9 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
    if (lVar9 == 0) {
      pbVar15 = PTR_DAT_04bb9cf0;
    }
    else if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
            (puVar13 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar13 == (undefined8 *)0x0)) {
      pbVar15 = (byte *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
    }
    else {
      uVar7 = (**(code **)*puVar13)();
      pbVar15 = (byte *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8));
      if ((uVar7 & 1) != 0) {
        if (*(long *)(lVar9 + 0x28) != 0) {
          puVar13 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8);
          if (puVar13 != (undefined8 *)0x0) {
            (**(code **)*puVar13)();
          }
        }
      }
    }
    uVar7 = (ulong)*pbVar15;
    if ((uVar7 < 0x23) && (pbVar15[1] <= (byte)PTR_DAT_04bc27f0[uVar7])) {
      uVar8 = 0;
      if ((*(uint *)(PTR_DAT_04bc2a20 + uVar7 * 4) & 1 << (ulong)(pbVar15[1] & 0x1f)) != 0) {
        uVar8 = uVar7;
      }
    }
    else {
      uVar8 = 0;
    }
    FUN_01c23f70(lVar12,&local_1cc0,uVar3,uVar8,1,1);
    if (param_3 < (uint)local_1cc0) {
      pfVar11 = *(float **)(local_1cb8 + (ulong)param_3 * 8);
      fVar18 = pfVar11[0x37];
      fVar19 = pfVar11[0x38];
      fVar20 = pfVar11[0x39];
      fVar16 = (float)NEON_ucvtf(pfVar11[3]);
      fVar17 = cosf(fVar16 * 1.4629181e-09);
      fVar16 = sinf(fVar16 * 1.4629181e-09);
      puVar4 = PTR_DAT_04bb2640;
      fStack_1cc8 = fVar19 + pfVar11[1];
      local_1ccc = *pfVar11 + fVar20 * fVar16 + fVar18 * fVar17;
      local_1cc4 = (fVar20 * fVar17 - fVar18 * fVar16) + pfVar11[2];
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        lVar12 = *(long *)puVar5;
        uVar7 = 0;
        piVar1 = (int *)(PTR_DAT_04bbe4b0 + 8);
        do {
          uVar10 = (uint)uVar7;
          if (lVar12 == 0) {
LAB_01ecffe0:
            iVar6 = 0;
          }
          else {
            iVar6 = 0;
            if (*(long *)(lVar12 + 0x330) != 0) {
              puVar13 = (undefined8 *)
                        (**(code **)(**(long **)puVar4 + 0x18))
                                  (*(long **)puVar4,*(undefined4 *)(lVar12 + 0x338));
              iVar6 = FUN_006bd550(*puVar13,0);
              lVar12 = *(long *)puVar5;
              if ((iVar6 != 0x758f7eaf) || (lVar12 == 0)) goto LAB_01ecffe0;
              iVar6 = 0;
              if (*(long *)(lVar12 + 0x330) != 0) {
                iVar6 = *(int *)(*(long *)(lVar12 + 0x330) + 0x244);
              }
            }
          }
          piVar2 = piVar1 + uVar7;
          if (0x32 < uVar10) {
            piVar2 = piVar1;
          }
          if (*piVar2 == iVar6) goto LAB_01ed0010;
          uVar14 = 0x33;
          if ((int)uVar10 < 0x33) {
            uVar14 = uVar10 + 1;
          }
          uVar7 = (ulong)uVar14;
        } while (uVar14 != 0x33);
      }
      uVar10 = 0;
LAB_01ed0010:
      if (((uVar10 < 0x22) && ((1L << ((ulong)uVar10 & 0x3f) & 0x2000000e0U) != 0)) &&
         (uVar7 = FUN_02087eec(*(undefined8 *)(param_1 + 0x18),&local_1ccc,0), (uVar7 & 1) != 0)) {
        *(float *)(param_2 + 1) = local_1cc4;
        *param_2 = CONCAT44(fStack_1cc8,local_1ccc);
        return 1;
      }
    }
  }
  return 0;
}

