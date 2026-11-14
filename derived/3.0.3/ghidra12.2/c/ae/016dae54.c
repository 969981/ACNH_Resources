
void FUN_016dae54(ulong param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
                 int *param_6,int *param_7,undefined1 *param_8)

{
  float fVar1;
  float fVar2;
  undefined2 local_138 [2];
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((param_1 & 1) == 0) {
    local_138[0] = 0;
    local_120 = 0xbf800000;
    uStack_118 = 0;
    local_110 = 0xffffffffffffffff;
    uStack_108 = 0xffffffff00000000;
    local_134 = 0xffffffffffffffff;
    local_12c = 0xffffffffffffffff;
    local_124 = 0xffffffff;
    local_d0 = 0;
    local_cc = 0xffffffffffffffff;
    local_c4 = 0xffffffffffffffff;
    local_bc = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_100 = 0xffffffff00000000;
    uStack_f8 = 0xffffffffffffffff;
    local_e0 = 0xffffffff00000000;
    uStack_d8 = 0xffffffff00000000;
    local_f0 = 0;
    uStack_e8 = 0xffffffff;
    local_b8 = 0xffffffffffffffff;
    uStack_b0 = 0xffffffffbf800000;
    local_68 = 0xffffffff;
    FUN_029a7b28(DAT_055f6860 + 0x6d8,local_138,param_5);
    local_cc._0_4_ = (int)local_cc + 1;
    local_cc._4_4_ = local_cc._4_4_ + 1;
  }
  else {
    local_cc._4_4_ = 1;
    local_120._4_4_ = *(float *)(*(long *)PTR_DAT_04bb26a8 + 0xa5a20);
    local_12c._4_4_ = *(int *)(*(long *)PTR_DAT_04bb26a8 + 0xa5a14);
    local_cc._0_4_ = 1;
  }
  fVar1 = local_120._4_4_ * (float)local_12c._4_4_ * 0.25;
  fVar2 = 0.0;
  if (1.0 <= fVar1) {
    fVar2 = (float)(int)fVar1;
  }
  *param_2 = fVar1 - fVar2;
  *param_3 = local_120._4_4_;
  *param_4 = (float)local_12c._4_4_;
  if ((param_1 & 1) == 0) {
    if (param_6 != (int *)0x0) {
      *param_6 = local_cc._4_4_;
    }
    if (param_7 != (int *)0x0) {
      *param_7 = (int)local_cc;
    }
    if (param_8 != (undefined1 *)0x0) {
      *param_8 = 0;
    }
  }
  return;
}

