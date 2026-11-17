
void FUN_02df9f50(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)((long)param_1 + 0x22c) != 1) {
    DAT_05690d38 = 0;
  }
  puVar1 = PTR_DAT_04bb2df8 + 0x10;
  param_1[0x444] = (long)puVar1;
  param_1[0x417] = (long)puVar1;
  param_1[0x3ea] = (long)puVar1;
  param_1[0x3bd] = (long)puVar1;
  if (0 < (int)param_1[0x335]) {
    lVar3 = 0;
    do {
      iVar2 = 0;
      if ((int)param_1[0x334] <= (int)lVar3 + *(int *)((long)param_1 + 0x19a4)) {
        iVar2 = (int)param_1[0x334];
      }
      lVar4 = lVar3 - iVar2;
      lVar3 = lVar3 + 1;
      *(undefined **)(param_1[0x333] + (lVar4 + *(int *)((long)param_1 + 0x19a4)) * 0x168) = puVar1;
    } while ((int)lVar3 < (int)param_1[0x335]);
  }
  if (0 < (int)param_1[0x252]) {
    lVar3 = 0;
    do {
      iVar2 = 0;
      if ((int)param_1[0x251] <= (int)lVar3 + *(int *)((long)param_1 + 0x128c)) {
        iVar2 = (int)param_1[0x251];
      }
      (*(code *)**(undefined8 **)
                  (param_1[0x250] +
                  ((lVar3 - iVar2) + (long)*(int *)((long)param_1 + 0x128c)) * 0xe0))();
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < (int)param_1[0x252]);
  }
  puVar1 = PTR_DAT_04bc5668;
  param_1[0x4c] = (long)(PTR_DAT_04bc0a68 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

