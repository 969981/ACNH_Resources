
void FUN_00d5aec0(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *local_170;
  undefined8 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50 [2];
  ulong local_48;
  byte local_28 [4];
  undefined4 local_24;
  
  pbVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  local_28[0] = *pbVar1;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  lVar5 = FUN_025830c0(DAT_055021a0,local_28,1);
  if (lVar5 != 0) {
    if ((*(long **)(lVar5 + 0x18438) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x18438), puVar6 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar6)();
      uVar3 = uVar3 ^ 1;
    }
    local_15c = 0;
    local_160 = 0x20;
    local_158 = 0xffffffff;
    uStack_150 = 0xffffffff00000000;
    puStack_168 = &local_90;
    local_148 = 0xffffffff;
    puStack_138 = local_12c;
    local_130 = 0x40;
    local_ed = 0;
    local_12c[0] = 0;
    local_140 = PTR_DAT_04bb2bc0 + 0x10;
    local_d8 = 0x40;
    local_95 = 0;
    local_d4[0] = 0;
    puStack_e0 = local_d4;
    local_170 = PTR_DAT_04bb4e10 + 0x10;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    puVar2 = local_50;
    if (local_50 <= (undefined4 *)((long)&local_90 + 2U)) {
      puVar2 = (undefined4 *)((long)&local_90 + 2U);
    }
    local_e8 = local_140;
    memset(puStack_168,0,(long)puVar2 + (-0xe0 - (long)&local_170));
    uVar7 = *(ulong *)(*(long *)(lVar5 + 0x18420) + *(long *)(lVar5 + 0x18418) + 8);
    if (uVar7 == 0) {
      FUN_0080e7dc(&local_170);
    }
    else {
      local_50[0] = 0;
      local_48 = 0;
      if (uVar7 <= DAT_04c88ec8) {
        local_48 = uVar7;
      }
      FUN_01c15060(&local_170,local_50,&DAT_04169048);
    }
    local_50[0] = 0x11;
    if (((DAT_0533a3c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0533a3c0), iVar4 != 0)) {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar7 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar7 * 4) == 0x8c) goto LAB_00d5b09c;
        uVar7 = uVar7 + 1;
      } while (DAT_0533a3b0 != uVar7);
    }
    uVar7 = 0;
LAB_00d5b09c:
    local_24 = (undefined4)uVar7;
    FUN_01bae480(param_2,&local_170,param_3,&local_24,local_50[0]);
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x18438) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x18438) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  return;
}

