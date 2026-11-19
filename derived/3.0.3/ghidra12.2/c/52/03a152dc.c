
void FUN_03a152dc(long *param_1,undefined8 *param_2)

{
  float fVar1;
  float __x;
  undefined *local_150;
  undefined2 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined8 local_124;
  undefined8 uStack_11c;
  undefined8 local_114;
  undefined8 uStack_10c;
  undefined1 auStack_104 [64];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined1 auStack_8c [4];
  int local_88;
  undefined4 local_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  
  (**(code **)(*param_1 + 0xd8))(param_1,param_1[0x22],auStack_8c);
  if (local_88 == 1) {
    local_b8 = CONCAT44(uStack_5c,local_60);
    local_b0 = local_50;
    local_150 = PTR_DAT_04bd0ec0 + 0x10;
    local_c4 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_c0 = *(undefined4 *)PTR_DAT_04bd0eb0;
    local_a8 = local_48;
    local_a4 = fStack_44;
    uStack_bc = *(undefined4 *)PTR_DAT_04bd0eb8;
    local_148 = 0x101;
    FUN_038e5b6c(&local_150,&local_144);
  }
  else {
    if (local_88 != 0) {
      return;
    }
    if ((char)param_1[0x47] != '\0') {
      local_60 = (undefined4)param_1[0x4b];
      uStack_5c = (undefined4)param_1[0x4f];
      local_58 = *(float *)(param_1 + 0x57);
      uStack_54 = (undefined4)param_1[0x53];
    }
    local_9c = 0;
    local_150 = PTR_DAT_04bbd858 + 0x10;
    local_148._1_1_ = 1;
    local_c4 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_c0 = *(undefined4 *)PTR_DAT_04bd0eb0;
    local_b8 = CONCAT44(uStack_5c,local_60);
    local_b0 = CONCAT44(local_b0._4_4_,local_58);
    uStack_bc = *(undefined4 *)PTR_DAT_04bd0eb8;
    __x = local_58 * 0.5;
    local_a0 = uStack_54;
    fVar1 = sinf(__x);
    local_b0 = CONCAT44(fVar1,(undefined4)local_b0);
    local_a8 = cosf(__x);
    local_a4 = tanf(__x);
    local_148 = CONCAT11(local_148._1_1_,1);
    (**(code **)(local_150 + 0x58))(&local_150,&local_144);
  }
  local_148 = 0x100;
  (**(code **)(local_150 + 0x60))(&local_150,auStack_104,&local_144,local_c4);
  param_2[1] = uStack_13c;
  *param_2 = local_144;
  param_2[3] = uStack_12c;
  param_2[2] = local_134;
  param_2[5] = uStack_11c;
  param_2[4] = local_124;
  param_2[7] = uStack_10c;
  param_2[6] = local_114;
  return;
}

