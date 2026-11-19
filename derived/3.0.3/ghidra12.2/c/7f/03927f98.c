
void FUN_03927f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float __x;
  undefined *local_160;
  undefined2 local_158;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  
  local_a0 = &DAT_3f8000003f800000;
  puStack_98 = &DAT_3f8000003f800000;
  FUN_038e4cec(&local_160);
  FUN_038e4d90(&local_160,param_2);
  FUN_007535b4(&local_90,param_1 + 0x248);
  FUN_039414d0(0x3f800000,param_2,&local_90,param_1 + 0x170,param_3,param_4,1,&local_a0);
  if (*(int *)(param_1 + 0x128) == 1) {
    local_c8 = *(undefined4 *)(param_1 + 0x1c0);
    uStack_c4 = *(undefined4 *)(param_1 + 0x1e0);
    local_160 = PTR_DAT_04bd0ec0 + 0x10;
    local_d4 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_bc = ABS(*(float *)(param_1 + 0x240) + 0.0);
    local_d0 = *(undefined4 *)PTR_DAT_04bd0eb0;
    local_b4 = ABS(*(float *)(param_1 + 0x200) * *(float *)(param_1 + 0x240) + 0.0);
    uStack_cc = *(undefined4 *)PTR_DAT_04bd0eb8;
    local_158 = 0x101;
    local_c0 = local_bc * 0.5;
    local_bc = local_bc * -0.5;
    local_b8 = local_b4 * -0.5;
    local_b4 = local_b4 * 0.5;
  }
  else {
    if (*(int *)(param_1 + 0x128) != 0) {
      return;
    }
    local_c8 = *(undefined4 *)(param_1 + 0x1c0);
    uStack_c4 = *(undefined4 *)(param_1 + 0x1e0);
    local_b0 = *(undefined4 *)(param_1 + 0x200);
    local_c0 = *(float *)(param_1 + 0x220) * 0.017453292;
    local_d4 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_158._1_1_ = 1;
    local_d0 = *(undefined4 *)PTR_DAT_04bd0eb0;
    uStack_cc = *(undefined4 *)PTR_DAT_04bd0eb8;
    local_ac = 0;
    __x = local_c0 * 0.5;
    local_160 = PTR_DAT_04bbd858 + 0x10;
    local_bc = sinf(__x);
    local_b8 = cosf(__x);
    local_b4 = tanf(__x);
    local_158 = CONCAT11(local_158._1_1_,1);
  }
  puStack_88 = &DAT_3f8000003f800000;
  local_90 = &DAT_3f8000003f800000;
  FUN_0394220c(param_2,param_1 + 0x248,&local_160,param_3,param_4,1,&local_90);
  return;
}

