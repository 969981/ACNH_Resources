
/* WARNING: Removing unreachable block (ram,0x015491e4) */
/* WARNING: Removing unreachable block (ram,0x01549194) */
/* WARNING: Removing unreachable block (ram,0x01549144) */
/* WARNING: Removing unreachable block (ram,0x015490f4) */
/* WARNING: Removing unreachable block (ram,0x015490a4) */
/* WARNING: Removing unreachable block (ram,0x01549054) */
/* WARNING: Removing unreachable block (ram,0x01549004) */
/* WARNING: Removing unreachable block (ram,0x01548fb4) */
/* WARNING: Removing unreachable block (ram,0x01548fc8) */
/* WARNING: Removing unreachable block (ram,0x01549018) */
/* WARNING: Removing unreachable block (ram,0x01549068) */
/* WARNING: Removing unreachable block (ram,0x015490b8) */
/* WARNING: Removing unreachable block (ram,0x01549108) */
/* WARNING: Removing unreachable block (ram,0x01549158) */
/* WARNING: Removing unreachable block (ram,0x015491a8) */
/* WARNING: Removing unreachable block (ram,0x015491f8) */

void FUN_01548f90(long param_1)

{
  ulong uVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 8) + 0xb0);
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)*plVar2)(plVar2);
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + 0xb0);
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)*plVar2)(plVar2);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0xb0);
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)*plVar2)(plVar2);
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x20) + 0xb0);
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)*plVar2)(plVar2);
    }
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x28) + 0xb0);
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)*plVar2)(plVar2);
    }
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x30) + 0xb0);
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)*plVar2)(plVar2);
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x38) + 0xb0);
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 1) != 0) {
      (**(code **)*plVar2)(plVar2);
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x40) + 0xb0);
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0154922c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*plVar2)(plVar2);
      return;
    }
  }
  return;
}

