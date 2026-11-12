
undefined8 FUN_008d80ec(long param_1,byte *param_2,int param_3,byte param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *local_80;
  undefined1 *puStack_78;
  undefined *local_70;
  undefined1 *puStack_68;
  undefined8 local_60;
  float local_58;
  undefined8 local_50;
  float local_48;
  
  *(undefined1 *)(param_1 + 0x37fc0) = 1;
  uVar2 = FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
  *(undefined1 *)(param_1 + 0x37fc0) = 0;
  bVar4 = *param_2;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(byte *)(param_1 + 0x309b8) = bVar4;
  if (param_3 == 1) {
    local_50 = *(undefined8 *)(param_1 + 0x2a8);
    local_48 = *(float *)(param_1 + 0x2b0);
    local_60 = *(undefined8 *)(param_1 + 0x2a8);
    local_58 = *(float *)(param_1 + 0x2b0);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puStack_68 = &DAT_040aaf55;
    local_70 = puVar1;
    uVar3 = FUN_008cdfe0(uVar2,&local_70,&local_50);
    if ((uVar3 & 1) != 0) {
      puStack_78 = &DAT_040716fb;
      local_80 = puVar1;
      FUN_008cdfe0(uVar3,&local_80,&local_60);
    }
    fVar8 = (float)NEON_fminnm((float)local_50,0x7f7fffff);
    fVar10 = (float)NEON_fminnm(local_50._4_4_,0x7f7fffff);
    fVar5 = (float)NEON_fminnm(local_48,0x7f7fffff);
    fVar6 = (float)local_50;
    if ((float)local_50 <= -3.4028235e+38) {
      fVar6 = -3.4028235e+38;
    }
    fVar7 = local_50._4_4_;
    if (local_50._4_4_ <= -3.4028235e+38) {
      fVar7 = -3.4028235e+38;
    }
    fVar11 = local_48;
    if (local_48 <= -3.4028235e+38) {
      fVar11 = -3.4028235e+38;
    }
    fVar9 = (float)local_60;
    if (fVar8 <= (float)local_60) {
      fVar9 = fVar8;
    }
    fVar8 = local_60._4_4_;
    if (fVar10 <= local_60._4_4_) {
      fVar8 = fVar10;
    }
    fVar10 = local_58;
    if (fVar5 <= local_58) {
      fVar10 = fVar5;
    }
    fVar5 = (float)local_60;
    if ((float)local_60 <= fVar6) {
      fVar5 = fVar6;
    }
    fVar6 = local_60._4_4_;
    if (local_60._4_4_ <= fVar7) {
      fVar6 = fVar7;
    }
    fVar7 = local_58;
    if (local_58 <= fVar11) {
      fVar7 = fVar11;
    }
    *(float *)(param_1 + 0x307b4) = (fVar9 + fVar5) * 0.5;
    *(float *)(param_1 + 0x307b8) = (fVar8 + fVar6) * 0.5;
    *(float *)(param_1 + 0x307bc) = (fVar10 + fVar7) * 0.5;
  }
  *(int *)(param_1 + 0x3080c) = param_3;
  *(byte *)(param_1 + 0x31767) = param_4 & 1;
  FUN_03ebb160(param_1 + 0x408,0x1a);
  return 1;
}

