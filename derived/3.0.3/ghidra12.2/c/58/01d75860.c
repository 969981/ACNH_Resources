
void FUN_01d75860(long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04bb3350;
  if (param_2 == 0) {
    lVar4 = 1;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar4 = *(long *)(lVar3 + 0xa8);
    *(long *)(lVar3 + 0xa8) = param_2;
  }
  FUN_01d73fa0(0);
  plVar1 = (long *)(*(int *)((long)param_1 + 0x14) + DAT_05370a08);
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)param_1;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  FUN_01d7462c(0);
  plVar1 = (long *)(*(int *)((long)param_1 + 0x14) + DAT_05370a68);
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)param_1;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  FUN_01d72444(0);
  plVar1 = (long *)(*(int *)((long)param_1 + 0x14) + DAT_05370938);
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)param_1;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  FUN_008a2ab8(0);
  plVar1 = (long *)(*(int *)((long)param_1 + 0x14) + DAT_04ceac30);
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)param_1;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  FUN_01d75c4c(0);
  plVar1 = (long *)(*(int *)((long)param_1 + 0x14) + DAT_05370b20);
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)param_1;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  FUN_014b26a4(0);
  plVar1 = (long *)(*(int *)((long)param_1 + 0x14) + DAT_051e7870);
  lVar3 = *param_1;
  *param_1 = (long)plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)param_1;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  if (lVar4 != 1) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar3 + 0xa8) = lVar4;
  }
  return;
}

