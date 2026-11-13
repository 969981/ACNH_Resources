
void FUN_00e1eaa4(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  *(undefined2 *)((long)param_1 + 0xb4) = 1;
  param_1[0x19] = (long)&PTR_LAB_04933bc8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[6] = (long)(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  *param_1 = (long)&PTR_LAB_0495df78;
  param_1[5] = (long)(param_1 + 6);
  param_1[0x18] = (long)param_1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = (long)param_1;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = (long)param_1;
  param_1[0x23] = (long)&PTR_LAB_04933bc8;
  *(int *)(param_1 + 2) = (int)lVar1;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x27] = (long)param_1;
  param_1[0x28] = (long)&PTR_LAB_04933bc8;
  param_1[0x1a] = (long)&PTR_LAB_048f9770;
  param_1[0x1b] = (long)&DAT_040f4153;
  param_1[0x1e] = (long)&PTR_LAB_04933bc8;
  param_1[0x1f] = (long)&PTR_LAB_048f9770;
  param_1[0x20] = (long)"Category";
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  param_1[7] = (long)(param_1 + 0x1e);
  param_1[8] = (long)(param_1 + 0x23);
  *(undefined4 *)(param_1 + 4) = 3;
  lVar1 = param_1[0x18];
  param_1[0x2c] = lVar1;
  param_1[0x24] = (long)&PTR_LAB_048f9770;
  param_1[0x25] = (long)"UsageType";
  param_1[0x29] = (long)&PTR_LAB_048f9770;
  param_1[0x2a] = (long)"Author";
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x28;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    lVar1 = param_1[0x18];
  }
  param_1[0x2d] = (long)&PTR_LAB_04933bc8;
  param_1[0x2e] = (long)&PTR_LAB_048f9770;
  param_1[0x2f] = (long)"Holder";
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = lVar1;
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x2d;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  }
  return;
}

