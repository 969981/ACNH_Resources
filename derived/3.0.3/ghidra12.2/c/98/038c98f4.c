
void FUN_038c98f4(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)param_1[8];
  uVar3 = param_1[6];
  (**(code **)*param_1)();
  if ((plVar2 == (long *)0x0) || (uVar1 = (**(code **)(*plVar2 + 0x98))(plVar2), (uVar1 & 1) == 0))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038c9944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,uVar3);
  return;
}

