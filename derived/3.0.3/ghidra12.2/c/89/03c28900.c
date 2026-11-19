
void FUN_03c28900(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  (**(code **)(*param_2 + 0x40))(param_2);
  plVar1 = (long *)(param_1 + 0x28);
  lVar3 = *plVar1;
  if (*plVar1 != 0) {
    do {
      lVar2 = lVar3;
      lVar3 = *(long *)(lVar2 + 0x10);
    } while (lVar3 != 0);
    plVar1 = (long *)(lVar2 + 0x10);
  }
  *plVar1 = (long)param_2;
  param_2[3] = param_1;
  return;
}

