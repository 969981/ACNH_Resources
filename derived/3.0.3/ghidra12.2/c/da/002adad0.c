
void FUN_002adad0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bce0e8 + 0x10);
  if ((int)param_1[0xc9] != DAT_0411003c) {
    lVar2 = param_1[8];
    *(int *)(param_1 + 0xc9) = DAT_0411003c;
    if (lVar2 != 0) {
      FUN_00285e00(lVar2);
      FUN_00285dc0(lVar2);
      param_1[8] = 0;
    }
    lVar2 = param_1[4];
    *(undefined4 *)(param_1 + 9) = 0;
    if (lVar2 != 0) {
      FUN_00285e00(lVar2);
      FUN_00285dc0(lVar2);
      param_1[4] = 0;
    }
    *(undefined4 *)(param_1 + 5) = 0;
  }
  puVar1 = PTR_DAT_04bce100 + 0x10;
  lVar2 = 0x500;
  do {
    lVar3 = *(long *)((long)param_1 + lVar2 + 0x18);
    *(undefined **)((long)param_1 + lVar2 + 0x10) = puVar1;
    if (lVar3 != 0) {
      FUN_00285e00(lVar3);
      FUN_00285dc0(lVar3);
      *(undefined8 *)((long)param_1 + lVar2 + 0x18) = 0;
    }
    lVar3 = lVar2 + -0x28;
    *(undefined4 *)((long)param_1 + lVar2 + 0x20) = 0;
    lVar2 = lVar3;
  } while (lVar3 != 0);
  lVar2 = param_1[4];
  param_1[3] = (long)&PTR_LAB_04847a00;
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
    param_1[4] = 0;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}

