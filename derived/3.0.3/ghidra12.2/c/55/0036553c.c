
void FUN_0036553c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 != param_1) {
    plVar1 = (long *)param_2[1];
    lVar2 = *plVar1;
    *(long **)(*param_2 + 8) = plVar1;
    *plVar1 = *param_2;
    *(long **)(lVar2 + 8) = param_2;
    *param_2 = lVar2;
    FUN_003652c8(param_2);
    FUN_00367b50(param_2);
    return;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  FUN_003652c8(param_2);
  FUN_00367b50(param_2);
  return;
}

