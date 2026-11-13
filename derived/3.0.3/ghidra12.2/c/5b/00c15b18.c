
void FUN_00c15b18(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = (long)&PTR_LAB_04933b28;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = (long)&PTR_LAB_049402d8;
  param_1[0x17] = (long)param_1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = (long)param_1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = (long)param_1;
  param_1[0x22] = (long)&PTR_LAB_04933b28;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = (long)param_1;
  param_1[0x27] = (long)&PTR_LAB_04933b28;
  *(int *)(param_1 + 2) = (int)lVar1;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x19] = (long)&PTR_LAB_048f9770;
  param_1[0x1a] = (long)"UseTailorTicket";
  param_1[0x23] = (long)&PTR_LAB_048f9770;
  param_1[0x24] = (long)"Flag1";
  param_1[6] = (long)(param_1 + 0x18);
  param_1[5] = (long)(param_1 + 6);
  param_1[0x1e] = (long)&PTR_LAB_048f9770;
  param_1[0x1f] = (long)&DAT_040d9b5b;
  param_1[0x1d] = (long)&PTR_LAB_04933b28;
  param_1[7] = (long)(param_1 + 0x1d);
  param_1[8] = (long)(param_1 + 0x22);
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  lVar1 = param_1[0x17];
  param_1[0x2b] = lVar1;
  param_1[0x28] = (long)&PTR_LAB_048f9770;
  param_1[0x29] = (long)&DAT_0409b63b;
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x27;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    lVar1 = param_1[0x17];
  }
  param_1[0x2c] = (long)&PTR_LAB_04933b28;
  param_1[0x2d] = (long)&PTR_LAB_048f9770;
  param_1[0x2e] = (long)"Flag3";
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = lVar1;
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x2c;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  }
  return;
}

