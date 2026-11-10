
void FUN_0036ae20(long *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = param_2;
  iVar2 = *(int *)PTR_DAT_04bd0818;
  *(int *)((long)param_1 + 0xc) = iVar2;
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar4 = lVar4 + 1;
      puVar1 = (undefined8 *)(*param_1 + lVar3);
      lVar3 = lVar3 + 0x30;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[4] = puVar1 + 4;
      puVar1[5] = puVar1 + 4;
      iVar2 = *(int *)((long)param_1 + 0xc);
    } while (lVar4 < iVar2);
  }
  param_2 = param_2 + (long)iVar2 * 0x30;
  param_1[2] = param_2;
  iVar2 = DAT_04c111e4;
  *(int *)((long)param_1 + 0x1c) = DAT_04c111e4;
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      lVar4 = lVar4 + 1;
      puVar1 = (undefined8 *)(param_1[2] + lVar3);
      lVar3 = lVar3 + 0x18;
      puVar1[2] = puVar1 + 1;
      *puVar1 = 0;
      puVar1[1] = puVar1 + 1;
      iVar2 = *(int *)((long)param_1 + 0x1c);
    } while (lVar4 < iVar2);
  }
  param_1[4] = param_2 + (long)iVar2 * 0x18;
  iVar2 = DAT_04c111e8;
  *(int *)((long)param_1 + 0x2c) = DAT_04c111e8;
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_0036afbc(param_1[4] + lVar3);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x68;
    } while (lVar4 < *(int *)((long)param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}

