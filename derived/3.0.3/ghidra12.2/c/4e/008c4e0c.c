
float FUN_008c4e0c(long param_1)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined **ppuVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  undefined *local_148;
  undefined8 *puStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  
  fVar16 = *(float *)(param_1 + 0x30970);
  fVar17 = *(float *)(param_1 + 0x30974);
  fVar14 = *(float *)(param_1 + 0x30978);
  fVar15 = *(float *)(param_1 + 0x3097c);
  fVar18 = *(float *)(param_1 + 0x30980);
  fVar19 = *(float *)(param_1 + 0x30984);
  bVar3 = false;
  bVar5 = false;
  bVar7 = false;
  if (fVar16 <= fVar15) {
    bVar3 = false;
    bVar5 = false;
    bVar7 = true;
    if (!NAN(fVar17) && !NAN(fVar18)) {
      bVar3 = fVar17 < fVar18;
      bVar5 = fVar17 == fVar18;
      bVar7 = false;
    }
  }
  bVar4 = false;
  bVar6 = false;
  bVar8 = false;
  if (bVar5 || bVar3 != bVar7) {
    bVar4 = false;
    bVar6 = false;
    bVar8 = true;
    if (!NAN(fVar14) && !NAN(fVar19)) {
      bVar4 = fVar14 < fVar19;
      bVar6 = fVar14 == fVar19;
      bVar8 = false;
    }
  }
  if (!bVar6 && bVar4 == bVar8) {
    return 0.0;
  }
  local_130 = *(undefined4 *)(param_1 + 0x30898);
  local_138 = *(undefined8 *)(param_1 + 0x30890);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x315d4) >> 0x14) & 0xff0));
  local_f0 = *(undefined4 *)(param_1 + 0x308d8);
  local_f8 = *(undefined8 *)(param_1 + 0x308d0);
  fVar12 = *pfVar1;
  fVar13 = pfVar1[1];
  local_10c = *(undefined8 *)(param_1 + 0x308bc);
  local_114 = *(undefined8 *)(param_1 + 0x308b4);
  fVar10 = (float)(*(uint *)(param_1 + 0x315d4) & 0xffffff) * 5.9604645e-08;
  local_fc = *(undefined4 *)(param_1 + 0x308cc);
  local_104 = *(undefined8 *)(param_1 + 0x308c4);
  local_124 = *(undefined8 *)(param_1 + 0x308a4);
  local_12c = *(undefined8 *)(param_1 + 0x3089c);
  fVar11 = pfVar1[2] + fVar10 * pfVar1[3];
  local_c4 = *(undefined8 *)(param_1 + 0x30904);
  local_11c = *(undefined8 *)(param_1 + 0x308ac);
  local_d4 = *(undefined8 *)(param_1 + 0x308f4);
  local_cc = *(undefined8 *)(param_1 + 0x308fc);
  local_e4 = *(undefined8 *)(param_1 + 0x308e4);
  local_dc = *(undefined8 *)(param_1 + 0x308ec);
  local_ec = *(undefined8 *)(param_1 + 0x308dc);
  local_bc = *(undefined4 *)(param_1 + 0x3090c);
  uStack_b8 = *(undefined4 *)(param_1 + 0x30910);
  local_b4 = *(undefined4 *)(param_1 + 0x30914);
  uStack_b0 = *(undefined4 *)(param_1 + 0x30918);
  local_9c = *(undefined8 *)(param_1 + 0x3092c);
  local_78 = *(undefined8 *)(param_1 + 0x30950);
  local_ac = *(undefined8 *)(param_1 + 0x3091c);
  local_a4 = *(undefined8 *)(param_1 + 0x30924);
  uVar2 = *(uint *)(param_1 + 0x307e8);
  local_84 = *(undefined8 *)(param_1 + 0x30944);
  local_94 = *(undefined8 *)(param_1 + 0x30934);
  local_8c = *(undefined8 *)(param_1 + 0x3093c);
  local_7c = *(undefined4 *)(param_1 + 0x3094c);
  if (uVar2 == 0x62) {
    ppuVar9 = (undefined **)(param_1 + 0x30710);
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))();
  }
  else {
    if (0x62 < uVar2) {
      puStack_140 = &DAT_0407ebb1;
      goto LAB_008c5034;
    }
    ppuVar9 = &PTR_s_cNormal_04922de8 + uVar2;
  }
  puStack_140 = (undefined8 *)*ppuVar9;
LAB_008c5034:
  local_148 = PTR_DAT_04bb2020 + 0x10;
  local_160 = fVar16;
  fStack_15c = fVar17;
  local_158 = fVar14;
  fStack_154 = fVar15;
  local_150 = fVar18;
  fStack_14c = fVar19;
  FUN_008c68e0(param_1,&local_138,&local_160,&local_148,1,0,1);
  return *(float *)(param_1 + 0x2a8) -
         ((((fVar17 + fVar18) * 0.5 * fVar11 * 0.0 + (fVar16 + fVar15) * 0.5 * fVar11) -
          (fVar14 + fVar19) * 0.5 * (fVar12 + fVar10 * fVar13)) + local_ac._4_4_);
}

