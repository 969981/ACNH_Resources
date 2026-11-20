
void FUN_03d7ede8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_50;
  char *pcStack_48;
  
  plVar1 = param_1 + 1;
  plVar2 = param_1 + 4;
  param_1[2] = (long)plVar1;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_04bd3910 + 0x10);
  param_1[1] = (long)plVar1;
  FUN_03d7ef1c(plVar2);
  plVar3 = param_1 + 10;
  FUN_03d7ef1c(plVar3);
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "Valid";
  local_50 = puVar4;
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,&local_50,0,plVar2);
  plVar5 = (long *)(*(int *)((long)param_1 + 0x1c) + lVar6);
  lVar6 = param_1[1];
  param_1[1] = (long)plVar5;
  *plVar5 = lVar6;
  plVar5[1] = (long)plVar1;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar5;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  pcStack_48 = "State";
  local_50 = puVar4;
  lVar6 = (**(code **)(*param_1 + 0x50))(param_1,&local_50,0,plVar3);
  plVar5 = (long *)(*(int *)((long)param_1 + 0x1c) + lVar6);
  lVar6 = param_1[1];
  param_1[1] = (long)plVar5;
  *plVar5 = lVar6;
  plVar5[1] = (long)plVar1;
  if (lVar6 != 0) {
    *(long **)(lVar6 + 8) = plVar5;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  local_50._0_4_ = 1;
  FUN_03d7f560(plVar2,&local_50);
  local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
  FUN_03d7f560(plVar3,&local_50);
  return;
}

