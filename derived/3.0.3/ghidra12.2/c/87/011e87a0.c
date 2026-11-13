
uint FUN_011e87a0(long param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *local_40;
  char local_38;
  char local_36;
  long *local_30;
  char local_28;
  char local_26;
  undefined4 local_4;
  
  local_4 = param_2;
  FUN_0071cb58(&local_30,&DAT_050dfb28,&local_4,0);
  plVar1 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bbbb10 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bbbb10), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bbbb08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbbb10);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bbbb08);
    if ((uVar3 & 1) == 0) {
      local_26 = '\0';
    }
  }
  if ((((local_26 != '\0') && (local_30 != (long *)0x0)) && (local_28 != '\0')) &&
     (iVar2 = (int)local_30[0x49ef], 0 < iVar2)) {
    local_30 = local_30 + 0x50;
    do {
      if (((int)local_30[2] == *(int *)(param_1 + 8) &&
           *(int *)((long)local_30 + 0x14) == *(int *)(param_1 + 0xc)) &&
         (*(char *)((long)local_30 + 0x66) < '\0')) {
        if ((*(ushort *)(local_30 + 0xc) >> 4 & 1) != 0) {
          return 2;
        }
        if ((int)local_30[0xb] == 0) {
          FUN_0071cb58(&local_40,local_30,&local_4,0);
          plVar1 = local_40;
          if (local_40 != (long *)0x0) {
            if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar2 != 0)) {
              *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb2e60);
            }
            uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb2e58);
            if ((uVar3 & 1) == 0) {
              local_36 = '\0';
            }
          }
          if (local_36 == '\0') {
            return 2;
          }
          if (local_40 == (long *)0x0) {
            return 2;
          }
          if (local_38 == '\0') {
            return 2;
          }
          if (local_40[0xc] == 0) {
            return 2;
          }
          return (*(uint *)(local_40[0xc] + 0x11a0) >> 9 ^ 0xffffffff) & 1;
        }
      }
      iVar2 = iVar2 + -1;
      local_30 = local_30 + 0xf;
    } while (iVar2 != 0);
  }
  return 2;
}

