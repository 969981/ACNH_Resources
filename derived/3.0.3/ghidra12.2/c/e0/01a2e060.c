
void FUN_01a2e060(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *local_60;
  char local_58;
  char local_57;
  undefined4 local_34;
  
  if ((*(int *)(param_1 + 0x174) == 3) && (0 < *(int *)(param_1 + 0x394))) {
    local_34 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_60,param_1 + 0x274,&local_34,0);
    plVar4 = local_60;
    if (local_60 != (long *)0x0) {
      if (((*PTR_DAT_04bbfcc0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbfcc0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bbfcb8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbfcc0);
      }
      uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbfcb8);
      if ((uVar6 & 1) == 0) {
        local_57 = '\0';
      }
    }
    if (((local_60 != (long *)0x0) && (local_58 != '\0')) && (local_57 != '\0')) {
      FUN_01a384d0(local_60,param_2);
    }
    if (1 < *(int *)(param_1 + 0x394)) {
      local_34 = *(undefined4 *)(param_1 + 0x230);
      FUN_0071c8d0(&local_60,param_1 + 0x278,&local_34,0);
      plVar4 = local_60;
      if (local_60 != (long *)0x0) {
        if (((*PTR_DAT_04bbfcc0 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbfcc0), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bbfcb8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbfcc0);
        }
        uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbfcb8);
        if ((uVar6 & 1) == 0) {
          local_57 = '\0';
        }
      }
      if (((local_60 != (long *)0x0) && (local_58 != '\0')) && (local_57 != '\0')) {
        FUN_01a384d0(local_60,param_2);
      }
      if (2 < *(int *)(param_1 + 0x394)) {
        local_34 = *(undefined4 *)(param_1 + 0x230);
        FUN_0071c8d0(&local_60,param_1 + 0x27c,&local_34,0);
        plVar4 = local_60;
        if (local_60 != (long *)0x0) {
          if (((*PTR_DAT_04bbfcc0 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbfcc0), iVar5 != 0)) {
            *(undefined **)PTR_DAT_04bbfcb8 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbfcc0);
          }
          uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbfcb8);
          if ((uVar6 & 1) == 0) {
            local_57 = '\0';
          }
        }
        if (((local_60 != (long *)0x0) && (local_58 != '\0')) && (local_57 != '\0')) {
          FUN_01a384d0(local_60,param_2);
        }
        if (3 < *(int *)(param_1 + 0x394)) {
          local_34 = *(undefined4 *)(param_1 + 0x230);
          FUN_0071c8d0(&local_60,param_1 + 0x280,&local_34,0);
          plVar4 = local_60;
          if (local_60 != (long *)0x0) {
            if (((*PTR_DAT_04bbfcc0 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbfcc0), iVar5 != 0)) {
              *(undefined **)PTR_DAT_04bbfcb8 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bbfcc0);
            }
            uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,PTR_DAT_04bbfcb8);
            if ((uVar6 & 1) == 0) {
              local_57 = '\0';
            }
          }
          if (((local_60 != (long *)0x0) && (local_58 != '\0')) && (local_57 != '\0')) {
            FUN_01a384d0(local_60,param_2);
          }
          puVar3 = PTR_DAT_04bbfcc0;
          puVar2 = PTR_DAT_04bbfcb8;
          if (4 < *(int *)(param_1 + 0x394)) {
            lVar7 = 4;
            puVar1 = PTR_DAT_04bb2e50 + 0x10;
            do {
              local_34 = *(undefined4 *)(param_1 + 0x230);
              FUN_0071c8d0(&local_60,param_1 + 0x274,&local_34,0);
              plVar4 = local_60;
              if (local_60 != (long *)0x0) {
                if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
                  *(undefined **)puVar2 = puVar1;
                  __cxa_guard_release(puVar3);
                }
                uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar2);
                if ((uVar6 & 1) == 0) {
                  local_57 = '\0';
                }
              }
              if (((local_60 != (long *)0x0) && (local_58 != '\0')) && (local_57 != '\0')) {
                FUN_01a384d0(local_60,param_2);
              }
              lVar7 = lVar7 + 1;
            } while (lVar7 < *(int *)(param_1 + 0x394));
          }
        }
      }
    }
  }
  return;
}

