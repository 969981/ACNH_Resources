
void FUN_007d386c(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x20);
  if ((((plVar2 == (long *)0x0) || (*plVar2 == 0)) || ((int)plVar2[1] != *(int *)(*plVar2 + 0x34)))
     || (lVar1 = FUN_00322a4c(plVar2), lVar1 == 0)) {
    return;
  }
  FUN_00322a4c(plVar2);
  return;
}

