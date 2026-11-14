
undefined8 FUN_01a2da60(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_54;
  long *local_50;
  char local_48;
  char local_46;
  
  if (*(int *)(param_1 + 0x394) < 1) {
    return 0;
  }
  local_54 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_50,param_1 + 0x274,&local_54,0);
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    if (((*PTR_DAT_04bbfcc0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbfcc0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbfcb8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbfcc0);
    }
    uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbfcb8);
    if ((uVar6 & 1) == 0) {
      local_46 = '\0';
    }
  }
  if ((((local_50 == (long *)0x0) || (local_48 == '\0')) || (local_46 == '\0')) ||
     (1 < *(int *)((long)local_50 + ((ulong)~*(uint *)(local_50 + 0x6d) & 1) * 0x20 + 900) - 1U)) {
    if (*(int *)(param_1 + 0x394) < 2) {
      return 0;
    }
    local_54 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071cb58(&local_50,param_1 + 0x278,&local_54,0);
    plVar4 = local_50;
    if (local_50 != (long *)0x0) {
      if (((*PTR_DAT_04bbfcc0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbfcc0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bbfcb8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbfcc0);
      }
      uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbfcb8);
      if ((uVar6 & 1) == 0) {
        local_46 = '\0';
      }
    }
    if (((local_50 == (long *)0x0) || (local_48 == '\0')) ||
       ((local_46 == '\0' ||
        (1 < *(int *)((long)local_50 + ((ulong)~*(uint *)(local_50 + 0x6d) & 1) * 0x20 + 900) - 1U))
       )) {
      if (*(int *)(param_1 + 0x394) < 3) {
        return 0;
      }
      local_54 = *(undefined4 *)(param_1 + 0x230);
      FUN_0071cb58(&local_50,param_1 + 0x27c,&local_54,0);
      plVar4 = local_50;
      if (local_50 != (long *)0x0) {
        if (((*PTR_DAT_04bbfcc0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbfcc0), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bbfcb8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbfcc0);
        }
        uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbfcb8);
        if ((uVar6 & 1) == 0) {
          local_46 = '\0';
        }
      }
      if ((((local_50 == (long *)0x0) || (local_48 == '\0')) || (local_46 == '\0')) ||
         (1 < *(int *)((long)local_50 + ((ulong)~*(uint *)(local_50 + 0x6d) & 1) * 0x20 + 900) - 1U)
         ) {
        if (*(int *)(param_1 + 0x394) < 4) {
          return 0;
        }
        local_54 = *(undefined4 *)(param_1 + 0x230);
        FUN_0071cb58(&local_50,param_1 + 0x280,&local_54,0);
        plVar4 = local_50;
        if (local_50 != (long *)0x0) {
          if (((*PTR_DAT_04bbfcc0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbfcc0), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bbfcb8 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbfcc0);
          }
          uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbfcb8);
          if ((uVar6 & 1) == 0) {
            local_46 = '\0';
          }
        }
        puVar3 = PTR_DAT_04bbfcc0;
        puVar2 = PTR_DAT_04bbfcb8;
        if (((local_50 == (long *)0x0) || (local_48 == '\0')) ||
           ((local_46 == '\0' ||
            (1 < *(int *)((long)local_50 + ((ulong)~*(uint *)(local_50 + 0x6d) & 1) * 0x20 + 900) -
                 1U)))) {
          if (*(int *)(param_1 + 0x394) < 5) {
            return 0;
          }
          lVar7 = 4;
          puVar1 = PTR_DAT_04bb2e50 + 0x10;
          while( true ) {
            local_54 = *(undefined4 *)(param_1 + 0x230);
            FUN_0071cb58(&local_50,param_1 + 0x274,&local_54,0);
            plVar4 = local_50;
            if (local_50 != (long *)0x0) {
              if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
                *(undefined **)puVar2 = puVar1;
                __cxa_guard_release(puVar3);
              }
              uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar2);
              if ((uVar6 & 1) == 0) {
                local_46 = '\0';
              }
            }
            if ((((local_50 != (long *)0x0) && (local_48 != '\0')) && (local_46 != '\0')) &&
               (*(int *)((long)local_50 + ((ulong)~*(uint *)(local_50 + 0x6d) & 1) * 0x20 + 900) -
                1U < 2)) break;
            lVar7 = lVar7 + 1;
            if (*(int *)(param_1 + 0x394) <= lVar7) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

