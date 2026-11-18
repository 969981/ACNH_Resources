
void FUN_0344fb70(long param_1,ulong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_160;
  undefined8 *puStack_158;
  undefined4 local_150;
  undefined1 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined *local_130;
  undefined1 *puStack_128;
  undefined4 local_120;
  undefined1 local_11c [63];
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [63];
  undefined1 local_85;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40 [2];
  ulong local_38;
  undefined4 local_14;
  
  if (param_1 != 0) {
    local_14c = 0;
    local_150 = 0x20;
    local_148 = 0xffffffff;
    uStack_140 = 0xffffffff00000000;
    puStack_158 = &local_80;
    local_138 = 0xffffffff;
    puStack_128 = local_11c;
    local_120 = 0x40;
    local_dd = 0;
    local_11c[0] = 0;
    local_130 = PTR_DAT_04bb2bc0 + 0x10;
    local_c8 = 0x40;
    local_85 = 0;
    local_c4[0] = 0;
    puStack_d0 = local_c4;
    local_160 = PTR_DAT_04bb4e10 + 0x10;
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    puVar1 = local_40;
    if (local_40 <= (undefined4 *)((long)&local_80 + 2U)) {
      puVar1 = (undefined4 *)((long)&local_80 + 2U);
    }
    local_d8 = local_130;
    memset(puStack_158,0,(long)puVar1 + (-0xe0 - (long)&local_160));
    uVar3 = *param_2;
    if (uVar3 == 0) {
      FUN_0080e7dc(&local_160);
    }
    else {
      local_40[0] = 1;
      local_38 = 0;
      if (uVar3 <= DAT_04c88ed0) {
        local_38 = uVar3;
      }
      FUN_01c15060(&local_160,local_40,&DAT_04169b28);
    }
    local_40[0] = 0xf;
    if (((DAT_0533a3c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0533a3c0), iVar2 != 0)) {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar3 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar3 * 4) == 0x8c) goto LAB_0344fccc;
        uVar3 = uVar3 + 1;
      } while (DAT_0533a3b0 != uVar3);
    }
    uVar3 = 0;
LAB_0344fccc:
    local_14 = (undefined4)uVar3;
    FUN_01bae480(param_1,&local_160,0,&local_14,local_40[0]);
  }
  return;
}

