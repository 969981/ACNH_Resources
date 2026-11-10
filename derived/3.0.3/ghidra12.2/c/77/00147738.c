
void FUN_00147738(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long local_8;
  
  if (*(long *)(param_1 + 0x1c0) == 0) {
    return;
  }
  local_8 = 0;
  FUN_001484c0(param_1,&local_8);
  if (local_8 < 0) {
    if ((*(long *)(param_1 + 0x1d0) == 0) && (*(int *)(param_1 + 0x1d8) == 0)) {
      return;
    }
    lVar2 = -1;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0xb0);
    if ((*(long *)(lVar2 + 0x20) == *(long *)(param_1 + 0x1d0)) &&
       (*(int *)(lVar2 + 0x28) == *(int *)(param_1 + 0x1d8))) {
      return;
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(param_1 + 0x1d0) = *(long *)(lVar2 + 0x20);
    *(undefined8 *)(param_1 + 0x1d8) = uVar1;
    lVar2 = local_8;
  }
                    /* WARNING: Could not recover jumptable at 0x001477c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1c0))(param_1,lVar2,*(undefined8 *)(param_1 + 0x1c8));
  return;
}

