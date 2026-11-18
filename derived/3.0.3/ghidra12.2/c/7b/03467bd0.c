
void FUN_03467bd0(undefined8 *param_1)

{
  ulong uVar1;
  int iVar2;
  
  if (((long *)param_1[4] != (long *)0x0) &&
     (uVar1 = (**(code **)(*(long *)param_1[4] + 0x10))(), (uVar1 & 1) != 0)) {
    iVar2 = *(int *)((long)param_1 + 0x94);
    if (iVar2 == 2) {
      uVar1 = (**(code **)*param_1)(param_1);
      if (((uVar1 & 1) == 0) ||
         (uVar1 = (**(code **)(*(long *)param_1[4] + 0x20))(), (uVar1 & 1) != 0)) {
        (**(code **)param_1[0xe])(param_1 + 0xe);
        *(undefined4 *)((long)param_1 + 0x94) = 3;
      }
    }
    else if (iVar2 == 1) {
      iVar2 = *(int *)(param_1 + 0x12);
      if (iVar2 < 1) {
        uVar1 = (**(code **)*param_1)(param_1);
        if ((uVar1 & 1) != 0) {
          (**(code **)(*(long *)param_1[4] + 8))();
        }
        *(undefined4 *)((long)param_1 + 0x94) = 2;
        iVar2 = *(int *)(param_1 + 0x12);
      }
      *(int *)(param_1 + 0x12) = iVar2 + -1;
    }
    else if (((iVar2 == 0) && (uVar1 = (**(code **)*param_1)(param_1), (uVar1 & 1) != 0)) &&
            (uVar1 = (**(code **)(*(long *)param_1[4] + 0x18))(), (uVar1 & 1) != 0)) {
      *(undefined4 *)((long)param_1 + 0x94) = 1;
                    /* WARNING: Could not recover jumptable at 0x03467c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)param_1[10])(param_1 + 10);
      return;
    }
  }
  return;
}

