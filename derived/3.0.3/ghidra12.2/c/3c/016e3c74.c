
void FUN_016e3c74(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_3e0;
  undefined1 *puStack_3d8;
  undefined8 ****local_3d0;
  undefined8 ****ppppuStack_3c8;
  undefined8 ****local_3c0 [5];
  undefined8 ****local_398 [5];
  undefined8 ****local_370 [5];
  undefined8 ****local_348 [5];
  undefined8 ****local_320 [5];
  undefined8 ****local_2f8 [5];
  undefined8 ****local_2d0 [5];
  undefined8 ****local_2a8 [5];
  undefined8 ****local_280 [5];
  undefined8 ****local_258 [5];
  undefined8 ****local_230 [5];
  undefined8 ****local_208 [5];
  undefined8 ***local_1e0 [5];
  undefined8 **local_1b8 [5];
  undefined8 *local_190 [5];
  undefined8 local_168 [5];
  undefined1 auStack_140 [128];
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  float fStack_9c;
  undefined4 local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  undefined4 local_68;
  
  (**(code **)(*param_1 + 0x288))();
  puVar4 = (undefined8 *)param_1[0xc];
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_a8 = (undefined *)((ulong)local_a8._4_4_ << 0x20);
  local_3e0 = CONCAT44(local_3e0._4_4_,0x2b);
  if ((puVar4[0x227] != 0) && (uVar2 = FUN_03850a90(puVar4[0x227],0x2b,0,0), (uVar2 & 1) != 0)) {
    (**(code **)(*param_1 + 0x290))(0,param_1);
  }
  puVar4 = (undefined8 *)param_1[0xc];
  *(undefined1 *)(param_1 + 0x5f) = 0;
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_052461c0);
      puVar4 = &DAT_05240280;
      if (iVar1 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000);
  local_3e0 = CONCAT44(local_3e0._4_4_,0x20);
  if ((puVar4[0x227] != 0) && (uVar2 = FUN_03850a90(puVar4[0x227],0x20,0,0), (uVar2 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x5f) = 1;
  }
  local_3e0 = 0;
  puStack_3d8 = (undefined1 *)0x0;
  local_3c0[0] = local_398;
  local_398[0] = local_370;
  local_3d0 = local_3c0;
  local_370[0] = local_348;
  local_348[0] = local_320;
  local_320[0] = local_2f8;
  local_2d0[0] = local_2a8;
  local_2f8[0] = local_2d0;
  local_280[0] = local_258;
  local_230[0] = local_208;
  local_2a8[0] = local_280;
  local_1e0[0] = local_1b8;
  local_258[0] = local_230;
  local_1b8[0] = local_190;
  local_208[0] = local_1e0;
  local_190[0] = local_168;
  local_168[0] = 0;
  if (auStack_140 != (undefined1 *)0x0) {
    local_3e0 = 0x1000000000;
    puStack_3d8 = auStack_140;
  }
  lVar3 = param_1[0xd];
  local_b0 = 0.0;
  local_b8 = 0;
  local_c0 = 0;
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x2b0));
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x2b4));
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x2b8));
  ppppuStack_3c8 = local_3d0;
  fVar7 = sinf(fVar5 * 1.4629181e-09);
  fVar8 = sinf(fVar10 * 1.4629181e-09);
  fVar9 = sinf(fVar6 * 1.4629181e-09);
  fVar5 = cosf(fVar5 * 1.4629181e-09);
  fVar10 = cosf(fVar10 * 1.4629181e-09);
  fVar6 = cosf(fVar6 * 1.4629181e-09);
  local_90 = fVar9 * fVar10;
  lVar3 = param_1[0xd];
  fStack_8c = -fVar8;
  local_98 = *(undefined4 *)(lVar3 + 0x280);
  fStack_94 = fVar10 * fVar6;
  local_88 = fVar7 * fVar8 * fVar6 - fVar9 * fVar5;
  fStack_84 = fVar5 * fVar6 + fVar9 * fVar7 * fVar8;
  local_78 = -(fVar7 * fVar6) + fVar8 * fVar9 * fVar5;
  local_a8 = PTR_DAT_04bb3ea8 + 0x10;
  local_a0 = *(undefined4 *)(lVar3 + 0x278);
  local_70 = 0x4100000040600000;
  fStack_74 = fVar5 * fVar10;
  fStack_7c = fVar7 * fVar9 + fVar8 * fVar5 * fVar6;
  local_68 = 0x40600000;
  fStack_9c = *(float *)(lVar3 + 0x27c) + 8.0;
  local_80 = fVar7 * fVar10;
  uVar2 = FUN_007dfe40(*(undefined8 *)PTR_DAT_04bb30d0,&local_a8,0x1f,&local_3e0);
  if ((uVar2 & 1) == 0) {
    local_b0 = *(float *)((long)param_1 + 0x2d4) + -0.15;
    local_c0._4_4_ = *(float *)((long)param_1 + 0x2cc);
    local_b8._0_4_ = *(float *)(param_1 + 0x5a);
    local_c0._0_4_ = *(float *)(param_1 + 0x59);
  }
  else {
    *(float *)(param_1 + 0x59) = (float)local_c0;
    *(float *)((long)param_1 + 0x2cc) = local_c0._4_4_;
    *(float *)(param_1 + 0x5a) = (float)local_b8;
  }
  *(float *)((long)param_1 + 0x2d4) = local_b0;
  *(float *)((long)param_1 + 700) = (float)local_c0 * local_b0;
  *(float *)(param_1 + 0x58) = local_c0._4_4_ * local_b0;
  *(float *)((long)param_1 + 0x2c4) = (float)local_b8 * local_b0;
  return;
}

