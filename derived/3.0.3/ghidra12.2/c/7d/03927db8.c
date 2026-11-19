
void FUN_03927db8(long param_1)

{
  float __x;
  undefined *local_f0;
  undefined2 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined1 auStack_a4 [64];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined8 local_3c;
  
  if (*(int *)(param_1 + 0x128) == 1) {
    local_58 = *(undefined4 *)(param_1 + 0x1c0);
    uStack_54 = *(undefined4 *)(param_1 + 0x1e0);
    local_f0 = PTR_DAT_04bd0ec0 + 0x10;
    local_64 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_4c = ABS(*(float *)(param_1 + 0x240) + 0.0);
    local_60 = *(undefined4 *)PTR_DAT_04bd0eb0;
    local_44 = ABS(*(float *)(param_1 + 0x200) * *(float *)(param_1 + 0x240) + 0.0);
    uStack_5c = *(undefined4 *)PTR_DAT_04bd0eb8;
    local_e8 = 0x101;
    local_50 = local_4c * 0.5;
    local_4c = local_4c * -0.5;
    local_48 = local_44 * -0.5;
    local_44 = local_44 * 0.5;
    FUN_038e5b6c(&local_f0,&local_e4);
  }
  else {
    if (*(int *)(param_1 + 0x128) != 0) {
      return;
    }
    local_58 = *(undefined4 *)(param_1 + 0x1c0);
    uStack_54 = *(undefined4 *)(param_1 + 0x1e0);
    local_40 = *(undefined4 *)(param_1 + 0x200);
    local_50 = *(float *)(param_1 + 0x220) * 0.017453292;
    local_64 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_e8._1_1_ = 1;
    local_60 = *(undefined4 *)PTR_DAT_04bd0eb0;
    uStack_5c = *(undefined4 *)PTR_DAT_04bd0eb8;
    local_3c = 0;
    __x = local_50 * 0.5;
    local_f0 = PTR_DAT_04bbd858 + 0x10;
    local_4c = sinf(__x);
    local_48 = cosf(__x);
    local_44 = tanf(__x);
    local_e8 = CONCAT11(local_e8._1_1_,1);
    FUN_038e5968(&local_f0,&local_e4);
  }
  local_e8 = 0x100;
  (**(code **)(local_f0 + 0x60))(&local_f0,auStack_a4,&local_e4,local_64);
  *(undefined8 *)(param_1 + 0x280) = uStack_dc;
  *(undefined8 *)(param_1 + 0x278) = local_e4;
  *(undefined8 *)(param_1 + 0x290) = uStack_cc;
  *(undefined8 *)(param_1 + 0x288) = local_d4;
  *(undefined8 *)(param_1 + 0x2a0) = uStack_bc;
  *(undefined8 *)(param_1 + 0x298) = local_c4;
  *(undefined8 *)(param_1 + 0x2b0) = uStack_ac;
  *(undefined8 *)(param_1 + 0x2a8) = local_b4;
  return;
}

