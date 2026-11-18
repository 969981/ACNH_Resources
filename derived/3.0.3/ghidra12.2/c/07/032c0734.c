
void FUN_032c0734(undefined4 param_1,long param_2,undefined4 param_3)

{
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined *local_a0;
  undefined ***local_98;
  undefined **local_90;
  long lStack_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined ***local_68;
  undefined **local_60;
  long lStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined ***local_38;
  undefined **local_30;
  long lStack_28;
  undefined1 *local_20;
  undefined8 uStack_18;
  
  local_90 = &PTR_LAB_04b1ad88;
  local_98 = &local_90;
  local_a0 = PTR_DAT_04bc9070 + 0x10;
  local_80 = &LAB_032c0824;
  uStack_78 = 0;
  local_68 = &local_60;
  local_40 = PTR_DAT_04bc9078 + 0x10;
  local_38 = &local_30;
  local_ac = *(undefined4 *)(*(long *)(param_2 + 0x118) + 0x50);
  uStack_a8 = *(undefined4 *)(*(long *)(param_2 + 0x118) + 0x54);
  local_60 = &PTR_LAB_04b1ad88;
  local_50 = &LAB_032c083c;
  uStack_48 = 0;
  local_30 = &PTR_LAB_04b1ae10;
  local_20 = &LAB_032c0854;
  uStack_18 = 0;
  local_b0 = param_3;
  local_a4 = param_1;
  lStack_88 = param_2;
  local_70 = local_a0;
  lStack_58 = param_2;
  lStack_28 = param_2;
  FUN_03292c10(*(undefined8 *)(param_2 + 0x18),&local_b0,0);
  if (local_38 != (undefined ***)0x0) {
    (*(code *)(*local_38)[1])();
  }
  if (local_68 != (undefined ***)0x0) {
    (*(code *)(*local_68)[1])();
  }
  if (local_98 != (undefined ***)0x0) {
    (*(code *)(*local_98)[1])();
  }
  return;
}

