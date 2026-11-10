
void FUN_00227930(undefined8 *param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_30 [4];
  undefined4 local_20;
  ErrorResultVariant aEStack_1c [12];
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &DAT_048406c0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 1;
  uVar2 = (ulong)*param_2;
  if (*param_2 != 0) {
    uVar2 = 0;
    do {
      lVar1 = uVar2 + 1;
      uVar2 = uVar2 + 1;
    } while (param_2[lVar1] != 0);
  }
  *(int *)((long)param_1 + 0x14) = (int)uVar2;
  local_20 = 0;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_1c,(Result *)local_30);
  FUN_002296c4(local_30,&local_20);
  return;
}

