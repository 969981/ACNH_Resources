
undefined8 FUN_01a38c48(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 local_3c;
  long local_38;
  char local_30;
  char local_2f;
  char local_2e;
  int local_24;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0;
  }
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  local_24 = *(int *)(param_1 + ((ulong)*(uint *)(param_1 + 0x368) & 1) * 0x20 + 0x380);
  if (local_24 != 0) {
    local_3c = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_38,&local_24,&local_3c,0);
    if ((((local_38 != 0) && (local_30 != '\0')) && (local_2f != '\0')) && (local_2e != '\0')) {
      plVar3 = *(long **)(local_38 + 0x68);
      if (plVar3 != (long *)0x0) {
        if (((*PTR_DAT_04bb3660 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3660), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bb3658 = PTR_DAT_04bb3668 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3660);
        }
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb3658);
        if ((uVar2 & 1) == 0) {
          plVar3 = *(long **)(local_38 + 0x68);
          if (plVar3 != (long *)0x0) {
            if (((*PTR_DAT_04bbfce0 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfce0), iVar1 != 0)) {
              *(undefined **)PTR_DAT_04bbfcd8 = PTR_DAT_04bb2e20 + 0x10;
              __cxa_guard_release(PTR_DAT_04bbfce0);
            }
            uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbfcd8);
            if ((uVar2 & 1) != 0) {
              FUN_01a282fc(plVar3);
            }
          }
        }
        else {
          FUN_00755320(plVar3);
        }
      }
      plVar3 = *(long **)(local_38 + 0x60);
      if (plVar3 != (long *)0x0) {
        if (((*PTR_DAT_04bb36c0 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb36c0), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bb36b8 = PTR_DAT_04bb36c8 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb36c0);
        }
        uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb36b8);
        if (((uVar2 & 1) != 0) || (plVar3 = *(long **)(local_38 + 0x60), plVar3 != (long *)0x0)) {
          (**(code **)(*plVar3 + 0x118))(plVar3);
          *(undefined4 *)param_2 = *(undefined4 *)((long)plVar3 + 0x11c4);
          *(int *)((long)param_2 + 4) = (int)plVar3[0x239];
          *(undefined4 *)(param_2 + 1) = *(undefined4 *)((long)plVar3 + 0x11cc);
          *(int *)((long)param_2 + 0xc) = (int)plVar3[0x23a];
          *(undefined4 *)(param_2 + 2) = *(undefined4 *)((long)plVar3 + 0x11d4);
          *(int *)((long)param_2 + 0x14) = (int)plVar3[0x23b];
          return 1;
        }
      }
    }
  }
  return 0;
}

