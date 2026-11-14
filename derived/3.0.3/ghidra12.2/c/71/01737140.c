
uint FUN_01737140(int param_1,undefined4 param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 uStack_29;
  long *local_28;
  char local_20;
  char local_1f;
  undefined4 local_18;
  int local_14;
  
  uVar2 = 0;
  if (param_1 != 0) {
    local_18 = param_2;
    local_14 = param_1;
    FUN_0071c8d0(&local_28,&local_14,&local_18,0);
    plVar1 = local_28;
    if (local_28 != (long *)0x0) {
      if ((*PTR_DAT_04bb3760 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3760);
        if (iVar3 != 0) {
          *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3760);
        }
      }
      uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3758);
      if ((uVar4 & 1) == 0) {
        local_1f = '\0';
      }
    }
    if (((local_28 == (long *)0x0) || (local_20 == '\0')) || (local_1f == '\0')) {
      FUN_0252fe74(&uStack_29,local_14);
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*local_28 + 0x268))();
    }
  }
  return uVar2 & 1;
}

