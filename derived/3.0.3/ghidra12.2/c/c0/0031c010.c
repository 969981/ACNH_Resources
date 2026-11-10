
void FUN_0031c010(long *param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar4 = *(long *)(lVar1 + 0x480);
  lVar3 = *(long *)(lVar1 + 0x470);
  lVar2 = *(long *)(lVar1 + 0x478);
  if ((*(long *)(*(long *)(lVar1 + 0x240) + 0x290) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(**(long **)(lVar1 + 0x4d0) + 0x28) + 0x30),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  if ((lVar4 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  if ((lVar3 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1);
  }
  if ((lVar2 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x30), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0031c0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

