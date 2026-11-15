
void FUN_01e6b6d8(long param_1,ulong param_2,ulong param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined4 local_1ec;
  undefined1 local_1e6;
  undefined2 local_144;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  lVar3 = FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
  if (lVar3 == 0) {
    return;
  }
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  local_60 = 0xfffe;
  FUN_0277d4ac(&local_60);
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar4 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar4 = &DAT_05240280;
    }
    else {
      plVar4 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar4 + 0x2f0))(auStack_70);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar4 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar4 = &DAT_05240280;
    }
    else {
      plVar4 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar4 + 0x2d8))(auStack_78);
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar4 == (long *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      plVar4 = &DAT_05240280;
    }
    else {
      plVar4 = &DAT_05240280;
    }
  }
  (**(code **)(*plVar4 + 0x2e0))(auStack_80);
  if (param_4 == (undefined4 *)0x0) {
    if (*(long *)(param_1 + 8) == 0) {
      local_84 = 0;
    }
    else {
      lVar9 = param_1 + 0xb030;
      if ((param_2 & 1) == 0) {
        lVar9 = 0;
      }
      local_84 = FUN_021dd800(*(long *)(param_1 + 8) + 0x508,lVar9);
    }
  }
  else {
    local_84 = *param_4;
  }
  lVar9 = *(long *)(lVar3 + 0x28);
  if (lVar9 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar4 = *(long **)(lVar9 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar3 + 0x28) == 0) goto LAB_01e6b880;
      plVar4 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_250 = *(ulong *)(lVar3 + 8);
      uStack_248 = *(undefined8 *)(lVar3 + 0x10);
      local_240 = 0x13230;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_250);
    }
  }
LAB_01e6b880:
  uVar6 = FUN_0269b5c0(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8),&local_58,&local_60,&local_68,
                       &local_84,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x690) != 0) {
      if ((*(long *)(lVar3 + 0x28) != 0) &&
         (plVar4 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
        local_250 = *(ulong *)(lVar3 + 8);
        uStack_248 = *(undefined8 *)(lVar3 + 0x10);
        local_240 = 0x13230;
        (**(code **)(*plVar4 + 0x20))(plVar4,&local_250);
      }
      *(char *)(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8) + 0x1315b) = (char)local_84;
      uVar1 = FUN_021d7d60();
      uVar6 = local_250 >> 0x30;
      local_a4._0_2_ = CONCAT11((char)local_84,uVar1);
      local_250 = CONCAT26((ushort)uVar6 & 0xff00,0xff0000000000);
      if (-1 < DAT_053d0e30) {
        FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0e30,&local_250,&local_a4,2,0);
      }
    }
    local_a4 = 0xfffe;
    FUN_0277d4ac(&local_a4);
    local_9c = 0xfffe;
    FUN_0277d4ac(&local_9c);
    local_94 = 0xfffe;
    FUN_0277d4ac(&local_94);
    local_8c = local_8c & 0xffffff00;
    uStack_88 = 0xffffffff;
    uVar6 = FUN_0277d7b4(&local_58,auStack_70);
    if ((uVar6 & 1) == 0) {
      local_250 = local_250 & 0xffffffff00000000;
      local_a4 = local_58;
      local_8c = local_8c | 1;
    }
    uVar6 = FUN_0277d7b4(&local_60,auStack_78);
    if ((uVar6 & 1) == 0) {
      local_9c = local_60;
      local_250 = CONCAT44(local_250._4_4_,1);
      local_8c = local_8c | 2;
    }
    uVar6 = FUN_0277d7b4(&local_68,auStack_80);
    uVar8 = local_8c & 0xff;
    if ((uVar6 & 1) == 0) {
      local_94 = local_68;
      local_250 = CONCAT44(local_250._4_4_,2);
      uVar8 = uVar8 | 4;
      local_8c = CONCAT31(local_8c._1_3_,(char)uVar8);
    }
    if ((uVar8 & 7) != 0) {
      *(undefined4 *)(param_1 + 0xae90) = (undefined4)local_a4;
      *(undefined4 *)(param_1 + 0xae94) = local_a4._4_4_;
      *(undefined8 *)(param_1 + 0xae98) = local_9c;
      *(undefined4 *)(param_1 + 0xaea0) = (undefined4)local_94;
      *(undefined4 *)(param_1 + 0xaea4) = local_94._4_4_;
      *(ulong *)(param_1 + 0xaea8) = CONCAT44(uStack_88,local_8c);
      if ((param_3 & 1) == 0) {
        FUN_01e63f1c(&local_250);
        local_144 = 0x101;
        local_250 = CONCAT44(local_250._4_4_,0x13);
        local_1e6 = 1;
        local_1ec = 1;
        if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
          FUN_021920b0((int *)(param_1 + 0xef10),&local_250);
        }
      }
    }
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

