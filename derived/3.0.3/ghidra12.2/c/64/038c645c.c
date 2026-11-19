
void FUN_038c645c(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  uVar2 = param_1[6];
  plVar3 = (long *)param_1[8];
  (**(code **)*param_1)();
  if ((plVar3 == (long *)0x0) || (uVar1 = (**(code **)(*plVar3 + 0x98))(plVar3), (uVar1 & 1) == 0))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038c64ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,uVar2);
  return;
}

