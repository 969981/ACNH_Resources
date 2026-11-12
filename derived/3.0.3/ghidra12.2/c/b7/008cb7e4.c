
float FUN_008cb7e4(long param_1,float *param_2,uint param_3,undefined8 *param_4,ulong param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_170;
  undefined8 *puStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  float local_7c;
  float fStack_78;
  float local_74;
  
  uVar1 = (ulong)(*(uint *)(param_1 + 0x315d4) >> 0x14) & 0xff0;
  local_144 = *(undefined8 *)(param_1 + 0x30890);
  local_13c = *(undefined4 *)(param_1 + 0x30898);
  uStack_118 = *(undefined8 *)(param_1 + 0x308bc);
  local_108 = *(undefined4 *)(param_1 + 0x308cc);
  local_120 = *(undefined8 *)(param_1 + 0x308b4);
  fVar4 = *(float *)((long)&DAT_04199798 + uVar1);
  fVar5 = *(float *)((long)&DAT_0419979c + uVar1);
  fVar2 = (float)(*(uint *)(param_1 + 0x315d4) & 0xffffff) * 5.9604645e-08;
  local_110 = *(undefined8 *)(param_1 + 0x308c4);
  local_f0 = *(undefined8 *)(param_1 + 0x308e4);
  local_f8 = *(undefined8 *)(param_1 + 0x308dc);
  local_88 = *(undefined4 *)(param_1 + 0x3094c);
  local_138 = *(undefined8 *)(param_1 + 0x3089c);
  fVar6 = fVar4 + fVar2 * fVar5;
  fVar9 = *(float *)((long)&DAT_041997a0 + uVar1) + fVar2 * *(float *)((long)&DAT_041997a4 + uVar1);
  local_130 = *(undefined8 *)(param_1 + 0x308a4);
  local_128 = *(undefined8 *)(param_1 + 0x308ac);
  fVar10 = fVar6 * 0.0;
  local_104 = *(undefined8 *)(param_1 + 0x308d0);
  local_fc = *(undefined4 *)(param_1 + 0x308d8);
  local_d0 = *(undefined8 *)(param_1 + 0x30904);
  local_d8 = *(undefined8 *)(param_1 + 0x308fc);
  local_e0 = *(undefined8 *)(param_1 + 0x308f4);
  local_e8 = *(undefined8 *)(param_1 + 0x308ec);
  local_c8 = *(undefined4 *)(param_1 + 0x3090c);
  local_c4 = *(undefined4 *)(param_1 + 0x30910);
  uStack_c0 = *(undefined4 *)(param_1 + 0x30914);
  local_bc = *(undefined4 *)(param_1 + 0x30918);
  local_b0 = *(undefined8 *)(param_1 + 0x30924);
  local_a8 = *(undefined8 *)(param_1 + 0x3092c);
  local_b8 = *(undefined8 *)(param_1 + 0x3091c);
  local_90 = *(undefined8 *)(param_1 + 0x30944);
  local_98 = *(undefined8 *)(param_1 + 0x3093c);
  local_a0 = *(undefined8 *)(param_1 + 0x30934);
  local_84 = *(undefined8 *)(param_1 + 0x30950);
  local_158 = *(undefined8 *)(param_2 + 2);
  uStack_150 = *(undefined8 *)(param_2 + 4);
  local_160 = *(undefined8 *)param_2;
  if (param_3 < 99) {
    puStack_168 = (undefined8 *)(&PTR_s_cNormal_04922de8)[param_3];
  }
  else {
    puStack_168 = &DAT_0407ebb1;
  }
  local_170 = PTR_DAT_04bb2020 + 0x10;
  FUN_008c68e0(param_1,&local_144,&local_160,&local_170,1,0,1);
  *param_4 = CONCAT44(uStack_c0,local_c4);
  *(undefined4 *)((long)param_4 + 0xc) = (undefined4)local_b8;
  *(float *)(param_4 + 2) = local_b8._4_4_;
  *(float *)((long)param_4 + 0x14) = (float)local_b0;
  *(float *)(param_4 + 3) = local_b0._4_4_;
  *(undefined4 *)(param_4 + 1) = local_bc;
  *(undefined8 *)((long)param_4 + 0x24) = local_a0;
  *(undefined8 *)((long)param_4 + 0x2c) = local_98;
  *(undefined8 *)((long)param_4 + 0x34) = local_90;
  *(undefined4 *)((long)param_4 + 0x3c) = local_88;
  *(undefined8 *)((long)param_4 + 0x1c) = local_a8;
  fVar3 = (*param_2 + param_2[3]) * 0.5;
  fVar7 = (param_2[1] + param_2[4]) * 0.5;
  fVar8 = (param_2[2] + param_2[5]) * 0.5;
  local_7c = local_b8._4_4_ +
             fVar9 * 0.0 * fVar7 + fVar3 * fVar9 + fVar8 * (-(fVar5 * fVar2) - fVar4);
  fStack_78 = (float)local_b0 + (fVar10 * 0.0 + 1.0) * fVar7 + fVar3 * fVar10 + fVar8 * fVar9 * 0.0;
  local_74 = local_b0._4_4_ + fVar10 * fVar7 + fVar3 * (fVar6 + 0.0) + fVar8 * fVar9;
  if ((param_5 & 1) != 0) {
    (*(code *)**(undefined8 **)(param_1 + 0x37f18))
              ((undefined8 *)(param_1 + 0x37f18),&local_7c,(long)&local_b8 + 4);
  }
  return local_7c;
}

