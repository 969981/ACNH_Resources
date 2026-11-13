
bool FUN_01257150(undefined4 param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  bool bVar4;
  long *local_40;
  char local_38;
  char local_37;
  
  *(undefined4 *)(param_2 + 0x28) = *param_4;
  *(undefined4 *)(param_2 + 0x2c) = param_4[1];
  *(undefined4 *)(param_2 + 0x30) = param_4[2];
  if (*(int *)(param_2 + 0x60) - 1U < 2) {
    FUN_0071c8d0(&local_40,param_2 + 8,param_3,0);
    plVar3 = local_40;
    if (local_40 != (long *)0x0) {
      if (((*PTR_DAT_04bbbb50 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbbb50), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bbbb48 = PTR_DAT_04bbbaf0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbbb50);
      }
      uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbbb48);
      if ((uVar2 & 1) == 0) {
        local_37 = '\0';
      }
    }
    bVar4 = (local_40 != (long *)0x0 && local_38 != '\0') && local_37 != '\0';
    if ((local_40 != (long *)0x0 && local_38 != '\0') && local_37 != '\0') {
      plVar3 = local_40 + 0x4f + (ulong)*(uint *)(param_2 + 0x58) * 0x24;
      if (999 < *(uint *)(param_2 + 0x58)) {
        plVar3 = local_40 + 0x4f;
      }
      if (*(int *)((long)plVar3 + 0xfc) != 4) {
        FUN_011c8c60(param_1,plVar3,param_4);
      }
    }
  }
  else {
    if (*(int *)(param_2 + 0x60) == 0) {
      FUN_0071c8d0(&local_40,param_2 + 8,param_3,0);
      plVar3 = local_40;
      if (local_40 != (long *)0x0) {
        if (((*PTR_DAT_04bbbae8 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbbae8), iVar1 != 0)) {
          *(undefined **)PTR_DAT_04bbbae0 = PTR_DAT_04bbbaf0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbbae8);
        }
        uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bbbae0);
        if ((uVar2 & 1) == 0) {
          local_37 = '\0';
        }
      }
      if (((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_37 != '\0')) {
        plVar3 = (long *)local_40[0xd];
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x100))(plVar3,param_4);
          (**(code **)(*plVar3 + 0x178))(param_1,plVar3);
        }
        return true;
      }
    }
    bVar4 = false;
  }
  return bVar4;
}

