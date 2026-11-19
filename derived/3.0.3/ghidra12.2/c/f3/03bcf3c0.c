
void FUN_03bcf3c0(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  
  if (param_2 != (undefined8 *)0x0) {
    if (*(long **)(param_1 + 0x108) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x108) + 0x10))();
    }
    piVar3 = (int *)(param_2 + 1);
    (**(code **)*param_2)(param_2,*(int *)(param_1 + 0xcc) == 2);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (*(long **)(param_1 + 0x108) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03bcf43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x108) + 0x18))();
      return;
    }
  }
  return;
}

