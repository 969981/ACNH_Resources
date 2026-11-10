
void FUN_00367680(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[1];
  while (plVar3 = plVar1, plVar3 != param_1) {
    plVar1 = (long *)plVar3[1];
    lVar2 = *plVar1;
    *(long **)(*plVar3 + 8) = plVar1;
    *plVar1 = *plVar3;
    *(long **)(lVar2 + 8) = plVar3;
    *plVar3 = lVar2;
    if ((char)plVar3[5] == '\0') {
      plVar3 = plVar3 + -1;
      (**(code **)*plVar3)(plVar3);
      FUN_00367b50(plVar3);
    }
  }
  return;
}

