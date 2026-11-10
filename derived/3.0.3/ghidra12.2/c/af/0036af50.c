
void FUN_0036af50(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)((long)param_1 + 0x1c)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_0036afe8(param_1[4] + lVar1);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x68;
    } while (lVar2 < *(int *)((long)param_1 + 0x1c));
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  return;
}

