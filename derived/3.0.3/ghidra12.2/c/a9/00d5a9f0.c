
void FUN_00d5a9f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *local_180;
  undefined8 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined *local_150;
  undefined1 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c [63];
  undefined1 local_fd;
  undefined *local_f8;
  undefined1 *puStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [63];
  undefined1 local_a5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60 [2];
  ulong local_58;
  byte local_38 [4];
  undefined4 local_34;
  
  pbVar1 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  local_38[0] = *pbVar1;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  lVar7 = FUN_025830c0(DAT_055021a0,local_38,1);
  if (lVar7 != 0) {
    if ((*(long **)(lVar7 + 0x18438) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x18438), puVar8 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar8)();
      uVar5 = uVar5 ^ 1;
    }
    lVar3 = *(long *)(lVar7 + 0x18418);
    lVar4 = *(long *)(lVar7 + 0x18420);
    local_158 = 0xffffffff;
    local_168 = 0xffffffff;
    uStack_160 = 0xffffffff00000000;
    local_16c = 0;
    local_170 = 0x20;
    puStack_148 = local_13c;
    local_140 = 0x40;
    puStack_178 = &local_a0;
    local_fd = 0;
    local_13c[0] = 0;
    local_150 = PTR_DAT_04bb2bc0 + 0x10;
    local_e8 = 0x40;
    local_a5 = 0;
    local_e4[0] = 0;
    puStack_f0 = local_e4;
    local_180 = PTR_DAT_04bb4e10 + 0x10;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    puVar2 = local_60;
    if (local_60 <= (undefined4 *)((long)&local_a0 + 2U)) {
      puVar2 = (undefined4 *)((long)&local_a0 + 2U);
    }
    local_f8 = local_150;
    memset(puStack_178,0,(long)puVar2 + (-0xe0 - (long)&local_180));
    uVar9 = *(ulong *)(lVar4 + lVar3);
    if (uVar9 == 0) {
      FUN_0080e7dc(&local_180);
    }
    else {
      local_60[0] = 0;
      local_58 = 0;
      if (uVar9 <= DAT_04c88ec8) {
        local_58 = uVar9;
      }
      FUN_01c15060(&local_180,local_60,&DAT_041697ea);
    }
    local_60[0] = 0x11;
    if (((DAT_0533a3c0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0533a3c0), iVar6 != 0)) {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar9 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar9 * 4) == 0x8c) goto LAB_00d5abcc;
        uVar9 = uVar9 + 1;
      } while (DAT_0533a3b0 != uVar9);
    }
    uVar9 = 0;
LAB_00d5abcc:
    local_34 = (undefined4)uVar9;
    FUN_01bae480(param_2,&local_180,param_3,&local_34,local_60[0]);
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar7 + 0x18438) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x18438) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  return;
}

