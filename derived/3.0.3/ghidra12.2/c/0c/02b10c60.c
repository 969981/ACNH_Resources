
bool FUN_02b10c60(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x44) = 0;
  lVar2 = DAT_05635578;
  if (DAT_05635578 != 0) {
    FUN_02b40610(DAT_05635578 + 0x2680);
    FUN_02b0fa90(param_1,*(undefined4 *)(param_2 + 8),1);
    FUN_02b10d10(param_1,*(undefined4 *)(param_2 + 8));
    FUN_02b11050(param_1);
    FUN_02b109a0(param_1);
    plVar1 = (long *)(param_1 + 8) + *(uint *)(param_1 + 0x40);
    if (6 < *(uint *)(param_1 + 0x40)) {
      plVar1 = (long *)(param_1 + 8);
    }
    if ((long *)*plVar1 != (long *)0x0) {
      (**(code **)(*(long *)*plVar1 + 0x48))();
    }
  }
  return lVar2 != 0;
}

