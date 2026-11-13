
void FUN_00cf1ed4(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[0x18] = (long)&PTR_LAB_04933bc8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *param_1 = (long)&PTR_LAB_049498c0;
  param_1[0x17] = (long)param_1;
  param_1[0x19] = (long)&PTR_LAB_048f9770;
  param_1[0x1a] = (long)&DAT_040fe5ab;
  *(int *)(param_1 + 2) = (int)lVar1;
  param_1[0x1e] = (long)&PTR_LAB_048f9770;
  param_1[0x1f] = (long)"FadeOutKindString";
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = (long)param_1;
  param_1[0x20] = (long)&PTR_LAB_048f9770;
  param_1[0x21] = (long)&DAT_0407ebb1;
  param_1[6] = (long)(param_1 + 0x18);
  param_1[0x26] = (long)&PTR_LAB_048f9770;
  param_1[0x27] = (long)&DAT_0407ebb1;
  param_1[0x2c] = (long)&PTR_LAB_048f9770;
  param_1[0x2d] = (long)&DAT_0407ebb1;
  param_1[5] = (long)(param_1 + 6);
  *(undefined4 *)(param_1 + 4) = 2;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  param_1[0x24] = (long)&PTR_LAB_048f9770;
  param_1[0x25] = (long)"FadeInKindString";
  param_1[0x1d] = (long)&PTR_LAB_04933af8;
  param_1[0x22] = (long)param_1;
  param_1[0x23] = (long)&PTR_LAB_04933af8;
  param_1[0x28] = (long)param_1;
  param_1[0x29] = (long)&PTR_LAB_04933af8;
  param_1[7] = (long)(param_1 + 0x1d);
  param_1[8] = (long)(param_1 + 0x23);
  *(undefined4 *)(param_1 + 4) = 3;
  lVar1 = param_1[0x17];
  param_1[0x2e] = lVar1;
  param_1[0x2a] = (long)&PTR_LAB_048f9770;
  param_1[0x2b] = (long)"FadeColorString";
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x29;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    lVar1 = param_1[0x17];
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = lVar1;
  param_1[0x2f] = (long)&PTR_LAB_04933d60;
  param_1[0x30] = (long)&PTR_LAB_048f9770;
  param_1[0x31] = (long)"FadeOutSpeed";
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x2f;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
    lVar1 = param_1[0x17];
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = lVar1;
  param_1[0x34] = (long)&PTR_LAB_04933d60;
  param_1[0x35] = (long)&PTR_LAB_048f9770;
  param_1[0x36] = (long)"FadeInSpeed";
  if (*(int *)(lVar1 + 0x20) < *(int *)(lVar1 + 0x24)) {
    *(long **)(*(long *)(lVar1 + 0x28) + (long)*(int *)(lVar1 + 0x20) * 8) = param_1 + 0x34;
    *(int *)(lVar1 + 0x20) = *(int *)(lVar1 + 0x20) + 1;
  }
  return;
}

