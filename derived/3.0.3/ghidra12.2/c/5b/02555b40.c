
undefined8 FUN_02555b40(byte *param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  int local_8;
  undefined4 local_4;
  
  local_4 = param_2;
  uVar3 = FUN_0255594c(param_1,param_2,1);
  if ((uVar3 & 1) != 0) {
    piVar4 = (int *)PTR_DAT_04bb3238;
    if ((ulong)*param_1 < 8) {
      if (DAT_054f5738 != 0) {
        piVar4 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
      }
    }
    local_8 = *piVar4;
    if (local_8 != 0) {
      FUN_0071c8d0(&local_30,&local_8,&local_4,0);
      plVar1 = local_30;
      if (local_30 != (long *)0x0) {
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
        if ((uVar3 & 1) == 0) {
          local_27 = '\0';
        }
      }
      if (local_30 == (long *)0x0) {
        return 0;
      }
      if (local_28 == '\0') {
        return 0;
      }
      if (local_27 == '\0') {
        return 0;
      }
      if (local_26 == '\0') {
        return 0;
      }
      if ((int)local_30[0x2f] == 0) {
        FUN_02373fd0(local_30,1);
        return 1;
      }
    }
  }
  return 0;
}

