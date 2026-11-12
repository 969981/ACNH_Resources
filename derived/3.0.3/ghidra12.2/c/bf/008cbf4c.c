
void FUN_008cbf4c(long param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 local_164;
  undefined8 local_15c;
  undefined8 local_154;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  
  puVar6 = PTR_DAT_04bb2d00;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
    uVar8 = 0;
  }
  else {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar8 = *puVar3 & 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x30950);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x315d4) >> 0x14) & 0xff0));
  local_178 = *(undefined4 *)(param_1 + 0x30898);
  local_140 = *(undefined8 *)(param_1 + 0x308d0);
  local_138 = *(undefined4 *)(param_1 + 0x308d8);
  fVar14 = (float)(*(uint *)(param_1 + 0x315d4) & 0xffffff) * 5.9604645e-08;
  fVar11 = *pfVar1 + fVar14 * pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  local_180 = *(undefined8 *)(param_1 + 0x30890);
  *(undefined1 *)(param_1 + 0x38010) = 0;
  fVar12 = fVar12 + fVar14 * fVar13;
  local_15c = *(undefined8 *)(param_1 + 0x308b4);
  local_154 = *(undefined8 *)(param_1 + 0x308bc);
  fVar13 = fVar11 * 0.0;
  local_14c = *(undefined8 *)(param_1 + 0x308c4);
  local_144 = *(undefined4 *)(param_1 + 0x308cc);
  fVar15 = (*param_2 + param_2[3]) * 0.5;
  local_174 = *(undefined8 *)(param_1 + 0x3089c);
  local_16c = *(undefined8 *)(param_1 + 0x308a4);
  fVar16 = (param_2[2] + param_2[5]) * 0.5;
  fVar14 = (param_2[1] + param_2[4]) * 0.5;
  local_164 = *(undefined8 *)(param_1 + 0x308ac);
  local_11c = *(undefined8 *)(param_1 + 0x308f4);
  local_114 = *(undefined8 *)(param_1 + 0x308fc);
  local_10c = *(undefined8 *)(param_1 + 0x30904);
  local_104 = *(undefined4 *)(param_1 + 0x3090c);
  local_134 = *(undefined8 *)(param_1 + 0x308dc);
  local_12c = *(undefined8 *)(param_1 + 0x308e4);
  local_c4 = *(undefined4 *)(param_1 + 0x3094c);
  local_124 = *(undefined8 *)(param_1 + 0x308ec);
  local_100 = *(undefined8 *)(param_1 + 0x30910);
  local_f8 = *(undefined4 *)(param_1 + 0x30918);
  local_cc = *(undefined8 *)(param_1 + 0x30944);
  local_d4 = *(undefined8 *)(param_1 + 0x3093c);
  local_dc = *(undefined8 *)(param_1 + 0x30934);
  local_e4 = *(undefined8 *)(param_1 + 0x3092c);
  local_ec = *(undefined8 *)(param_1 + 0x30924);
  local_f4 = *(undefined8 *)(param_1 + 0x3091c);
  uVar4 = *(uint *)(param_1 + 0x307e8);
  local_c0 = uVar9;
  if (uVar4 == 0x62) {
    ppuVar10 = (undefined **)(param_1 + 0x30710);
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))();
  }
  else {
    if (0x62 < uVar4) {
      local_98 = &DAT_0407ebb1;
      goto LAB_008cc1d0;
    }
    ppuVar10 = &PTR_s_cNormal_04922de8 + uVar4;
  }
  local_98 = (undefined8 *)*ppuVar10;
LAB_008cc1d0:
  local_b8 = *(undefined8 *)(param_1 + 0x30970);
  uStack_b0 = *(undefined8 *)(param_1 + 0x30978);
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = *(undefined8 *)(param_1 + 0x30980);
  FUN_008c68e0(param_1,&local_180,&local_b8,&local_a0,1,0,(int)uVar9 == (int)((ulong)uVar9 >> 0x20))
  ;
  local_a0._4_4_ =
       (fVar13 * 0.0 + 1.0) * fVar14 + fVar15 * fVar13 + fVar16 * fVar12 * 0.0 + (float)local_ec;
  local_a0._0_4_ = ((fVar12 * 0.0 * fVar14 + fVar15 * fVar12) - fVar16 * fVar11) + local_f4._4_4_;
  local_98 = (undefined8 *)
             CONCAT44(local_98._4_4_,
                      fVar13 * fVar14 + fVar15 * (fVar11 + 0.0) + fVar16 * fVar12 + local_ec._4_4_);
  (*(code *)**(undefined8 **)(param_1 + 0x37f18))
            ((undefined8 *)(param_1 + 0x37f18),&local_a0,(long)&local_f4 + 4);
  pfVar1 = (float *)(puVar6 + ((ulong)((uint)local_100 >> 0x14) & 0xff0));
  pfVar2 = (float *)(puVar6 + ((ulong)(local_100._4_4_ >> 0x14) & 0xff0));
  fVar11 = (float)local_f4 *
           (pfVar1[2] + pfVar1[3] * (float)((uint)local_100 & 0xffffff) * 5.9604645e-08);
  fVar12 = *pfVar1;
  fVar15 = pfVar1[1];
  fVar13 = fVar11 * (*pfVar2 + pfVar2[1] * (float)(local_100._4_4_ & 0xffffff) * 5.9604645e-08) +
           (float)local_a0;
  fVar14 = local_98._0_4_ +
           fVar11 * (pfVar2[2] + pfVar2[3] * (float)(local_100._4_4_ & 0xffffff) * 5.9604645e-08);
  *(float *)(param_1 + 0x3086c) = (float)local_a0;
  *(float *)(param_1 + 0x30870) = local_a0._4_4_;
  fVar11 = *(float *)(param_1 + 0x31664);
  *(float *)(param_1 + 0x3087c) =
       (float)local_f4 * (fVar12 + fVar15 * (float)((uint)local_100 & 0xffffff) * 5.9604645e-08) +
       local_a0._4_4_;
  *(float *)(param_1 + 0x30880) = fVar14;
  *(float *)(param_1 + 0x30874) = local_98._0_4_;
  *(float *)(param_1 + 0x30878) = fVar13;
  fVar12 = fVar11 + 1.0;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x3ee08254) {
    fVar12 = fVar11;
  }
  fVar15 = *(float *)(param_1 + 0x31670) + -2.5;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x3411ee5c) {
    fVar11 = fVar12;
    fVar15 = *(float *)(param_1 + 0x31670);
  }
  if (uVar8 == 0) {
    return;
  }
  pfVar1 = (float *)(puVar6 + ((ulong)(*(uint *)(param_1 + 0x315d4) >> 0x14) & 0xff0));
  fVar16 = (float)(*(uint *)(param_1 + 0x315d4) & 0xffffff) * 5.9604645e-08;
  fVar12 = *pfVar1 + fVar16 * pfVar1[1];
  fVar17 = pfVar1[2] + fVar16 * pfVar1[3];
  if (fVar12 <= 0.0) {
    fVar12 = -(pfVar1[1] * fVar16) - *pfVar1;
  }
  fVar16 = -(pfVar1[3] * fVar16) - pfVar1[2];
  if (0.0 <= fVar17) {
    fVar16 = fVar17;
  }
  if (fVar12 <= fVar16) {
    fVar12 = (fVar15 + fVar11) * 0.5;
    if (fVar11 <= fVar13) {
      if (fVar13 <= fVar15) {
        return;
      }
      if ((float)local_a0 <= fVar12) {
        return;
      }
      bVar7 = 1;
    }
    else {
      if (fVar12 <= (float)local_a0) {
        return;
      }
      bVar7 = 2;
    }
  }
  else {
    fVar11 = (*(float *)(param_1 + 0x3166c) + *(float *)(param_1 + 0x31678)) * 0.5;
    if (*(float *)(param_1 + 0x3166c) <= fVar14) {
      if (fVar14 <= *(float *)(param_1 + 0x31678)) {
        return;
      }
      if (local_98._0_4_ <= fVar11) {
        return;
      }
      bVar7 = 4;
    }
    else {
      if (fVar11 <= local_98._0_4_) {
        return;
      }
      bVar7 = 8;
    }
  }
  *(byte *)(param_1 + 0x38010) = *(byte *)(param_1 + 0x38010) | bVar7;
  return;
}

