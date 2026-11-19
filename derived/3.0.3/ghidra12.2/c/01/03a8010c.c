
void FUN_03a8010c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  undefined **ppuVar6;
  ushort uVar7;
  uint uVar8;
  undefined8 uVar9;
  ushort uVar10;
  float fVar11;
  float fVar12;
  undefined *local_330;
  undefined8 uStack_328;
  float local_320;
  float fStack_31c;
  undefined4 local_318;
  undefined8 local_314;
  undefined *local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined4 local_2b0 [2];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  char *pcStack_270;
  undefined4 local_268;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined *local_228;
  float local_220;
  float local_21c;
  undefined8 local_218;
  float local_210;
  float local_20c;
  undefined **local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  char *local_128;
  undefined4 local_120;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  float local_d8;
  float fStack_d4;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  if (*(long *)(param_1 + 0x428) == 0) {
    return;
  }
  if (*(char *)(*(long *)(param_1 + 8) + 0x670) == '\0') {
    return;
  }
  uVar10 = *(ushort *)(param_5 + 0x30);
  local_d0 = 0;
  uVar7 = *(ushort *)(param_5 + 0x32);
  local_b8 = 0;
  uStack_b0 = 0;
  if (uVar10 < 2) {
    uVar10 = 1;
  }
  puVar1 = PTR_DAT_04bd1178 + 0x10;
  fVar11 = (float)uVar10;
  uVar10 = uVar7;
  if (*(short *)(param_5 + 0x3a) != 3) {
    uVar10 = 1;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  if (uVar10 <= uVar7) {
    uVar10 = uVar7;
  }
  local_98 = 0;
  uStack_90 = 0;
  fVar12 = (float)uVar10;
  local_128 = "agl::TextureData";
  local_88 = 0;
  uStack_80 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_168[0] = 0xffffffff;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_120 = 0x10000;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_108 = 0xff;
  local_104 = 0;
  puVar2 = PTR_DAT_04bd1198 + 0x10;
  local_100 = 0x80000000000;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_1c0 = puVar2;
  local_e0 = puVar1;
  local_d8 = fVar11;
  fStack_d4 = fVar12;
  local_c8 = fVar11;
  fStack_c4 = fVar12;
  FUN_01560750(&local_1c0,param_5,0,0);
  local_278 = 0;
  pcStack_270 = "agl::TextureData";
  local_218 = 0;
  local_2b0[0] = 0xffffffff;
  local_268 = 0x10000;
  local_200 = 0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_250 = 0xff;
  local_24c = 1;
  local_248 = 0x80000000000;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_308 = puVar2;
  local_228 = puVar1;
  local_220 = fVar11;
  local_21c = fVar12;
  local_210 = fVar11;
  local_20c = fVar12;
  local_c0 = &local_1c0;
  FUN_01560750(&local_308,param_5,0,1);
  bVar3 = *(byte *)(param_3 + 8);
  uVar5 = (uint)bVar3;
  if (*(uint *)(param_4 + 8) <= (uint)bVar3) {
    uVar5 = 0;
  }
  uVar8 = (uint)*(ushort *)(param_5 + 0x3a);
  if ((*(ushort *)(param_5 + 0x3a) < 10) && ((1 << (ulong)(uVar8 & 0x1f) & 0x350U) != 0)) {
    uVar7 = *(ushort *)(param_5 + 0x34);
    uVar10 = uVar7;
  }
  else {
    uVar7 = *(ushort *)(param_5 + 0x34);
    uVar10 = 1;
  }
  if (uVar10 <= uVar7) {
    uVar10 = uVar7;
  }
  local_208 = &local_308;
  if (uVar10 == 1) {
    lVar4 = *(long *)(param_1 + 0x428);
    if ((*(byte *)(lVar4 + 8) >> 6 & 1) == 0) {
      ppuVar6 = (undefined **)0x0;
      goto LAB_03a803c8;
    }
    ppuVar6 = (undefined **)0x0;
LAB_03a80480:
    uVar9 = 0;
    param_5 = 0;
    local_318 = *(undefined4 *)PTR_DAT_04bd0ea8;
  }
  else {
    uVar10 = 1;
    if ((uVar8 < 10) && ((1 << (ulong)(uVar8 & 0x1f) & 0x350U) != 0)) {
      uVar10 = uVar7;
    }
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (uVar10 != 2) goto LAB_03a804ac;
    lVar4 = *(long *)(param_1 + 0x428);
    if ((*(byte *)(lVar4 + 8) >> 6 & 1) != 0) {
      ppuVar6 = &local_228;
      goto LAB_03a80480;
    }
    ppuVar6 = &local_228;
LAB_03a803c8:
    uVar9 = *(undefined8 *)(param_3 + 0x88);
    local_318 = *(undefined4 *)PTR_DAT_04bd0ea8;
  }
  local_314 = 0x3f80000000000000;
  uStack_328 = 0;
  local_330 = PTR_DAT_04bd0f08 + 0x10;
  local_320 = fVar11;
  fStack_31c = fVar12;
  FUN_03a90bd0(lVar4,param_2,bVar3,&local_e0,ppuVar6,&local_330,param_5,0,uVar9,
               *(long *)(*(long *)(param_4 + 0x10) + (ulong)uVar5 * 0x23c0 + 0x1fa8) + 0x100,
               *(long *)(param_4 + 0x10) + (ulong)uVar5 * 0x23c0 + 0x8c8);
LAB_03a804ac:
  puVar1 = PTR_DAT_04bbd508 + 0x10;
  local_308 = puVar1;
  FUN_038fd0e0(local_2b0);
  local_1c0 = puVar1;
  FUN_038fd0e0(local_168);
  return;
}

