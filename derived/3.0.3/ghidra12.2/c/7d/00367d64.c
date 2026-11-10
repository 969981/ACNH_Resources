
uint FUN_00367d64(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,long param_7,undefined1 *param_8,
                 undefined1 param_9)

{
  uint uVar1;
  long lVar2;
  undefined8 local_170 [2];
  undefined8 local_160;
  long local_150;
  undefined8 local_148;
  undefined1 *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *plStack_118;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 *local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  
  local_140 = &DAT_3f8000003f800000;
  uStack_138 = 0;
  local_120 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0xffffffff00000000;
  lVar2 = (long)*(int *)PTR_DAT_04bd0818 * 0x30 + (long)*(int *)PTR_DAT_04bd0830 * 8 +
          (long)*(int *)PTR_DAT_04bd0820 * 0x18 + (long)*(int *)PTR_DAT_04bd0828 * 0x68;
  local_130 = param_5;
  uStack_128 = param_6;
  plStack_118 = param_1;
  FUN_0036b7cc(local_170,(long)local_170 - (lVar2 + 0x4fU & 0xfffffffffffffff0),lVar2 + 0x40);
  local_98 = param_8[0x19];
  local_6f = param_9;
  local_70 = *param_8;
  local_6c = *(undefined4 *)(param_7 + 8);
  local_64 = 0;
  local_6e = param_8[0x18];
  local_90 = *(undefined8 *)(param_8 + 8);
  uStack_88 = *(undefined8 *)(param_8 + 0x10);
  local_68 = param_8[0x1a];
  local_a0 = (undefined1 *)local_170;
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3,param_7,param_4,&local_140,0);
  if (local_150 != 0) {
    FUN_00367f00(local_170,param_3);
    if (local_150 != 0) {
      FUN_0036af50();
      local_150 = 0;
    }
    local_160 = 0;
    local_170[0] = 0;
    local_148 = 0;
  }
  FUN_0036b7e0(local_170);
  return uVar1 & 1;
}

