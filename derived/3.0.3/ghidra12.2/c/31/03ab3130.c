
void FUN_03ab3130(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float local_11c;
  float local_118;
  float local_114;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (((*(char *)(*(long *)(param_1 + 8) + 0x5f0) != '\0') &&
      (lVar7 = *(long *)(param_1 + 0x430), lVar7 != 0)) && (*(char *)(lVar7 + 0x468) != '\0')) {
    fVar13 = *(float *)(param_1 + 0x55c);
    lVar12 = *(long *)(param_1 + 0x480);
    if ((*(byte *)(param_1 + 0x558) & 1) == 0) {
      fVar13 = 0.0;
    }
    uVar9 = (int)*(char *)(param_1 + 0x559);
    if ((*(byte *)(param_1 + 0x558) & 1 &
        (int)*(char *)(param_1 + 0x55a) == (uint)*(byte *)(param_3 + 8)) == 0) {
      uVar9 = (uint)*(byte *)(param_3 + 8);
    }
    if (*(uint *)(param_1 + 0x478) <= uVar9) {
      uVar9 = 0;
    }
    if (lVar12 != 0) {
      lVar10 = lVar12 + (long)(int)uVar9 * 0xfc8;
      plVar1 = (long *)(lVar10 + 0x378);
      plVar2 = (long *)(lVar10 + 0x318);
      if (*(int *)(lVar10 + 0x238) < 1) {
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_100 = 0;
        lStack_f8 = 0;
        local_110 = 0;
        local_108 = 0;
        local_11c = 0.0;
      }
      else {
        lVar11 = *plVar1;
        local_110 = *(undefined8 *)(lVar11 + 0x2e0);
        local_108 = *(undefined8 *)(lVar11 + 0x2e8);
        local_100 = *(undefined8 *)(lVar11 + 0x2f0);
        lStack_f8 = *(undefined8 *)(lVar11 + 0x2f8);
        uStack_d8 = *(undefined8 *)(lVar11 + 0x318);
        local_e0 = *(undefined8 *)(lVar11 + 0x310);
        local_e8 = *(undefined8 *)(lVar11 + 0x308);
        local_f0 = *(undefined8 *)(lVar11 + 0x300);
        local_11c = *(float *)(*plVar2 + 4) - fVar13;
      }
      if (*(int *)(lVar10 + 0x238) < 2) {
        local_a0 = 0;
        uStack_98 = 0;
        local_118 = 0.0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
      }
      else {
        lVar11 = *plVar1 + (ulong)(1 < *(uint *)(lVar10 + 0x370)) * 0x5d0;
        uStack_a8 = *(undefined8 *)(lVar11 + 0x308);
        local_a0 = *(undefined8 *)(lVar11 + 0x310);
        uStack_98 = *(undefined8 *)(lVar11 + 0x318);
        local_b0 = *(undefined8 *)(lVar11 + 0x300);
        local_d0 = *(undefined8 *)(lVar11 + 0x2e0);
        uStack_c8 = *(undefined8 *)(lVar11 + 0x2e8);
        local_c0 = *(undefined8 *)(lVar11 + 0x2f0);
        uStack_b8 = *(undefined8 *)(lVar11 + 0x2f8);
        local_118 = *(float *)(*plVar2 + 8) - fVar13;
      }
      if (*(int *)(lVar10 + 0x238) < 3) {
        local_60 = 0;
        uStack_58 = 0;
        local_114 = 0.0;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_90 = 0;
        uStack_88 = 0;
      }
      else {
        lVar11 = 0xba0;
        if (*(uint *)(lVar10 + 0x370) < 3) {
          lVar11 = 0;
        }
        lVar11 = *plVar1 + lVar11;
        uStack_68 = *(undefined8 *)(lVar11 + 0x308);
        local_60 = *(undefined8 *)(lVar11 + 0x310);
        uStack_58 = *(undefined8 *)(lVar11 + 0x318);
        local_70 = *(undefined8 *)(lVar11 + 0x300);
        local_90 = *(undefined8 *)(lVar11 + 0x2e0);
        uStack_88 = *(undefined8 *)(lVar11 + 0x2e8);
        local_80 = *(undefined8 *)(lVar11 + 0x2f0);
        uStack_78 = *(undefined8 *)(lVar11 + 0x2f8);
        local_114 = *(float *)(*plVar2 + 0xc) - fVar13;
      }
    }
    *(undefined1 **)(lVar7 + 0x814) = &DAT_3f8000003f800000;
    *(undefined8 *)(lVar7 + 0x81c) = 0x3f80000000000000;
    FUN_03ac31bc(*(undefined8 *)(param_1 + 0x430),*(undefined1 *)(param_3 + 8),&local_110,&local_11c
                 ,*(undefined8 *)(lVar12 + (long)(int)uVar9 * 0xfc8 + 0x550));
    lVar7 = *(long *)(param_1 + 0x430);
    if ((*(char *)(lVar7 + 0x528) != '\0') && (*(char *)(lVar7 + 0x548) == '\0')) {
      if ((((*(ushort *)(param_1 + 0x43c) & 1) == 0) ||
          ((*(char *)(*(long *)(param_1 + 8) + 0x510) == '\0' ||
           (*(float *)(param_1 + 0x1304) < *(float *)(param_1 + 0x12f8))))) ||
         ((*(float *)(param_1 + 0x1308) < *(float *)(param_1 + 0x12fc) ||
          (*(float *)(param_1 + 0x130c) < *(float *)(param_1 + 0x1300))))) {
        uVar6 = (uint)*(byte *)(param_3 + 8);
        if (*(uint *)(lVar7 + 0x1d0) <= (uint)*(byte *)(param_3 + 8)) {
          uVar6 = 0;
        }
        lVar7 = *(long *)(lVar7 + 0x1d8) + (ulong)uVar6 * 0x1340;
        fVar13 = (float)*(undefined8 *)(lVar7 + 0x1030) * 0.0 +
                 (float)*(undefined8 *)(lVar7 + 0x1040) * 0.0 +
                 (float)*(undefined8 *)(lVar7 + 0x1050) * 0.0;
        fVar14 = (float)((ulong)*(undefined8 *)(lVar7 + 0x1030) >> 0x20) * 0.0 +
                 (float)((ulong)*(undefined8 *)(lVar7 + 0x1040) >> 0x20) * 0.0 +
                 (float)((ulong)*(undefined8 *)(lVar7 + 0x1050) >> 0x20) * 0.0;
        fVar15 = (float)*(undefined8 *)(lVar7 + 0x1038) * 0.0 +
                 (float)*(undefined8 *)(lVar7 + 0x1048) * 0.0 +
                 (float)*(undefined8 *)(lVar7 + 0x1058) * 0.0;
        fVar16 = (float)((ulong)*(undefined8 *)(lVar7 + 0x1038) >> 0x20) * 0.0 +
                 (float)((ulong)*(undefined8 *)(lVar7 + 0x1048) >> 0x20) * 0.0 +
                 (float)((ulong)*(undefined8 *)(lVar7 + 0x1058) >> 0x20) * 0.0;
        *(undefined8 *)(lVar7 + 0xee8) = *(undefined8 *)(*(long *)PTR_DAT_04bb31c8 + 0xc0);
        uVar17 = CONCAT44(fVar14 + 0.0,fVar13 + 0.0);
        uVar18 = CONCAT44(fVar16 + 0.0,fVar15 + 0.0);
        fVar19 = (float)DAT_04102210;
        uVar4 = (ulong)DAT_04102210 >> 0x20;
        fVar20 = (float)DAT_04102218;
        uVar5 = (ulong)DAT_04102218 >> 0x20;
        *(undefined8 *)(lVar7 + 0x1134) = uVar18;
        *(undefined8 *)(lVar7 + 0x112c) = uVar17;
        *(undefined8 *)(lVar7 + 0x1144) = uVar18;
        *(undefined8 *)(lVar7 + 0x113c) = uVar17;
        *(undefined8 *)(lVar7 + 0x1154) = uVar18;
        *(undefined8 *)(lVar7 + 0x114c) = uVar17;
        *(ulong *)(lVar7 + 0x1164) = CONCAT44(fVar16 + (float)uVar5,fVar15 + fVar20);
        *(ulong *)(lVar7 + 0x115c) = CONCAT44(fVar14 + (float)uVar4,fVar13 + fVar19);
      }
      else {
        FUN_03ac3108(lVar7,*(undefined1 *)(param_3 + 8),param_1 + 0x1018,
                     *(undefined8 *)(param_1 + 0x12e8));
      }
    }
    uVar6 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x430) + 0x1d0) <= (uint)*(byte *)(param_3 + 8)) {
      uVar6 = 0;
    }
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x430) + 0x1d8) + (ulong)uVar6 * 0x1340 + 0xff8) =
         0;
    if ((((*(char *)(*(long *)(param_1 + 8) + 0xb90) == '\0') ||
         (*(char *)(*(long *)(param_1 + 8) + 0x650) == '\0')) || (*(long *)(param_1 + 0x420) == 0))
       || (*(char *)(*(long *)(param_1 + 0x420) + 0x6c8) == '\0')) {
      *(uint *)(*(long *)(param_1 + 0x430) + 0x1e0) =
           *(uint *)(*(long *)(param_1 + 0x430) + 0x1e0) & 0xfffffffe;
    }
    else {
      *(uint *)(*(long *)(param_1 + 0x430) + 0x1e0) =
           *(uint *)(*(long *)(param_1 + 0x430) + 0x1e0) | 1;
      uVar8 = (uint)*(byte *)(param_3 + 8);
      uVar6 = uVar8;
      if (*(uint *)(*(long *)(param_1 + 0x420) + 0x1d0) <= (uint)*(byte *)(param_3 + 8)) {
        uVar6 = 0;
      }
      if (*(uint *)(*(long *)(param_1 + 0x430) + 0x1d0) <= uVar8) {
        uVar8 = 0;
      }
      *(ulong *)(*(long *)(*(long *)(param_1 + 0x430) + 0x1d8) + (ulong)uVar8 * 0x1340 + 0xff0) =
           *(long *)(*(long *)(param_1 + 0x420) + 0x1d8) + (ulong)uVar6 * 0x648 + 0x160;
      uVar8 = (uint)*(byte *)(param_3 + 8);
      uVar6 = uVar8;
      if (*(uint *)(param_4 + 8) <= (uint)*(byte *)(param_3 + 8)) {
        uVar6 = 0;
      }
      if ((*(byte *)(*(long *)(param_4 + 0x10) + (ulong)uVar6 * 0x23c0 + 9) >> 5 & 1) != 0) {
        if (*(uint *)(*(long *)(param_1 + 0x430) + 0x1d0) <= uVar8) {
          uVar8 = 0;
        }
        *(ulong *)(*(long *)(*(long *)(param_1 + 0x430) + 0x1d8) + (ulong)uVar8 * 0x1340 + 0xff8) =
             *(long *)(param_4 + 0x10) + (ulong)uVar6 * 0x23c0 + 0x2110;
      }
    }
    bVar3 = *(byte *)(param_3 + 8);
    local_f0 = 0;
    local_108 = CONCAT44(*(undefined4 *)(lVar12 + (long)(int)uVar9 * 0xfc8 + 0x238),(uint)bVar3);
    uVar9 = (uint)bVar3;
    if (*(uint *)(param_4 + 8) < (uint)bVar3 || *(uint *)(param_4 + 8) == uVar9) {
      uVar9 = 0;
    }
    lVar7 = *(long *)(param_4 + 0x10) + (ulong)uVar9 * 0x23c0;
    local_100 = lVar7 + 0x610;
    lStack_f8 = lVar7 + 0xdd0;
    local_e8 = lVar7 + 0x618;
    if ((*(byte *)(lVar7 + 8) & 1) != 0) {
      local_f0 = lVar7 + 0x8c8;
    }
    local_110 = param_2;
    FUN_03ac3390(*(undefined8 *)(param_1 + 0x430),&local_110);
    lVar7 = *(long *)(*(long *)(param_1 + 0x430) + 0x1d8);
    uVar9 = (uint)*(byte *)(param_3 + 8);
    if (*(uint *)(*(long *)(param_1 + 0x430) + 0x1d0) <= (uint)*(byte *)(param_3 + 8)) {
      uVar9 = 0;
    }
    *(undefined8 *)(param_3 + 0x198) = *(undefined8 *)(param_3 + 0x40);
    *(ulong *)(param_3 + 0x40) = lVar7 + (ulong)uVar9 * 0x1340 + 0xf00;
  }
  return;
}

