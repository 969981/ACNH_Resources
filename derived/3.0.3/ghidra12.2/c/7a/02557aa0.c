
undefined4 FUN_02557aa0(byte *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  long *plVar7;
  long *local_38;
  char local_30;
  char local_2f;
  char local_2e;
  int local_28;
  undefined4 local_24;
  
  piVar6 = (int *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      piVar6 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_28 = *piVar6;
  uVar5 = 0;
  if (local_28 != 0) {
    local_24 = param_3;
    FUN_0071c8d0(&local_38,&local_28,&local_24,0);
    plVar7 = local_38;
    if (local_38 != (long *)0x0) {
      if (((*PTR_DAT_04bb3778 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3778);
      }
      uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3770);
      if ((uVar3 & 1) == 0) {
        local_2f = '\0';
      }
    }
    uVar5 = 0;
    if ((((local_38 != (long *)0x0) && (local_30 != '\0')) && (local_2f != '\0')) &&
       (local_2e != '\0')) {
      uVar4 = 0;
      if (local_38[0xe] != 0) {
        uVar1 = *(uint *)(local_38[0xe] + 0x280);
        uVar4 = 0;
        if (uVar1 < 0x149) {
          uVar4 = uVar1;
        }
      }
      if (uVar4 == 0x18) {
        uVar5 = 0;
      }
      else {
        FUN_024480f0(local_38,param_2);
        if ((*(uint *)(local_38 + 0x302) & 0xfffffff7) == 1) {
          plVar7 = (long *)local_38[0xd];
          FUN_016e026c(0,plVar7 + 0x4f,0,0);
          (**(code **)(*plVar7 + 0x110))(plVar7);
        }
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

