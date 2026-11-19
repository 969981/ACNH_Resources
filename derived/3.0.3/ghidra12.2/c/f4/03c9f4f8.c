
void FUN_03c9f4f8(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1[0x20] + 0x40) + 0x88))
                    (*(long **)(param_1[0x20] + 0x40),param_1);
  if ((uVar1 & 1) == 0) {
    if ((param_1[0x25] == 0) ||
       (plVar2 = *(long **)(param_1[0x25] + 0x40),
       uVar1 = (**(code **)(*plVar2 + 0x88))(plVar2,param_1), (uVar1 & 1) == 0)) {
      plVar2 = (long *)0x0;
      goto LAB_03c9f560;
    }
    plVar2 = param_1 + 0x25;
  }
  else {
    plVar2 = param_1 + 0x20;
  }
  plVar2 = *(long **)(*plVar2 + 0x40);
LAB_03c9f560:
  (**(code **)*param_1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x03c9f588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

