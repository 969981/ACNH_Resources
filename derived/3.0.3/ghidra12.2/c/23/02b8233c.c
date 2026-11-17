
uint FUN_02b8233c(long param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *local_40;
  char local_38;
  char local_37;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(uint *)(param_1 + 0x550) & 0xfffffffe) != 0x1a) {
    return 0;
  }
  local_14 = 0;
  uVar4 = FUN_02a6cf94(param_1 + 0x290 + (ulong)(*(uint *)(param_1 + 0x288) & 1) * 0x58 + 8,
                       param_1 + 0x438);
  if ((uVar4 & 1) != 0) {
    local_14 = *(undefined4 *)
                (param_1 + 0x290 + (ulong)(*(uint *)(param_1 + 0x288) & 1) * 0x58 + 0x48);
  }
  local_18 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071c8d0(&local_40,&local_14,&local_18,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bc4440 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4440), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4438 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4440);
    }
    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bc4438);
    if ((uVar4 & 1) == 0) {
      local_37 = '\0';
    }
  }
  uVar2 = 0;
  if (((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_37 != '\0')) {
    uVar2 = FUN_02b877c0(local_40,param_2 & 1);
  }
  return uVar2 & 1;
}

