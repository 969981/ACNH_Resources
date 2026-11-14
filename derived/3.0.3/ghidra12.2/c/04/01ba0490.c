
void FUN_01ba0490(undefined4 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0x12] = 0xffffffff;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  memset(param_1 + 0x13,0,0x1000);
  if (0 < (int)param_1[0x418]) {
    lVar4 = 0;
    do {
      iVar2 = 0;
      if ((int)param_1[0x416] <= (int)lVar4 + param_1[0x417]) {
        iVar2 = param_1[0x416];
      }
      (*(code *)**(undefined8 **)
                  (*(long *)(param_1 + 0x414) + ((lVar4 - iVar2) + (long)(int)param_1[0x417]) * 0xe0
                  ))();
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_1[0x418]);
  }
  *(undefined8 *)(param_1 + 0x417) = 0;
  if (0 < (int)param_1[0x5de]) {
    lVar4 = 0;
    puVar1 = PTR_DAT_04bb2df8 + 0x10;
    do {
      iVar2 = 0;
      if ((int)param_1[0x5dc] <= (int)lVar4 + param_1[0x5dd]) {
        iVar2 = param_1[0x5dc];
      }
      lVar3 = lVar4 - iVar2;
      lVar4 = lVar4 + 1;
      *(undefined **)(*(long *)(param_1 + 0x5da) + (lVar3 + (int)param_1[0x5dd]) * 0x168) = puVar1;
    } while ((int)lVar4 < (int)param_1[0x5de]);
  }
  *(undefined8 *)(param_1 + 0x5dd) = 0;
  if (*(char *)(param_1 + 0xf) == '\0') {
    return;
  }
  FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 0xe);
  return;
}

