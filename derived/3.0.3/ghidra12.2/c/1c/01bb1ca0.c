
void FUN_01bb1ca0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 uVar5;
  ulong uVar6;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 *puStack_60;
  undefined4 local_58;
  undefined4 local_4c;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  
  puVar3 = PTR_DAT_04bc0a88;
  local_44 = (undefined2)param_4;
  uVar5 = 2;
  if ((param_3 & 1) != 0) {
    uVar5 = 3;
  }
  local_4c = 0xc6000e;
  puStack_60 = &local_4c;
  local_46 = 2;
  local_42 = 0;
  local_68 = PTR_DAT_04bb2de8 + 0x10;
  local_58 = 6;
  local_48 = uVar5;
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar4 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  puVar2 = PTR_DAT_04bc0a80;
  if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
    uVar6 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar6 * 4) == 0x96) goto LAB_01bb1d50;
      uVar6 = uVar6 + 1;
    } while (*(uint *)PTR_DAT_04bc0a80 != uVar6);
  }
  uVar6 = 0;
LAB_01bb1d50:
  local_6c = (undefined4)uVar6;
  FUN_01bae480(param_1,&local_68,param_4,&local_6c,0);
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar4 != 0)) {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  uVar1 = *(uint *)puVar2;
  if (0 < (int)uVar1) {
    uVar6 = 0;
    do {
      if (*(int *)(*(long *)(puVar2 + 8) + uVar6 * 4) == 0xc6) goto LAB_01bb1dac;
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  uVar6 = 0;
LAB_01bb1dac:
  local_70 = (undefined4)uVar6;
  FUN_01bae480(param_1,param_2,param_4,&local_70,uVar5);
  return;
}

