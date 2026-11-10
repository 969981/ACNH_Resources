
void FUN_00385a70(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[1];
  while (plVar3 != param_1) {
    FUN_00386420(plVar3 + 3,param_2,(char)plVar3[0xb] == '\0');
    plVar1 = (long *)plVar3[1];
    lVar2 = *plVar1;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    FUN_00385a5c(plVar3);
    FUN_00367b50(plVar3);
    plVar3 = (long *)param_1[1];
  }
  return;
}

