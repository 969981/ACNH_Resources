
undefined8 FUN_01bb4cbc(long *param_1,long *param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint local_ac;
  uint local_a8 [6];
  long local_90 [6];
  undefined8 local_60;
  long local_58;
  byte *local_50;
  byte *pbStack_48;
  
  if (((DAT_0533b010 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0533b010), iVar2 != 0)) {
    FUN_01bb4f40(&DAT_0533aff8,0x7d);
    DAT_0533affc = 0;
    FUN_01bb4f40(&DAT_0533b000,0x8c);
    DAT_0533b004 = 0xb;
    FUN_01bb4f40(&DAT_0533b008,0x8c);
    DAT_0533b00c = 0xc;
    __cxa_guard_release(&DAT_0533b010);
  }
  local_50 = *(byte **)(param_3 + 0x18);
  pbStack_48 = local_50 + *(ushort *)(param_3 + 0x10);
  if ((ulong)*(ushort *)(param_3 + 0x10) == 0) {
    uVar8 = 0;
    local_60 = local_50;
  }
  else {
    uVar8 = (uint)*local_50;
    local_60 = local_50 + 1;
  }
  if (pbStack_48 < local_60 + 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)*local_60;
    local_60 = local_60 + 1;
  }
  local_58 = param_3;
  FUN_006f4120(&local_60,local_90,local_a8,6);
  if (2 < uVar8) {
    return 0;
  }
  if (((*PTR_DAT_04bc0a88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar2 != 0))
  {
    FUN_01bb25c8(PTR_DAT_04bc0a80);
    __cxa_guard_release(PTR_DAT_04bc0a88);
  }
  uVar1 = *(uint *)(&DAT_0533aff8 + (ulong)uVar8 * 8);
  if (*(uint *)PTR_DAT_04bc0a80 <= uVar1) {
    uVar1 = 0;
  }
  local_58 = CONCAT44(local_58._4_4_,uVar7);
  local_60 = (byte *)CONCAT44((&DAT_0533affc)[(ulong)uVar8 * 2],
                              *(undefined4 *)
                               (*(long *)(PTR_DAT_04bc0a80 + 8) + (long)(int)uVar1 * 4));
  if (param_4 == 0) {
    return 0;
  }
  plVar3 = (long *)FUN_01bc06e0(param_4,&local_60,1);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
  piVar4 = (int *)(**(code **)(*plVar3 + 0x48))();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar2 = *piVar4;
  local_ac = 0;
  if (piVar4[1] == 1) {
    if (iVar2 == 3) {
      local_ac = 5;
    }
    else if (iVar2 == 2) {
      local_ac = 4;
    }
    else if (iVar2 == 1) {
      local_ac = 3;
    }
  }
  else if (piVar4[1] == 0) {
    if (iVar2 == 3) {
      local_ac = 2;
    }
    else if (iVar2 == 2) {
      local_ac = 1;
    }
  }
  uVar5 = (ulong)local_ac;
  if (5 < local_ac) {
    uVar5 = 0;
  }
  lVar6 = local_90[uVar5];
  *param_1 = lVar6;
  uVar5 = (ulong)local_ac;
  if (5 < local_ac) {
    uVar5 = 0;
  }
  *param_2 = lVar6 + (ulong)local_a8[uVar5] * 2;
  return 1;
}

