
void FUN_029ce9c4(byte *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 local_118 [2];
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  char local_9c;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_128 = *(undefined8 *)(param_1 + 0x40);
  local_100 = 0xbf800000;
  uStack_f8 = 0;
  local_f0 = 0xffffffffffffffff;
  uStack_e8 = 0xffffffff00000000;
  local_e0 = 0xffffffff00000000;
  uStack_d8 = 0xffffffffffffffff;
  local_118[0] = 0;
  local_114 = 0xffffffffffffffff;
  local_10c = 0xffffffffffffffff;
  local_104 = 0xffffffff;
  local_b0 = 0;
  local_ac = 0xffffffffffffffff;
  local_a4 = 0xffffffffffffffff;
  local_9c = '\0';
  local_88 = 0.0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_c0 = 0xffffffff00000000;
  local_b8 = 0xffffffff00000000;
  local_d0 = 0;
  uStack_c8 = 0xffffffff;
  local_98 = 0xffffffffffffffff;
  local_90 = 0xffffffffbf800000;
  local_120 = (undefined4)*(undefined8 *)(param_1 + 0x48);
  FUN_029a7b28(DAT_055f6860 + 0x6d8,local_118,&local_128);
  if ((int)local_b8 == 1) {
    if (local_b0 == 3) {
      local_ac._0_4_ = local_ac._4_4_;
    }
    else if (local_b0 == 2) {
    }
    else {
      local_ac._0_4_ = 0xffffffff;
    }
  }
  else {
    local_ac._0_4_ = 0;
    local_b0 = (int)local_b8;
    local_a4._0_4_ = local_b8._4_4_;
  }
  bVar4 = 2;
  if (0x7fffffff < *(uint *)(param_1 + 0x20) || (uint)local_a4 == *(uint *)(param_1 + 0x20)) {
    bVar4 = 0;
  }
  *param_1 = bVar4 | *param_1 & 0xfd;
  fVar6 = (float)local_90 + (float)local_90;
  if (local_98._4_4_ != 8) {
    fVar6 = (float)local_90;
  }
  if (200.0 <= fVar6) {
    if ((int)local_98 * -0x55555555 + 0x2aaaaaaaU < 0x55555555) {
      fVar6 = fVar6 / 3.0;
    }
    else {
      fVar6 = fVar6 * 0.5;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = (undefined4)local_ac;
  *(float *)(param_1 + 0x1c) = fVar6;
  *(uint *)(param_1 + 0x20) = (uint)local_a4;
  *(int *)(param_1 + 0x24) = local_b0;
  *(int *)(param_2 + 8) = local_b0;
  if (local_9c != '\0') {
    bVar4 = 0;
    uVar3 = 0xff;
    goto LAB_029ceb68;
  }
  uVar3 = 0xff;
  bVar4 = 0;
  if ((local_88 <= 0.0) || ((int)local_98 < 1)) goto LAB_029ceb68;
  uVar3 = (int)(local_88 * (float)(int)local_98 * 4.0) + 1;
  uVar3 = (int)((uVar3 + ((uVar3 & 0x80) >> 7)) * 0x1000000) >> 0x19;
  uVar1 = 0;
  if ((int)local_98 * 2 != uVar3) {
    uVar1 = uVar3;
  }
  uVar2 = uVar1;
  if ((uint)((int)local_98 * 2) <= (uVar1 & 0xff)) {
    uVar2 = 0;
  }
  uVar3 = 0;
  if (-1 < (int)uVar1) {
    uVar3 = uVar2;
  }
  if ((uint)((int)local_98 * -0x49249249) < 0x24924925) {
    if ((uVar3 + ((uVar3 >> 1 & 0x7f) / 7) * -0xe & 0xff) < 8) goto LAB_029cece4;
  }
  else if ((uint)((int)local_98 * -0x33333333) < 0x33333334) {
    if (5 < (uVar3 + ((uVar3 & 0xff) / 10) * -10 & 0xff)) goto LAB_029cece4;
  }
  else if (0x55555555 < (uint)((int)local_98 * -0x55555555)) {
    if (((local_98 & 1) != 0) && ((int)local_98 != 1)) {
      bVar4 = 0xff;
      goto LAB_029ceb68;
    }
LAB_029cece4:
    bVar4 = 1;
    if ((uVar3 & 3) != 0) {
      bVar4 = 2;
    }
    if ((uVar3 & 1) != 0) {
      bVar4 = 3;
    }
    goto LAB_029ceb68;
  }
  if ((uVar3 & 1) == 0) {
    bVar4 = 1;
    if (0x2a < (uVar3 * -0x2a80 & 0xff | uVar3 * -0x55 >> 1 & 0x7f)) {
      bVar4 = 2;
    }
  }
  else {
    bVar4 = 3;
  }
LAB_029ceb68:
  if ((local_90._4_4_ != *(int *)(param_1 + 0x18)) || ((uint)param_1[0x16] != (uVar3 & 0xff))) {
    param_1[0x15] = 0;
  }
  *(byte *)(param_2 + 3) = (byte)uVar3;
  *(byte *)(param_2 + 4) = bVar4;
  *(int *)(param_1 + 0x18) = local_90._4_4_;
  param_1[0x17] = bVar4;
  param_1[0x16] = (byte)uVar3;
  fVar6 = 0.5;
  if (*(float *)(param_1 + 0x40) < 0.0) {
    fVar6 = -0.5;
  }
  fVar7 = 0.5;
  if (*(float *)(param_1 + 0x44) < 0.0) {
    fVar7 = -0.5;
  }
  fVar5 = 0.5;
  if (*(float *)(param_1 + 0x48) < 0.0) {
    fVar5 = -0.5;
  }
  *(uint *)(param_1 + 0x10) =
       (int)local_114 * 0x1000 + (uint)local_a4 * 0x10000 +
       (int)(*(float *)(param_1 + 0x40) + fVar6) + (int)(*(float *)(param_1 + 0x48) + fVar5) * 0x100
       + (int)(*(float *)(param_1 + 0x44) + fVar7) * 0x10;
  return;
}

