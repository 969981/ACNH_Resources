
void FUN_01bb1e40(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 extraout_x1;
  ulong uVar6;
  undefined2 uVar7;
  undefined4 local_84;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined4 local_70;
  undefined *local_68;
  undefined2 *puStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined4 local_18;
  int local_14;
  
  puVar3 = PTR_DAT_04bc0a88;
  local_50 = 0x200020000000e;
  local_3a = 2;
  local_34 = 0;
  local_44 = 0;
  uVar7 = 0x55;
  if (param_2 != 0) {
    uVar7 = 100;
  }
  local_48 = 100;
  puStack_78 = &local_50;
  bVar4 = **(int **)PTR_DAT_04bb3448 != 0;
  local_40 = 0xe256;
  if (bVar4) {
    local_40 = 0xe;
  }
  local_36 = uVar7;
  local_38 = 2;
  if (bVar4) {
    local_36 = 0;
    local_38 = uVar7;
  }
  local_3e = 0xe;
  if (bVar4) {
    local_3e = 0;
  }
  local_46 = 0xe256;
  if (bVar4) {
    local_46 = 0;
  }
  puStack_60 = &local_40;
  local_3c = (ushort)bVar4 << 1;
  local_80 = PTR_DAT_04bb2de8 + 0x10;
  local_58 = 7;
  local_70 = 7;
  local_68 = local_80;
  local_14 = param_2;
  if ((*PTR_DAT_04bc0a88 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04bc0a88);
    if (iVar5 != 0) {
      FUN_01bb25c8(PTR_DAT_04bc0a80,extraout_x1,param_2);
      __cxa_guard_release(PTR_DAT_04bc0a88);
    }
  }
  puVar2 = PTR_DAT_04bc0a80;
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar6 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar6 * 4) == 10) goto LAB_01bb1f5c;
      uVar6 = uVar6 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar6);
  }
  uVar6 = 0;
LAB_01bb1f5c:
  local_18 = (undefined4)uVar6;
  FUN_01bae480(param_1,&local_68,param_2,&local_18,0x11);
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar5 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  uVar1 = *(uint *)puVar2;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      if (*(int *)(*(long *)(puVar2 + 8) + uVar6 * 4) == 10) goto LAB_01bb1fac;
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  uVar6 = 0;
LAB_01bb1fac:
  local_84 = (undefined4)uVar6;
  FUN_01bae480(param_1,&local_80,0x1ffffff,&local_84,0x11);
  return;
}

