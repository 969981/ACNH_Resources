
void FUN_0047f5b0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  
  FUN_0046fbf0();
  param_1[3] = param_2;
  param_1[4] = param_3;
  *param_1 = &PTR_LAB_04865838;
  *(int *)(param_1 + 5) = (int)param_2[1];
  param_1[6] = param_5;
  *(undefined4 *)(param_1 + 7) = param_4;
  iVar2 = (int)param_2[1];
  if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar2) {
    lVar1 = FUN_00426720(param_3,iVar2 + 1,1,*param_2);
    *param_2 = lVar1;
    param_2 = (long *)param_1[3];
    iVar2 = (int)param_2[1];
  }
  *(undefined1 *)(*param_2 + (long)iVar2) = 0;
  return;
}

