
void FUN_002c17a4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_1 + 0x228);
  if (pcVar5 != (code *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x58);
    uVar2 = FUN_002b43ec(param_2);
    uVar3 = (*pcVar5)(uVar1,uVar2);
    if ((uVar3 & 1) == 0) {
      return;
    }
  }
  if ((*(char *)(param_1 + 0x188) == '\0') &&
     (plVar4 = *(long **)(param_1 + 0x90), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x002c1804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
    return;
  }
  return;
}

