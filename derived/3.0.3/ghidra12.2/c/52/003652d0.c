
void FUN_003652d0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  while (plVar3 != param_1) {
    if (((char)plVar3[0x13] != '\0') && (plVar1 = (long *)plVar3[0x12], plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      plVar1 = (long *)plVar3[0x12];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
        FUN_00367b50(plVar1);
      }
      plVar3[0x12] = 0;
    }
    plVar1 = (long *)plVar3[1];
    lVar2 = *plVar1;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    FUN_003652c8(plVar3);
    FUN_00367b50(plVar3);
    plVar3 = (long *)param_1[1];
  }
  return;
}

