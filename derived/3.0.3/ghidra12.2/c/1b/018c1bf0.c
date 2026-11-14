
long * FUN_018c1bf0(long *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined *local_58;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined1 local_44 [31];
  undefined1 local_25;
  
  local_25 = 0;
  local_48 = 0x20;
  puStack_50 = local_44;
  local_44[0] = 0;
  local_58 = PTR_DAT_04bb2028 + 0x10;
  (**(code **)(*param_1 + 0x30))(param_1,param_3,&local_58);
  if (((param_1[7] != 0) && (param_2 < *(uint *)(param_1 + 6))) &&
     (plVar2 = *(long **)(param_1[7] + (long)(int)param_2 * 8), plVar2 != (long *)0x0)) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x168))(plVar2,&local_58);
    if (((*PTR_DAT_04bbef20 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbef20), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbef18 = PTR_DAT_04bb2fb8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbef20);
    }
    if ((plVar2 != (long *)0x0) &&
       (uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,PTR_DAT_04bbef18), (uVar3 & 1) != 0)) {
      return plVar2;
    }
  }
  plVar2 = (long *)FUN_018c1da0(param_1);
  return plVar2;
}

