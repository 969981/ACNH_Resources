
void FUN_032d4940(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_40;
  undefined1 local_3c;
  long *local_38;
  
  lVar5 = FUN_0037e610(param_1,&DAT_040f1152);
  puVar3 = PTR_DAT_04bc8f50;
  if (lVar5 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
  if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f58), puVar2 = PTR_DAT_04bc8f30, iVar4 != 0)) {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar4 != 0)) {
      *(undefined8 *)puVar2 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)puVar3 = puVar2;
    __cxa_guard_release(PTR_DAT_04bc8f58);
  }
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
  if (puVar6 != (undefined8 *)puVar3) {
    do {
      puVar6 = (undefined8 *)*puVar6;
    } while (puVar6 != (undefined8 *)puVar3 && puVar6 != (undefined8 *)0x0);
    if (puVar6 == (undefined8 *)0x0) {
      local_38 = (long *)0x0;
      local_3c = true;
      goto LAB_032d49f0;
    }
  }
  lVar5 = FUN_0037e610(param_1,&DAT_0405ea87);
  if (lVar5 == 0) {
    local_3c = false;
  }
  else {
    local_3c = *(int *)(lVar5 + (ulong)*(uint *)(lVar5 + 4)) != 0;
  }
  local_38 = param_1;
LAB_032d49f0:
  local_40 = uVar1;
  FUN_032d4aa0(&local_40,param_1,1,&DAT_04088f34);
  FUN_032d4aa0(&local_40,param_1,0,&DAT_040f1157);
  return;
}

