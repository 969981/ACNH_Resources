
void FUN_00727da0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if ((plVar1 == (long *)0x0) || (lVar3 = plVar1[5], lVar3 == 0)) {
    return;
  }
  if (lVar3 == param_1) {
    lVar2 = 0;
    plVar1[5] = *(long *)(param_1 + 0x10);
  }
  else {
    do {
      lVar2 = lVar3;
      lVar3 = *(long *)(lVar2 + 0x10);
    } while (*(long *)(lVar2 + 0x10) != param_1);
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00727df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x148))(plVar1,param_1,lVar2);
  return;
}

