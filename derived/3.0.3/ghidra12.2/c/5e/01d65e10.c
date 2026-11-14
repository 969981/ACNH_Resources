
void FUN_01d65e10(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 local_a8;
  undefined1 local_a7;
  uint local_a6;
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
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_8;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  lVar1 = **(long **)PTR_DAT_04bb27d0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_a7 = 1;
  local_8 = 0;
  local_2 = 0;
  local_4 = 4;
  local_a8 = 6;
  local_3 = *param_2;
  local_a6 = *(uint *)(lVar1 + 200) >> 2 & 2 | *(uint *)(lVar1 + 0x48) >> 3 & 1 |
             *(uint *)(lVar1 + 0x148) >> 1 & 4 | *(uint *)(lVar1 + 0x1c8) & 8 |
             (*(uint *)(lVar1 + 0x248) >> 3 & 1) << 4 | (*(uint *)(lVar1 + 0x2c8) >> 3 & 1) << 5 |
             (*(uint *)(lVar1 + 0x348) >> 3 & 1) << 6 | (*(uint *)(lVar1 + 0x3c8) & 8) << 4;
  if (-1 < DAT_0536e668) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0536e668,&local_8,&local_a8,6,0);
  }
  *(undefined1 *)(param_1 + 0x2c) = 0;
  return;
}

