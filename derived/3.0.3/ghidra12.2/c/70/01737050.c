
uint FUN_01737050(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *local_30;
  char local_28;
  char local_27;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = param_3;
  uStack_4 = param_1;
  FUN_0071c8d0(&local_30,&uStack_4,&local_8,0);
  plVar1 = local_30;
  if (local_30 != (long *)0x0) {
    if ((*PTR_DAT_04bb3760 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3760);
      if (iVar3 != 0) {
        *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3760);
      }
    }
    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3758);
    if ((uVar4 & 1) == 0) {
      local_27 = '\0';
    }
  }
  uVar2 = 0;
  if (((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_27 != '\0')) {
    uVar2 = (**(code **)(*local_30 + 0x260))(local_30,param_2);
  }
  return uVar2 & 1;
}

