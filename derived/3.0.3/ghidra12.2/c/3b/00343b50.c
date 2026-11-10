
void FUN_00343b50(long *param_1,void *param_2,int param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  *(int *)(param_1 + 1) = param_3;
  *param_1 = (long)param_2;
  param_1[2] = param_5;
  memset(param_2,0,(long)param_3 * 0x2a0);
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + 1;
      *(undefined8 *)(*param_1 + lVar2 + 0x28) = param_4;
      lVar1 = *param_1 + lVar2;
      lVar2 = lVar2 + 0x2a0;
      *(undefined1 *)(lVar1 + 0x1c) = 0;
    } while (lVar3 < (int)param_1[1]);
  }
  return;
}

