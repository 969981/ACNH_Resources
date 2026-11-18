
void FUN_032828c4(long param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (*(long *)(param_1 + 0x20) == param_1 + 0x188 && *(long *)(param_1 + 0x28) == 0) {
    uVar1 = 1;
    if (param_3 == 0) {
      uVar1 = 2;
    }
    if (*(long *)(param_1 + 0x4a0) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x500));
      }
    }
    if (*(long *)(param_1 + 0x4a8) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x502));
      }
    }
    if (*(long *)(param_1 + 0x4b0) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x504));
      }
    }
    if (*(long *)(param_1 + 0x4b8) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x506));
      }
    }
    if (*(long *)(param_1 + 0x4c0) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x508));
      }
    }
    if (*(long *)(param_1 + 0x4c8) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x50a));
      }
    }
    if (*(long *)(param_1 + 0x4d0) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x50c));
      }
    }
    if (*(long *)(param_1 + 0x4d8) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x50e));
      }
    }
    if (*(long *)(param_1 + 0x4e0) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x510));
      }
    }
    if (*(long *)(param_1 + 0x4e8) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x512));
      }
    }
    if (*(long *)(param_1 + 0x4f0) == param_2) {
      FUN_0328a0b0(param_2,5,0,0);
      plVar2 = *(long **)(param_1 + 0x778);
      if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03282ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x20))(plVar2,uVar1,*(undefined2 *)(param_1 + 0x514));
        return;
      }
    }
  }
  return;
}

