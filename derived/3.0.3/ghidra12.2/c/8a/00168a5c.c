
void FUN_00168a5c(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar1 = *param_2;
  lVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar3;
  *param_1 = lVar1;
  param_1[3] = *(long *)(*param_2 + 0x10);
  param_1[5] = *(long *)(*param_2 + 0x18);
  param_1[4] = *(long *)(param_2[1] + 0x10);
  param_1[6] = *(long *)(param_2[1] + 0x18);
  uVar2 = *(undefined1 *)((long)param_2 + 0x14);
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 7) = uVar2;
  FUN_0016b17c(*param_1);
  FUN_0016b17c(param_1[1]);
  return;
}

