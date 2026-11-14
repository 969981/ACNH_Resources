
void FUN_01570d90(undefined8 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_049a9658;
  param_1[0x11f6] = 0;
  piVar2 = (int *)(param_1 + 0xff9);
  piVar3 = (int *)(param_1 + 0xe90);
  piVar4 = (int *)(param_1 + 0xc49);
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  param_1[0x11f0] = 0;
  param_1[0x11f1] = puVar1;
  param_1[0x11ea] = 0;
  param_1[0x11eb] = puVar1;
  param_1[0x11d9] = puVar1;
  param_1[0x11e4] = 0;
  param_1[0x11e5] = puVar1;
  param_1[0x11de] = 0;
  param_1[0x11df] = puVar1;
  param_1[0xff2] = &PTR_LAB_049aafa8;
  if (0 < *piVar2) {
    lVar6 = 0;
    do {
      puVar5 = *(undefined8 **)(param_1[0xffa] + lVar6 * 8);
      (**(code **)*puVar5)(puVar5);
      lVar6 = lVar6 + 1;
      *puVar5 = param_1[0xffb];
      param_1[0xffb] = puVar5;
    } while (lVar6 < *piVar2);
  }
  *piVar2 = 0;
  param_1[0xe89] = &PTR_LAB_049aa840;
  if (0 < *piVar3) {
    lVar6 = 0;
    do {
      puVar5 = *(undefined8 **)(param_1[0xe91] + lVar6 * 8);
      (**(code **)*puVar5)(puVar5);
      lVar6 = lVar6 + 1;
      *puVar5 = param_1[0xe92];
      param_1[0xe92] = puVar5;
    } while (lVar6 < *piVar3);
  }
  *piVar3 = 0;
  param_1[0xc42] = &PTR_LAB_049aa240;
  if (0 < *piVar4) {
    lVar6 = 0;
    do {
      puVar5 = *(undefined8 **)(param_1[0xc4a] + lVar6 * 8);
      (**(code **)*puVar5)(puVar5);
      lVar6 = lVar6 + 1;
      *puVar5 = param_1[0xc4b];
      param_1[0xc4b] = puVar5;
    } while (lVar6 < *piVar4);
  }
  *piVar4 = 0;
  param_1[0x6b8] = &PTR_LAB_049a9dc0;
  if (0 < *(int *)(param_1 + 0x6bf)) {
    lVar6 = 0;
    do {
      puVar5 = *(undefined8 **)(param_1[0x6c0] + lVar6 * 8);
      (**(code **)*puVar5)(puVar5);
      lVar6 = lVar6 + 1;
      *puVar5 = param_1[0x6c1];
      param_1[0x6c1] = puVar5;
    } while (lVar6 < *(int *)(param_1 + 0x6bf));
  }
  *(undefined4 *)(param_1 + 0x6bf) = 0;
  param_1[0x2b] = &PTR_LAB_049a9940;
  if (0 < *(int *)(param_1 + 0x32)) {
    lVar6 = 0;
    do {
      puVar5 = *(undefined8 **)(param_1[0x33] + lVar6 * 8);
      (**(code **)*puVar5)(puVar5);
      lVar6 = lVar6 + 1;
      *puVar5 = param_1[0x34];
      param_1[0x34] = puVar5;
    } while (lVar6 < *(int *)(param_1 + 0x32));
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  return;
}

