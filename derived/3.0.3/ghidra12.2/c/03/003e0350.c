
void FUN_003e0350(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[0x47];
  if (((plVar1 == (long *)0x0) ||
      (lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2), lVar2 == 0)) &&
     (lVar2 = FUN_003d21dc(param_1 + 3,param_2), lVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x003e03b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    return;
  }
  return;
}

