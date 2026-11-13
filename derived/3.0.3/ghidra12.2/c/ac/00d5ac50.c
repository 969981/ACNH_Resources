
void FUN_00d5ac50(undefined8 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
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
  undefined4 local_34;
  
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) {
        return;
      }
      lVar6 = lVar6 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return;
      }
      lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar6 == 0) {
        return;
      }
    }
    if ((*(long **)(FUN_002051f0 + lVar6) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(FUN_002051f0 + lVar6), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    lVar2 = *(long *)(lVar6 + 0x2051d0);
    lVar3 = *(long *)(FUN_002051d8 + lVar6);
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
    puVar1 = local_60;
    if (local_60 <= (undefined4 *)((long)&local_a0 + 2U)) {
      puVar1 = (undefined4 *)((long)&local_a0 + 2U);
    }
    local_f8 = local_150;
    memset(puStack_178,0,(long)puVar1 + (-0xe0 - (long)&local_180));
    uVar8 = *(ulong *)(lVar3 + lVar2);
    if (uVar8 == 0) {
      FUN_0080e7dc(&local_180);
    }
    else {
      local_60[0] = 0;
      local_58 = 0;
      if (uVar8 <= DAT_04c88ec8) {
        local_58 = uVar8;
      }
      FUN_01c15060(&local_180,local_60,&DAT_04169568);
    }
    local_60[0] = 0x11;
    if (((DAT_0533a3c0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_0533a3c0), iVar5 != 0)) {
      FUN_01bb25c8(&DAT_0533a3b0);
      __cxa_guard_release(&DAT_0533a3c0);
    }
    if (0 < (int)DAT_0533a3b0) {
      uVar8 = 0;
      do {
        if (*(int *)(DAT_0533a3b8 + uVar8 * 4) == 0x8c) goto LAB_00d5ae30;
        uVar8 = uVar8 + 1;
      } while (DAT_0533a3b0 != uVar8);
    }
    uVar8 = 0;
LAB_00d5ae30:
    local_34 = (undefined4)uVar8;
    FUN_01bae480(param_1,&local_180,param_2,&local_34,local_60[0]);
    if ((((uVar4 & 1) == 0) && (*(long *)(FUN_002051f0 + lVar6) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(FUN_002051f0 + lVar6) + 8), puVar7 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar7)();
    }
  }
  return;
}

