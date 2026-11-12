
void FUN_007e5d30(ushort *param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_70 [2];
  long local_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb3128;
  if (param_2 == (long *)0x0) {
    return;
  }
  uVar5 = (ulong)*param_1;
  uVar2 = (uint)*param_1;
  if (uVar2 == *(ushort *)PTR_DAT_04bb3170) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar5 = (ulong)uVar2;
    if (iVar3 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar5 = (ulong)uVar2;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar6 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar6 * 4) == (int)(uVar5 >> 0xb)) goto LAB_007e5dc0;
      uVar6 = uVar6 + 1;
    } while (DAT_04c8c0f0 != uVar6);
  }
  uVar6 = 0;
LAB_007e5dc0:
  local_60 = (undefined *)CONCAT44(local_60._4_4_,(int)uVar6);
  if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04c8c100), iVar3 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar2 = (uint)local_60;
  if (DAT_04c8c0f0 <= (uint)local_60) {
    uVar2 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar2 * 4) == 0x11) {
    lVar7 = *(long *)(param_1 + 8);
    if (lVar7 == 0) {
LAB_007e5e30:
      lVar7 = *(long *)(param_1 + 4);
      if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar4 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
      local_68 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x10;
      local_70[0] = 0x14;
      (**(code **)(*param_2 + 0x38))(param_2);
      local_48 = 0;
      uStack_40 = 0;
      local_50 = 0;
      local_38 = 1;
      local_34 = 0;
      local_60 = PTR_DAT_04bc0cd8 + 0x10;
      uStack_58 = 0;
      FUN_02906b00(&local_60,param_2,local_70);
      if ((uVar2 & 1) != 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x28);
      goto joined_r0x007e5f2c;
    }
  }
  else {
    uVar5 = FUN_007ef180(param_1);
    if ((uVar5 & 1) == 0) goto LAB_007e5e30;
    lVar7 = *(long *)(param_1 + 8);
  }
  if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
     (puVar4 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar4 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar4)();
    uVar2 = uVar2 ^ 1;
  }
  local_68 = *(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8) + 0x10;
  local_70[0] = 0x14;
  (**(code **)(*param_2 + 0x38))(param_2);
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_38 = 1;
  local_34 = 0;
  local_60 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_58 = 0;
  FUN_02906b00(&local_60,param_2,local_70);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar7 = *(long *)(lVar7 + 0x28);
joined_r0x007e5f2c:
  if ((lVar7 != 0) && (*(undefined8 **)(lVar7 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar7 + 8))();
  }
  return;
}

