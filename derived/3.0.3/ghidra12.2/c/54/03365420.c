
void FUN_03365420(long *param_1)

{
  long lVar1;
  undefined **local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 local_78 [4];
  undefined ***local_70;
  undefined *puStack_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  char *local_30;
  undefined8 uStack_28;
  
  lVar1 = (**(code **)(*param_1 + 0x10))();
  (**(code **)(*param_1 + 0x18))(param_1);
  if (lVar1 != 0) {
    local_78[0] = 0;
    local_80 = 0;
    puStack_b0 = PTR_DAT_04bb2020 + 0x10;
    local_98 = PTR_DAT_04bb2120;
    uStack_90 = 0;
    local_50 = PTR_DAT_04bb2120;
    local_40 = PTR_DAT_04bb2120;
    local_a8 = PTR_DAT_04bb2120;
    local_88 = 1;
    local_70 = &local_b8;
    local_b8 = &PTR_LAB_04b206a8;
    local_30 = "SwkbdObject";
    uStack_28 = 0;
    puStack_a0 = puStack_b0;
    puStack_68 = puStack_b0;
    local_60 = lVar1;
    puStack_58 = puStack_b0;
    puStack_48 = puStack_b0;
    puStack_38 = puStack_b0;
    FUN_038387b8(param_1 + 1,local_78);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}

