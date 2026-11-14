
undefined8 FUN_01d4dd04(long param_1)

{
  ulong uVar1;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (*(int *)(param_1 + 0x3e4) == 1) {
    local_b0[0] = 0x46;
    uVar1 = FUN_01d66a14(param_1 + 0x200,local_b0);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b0[0] = CONCAT22(local_b0[0]._2_2_,0xff47);
    local_24 = 0xff00;
    local_28 = 0;
    local_22 = 0;
    if (-1 < DAT_0536e668) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_0536e668,&local_28,local_b0,2,0);
    }
    if (*(int *)(param_1 + 0x278) == 0x46) {
      *(undefined4 *)(param_1 + 0x278) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x27c) == 0x46) {
      *(undefined4 *)(param_1 + 0x27c) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x280) == 0x46) {
      *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x284) == 0x46) {
      *(undefined4 *)(param_1 + 0x284) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x288) == 0x46) {
      *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x28c) == 0x46) {
      *(undefined4 *)(param_1 + 0x28c) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x290) == 0x46) {
      *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x294) == 0x46) {
      *(undefined4 *)(param_1 + 0x294) = 0xffffffff;
    }
  }
  else if (*(char *)(param_1 + 0x264) == '\0') {
    return 0;
  }
  return 1;
}

