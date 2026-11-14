
void FUN_01d66734(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 local_140;
  undefined1 local_13f;
  undefined4 local_13e;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  local_c8 = 0;
  uStack_c0 = 0;
  local_13e = *param_2;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_140 = 0x3a;
  local_13f = 1;
  local_b8 = 0;
  local_b4 = 0xff00;
  local_b2 = 0;
  if (-1 < DAT_0536e668) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0536e668,&local_b8,&local_140,6,0);
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_1 + 0x58) == '\0') goto LAB_01d668dc;
  if (*(int *)(param_1 + 0x50) == 1) {
    local_b8 = CONCAT22(local_b8._2_2_,0xff08);
    local_13 = *(undefined1 *)(param_1 + 0x54);
    if (DAT_0536e668 < 0) goto LAB_01d668dc;
    uVar1 = 2;
  }
  else {
    if (*(int *)(param_1 + 0x50) != 0) goto LAB_01d668dc;
    local_b8 = CONCAT13(local_b8._3_1_,0x10407);
    local_13 = *(undefined1 *)(param_1 + 0x54);
    if (DAT_0536e668 < 0) goto LAB_01d668dc;
    uVar1 = 3;
  }
  local_12 = 0;
  local_14 = 4;
  local_18 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0536e668,&local_18,&local_b8,uVar1,0);
LAB_01d668dc:
  *(undefined1 *)(param_1 + 0x58) = 0;
  return;
}

