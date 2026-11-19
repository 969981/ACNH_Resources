
void FUN_03c5db70(long *param_1)

{
  long lVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x50))();
  if ((long *)param_1[8] != param_1 + 7) {
    lVar2 = (long)*(int *)((long)param_1 + 0x4c);
    lVar1 = param_1[8] - lVar2;
    do {
      FUN_03c5db70(lVar1);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (long)(param_1 + 7) - lVar2);
  }
  return;
}

